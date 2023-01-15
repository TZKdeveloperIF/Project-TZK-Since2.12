#include <fstream>
#include <stdio.h>
#include <string>
#include <vector>

#include <direct.h>
#include <io.h>

#include <algorithm>
#include <thread>

#include "Calc.h"

// 高度差取值范围 [-500, +800)，梯度10m, 数组长度130
// 距离取值范围 [10, 3000), 梯度10m, 数组长度300

// OFP脚本中，可预设合法的速度值和高度差并快速校验
// 给定速度和高度差后，需要知道距离是否可达。

std::string num2str(int x);
void testCase();
void dynamicShootCalc();
void genFileName(std::string& str, const int speed, const int h);
void proc(int speed);

int main()
{
	if (0 != _access("./elev", 0) && 0 != _mkdir("./elev"))
	{
		printf("Failed in mkdir. Run the program as administrator please.");
		return 0;
	}
	if (0 != _access("./period", 0) && 0 != _mkdir("./period"))
	{
		printf("Failed in mkdir. Run the program as administrator please.");
		return 0;
	}

	testCase();

	// 手雷22，枪榴弹60，Mortar70，火炮模块80-500，坦克800-1750
	std::vector<int> speeds = { 22, 60, 70, 80, 120, 180, 300, 400, 500, 800, 900, 1200, 1400, 1500 };
	int nCpu = std::max(static_cast<int>(std::thread::hardware_concurrency()), 1);
	int c = static_cast<int>(speeds.size());
	int threadCnt = std::min(nCpu, c);
	std::vector<std::thread> threads;
	for (int i = 0; i < threadCnt; ++i)
	{
		threads.emplace_back(proc, speeds[c - 1]);
		--c;
	}
	for (int i = 0; i < c; ++i)
		proc(speeds[i]);

	for (int i = 0; i < threadCnt; ++i)
		threads[i].join();

	return 0;
}

void genFileName(std::string& str, const int speed, const int h) {
	str.push_back('s'); str.append(num2str(speed));
	str.push_back('_');
	str.push_back('h'); str.append(num2str(h));
};

void proc(int speed)
{
	std::vector<double> lowPeriods, highPeriods, lowElevs, highElevs;
	lowPeriods.reserve(300); highPeriods.reserve(300); lowElevs.reserve(300); highElevs.reserve(300);
	int h = -500;
	bool hasResult = true;
	for (; h <= 800; h += 10)
	{
		std::string file1("elev/"), file2("elev/");
		genFileName(file1, speed, h);
		genFileName(file2, speed, h);
		file1.append("_low.sqf"); file2.append("_high.sqf");
		std::ofstream fout1(file1), fout2(file2);

		std::string timeSqf1("period/"), timeSqf2("period/");
		genFileName(timeSqf1, speed, h);
		genFileName(timeSqf2, speed, h);
		timeSqf1.append("_low.sqf"); timeSqf2.append("_high.sqf");
		std::ofstream timeFout1(timeSqf1), timeFout2(timeSqf2);

		auto outputDefaultInvalidValue = [](std::ofstream& os, const char* defaultValue) {
			os << defaultValue;
		};
		auto outputInvalid = [&]() {
			outputDefaultInvalidValue(fout1, "180");
			outputDefaultInvalidValue(fout2, "180");
			outputDefaultInvalidValue(timeFout1, "-1");
			outputDefaultInvalidValue(timeFout2, "-1");
		};

		if (not hasResult)
		{
			outputInvalid();
			continue;
		}

		Calc calculator(h, speed);
		Result res = calculator.Exec(10);
		if (not res.valid)
		{
			hasResult = false;
			outputInvalid();
			continue;
		}

		lowPeriods.clear(); highPeriods.clear(); lowElevs.clear(); highElevs.clear();
		for (int d = 10; d <= 3000; d += 10)
		{
			res = calculator.Exec(d);
			if (not res.valid)
				break;
			lowPeriods.push_back(res.lowTime);
			highPeriods.push_back(res.highTime);
			lowElevs.push_back(res.lowElev);
			highElevs.push_back(res.highElev);
		}

		size_t len = lowPeriods.size();
		auto outputMode1 = [](std::ofstream& os, const char* defaultValue, const std::vector<double> data) {
			size_t len = data.size();
			os << "if (_this >= " << len << ") then {" << defaultValue << "} else {\n\t[\n\t\t";
			os << data[0];
			for (size_t i = 1; i < len; ++i)
				os << ',' << data[i];
			os << "\n\t] select _this\n}";
		};
		auto output1 = [&]() {
			outputMode1(fout1, "180", lowElevs);
			outputMode1(fout2, "180", highElevs);
			outputMode1(timeFout1, "-1", lowPeriods);
			outputMode1(timeFout2, "-1", highPeriods);
		};
		auto outputMode2 = [](std::ofstream& os, const char* defaultValue, const std::vector<double> data) {
			size_t len = data.size();
			os << "if (_this >= " << len << ") then {" << defaultValue << "} else {\n"
				"\tif (_this < 100) then {\n"
				"\t\t[\n"
				"\t\t\t";
			os << data[0];
			for (size_t i = 1; i < 100; ++i)
				os << ',' << data[i];
			os << "\n\t\t] select _this\n"
				"\t} else {\n"
				"\t\t[\n"
				"\t\t\t";
			os << data[100];
			for (size_t i = 101; i < len; ++i)
				os << ',' << data[i];
			os << "\n\t\t] select _this - 100\n"
				"\t}\n"
				"}";
		};
		auto output2 = [&]() {
			outputMode2(fout1, "180", lowElevs);
			outputMode2(fout2, "180", highElevs);
			outputMode2(timeFout1, "-1", lowPeriods);
			outputMode2(timeFout2, "-1", highPeriods);
		};
		auto outputMode3 = [](std::ofstream& os, const char* defaultValue, const std::vector<double> data) {
			size_t len = data.size();
			os << "if (_this >= " << len << ") then {" << defaultValue  << "} else {\n"
				"\tif (_this < 100) then {\n"
				"\t\t[\n"
				"\t\t\t";
			os << data[0];
			for (size_t i = 1; i < 100; ++i)
				os << ',' << data[i];
			os << "\n\t\t] select _this\n"
				"\t} else {if (_this < 200) then {\n"
				"\t\t[\n"
				"\t\t\t";
			os << data[100];
			for (size_t i = 101; i < len; ++i)
				os << ',' << data[i];
			os << "\n\t\t] select _this - 100\n"
				"\t} else {\n"
				"\t\t[\n"
				"\t\t\t";
			os << data[200];
			for (size_t i = 201; i < len; ++i)
				os << ',' << data[i];
			os << "\n\t\t] select _this - 200\n"
				"\t}}\n"
				"}";
		};
		auto output3 = [&]() {
			outputMode3(fout1, "180", lowElevs);
			outputMode3(fout2, "180", highElevs);
			outputMode3(timeFout1, "-1", lowPeriods);
			outputMode3(timeFout2, "-1", highPeriods);
		};
		if (0 == len)
		{
			printf("0 size elev vector. Speed: %d, height: %d\n", speed, h);
			outputInvalid();
		}
		else if (0 < len && len <= 100)
		{
			output1();
		}
		else if (100 < len && len <= 200)
		{
			output1();
		}
		else
		{
			output3();
		}
	}
}

