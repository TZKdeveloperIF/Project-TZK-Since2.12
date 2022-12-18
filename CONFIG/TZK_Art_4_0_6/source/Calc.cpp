#include "Calc.h"

#define _USE_MATH_DEFINES
#include <math.h>
#include <algorithm>
#include <iostream>
#include <assert.h>

#ifdef _DEBUG
	#define ASSERT(statement) \
		if (not (statement)) std::cout << #statement << '\n';
#else
	#define ASSERT(statement)
#endif

namespace
{
	constexpr double deltaT = 0.05;
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

	double iterate(double& vx, double& vy, double dt = deltaT) // 返回本次迭代所使用的时间跨度
	{
		const double K1 = fx(vx, vy);
		const double L1 = fy(vx, vy);
		const double K2 = fx(vx + dt / 2 * K1, vy + dt / 2 * L1);
		const double L2 = fy(vx + dt / 2 * K1, vy + dt / 2 * L1);
		const double K3 = fx(vx + dt / 2 * K2, vy + dt / 2 * L2);
		const double L3 = fy(vx + dt / 2 * K2, vy + dt / 2 * L2);
		const double K4 = fx(vx + dt / 2 * K3, vy + dt / 2 * L3);
		const double L4 = fy(vx + dt / 2 * K3, vy + dt / 2 * L3);
		
		vx = vx + dt / 6 * (K1 + 2 * K2 + 2 * K3 + K4);
		vy = vy + dt / 6 * (L1 + 2 * L2 + 2 * L3 + L4);
		return dt;
	}
	double deg2rad(double deg)
	{
		return deg / 180 * M_PI;
	}
	double rad2deg(double rad)
	{
		return rad / M_PI * 180;
	}
	constexpr double invalidElev = 180.0;
	constexpr double invalidDist = -1.0;
}

