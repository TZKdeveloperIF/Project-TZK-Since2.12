private [{_sups}, {_comp}, {_unit}, {_si}, {_dist}, {_bUseEnemy}];

_unit = _this select 0; _si = _this select 1; _dist = _this select 2;
_bUseEnemy = if (count _this > 3) then {_this select 3} else {false};
_searchPos = if (count _this > 4) then {_this select 4} else {getPosASL _unit};
_sups = [];
_comp = {_this select 0 select 2 < _this select 1 select 2};

_arr = [_searchPos, _dist, [utSupportInf select _si], [], _si] call funcGetNearbySoldiers;
if (count _arr > 0) then {
	[_arr, 0, count _arr, _comp] call preprocessFile "Algo\mergeSort.sqf";
	_sups set [count _sups, _arr select 0];
};
_arr = [_searchPos, _dist, [stAmmoCrate, stBarracks], [], _si] call funcGetNearbyStructure;
if (count _arr > 0) then {
	[_arr, 0, count _arr, _comp] call preprocessFile "Algo\mergeSort.sqf";
	_sups set [count _sups, _arr select 0];
};
_veh = [
	_searchPos, _si, 
	(typesSupport select _si) + [(typesMHQ select _si), [jeepaW, uazaE] select _si],
	[_unit]
] call funcGetClosestVehicle;
if (not isNull (_veh select 0)) then {
	_sups set [count _sups, [_veh select 0, -1, _veh select 1]];
};
if (_bUseEnemy) then {
	_siEnemy = siEnemy select _si;
	_arr = [_searchPos, _dist, [stAmmoCrate], [], _siEnemy] call funcGetNearbyStructure;
	if (count _arr > 0) then {
		[_arr, 0, count _arr, _comp] call preprocessFile "Algo\mergeSort.sqf";
		_sups set [count _sups, _arr select 0];
	};
	_veh = [
		_searchPos, _siEnemy, 
		(typesSupport select _siEnemy) + [[jeepaW, uazaE] select _siEnemy], 
		[_unit]
	] call funcGetClosestVehicle;
	if (not isNull (_veh select 0)) then {
		_sups set [count _sups, [_veh select 0, -1, _veh select 1]];
	};
};
if (count _sups > 0) then {
	[_sups, 0, count _sups, _comp] call preprocessFile "Algo\mergeSort.sqf";
	_sups select 0 select 0
} else {
	objNull
}