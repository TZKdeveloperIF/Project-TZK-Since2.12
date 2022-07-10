private ["_si", "_types", "_i", "_ci", "_j", "_cj", "_vehicles", "_unit", "_x", "_rearmData", "_w", "_m", "_mDouble"];

_si = _this select 0;

_types = vRedTop select _si; _i = 0; _ci = count _types;
while "_i < _ci" do {
	_vehicles = (UnitMatrix select _si) select (_types select _i); _j = 0; _cj = count _vehicles;
	while "_j < _cj" do {
		_unit = _vehicles select _j;
		_rearmData = _unit call funcGetRearmData; _w = _rearmData select 0; _m = _rearmData select 1;
		_mDouble = [];
		{if (_x in ["RedTop_26_xj400","RedTop_30_xj400","RedTop_40_xj400", "9M311_26_xj400","9M311_30_xj400","9M311_40_xj400"]) then {_mDouble set [count _mDouble, _x]}} forEach _m;
		_m = _m + _mDouble;
		[_unit, _w, _m, _types select _i, 2, true] exec localize {TZK_EQUIPREARMDATA_EDIT};
		
		if (local _unit) then {{_unit addMagazine _x} forEach _mDouble};
		_j = _j + 1;
	};
	_i = _i + 1;
};


