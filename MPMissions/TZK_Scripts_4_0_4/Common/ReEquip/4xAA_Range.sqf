private ["_si", "_types", "_i", "_ci", "_j", "_cj", "_vehicles", "_unit", "_x", "_rearmData", "_w", "_m", "_k", "_ck", "_mArray"];

_si = _this select 0;

_types = vRedTop select _si; _i = 0; _ci = count _types;
while "_i < _ci" do {
	_vehicles = (UnitMatrix select _si) select (_types select _i); _j = 0; _cj = count _vehicles;
	while "_j < _cj" do {
		_unit = _vehicles select _j;
		_rearmData = _unit call funcGetRearmData; _w = _rearmData select 0; _m = _rearmData select 1;
		_k = 0; _ck = count _w; while "_k < _ck" do {
			if ((_w select _k) in ["RedTop_26_xj400","RedTop_30_xj400"]) then {_w set [_k, "RedTop_40_xj400"]};
			if ((_w select _k) in ["9M311_26_xj400","9M311_30_xj400"]) then {_w set [_k, "9M311_40_xj400"]};
			_k = _k + 1
		};
		_k = 0; _ck = count _m; while "_k < _ck" do {
			if ((_m select _k) in ["RedTop_26_xj400","RedTop_30_xj400"]) then {_m set [_k, "RedTop_40_xj400"]};
			if ((_m select _k) in ["9M311_26_xj400","9M311_30_xj400"]) then {_m set [_k, "9M311_40_xj400"]};
			_k = _k + 1
		};
		[_unit, _w, _m, _types select _i, 2, true] exec localize TZK_EQUIPREARMDATA_EDIT;
		
		if (local _unit && !bool_TZK_199_Mode) then {
			_mArray = magazinesArray _unit; _k = 0; _ck = count _mArray;
			while "_k < _ck" do {
				if ((_mArray select _k) in ["RedTop_26_xj400","RedTop_30_xj400"]) then {
					_unit removeMagazine (_mArray select _k); _unit addMagazinePrecise ["RedTop_40_xj400", (_mArray select (_k + 1))];
				};
				if ((_mArray select _k) in ["9M311_26_xj400","9M311_30_xj400"]) then {
					_unit removeMagazine (_mArray select _k); _unit addMagazinePrecise ["9M311_40_xj400", (_mArray select (_k + 1))];
				};
				_k = _k + 2;
			};
			if ([(weapons _unit), ["RedTop_26_xj400","RedTop_30_xj400"]] call funcArrayOverlap) then {
				{_unit removeWeapon _x} forEach ["RedTop_26_xj400","RedTop_30_xj400"]; _unit addWeapon "RedTop_40_xj400";
			};
			if ([(weapons _unit), ["9M311_26_xj400","9M311_30_xj400"]] call funcArrayOverlap) then {
				{_unit removeWeapon _x} forEach ["9M311_26_xj400","9M311_30_xj400"]; _unit addWeapon "9M311_40_xj400";
			};
		};
		_j = _j + 1;
	};
	_i = _i + 1;
};