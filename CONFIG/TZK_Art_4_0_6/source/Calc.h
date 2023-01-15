#pragma once

struct Result
{
	bool valid = false;
	int maxDist = -1; // 向下舍入到10整数倍的结果
	double lowElev = -180.0;
	double highElev = 180.0;
	double lowTime = -1.0;
	double highTime = -1.0;
};
struct Trajectory
{
	double dist = -1.0;
	double period = -1.0;
};
struct InitVal
{
	double elev = -180.0;
	double period = -1.0;
};
struct Core
{
public:
	explicit Core(int h, int v);
	Core(const Core&);

	bool canReach(double x) const;
	Trajectory upward(double elev) const;
	Trajectory downward(double elev) const;
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
	const Core& GetCore() const { return m_core; }

private:
	InitVal lowElev(double x) const;
	InitVal highElev(double x) const;
private:
	const Core m_core;
};