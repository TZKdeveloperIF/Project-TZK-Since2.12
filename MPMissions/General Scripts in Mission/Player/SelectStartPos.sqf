_pos = _this select 0;
// _units = _this select 1;
// _alt = _this select 2;
// _shift = _this select 3;
_startPos = _this select 4;
_radius = _this select 5;

if ([_pos, _startPos] call funcDistH > _radius) then {
	hint "Please select in range.";
} else {
	_pos exec (TzkScripts select 245);
};