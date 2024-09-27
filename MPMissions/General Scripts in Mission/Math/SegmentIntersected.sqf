// args: [segment1 ([pos1, pos2]), segment2 ([pos3, pos4])]
// return: bool (whether 2 segments are intersected)

private [{_x1}, {_x2}, {_y1}, {_y2}, {_u1}, {_u2}, {_v1}, {_v2}];

_x1 = (_this select 0 select 0) select 0; _y1 = (_this select 0 select 0) select 1;
_x2 = (_this select 0 select 1) select 0; _y2 = (_this select 0 select 1) select 1;
_u1 = (_this select 1 select 0) select 0; _v1 = (_this select 1 select 0) select 1;
_u2 = (_this select 1 select 1) select 0; _v2 = (_this select 1 select 1) select 1;

if ((_y2 - _y1) * (_u2 - _u1) == (_v2 - _v1) * (_x2 - _x1)) then {
	// parallel. won't intersected unless overlapped
	(_x2 - _x1) * (_v1 - _y1) == (_y2 - _y1) * (_u1 - _x1) && 
	(((_u1 - _x1) * (_u1 - _x2) <= 0 && (_v1 - _y1) * (_v1 - _y2) <= 0) ||
	((_u2 - _x1) * (_u2 - _x2) <= 0 && (_v2 - _y1) * (_v2 - _y2) <= 0))
} else {
	// unparallel. check whether intersected point is on both 2 segments
	private [{_a}, {_b}, {_c}, {_d}, {_e}, {_f}];
	_a = _y2 - _y1;
	_b = _x1 - _x2;
	_c = _x2 * _y1 - _y2 * _x1;
	_d = _v2 - _v1;
	_e = _u1 - _u2;
	_f = _u2 * _v1 - _v2 * _u1;
	_px = (_b * _f - _c * _e) / (_a * _e - _b * _d);
	_py = (_a * _f - _c * _d) / (_b * _d - _a * _e);
	
	(_px - _x1) * (_px - _x2) <= 0 && (_py - _y1) * (_py - _y2) <= 0 &&
		(_px - _u1) * (_px - _u2) <= 0 && (_py - _v1) * (_py - _v2) <= 0
}