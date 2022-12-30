#pragma once

struct Result
{
	bool valid = false;
	int maxDist = -1; // 向下舍入到10整数倍的结果
	double lowElev = -180;
	double highElev = 180;
};
struct Core
{
public:
	explicit Core(int h, int v);
	Core(const Core&);

	bool canReach(double x) const;
	double upwardDist(double elev) const;
	double downwardDist(double elev) const;
private:
	double getMaxH() const;
	double searchMinValidUpwardElev() const;
	double searchMinValidDownwardElev() const;
	void searchMaxDownwardDist();
public:
	double maxH, maxDownwardDistVal, maxDownwardDistElev, minUpwardElevVal, minUpwardElevDist, minDownwardElevVal, minDownwardElevDist;
	const double m_h, m_v;
};

class Calc
{
public:
	explicit Calc(int h, int v);
	Result Exec(int x) const;

private:
	double lowElev(double x) const;
	double highElev(double x) const;
private:
	const Core m_core;
};