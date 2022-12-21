#include <fstream>
#include <stdio.h>
#include <string>
#include <vector>
#include <unordered_map>

#include <direct.h>
#include <io.h>

#include "Calc.h"

// 高度差取值范围 [-500, +800)，梯度10m, 数组长度130
// 距离取值范围 [10, 3000), 梯度10m, 数组长度300

// OFP脚本中，可预设合法的速度值和高度差并快速校验
// 给定速度和高度差后，需要知道距离是否可达。

std::string num2str(int x);
void testCase();

int main()
{
	if (0 != _access("./output", 0) && 0 != _mkdir("./output"))
	{
		printf("Failed in mkdir. Run the program as administrator please.");
		return 0;
	}

	// testCase(); return 0;

	auto genFileName = [](std::string& str, const int speed, const int h) {
		str.push_back('s'); str.append(num2str(speed));
		str.push_back('_');
		str.push_back('h'); str.append(num2str(h));
	};
	std::vector<double> lowVals, highVals;
	lowVals.reserve(300); highVals.reserve(300);
	// 手雷22，枪榴弹60，Mortar70，火炮模块80-500，坦克800-1750
	std::vector<int> speeds = { 22, 60, 70, 80, 120, 180, 300, 400, 500, 800, 900, 1200, 1400, 1500, 1750 };
	for (int speed : speeds)
	{
		int h = -500;
		bool hasResult = true;
		for (; h <= 800; h += 10)
		{
			std::string file1("output/"), file2("output/");
			genFileName(file1, speed, h);
			genFileName(file2, speed, h);
			file1.append("_low.sqf"); file2.append("_high.sqf");
			std::ofstream fout1(file1), fout2(file2);

			if (not hasResult)
			{
				fout1 << "180"; fout2 << "180";
				continue;
			}

			Calc calculator(h, speed);
			Result res = calculator.Exec(10);
			if (not res.valid)
			{
				hasResult = false;
				fout1 << "180"; fout2 << "180";
				continue;
			}

			lowVals.clear(); highVals.clear();
			for (int d = 10; d <= 3000; d += 10)
			{
				res = calculator.Exec(d);
				if (not res.valid)
					break;
				lowVals.push_back(res.lowElev);
				highVals.push_back(res.highElev);
			}

			size_t len = lowVals.size();
			if (0 == len)
			{
				printf("0 size elev vector. Speed: %d, height: %d\n", speed, h);
				fout1 << "180"; fout2 << "180";
			}
			else if (0 < len && len <= 100)
			{
				fout1 << "if (_this >= " << len << ") then {180} else {\n\t[\n\t\t";
				fout1 << lowVals[0];
				for (size_t i = 1; i < len; ++i)
					fout1 << ',' << lowVals[i];
				fout1 << "\n\t] select _this\n}";

				fout2 << "if (_this >= " << len << ") then {180} else {\n\t[\n\t\t";
				fout2 << highVals[0];
				for (size_t i = 1; i < len; ++i)
					fout2 << ',' << highVals[i];
				fout2 << "\n\t] select _this\n}";
			}
			else if (100 < len && len <= 200)
			{
				fout1 << "if (_this >= " << len << ") then {180} else {\n"
					"\tif (_this < 100) then {\n"
					"\t\t[\n"
					"\t\t\t";
				fout1 << lowVals[0];
				for (size_t i = 1; i < 100; ++i)
					fout1 << ',' << lowVals[i];
				fout1 << "\n\t\t] select _this\n"
					"\t} else {\n"
					"\t\t[\n"
					"\t\t\t";
				fout1 << lowVals[100];
				for (size_t i = 101; i < len; ++i)
					fout1 << ',' << lowVals[i];
				fout1 << "\n\t\t] select _this - 100\n"
					"\t}\n"
					"}";

				fout2 << "if (_this >= " << len << ") then {180} else {\n"
					"\tif (_this < 100) then {\n"
					"\t\t[\n"
					"\t\t\t";
				fout2 << highVals[0];
				for (size_t i = 1; i < 100; ++i)
					fout2 << ',' << highVals[i];
				fout2 << "\n\t\t] select _this\n"
					"\t} else {\n"
					"\t\t[\n"
					"\t\t\t";
				fout2 << highVals[100];
				for (size_t i = 101; i < len; ++i)
					fout2 << ',' << highVals[i];
				fout2 << "\n\t\t] select _this - 100\n"
					"\t}\n"
					"}";
			}
			else
			{
				fout1 << "if (_this >= " << len << ") then {180} else {\n"
					"\tif (_this < 100) then {\n"
					"\t\t[\n"
					"\t\t\t";
				fout1 << lowVals[0];
				for (size_t i = 1; i < 100; ++i)
					fout1 << ',' << lowVals[i];
				fout1 << "\n\t\t] select _this\n"
					"\t} else {if (_this < 200) then {\n"
					"\t\t[\n"
					"\t\t\t";
				fout1 << lowVals[100];
				for (size_t i = 101; i < len; ++i)
					fout1 << ',' << lowVals[i];
				fout1 << "\n\t\t] select _this - 100\n"
					"\t} else {\n"
					"\t\t[\n"
					"\t\t\t";
				fout1 << lowVals[200];
				for (size_t i = 201; i < len; ++i)
					fout1 << ',' << lowVals[i];
				fout1 << "\n\t\t] select _this - 200\n"
					"\t}}\n"
					"}";

				fout2 << "if (_this >= " << len << ") then {180} else {\n"
					"\tif (_this < 100) then {\n"
					"\t\t[\n"
					"\t\t\t";
				fout2 << highVals[0];
				for (size_t i = 1; i < 100; ++i)
					fout2 << ',' << highVals[i];
				fout2 << "\n\t\t] select _this\n"
					"\t} else {if (_this < 200) then {\n"
					"\t\t[\n"
					"\t\t\t";
				fout2 << highVals[100];
				for (size_t i = 101; i < len; ++i)
					fout2 << ',' << highVals[i];
				fout2 << "\n\t\t] select _this - 100\n"
					"\t} else {\n"
					"\t\t[\n"
					"\t\t\t";
				fout2 << highVals[200];
				for (size_t i = 201; i < len; ++i)
					fout2 << ',' << highVals[i];
				fout2 << "\n\t\t] select _this - 200\n"
					"\t}}\n"
					"}";
			}
		}
	}
	return 0;
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
	{
		double v = 300, h = 47, d = 1866;
		double exactElev = Calc(h, v).Exec(d).lowElev;
		double h1 = 40, h2 = 50, d1 = 1860, d2 = 1870;
		double fh1d1 = Calc(h1, v).Exec(d1).lowElev,
			fh1d2 = Calc(h1, v).Exec(d2).lowElev,
			fh2d1 = Calc(h2, v).Exec(d1).lowElev,
			fh2d2 = Calc(h2, v).Exec(d2).lowElev;
		double gridRes = (
			(h - h1) * (d - d1) * fh2d2 + (h - h1) * (d2 - d) * fh2d1 +
			(h2 - h) * (d - d1) * fh1d2 + (d2 - d) * (h2 - h) * fh1d1
			) / (d2 - d1) / (h2 - h1);

		printf("======== test case ========\n");
		printf("exactElev: %f\n", exactElev);
		printf("grid result: %f\n", gridRes);
		double dist1 = Core(h, v).downwardDist(exactElev);
		double dist2 = Core(h, v).downwardDist(gridRes);
		printf("dist1: %f\n", dist1);
		printf("dist2: %f\n\n", dist2);
	}
	{
		double v = 22, h = 5, d = 15;
		double exactElev = Calc(h, v).Exec(d).lowElev;
		double h1 = 0, h2 = 10, d1 = 10, d2 = 20;
		double fh1d1 = Calc(h1, v).Exec(d1).lowElev,
			fh1d2 = Calc(h1, v).Exec(d2).lowElev,
			fh2d1 = Calc(h2, v).Exec(d1).lowElev,
			fh2d2 = Calc(h2, v).Exec(d2).lowElev;
		double gridRes = (
			(h - h1) * (d - d1) * fh2d2 + (h - h1) * (d2 - d) * fh2d1 +
			(h2 - h) * (d - d1) * fh1d2 + (d2 - d) * (h2 - h) * fh1d1
			) / (d2 - d1) / (h2 - h1);

		printf("======== test case ========\n");
		printf("exactElev: %f\n", exactElev);
		printf("grid result: %f\n", gridRes);
		double dist1 = Core(h, v).downwardDist(exactElev);
		double dist2 = Core(h, v).downwardDist(gridRes);
		printf("dist1: %f\n", dist1);
		printf("dist2: %f\n\n", dist2);
	}
}