std::string num2str(int x)
{
	if (0 == x)
		return "+0";
	bool neg = x < 0;
	if (neg)
		x = -x;
	std::string res;
	while (x)
	{
		res.push_back('0' + x % 10);
		x /= 10;
	}
	if (neg)
		res.push_back('-');
	else
		res.push_back('+');
	for (size_t i = 0; i < res.size() / 2; ++i)
		std::swap(res[i], res[res.size() - 1 - i]);
	return res;
}
void testCase()
{
	auto test = [](int v, int h, int d) -> void {
		double exactElev = Calc(h, v).Exec(d).lowElev;
		int h1 = h - h % 10, h2 = h1 + 10, d1 = d - d % 10, d2 = d1 + 10;
		double fh1d1 = Calc(h1, v).Exec(d1).lowElev,
			fh1d2 = Calc(h1, v).Exec(d2).lowElev,
			fh2d1 = Calc(h2, v).Exec(d1).lowElev,
			fh2d2 = Calc(h2, v).Exec(d2).lowElev;
		double gridRes = (
			double(h - h1) * double(d - d1) * fh2d2 + double(h - h1) * double(d2 - d) * fh2d1 +
			double(h2 - h) * double(d - d1) * fh1d2 + double(d2 - d) * double(h2 - h) * fh1d1
			) / double(d2 - d1) / double(h2 - h1);

		printf("======== test case ========\n");
		printf("exactElev: %f\n", exactElev);
		printf("grid result: %f\n", gridRes);
		double dist1 = Core(h, v).downward(exactElev).dist;
		double dist2 = Core(h, v).downward(gridRes).dist;
		printf("dist1: %f\n", dist1);
		printf("dist2: %f\n\n", dist2);
	};
	test(300, 47, 1866);
	test(1500, 790, 2999);

	printf("\n");
}
void dynamicShootCalc()
{
	// 假设发射点在原点，地形分布：z = (x + y) / 2.0;
	// 初始位置(900, 1000)，移动速度(-30, 40)
	auto getH = [](double x, double y)->double {return (x + y) / 2.0; };
	double x0 = 500.0, y0 = 500.0, vx = -10.0, vy = 13.0;
	double t = 0.0;
	int speed = 180;
	for (int i = 0; i < 20; ++i)
	{
		double x = x0 + vx * t, y = y0 + vy * t;
		double d = std::sqrt(x * x + y * y);
		double h = getH(x, y);
		Calc calculator(h, speed);
		Result res = calculator.Exec(d);

		t = calculator.GetCore().downward(res.lowElev).period;
		// std::cout << "x: " << x << ", y : " << y << ", t: " << t << '\n';
	}
}