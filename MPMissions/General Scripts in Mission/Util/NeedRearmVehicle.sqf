// args: [vehicle, sabot threshold]
private [{_rearm}, {_checked}, {_veh}, {_vt}];
_rearm = false; _checked = false;
_veh = _this select 0; _vt = _veh call funcGetUnitTypeFromObject;

// Process as general case for structure or unrecognizable object
if (not _checked && -1 == _vt) then {
	_checked = true;
	_rearm = _veh call preprocessFile "Util\NeedRearmGeneral.sqf";
};
// Return false for artillery
if (not _checked && (_vt in typesHowitzer || _vt in typesRocketLauncher)) then {_checked = true};
// Return true according to sabot check
// Current design require the gun use itself as its muzzle, and the sabot magazine is in the 1st element of its "magazines[]" parameter
// Besides, the muzzle/magazines shouldn't have empty array value. The result value in that case will be null but not an empty array
if (not _checked && (_vt in typesLightTank || _vt in typesHeavyTank)) then {
	_checked = true;

	private [{_rearmData}];
	_rearmData = _veh call funcGetVehicleRearmData;
	if (count (_rearmData select 1) > 0) then {
		private [{_sabot}, {_gun}, {_sabotMag}, {_magArray}, {_idx}];
		_sabot = _this select 1;
		_gun = _rearmData select 0 select 0; 
		_sabotMag = (call format ["%1", _gun GetWeaponParamArray "magazines"]) select 0;
		_magArray = magazinesArray _veh;
		_idx = _magArray find _sabotMag;
		if (-1 == _idx) then {_rearm = true} else {
			if (_magArray select (_idx + 1) <= _sabot) then {_rearm = true};
		};
	};
};
// General case
if (not _checked) then {
	_checked = true;
	_rearm = _veh call preprocessFile "Util\NeedRearmGeneral.sqf";
};

_rearm