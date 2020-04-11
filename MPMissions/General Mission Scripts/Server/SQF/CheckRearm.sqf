// args: [unit, si, gi]
// return: whether need rearm
private ["_unit", "_si", "_gi", "_rearm", "_v"];
_unit = _this select 0; _si = _this select 1; _gi = _this select 2;
_rearm = false; _v = vehicle _unit;

if (_unit == driver _v) then {
	if (_unit == _v) then {
		private ["_wpnPrim", "_wpnSec", "_magazines", "_validMags"];
		_wpnPrim = primaryWeapon _unit;
		_wpnSec = secondaryWeapon _unit;
		_magazines = _unit call loadFile "Common\SQF\GetNotEmptyMags.sqf";
		if (_wpnSec != "") then {
			_validMags = [_wpnSec] call loadFile "Common\SQF\WeaponValidMags.sqf";
			if ("_x in _validMags" count _magazines == 0) then {_rearm = true};
		} else {
			if (_wpnPrim != "") then {
				_validMags = [_wpnPrim] call loadFile "Common\SQF\WeaponValidMags.sqf";
				if ("_x in _validMags" count _magazines == 0) then {_rearm = true};
			} else {
				if (count _magazines < 1) then {_rearm = true};
			};
		};
			// It's sase-inensitive when comparing strings, but it's cASe-seNsItiVE when applying "in" or "find" to strings.
			// Do not check if soldier is out of Satchel or Mine. The result of secondaryWeapon is rely on particular weapons thus should be edit if soldiers' weapons redefined.
	} else {
		private ["_rearmData", "_rearmMags", "_weapons"];
		_rearmData = _v call funcGetRearmData;
		_rearmMags = _rearmData select 1;
		if ((count _rearmMags) > 0) then {
			_weapons = weapons _v;
			{if ((_v ammo _x) == 0) then {_rearm = true}} foreach _weapons;
			if !(_rearm) then {
				private ["_vt", "_gun", "_sabotMag", "_magazines"];
				_vt = _v call funcGetUnitTypeFromObject;
				if (_vt in (typesLightTank + typesHeavyTank + typesHowitzer) && _gi >= 0 && _gi < (GroupsNum - 2)) then {
					_gun = (_rearmData select 0 select 0); _sabotMag = (call format ["%1", _gun GetWeaponParamArray "magazines"]) select 0;
			// This design require the gun use itself as its muzzle, and the sabot magazine is in the 1st element of its "magazines[]" parameter.
					_magazines = magazinesArray _v;
					if !(_sabotMag in _magazines) then {_rearm = true} else {
						if ((_magazines select (_magazines find _sabotMag) + 1) < (aiSetting select _si select _gi select aisAutoRearmSabot)) then {_rearm = true}
}	}	}	}	}	};
_rearm