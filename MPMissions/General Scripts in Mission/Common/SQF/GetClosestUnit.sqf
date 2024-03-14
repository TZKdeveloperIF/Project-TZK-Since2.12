private [ "_x", "_si", "_pos", "_unit", "_distMin", "_dist", "_groups", "_group" ];

_si = _this select 0;
_pos = _this select 1;

_unit = objNull;
_distMin = 10000;

_groups = (_si call loadFile "Util\AccessableGroups.sqf");

{_group = _x; {_dist = [_pos, _x] call funcCalcDistanceToObject; if (_dist < _distMin) then {_distMin = _dist; _unit = _x}} forEach (units _group)} forEach _groups;

[_unit, _distMin]