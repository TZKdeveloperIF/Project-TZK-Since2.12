#include <fstream>
#include <iostream>
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

int main()
{
    if (0 != _access("./output", 0) && 0 != _mkdir("./output"))
	{
        std::cout << "Failed in mkdir. Run the program as administrator please.";
		return 0;
    }
    // 手雷22，枪榴弹60，Mortar70，火炮模块80-500，坦克800-1750
    std::vector<int> speeds = { 22, 60, 70, 80, 120, 180, 300, 400, 500, 800, 900, 1200, 1400, 1500, 1750 };
    std::unordered_map<int, std::unordered_map<int, int>> maxDists;
    for (int speed : speeds)
	{
		int h = -500;
		auto genFileName = [&](std::string& str) {
            str.push_back('s'); str.append(num2str(speed));
			str.push_back('_');
            str.push_back('h'); str.append(num2str(h));
		};
        for (; h <= 800; h += 100)
		{
			Result res = Calc(h, speed).Exec(10);
            if (not res.valid)
				break;
			maxDists[speed][h] = res.maxDist;
            std::string file1("output/"), file2("output/");
			genFileName(file1);
			genFileName(file2);
			file1.append("_low.sqf"); file2.append("_high.sqf");
			std::ofstream fout1(file1), fout2(file2);
			fout1.setf(std::ios_base::showpoint);
			fout2.setf(std::ios_base::showpoint);
            bool begin = true;
            for (int d = 10; d <= 3000; d += 200)
            {
				res = Calc(h, speed).Exec(d);
				if (not res.valid)
					break;
                if (not begin)
                {
                    fout1 << ",\n";
                    fout2 << ",\n";
                }
                else
					begin = false;
				fout1 << res.lowElev;
				fout2 << res.highElev;
            }
        }
        for (; h <= 800; h += 10)
            maxDists[speed][h] = -1;
    }
    return 0;
}

std::string num2str(int x)
{
    if (0 == x)
        return "0";
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