private ["_si", "_types", "_i", "_ci", "_j", "_cj", "_vehicles", "_unit", "_x", "_rearmData", "_w", "_m", "_k", "_ck", "_mArray"];

_si = _this select 0;

_types = vRedTop select _si; _i = 0; _ci = count _types;
while "_i < _ci" do {
	_vehicles = (UnitMatrix select _si) select (_types select _i); _j = 0; _cj = count _vehicles;
	while "_j < _cj" do {
		_unit = _vehicles select _j;
		_rearmData = _unit call funcGetRearmData; _w = _rearmData select 0; _m = _rearmData select 1;
		_k = 0; _ck = count _w; while "_k < _ck" do {if ((_w select _k) in ["RedTop_26_xj200","RedTop_30_xj200"]) then {_w set [_k, "RedTop_40_xj200"]}; _k = _k + 1};
		_k = 0; _ck = count _m; while "_k < _ck" do {if ((_m select _k) in ["RedTop_26_xj200","RedTop_30_xj200"]) then {_m set [_k, "RedTop_40_xj200"]}; _k = _k + 1};
		[_unit, _w, _m, _types select _i, 2, true] exec "Common\EditEquipRearmData.sqs";
		
		if (local _unit) then {
			_mArray = magazinesArray _unit; _k = 0; _ck = count _mArray;
			while "_k < _ck" do {
				if ((_mArray select _k) in ["RedTop_26_xj200","RedTop_30_xj200"]) then {
					_unit removeMagazine (_mArray select _k); _unit addMagazinePrecise ["RedTop_40_xj200", (_mArray select (_k + 1))];
				};
				_k = _k + 2;
			};
			if ([(weapons _unit), ["RedTop_26_xj200","RedTop_30_xj200"]] call funcArrayOverlap) then {
				{_unit removeWeapon _x} forEach ["RedTop_26_xj200","RedTop_30_xj200"]; _unit addWeapon "RedTop_40_xj200";
			};
		};
		_j = _j + 1;
	};
	_i = _i + 1;
};