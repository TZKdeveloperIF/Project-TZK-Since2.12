private ["_si", "_upg", "_x", "_unit", "_type", "_rearmData", "_w", "_m", "_index", "_mDouble"];

_si = _this select 0;
_upg = _this select 1;

if (upgRedTopRange == _upg) then {
	{
		{
			_unit = _x;
			_rearmData = _unit call funcGetRearmData; _w = _rearmData select 0; _m = _rearmData select 1;
			_index = 0; { if (_x in ["RedTop_26_xj200","RedTop_30_xj200"]) then {_w set [_index, "RedTop_40_xj200"]}; _index = _index + 1;} forEach _w;
			_index = 0; { if (_x in ["RedTop_26_xj200","RedTop_30_xj200"]) then {_m set [_index, "RedTop_40_xj200"]}; _index = _index + 1;} forEach _m;
			[_unit, _w, _m, true] exec "Common\EditEquipRearmData.sqs";
		} forEach ((UnitMatrix select _si) select _x);
	} forEach (vRedTop select _si);
};

if (upgRedTopMagazines == _upg) then {
	{
		{
			_unit = _x;
			_rearmData = _unit call funcGetRearmData; _w = _rearmData select 0; _m = _rearmData select 1;
			_mDouble = [];
			{ if (_x in ["RedTop_26_xj200","RedTop_30_xj200","RedTop_40_xj200"]) then {_mDouble = _mDouble + [_x]}; } forEach _m;
			_m = _m + _mDouble;
			[_unit, _w, _m, true] exec "Common\EditEquipRearmData.sqs";
		} forEach ((UnitMatrix select _si) select _x);
	} forEach (vRedTop select _si);
};
