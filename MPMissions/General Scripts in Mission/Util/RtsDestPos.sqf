private [{_unit}, {_clickedPos}, {_rtsCentralPos}, {_radius},  {_curPos}, {_vec}];
_unit = _this select 0;
_clickedPos = _this select 1;
_rtsCentralPos = _this select 2;
_radius = _this select 3;

_curPos = getPosASL _unit;
_vec = [_curPos, _rtsCentralPos] call funcVectorSub;
if ([_curPos, _rtsCentralPos] call loadFile "Util\PosDistSquare.sqf" > _radius * _radius) then {
	_vec = [_vec, _radius / (_vec call funcVectorLength)] call funcVectorScale;
};
[_vec, _clickedPos] call funcVectorAdd