Core::Core(int h, int v) : m_h(h), m_v(v)
{
	maxH = getMaxH();
	if (m_h <= 0 || m_h < maxH)
	{
		minUpwardElevVal = searchMinValidUpwardElev();
		minUpwardElevDist = upwardDist(minUpwardElevVal);
		minDownwardElevVal = searchMinValidDownwardElev();
		minDownwardElevDist = downwardDist(minDownwardElevVal);
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

bool Core::canReach(double x) const
{
	// m_h > 0, 需在保证高度的前提下分析最大距离
	// m_h <=0, 由于最大射程必定出现在俯仰角为正的场景（通常在40°左右），可以直接迭代获取最大射程
	if (m_h > 0 && getMaxH() < m_h)
		return false;

	return maxDownwardDistVal >= x;
}
// 速度朝上，高度差达到m_h的距离
double Core::upwardDist(double elev) const
{
	if (elev <= 0 || m_h <= 0)
		return invalidDist;
	ASSERT(m_h <= getMaxH());
	double rad = deg2rad(elev);
	double vx = m_v * std::cos(rad), vy = m_v * std::sin(rad);
	double h = 0, x = 0;
	double vx0 = vx, vy0 = vy, x0 = x, h0 = h;
	double dt = deltaT;
	while (h <= m_h && vy >= 0)
	{
		x0 = x; h0 = h;
		iterate(vx, vy, dt);
		while (vy < 0 && dt > threshold) // 当vy变号时，使用精细一些的时间梯度
		{
			vx = vx0; vy = vy0;
			dt = iterate(vx, vy, std::max(dt / 2, threshold));
		}
		x = x + dt * (vx0 + vx) / 2; h = h + dt * (vy0 + vy) / 2;
		vx0 = vx; vy0 = vy;
	}
	if (h < m_h)
		return invalidDist;
	// 修正
	if (abs(vy) < 0.00001)
		std::cout << "too little delta h in last correction: " << vy << '\n';
	// 最后一次迭代的竖直位移为 h - h0。不考虑vy接近零的边界情形
	return x + (m_h - h) / (h - h0) * (x - x0);
}
// 速度朝下，高度差达到m_h的距离
double Core::downwardDist(double elev) const
{
	ASSERT(m_h <= getMaxH());
	double rad = deg2rad(elev);
	double vx = m_v * std::cos(rad), vy = m_v * std::sin(rad);
	double h = 0, x = 0;
	double vx0 = vx, vy0 = vy, x0 = x, h0 = h;
	double dt = deltaT;
	while (h >= m_h || vy >= 0)
	{
		x0 = x; h0 = h;
		iterate(vx, vy, dt);
		while (vy < 0 && dt > threshold) // 当vy变号时，使用精细一些的时间梯度
		{
			vx = vx0; vy = vy0;
			dt = iterate(vx, vy, std::max(dt / 2, threshold));
		}
		x = x + dt * (vx0 + vx) / 2; h = h + dt * (vy0 + vy) / 2;
		vx0 = vx; vy0 = vy;
	}
	if (h0 < m_h) // 弹道开始下坠时最高点仍然没有达到预期高度
		return invalidDist;
	// 修正
	if (abs(vy) < 0.00001)
		std::cout << "too little delta h in last correction: " << vy << '\n';
	// 最后一次迭代的竖直位移为 h - h0。不考虑vy接近零的边界情形
	return x + (m_h - h) / (h - h0) * (x - x0);
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
		while (vy < 0 && dt > threshold) // 当vy变号时，使用精细一些的时间梯度
		{
			vx = vx0; vy = vy0;
			dt = iterate(vx, vy, std::max(dt / 2, threshold));
		}
		h = h + dt * (vy0 + vy) / 2;
		vy1 = vy0; vy0 = vy;
	}
	// last correction
	if (abs(vy0 - vy1) < 0.00001)
		std::cout << "too little delta v in last correction: " << vy0 - vy1 << '\n';
	h = h - (0 - vy0) / (vy1 - vy0) * (h - h0);
	return h;
}
// 找寻upwardDist能够达到m_h的最小俯仰角
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
		if (invalidDist != upwardDist(mid))
			right = mid;
		else
			left = mid;
	} while (abs(left - right) > 0.00001);
	return right; // right保证能达到m_h
}
// 找寻downwardDist能够达到m_h的最小俯仰角
double Core::searchMinValidDownwardElev() const
{
	if (m_h <= 0)
		return -90;

	ASSERT(m_h <= getMaxH());
	double left = -90, right = 90;
	do
	{
		double mid = (left + right) / 2;
		if (invalidDist != downwardDist(mid))
			right = mid;
		else
			left = mid;
	} while (abs(left - right) > 0.00001);
	return right; // right保证能达到m_h;
}
// 仅知 downwardDist 在[-90, 90]上先增后减。通过采样的方式找寻合适的区间
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
			dists[i] = downwardDist(elevs[i]);
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
				dist = downwardDist((left + right) / 2);
			}
			else
			{
				left = elevs[0];
				right = elevs[1];
				dist = downwardDist((left + right) / 2);
			}
			updated = true;
		}
	} while (abs(left - right) > 0.00001);
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
	res.lowElev = lowElev(x);
	res.highElev = highElev(x);
	return res;
}
double Calc::lowElev(double x) const
{
	ASSERT(m_core.canReach(x));
	double dist = x - 100;
	double left = invalidElev, right = invalidElev;
	// m_h > 0时，lowElev的解可对应于炮弹以vy > 0命中目标的情形。由于轨迹的单调性，它是这种情况下的唯一解。
	if (m_core.m_h > 0 && m_core.minUpwardElevDist >= x)
	{
		assert(m_core.minUpwardElevVal != invalidDist);
		// 在 [m_core.minUpwardElevVal, 90] 上二分查找
		left = m_core.minUpwardElevVal, right = 90;
		do
		{
			double mid = (left + right) / 2;
			dist = m_core.upwardDist(mid);
			if (dist >= x)
				left = mid;
			else
				right = mid;
		} while (abs(left - right) > 0.0001 && abs(x - dist) > 1);
	}
	else
	{
		// 在 [m_core.minDownwardElevVal, m_maxDistElev)上二分查找
		left = m_core.minDownwardElevVal, right = m_core.maxDownwardDistElev;
		do
		{
			double mid = (left + right) / 2;
			dist = m_core.downwardDist(mid);
			if (dist >= x)
				right = mid;
			else
				left = mid;
		} while (abs(left - right) > 0.0001 && abs(x - dist) > 1);
	}
	if (abs(x - dist) > 1)
	{
		std::cout << "Imprecise result. Speed: " << m_core.m_v << ", height: " << m_core.m_h
			<< ", dist: " << x << ", calc res: " << dist << '\n';
	}
	return left;
}
double Calc::highElev(double x) const
{
	ASSERT(m_core.canReach(x));
	// 在 [m_maxDistElev, 90]上二分查找
	double left = m_core.maxDownwardDistElev, right = 90;
	double dist = x - 100;
	do
	{
		double mid = (left + right) / 2;
		dist = m_core.downwardDist(mid);
		if (dist >= x)
			left = mid;
		else
			right = mid;
	} while (abs(left - right) > 0.0001 && abs(x - dist) > 1);
	if (abs(x - dist) > 1)
	{
		std::cout << "Imprecise result. Speed: " << m_core.m_v << ", height: " << m_core.m_h
			<< ", dist: " << x << ", calc res: " << dist << '\n';
	}
	return left;
}