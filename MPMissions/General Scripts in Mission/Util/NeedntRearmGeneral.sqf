// args: vehicle
private [{_rearm}, {_rearmData}, {_equal}];
_rearm = false;

_rearmData = (
	if (_this == vehicle _this) then {
		_this call preprocessFile "Common\SQF\RearmData.sqf"
	} else {
		_this call funcGetRearmData
	}
);
_equal = preprocessFile "Util\ArrayEqual.sqf";
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
		if not ([magazines _this, _rearmData select 1] call _equal) then {
			_rearm = true;
		};
	};
};
not _rearm