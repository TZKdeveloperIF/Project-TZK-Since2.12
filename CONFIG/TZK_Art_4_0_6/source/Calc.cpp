﻿#include "Calc.h"

#define _USE_MATH_DEFINES
// #include <math.h>
#include <cmath>
#include <algorithm>
#include <stdio.h>
// #include <assert.h>

#ifdef _DEBUG
	#define ASSERT(statement) \
		if (not (statement)) printf(#statement##"\n");
#else
	#define ASSERT(statement)
#endif

namespace
{
	constexpr double deltaT = 0.01;
	constexpr double threshold = 0.001;
	constexpr double c = -0.0005;
	constexpr double g = 9.80665;
	double fx(double vx, double vy)
	{
		return c * vx * std::sqrt(vx * vx + vy * vy);
	}
	double fy(double vx, double vy)
	{
		return c * vy * std::sqrt(vx * vx + vy * vy) - g;
	}
	// 返回本次迭代所使用的时间跨度 (即入参dt. 入参可能是右值, 因此通过返回值获取)
	double iterate(double& vx, double& vy, double dt = deltaT)
	{
		const double K1 = fx(vx, vy);
		const double L1 = fy(vx, vy);
		const double K2 = fx(vx + dt / 2.0 * K1, vy + dt / 2.0 * L1);
		const double L2 = fy(vx + dt / 2.0 * K1, vy + dt / 2.0 * L1);
		const double K3 = fx(vx + dt / 2.0 * K2, vy + dt / 2.0 * L2);
		const double L3 = fy(vx + dt / 2.0 * K2, vy + dt / 2.0 * L2);
		const double K4 = fx(vx + dt / 2.0 * K3, vy + dt / 2.0 * L3);
		const double L4 = fy(vx + dt / 2.0 * K3, vy + dt / 2.0 * L3);
		
		vx = vx + dt / 6.0 * (K1 + 2.0 * K2 + 2.0 * K3 + K4);
		vy = vy + dt / 6.0 * (L1 + 2.0 * L2 + 2.0 * L3 + L4);
		return dt;
	}
	double deg2rad(double deg)
	{
		return deg / 180.0 * M_PI;
	}
	double rad2deg(double rad)
	{
		return rad / M_PI * 180.0;
	}
	constexpr double invalidElev = 180.0;
	constexpr double invalidDist = -1.0;
	constexpr double invalidPeriod = -1.0;
}

Core::Core(int h, int v) : m_h(h), m_v(v)
{
	maxH = getMaxH();
	if (m_h <= 0 || m_h < maxH)
	{
		minUpwardElevVal = searchMinValidUpwardElev();
		minUpwardElevDist = upward(minUpwardElevVal).dist;
		minDownwardElevVal = searchMinValidDownwardElev();
		minDownwardElevDist = downward(minDownwardElevVal).dist;
		searchMaxDownwardDist();
	}
	else
	{
		maxDownwardDistVal = invalidDist;
		maxDownwardDistElev = invalidElev;
		minUpwardElevVal = invalidElev;
		minUpwardElevDist = invalidDist;
		minDownwardElevVal = invalidElev;
		minDownwardElevDist = invalidDist;
	}
}
Core::Core(const Core& rhs)
	: m_h(rhs.m_h), m_v(rhs.m_v)
{
	maxH = rhs.maxH;
	maxDownwardDistVal = rhs.maxDownwardDistVal;
	maxDownwardDistElev = rhs.maxDownwardDistElev;
	minUpwardElevVal = rhs.minUpwardElevVal;
	minUpwardElevDist = rhs.minUpwardElevDist;
	minDownwardElevVal = rhs.minDownwardElevVal;
	minDownwardElevDist = rhs.minDownwardElevDist;
}


bool Core::canReach(double x) const
{
	// m_h > 0, 需在保证高度的前提下分析最大距离
	// m_h <=0, 由于最大射程必定出现在俯仰角为正的场景（通常在40°左右），可以直接迭代获取最大射程
	if (m_h > 0 && getMaxH() < m_h)
		return false;

	return maxDownwardDistVal >= x;
}
// 速度朝上，高度差达到m_h的距离
Trajectory Core::upward(double elev) const
{
	if (elev <= 0 || m_h <= 0)
		return Trajectory{};
	ASSERT(m_h <= getMaxH());
	double rad = deg2rad(elev);
	double vx = m_v * std::cos(rad), vy = m_v * std::sin(rad);
	double h = 0, x = 0;
	double vx0 = vx, vy0 = vy, x0 = x, h0 = h;
	double dt = deltaT;
	double period = 0.0;
	while (h <= m_h && vy >= 0)
	{
		x0 = x; h0 = h;
		iterate(vx, vy, dt);
		while (vy0 >= 0 && vy < 0 && dt > threshold) // 当vy变号时，使用精细一些的时间步长
		{
			vx = vx0; vy = vy0;
			dt = iterate(vx, vy, std::max(dt / 2, threshold));
		}
		period += dt;
		// 无需恢复时间步长. upward场景下vy < 0会立刻退出循环
		x = x + dt * (vx0 + vx) / 2; h = h + dt * (vy0 + vy) / 2;
		vx0 = vx; vy0 = vy;
	}
	if (h < m_h)
		return Trajectory{};
	// 修正
	if (abs(vy) < 0.000001)
		printf("vy is close to 0 in upward's last correction. h: %f, v: %f, elev: %f\n",
			m_h, m_v, elev);
	// 最后一次迭代的竖直位移为 h - h0。不考虑vy接近零的边界情形
	return { x + (m_h - h) / (h - h0) * (x - x0), period + (m_h - h) / (h - h0) * dt };
}
// 速度朝下，高度差达到m_h的距离
Trajectory Core::downward(double elev) const
{
	ASSERT(m_h <= getMaxH());
	double rad = deg2rad(elev);
	double vx = m_v * std::cos(rad), vy = m_v * std::sin(rad);
	double h = 0, x = 0;
	double vx0 = vx, vy0 = vy, x0 = x, h0 = h;
	double dt = deltaT;
	double period = 0.0;
	while (h >= m_h || vy >= 0)
	{
		x0 = x; h0 = h;
		iterate(vx, vy, dt);
		while (vy0 >= 0 && vy < 0 && dt > threshold) // 当vy变号时，使用精细一些的时间步长
		{
			vx = vx0; vy = vy0;
			dt = iterate(vx, vy, std::max(dt / 2, threshold));
		}
		period += dt;
		// 恢复时间步长, 减少运算量. 这一过程可能较长, 使用略小的时间步长以减小误差
		if (vy0 >= -0.1 && vy < -0.1)
			dt = deltaT / 2;
		x = x + dt * (vx0 + vx) / 2; h = h + dt * (vy0 + vy) / 2;
		vx0 = vx; vy0 = vy;
	}
	if (h0 < m_h) // 弹道开始下坠时最高点仍然没有达到预期高度
		return Trajectory{};
	// 修正
	if (abs(vy) < 0.000001)
		printf("vy is close to 0 in downward's last correction. h: %f, v: %f, elev: %f\n",
			m_h, m_v, elev);
	// 最后一次迭代的竖直位移为 h - h0。不考虑vy接近零的边界情形
	return { x + (m_h - h) / (h - h0) * (x - x0), period + (m_h - h) / (h - h0) * dt };
}

double Core::getMaxH() const
{
	double vy = m_v, vy0 = m_v, vy1 = m_v;
	double vx = 0, vx0 = 0;
	double h = 0;
	double h0 = h;
	double dt = deltaT;
	while (vy >= 0)
	{
		h0 = h;
		iterate(vx, vy, dt);
		while (vy0 >= 0 && vy < 0 && dt > threshold) // 当vy变号时，使用精细一些的时间步长
		{
			vx = vx0; vy = vy0;
			dt = iterate(vx, vy, std::max(dt / 2, threshold));
		}
		// 无需恢复时间步长. upward场景下vy < 0会立刻退出循环
		h = h + dt * (vy0 + vy) / 2;
		vy1 = vy0; vy0 = vy;
	}
	// last correction
	h = h - (0 - vy0) / (vy1 - vy0) * (h - h0);
	return h;
}
// 找寻 upward 能够达到m_h的最小俯仰角
double Core::searchMinValidUpwardElev() const
{
	if (m_h <= 0)
	{
		return invalidElev;
	}
	ASSERT(m_h <= getMaxH());
	double left = 0, right = 90;
	do
	{
		double mid = (left + right) / 2;
		if (invalidDist != upward(mid).dist)
			right = mid;
		else
			left = mid;
	} while (abs(left - right) > 0.000001);
	return right; // right保证能达到m_h
}
// 找寻 downward能够达到m_h的最小俯仰角
double Core::searchMinValidDownwardElev() const
{
	if (m_h <= 0)
		return -90;

	ASSERT(m_h <= getMaxH());
	double left = -90, right = 90;
	do
	{
		double mid = (left + right) / 2;
		if (invalidDist != downward(mid).dist)
			right = mid;
		else
			left = mid;
	} while (abs(left - right) > 0.000001);
	return right; // right保证能达到m_h;
}
// 仅知 downward dist 在[-90, 90]上先增后减。通过采样的方式找寻合适的区间
void Core::searchMaxDownwardDist()
{
	double left = searchMinValidDownwardElev(), right = 90;
	double dist = invalidDist;
	constexpr int len = 6;
	double elevs[len], dists[len];
	do
	{
		double diff = (right - left) / (len - 1.0);
		for (int i = 0; i < len; ++i)
		{
			elevs[i] = left + static_cast<double>(i)* diff;
			dists[i] = downward(elevs[i]).dist;
		}
		bool updated = false;
		for (int i = 0; i < len - 2; ++i)
		{
			// 若连续3个采样点的dist相同，则必定是 m_h == 0 且发射角为负的情形，在计算中它们被视作发射即爆炸
			if (dists[i + 1] >= dists[i] && dists[i + 1] >= dists[i + 2] &&
				(dists[i + 1] != dists[i] || dists[i + 1] != dists[i + 2]))
			{
				left = elevs[i];
				right = elevs[i + 2];
				dist = dists[i + 1];
				updated = true;
				break;
			}
		}
		if (not updated)
		{
			// 无法通过采样点确定最值位置。最值可能出现在第一个或最末一个区间
			bool ascend = dists[0] < dists[len - 1]; // len > 2时，dists[0]不可能等于dists[len - 1]，因为dist先增后减，若二者相等，则必定存在符合预期的采样点
			if (ascend)
			{
				left = elevs[len - 2];
				right = elevs[len - 1];
				dist = downward((left + right) / 2).dist;
			}
			else
			{
				left = elevs[0];
				right = elevs[1];
				dist = downward((left + right) / 2).dist;
			}
			updated = true;
		}
	} while (abs(left - right) > 0.000001);
	maxDownwardDistVal = dist;
	maxDownwardDistElev = (left + right) / 2;
}


Calc::Calc(int h, int v) : m_core(h, v) {}
Result Calc::Exec(int x) const
{
	Result res;
	res.valid = m_core.canReach(x);
	if (not res.valid)
		return res;
	int dist = static_cast<int>(m_core.maxDownwardDistVal); // 输入数据的范围不可能产生溢出
	res.maxDist = dist - dist % 10;
	InitVal lowInit = lowElev(x);
	InitVal highInit = highElev(x);
	res.lowElev = lowInit.elev;
	res.lowTime = lowInit.period;
	res.highElev = highInit.elev;
	res.highTime = highInit.period;
	return res;
}
InitVal Calc::lowElev(double x) const
{
	ASSERT(m_core.canReach(x));
	double left = invalidElev, right = invalidElev, mid = invalidElev;
	double dist = x - 100;
	double period = invalidPeriod;
	// m_h > 0时，lowElev的解可对应于炮弹以vy > 0命中目标的情形。由于轨迹的单调性，它是这种情况下的唯一解。
	if (m_core.m_h > 0 && m_core.minUpwardElevDist >= x)
	{
		// assert(m_core.minUpwardElevVal != invalidDist);
		// 在 [m_core.minUpwardElevVal, 90] 上二分查找
		left = m_core.minUpwardElevVal, right = 90;
		do
		{
			mid = (left + right) / 2;
			Trajectory ret = m_core.upward(mid);
			dist = ret.dist;
			period = ret.period;
			if (dist >= x)
				left = mid;
			else
				right = mid;
		} while (abs(left - right) > 0.000001 && abs(x - dist) > 1);
	}
	else
	{
		// 在 [m_core.minDownwardElevVal, m_maxDistElev)上二分查找
		left = m_core.minDownwardElevVal, right = m_core.maxDownwardDistElev;
		do
		{
			mid = (left + right) / 2;
			Trajectory ret = m_core.downward(mid);
			dist = ret.dist;
			period = ret.period;
			if (dist >= x)
				right = mid;
			else
				left = mid;
		} while (abs(left - right) > 0.000001 && abs(x - dist) > 1);
	}
	if (abs(x - dist) > 1)
		printf("Imprecise result. Speed: %f, height: %f, dist: %f, error: %f\n",
			m_core.m_v, m_core.m_h, x, x - dist
		);

	return { mid, period };
}
InitVal Calc::highElev(double x) const
{
	ASSERT(m_core.canReach(x));
	// 在 [m_maxDistElev, 90]上二分查找
	double left = m_core.maxDownwardDistElev, right = 90, mid = invalidElev;;
	double dist = x - 100;
	double period = invalidPeriod;
	do
	{
		mid = (left + right) / 2;
		Trajectory ret = m_core.downward(mid);
		dist = ret.dist;
		period = ret.period;
		if (dist >= x)
			left = mid;
		else
			right = mid;
	} while (abs(left - right) > 0.000001 && abs(x - dist) > 1);
	if (abs(x - dist) > 1)
		printf("Imprecise result. Speed: %f, height: %f, dist: %f, error: %f\n",
			m_core.m_v, m_core.m_h, x, x - dist
		);

	return { mid, period };
}