// args: vehicle
private [{_rearm}, {_rearmData}, {_equal}];
_rearm = false;

_rearmData = _this call funcAutoRearmData;
_equal = preprocessFile "Algo\arrayEqual.sqf";
if (not _rearm && count (_rearmData select 0) > 0 && count (_rearmData select 1) > 0)then {
	if not _rearm then {
		private [{_weaponData}]; _weaponData = _rearmData select 0;
		if (_this == vehicle _this) then {
			_weaponData = _weaponData - weaponsCustom; // create a new array
		};
		if not ([weapons _this, _weaponData] call _equal) then {
			_rearm = true;
		};
	};
	if not _rearm then {
		if not ([_this call funcGetNotEmptyMags, _rearmData select 1] call _equal) then {
			_rearm = true;
		};
	};
};
not _rearm