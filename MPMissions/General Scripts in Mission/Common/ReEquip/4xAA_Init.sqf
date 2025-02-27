private ["_si", "_types", "_i", "_ci", "_j", "_cj", "_vehicles", "_unit", "_x", "_rearmData", "_w", "_m", "_mDouble"];

_si = _this select 0;

private ["_a"];
_m = []; _w = []; _a = "";
if (si0 == _si) then {
	if (viewDistance == 1300) then { _a = "RedTop_26_xj400" } else { _a = "RedTop_30_xj400" }; _m = [_a]; _w = [_a];
	if (upgMatrix select _si select upgRedTopRange == 2) then {_a = "RedTop_40_xj400"; _m = [_a]; _w = [_a]};
	if (upgMatrix select _si select upgRedTopMagazines == 2) then {_m = _m + [_a]};
	_m = _m + []; _w = _w + ["VulcanCannon_xj400"]; 
};
if (si1 == _si) then {
	if (viewDistance == 1300) then { _a = "9M311_26_xj400" } else { _a = "9M311_30_xj400" }; _m = [_a]; _w = [_a];
	if (upgMatrix select _si select upgRedTopRange == 2) then {_a = "9M311_40_xj400"; _m = [_a]; _w = [_a]};
	if (upgMatrix select _si select upgRedTopMagazines == 2) then {_m = _m + [_a]};
	_m = _m + []; _w = _w + ["Tunguska_30mm_DKM_xj400"]; 
};

_types = vRedTop select _si; _i = 0; _ci = count _types;
while {_i < _ci} do {
	_vehicles = (UnitMatrix select _si) select (_types select _i); _j = 0; _cj = count _vehicles;
	while {_j < _cj} do {
		_unit = _vehicles select _j;
		_rearmData = _unit call funcGetVehicleRearmData; _wep = _rearmData select 0; _mag = _rearmData select 1;
		_hasRedTop = false;
		{
			if (_x in ["RedTop_26_xj400","RedTop_30_xj400","RedTop_40_xj400"
				, "9M311_26_xj400","9M311_30_xj400","9M311_40_xj400"]) then {_hasRedTop = true};
		} forEach _wep;
		if (!_hasRedTop) then {
			[_unit, _w, _m, _types select _i, 2, true] exec (TzkScripts select 071);
			
			if (local _unit) then {
				{ _unit removeMagazine _x} foreach magazines _unit;
				{ _unit removeWeapon _x} foreach weapons _unit;
				{_unit addMagazine _x} forEach _m;
				{_unit addweapon _x} forEach _w;
			};
		};
		_j = _j + 1;
	};
	_i = _i + 1;
};


