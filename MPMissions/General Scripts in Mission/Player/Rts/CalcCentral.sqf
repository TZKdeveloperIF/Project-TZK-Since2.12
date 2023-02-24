// args: units: array
// return: [x, y]
private [{_sumX}, {_sumY}, {_i}, {_c}, {_pos}];
_sumX = 0; _sumY = 0; _i = 0; _c = count _this;
if (_c > 0) then {
	while {_i < _c} do {
		_pos = getPosASL (_this select _i);
		_sumX = _sumX + (_pos select 0);
		_sumY = _sumY + (_pos select 1);
		_i = _i + 1;
	};
	[_sumX / _c, _sumY / _c]
} else {
	-1
}