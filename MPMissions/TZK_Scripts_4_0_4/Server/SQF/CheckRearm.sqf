private ["_unit", "_si", "_gi", "_rearm", "_v"];
_unit = _this select 0; _si = _this select 1; _gi = _this select 2;
_rearm = false; _v = vehicle _unit;

if (_unit == driver _v) then {
	if (_unit == _v) then {
		private ["_wpnPrim", "_wpnSec", "_magazines", "_validMags"];
		_wpnPrim = primaryWeapon _unit;
		_wpnSec = secondaryWeapon _unit;
		_magazines = _unit call funcGetNotEmptyMags;
		if (_wpnSec != "") then {
			_validMags = [_wpnSec] call funcWeaponValidMags;
			if ("_x in _validMags" count _magazines == 0) then {_rearm = true};
		} else {
			if (_wpnPrim != "") then {
				_validMags = [_wpnPrim] call funcWeaponValidMags;
				if ("_x in _validMags" count _magazines == 0) then {_rearm = true};
			} else {
				if (count _magazines < 1) then {_rearm = true};
			};
		};
	} else {
		private ["_rearmData", "_rearmMags", "_weapons"];
		_rearmData = _v call funcGetRearmData;
		_rearmMags = _rearmData select 1;
		if ((count _rearmMags) > 0) then {
			_weapons = weapons _v;
			{if ((_v ammo _x) == 0) then {_rearm = true}} foreach _weapons; if _rearm Then {if (typeOf _v == "TOS1_TZK_xj400") Then {_rearm = false}};
			if !(_rearm) then {
				private ["_vt", "_gun", "_sabotMag", "_magazines"];
				_vt = _v call funcGetUnitTypeFromObject;
				if (_vt in (typesLightTank + typesHeavyTank) && _gi >= 0 && _gi < (GroupsNum - 2)) then {
					_gun = (_rearmData select 0 select 0); 
					_sabotMag = if !bool_TZK_199_Mode Then {(call format ["%1", _gun GetWeaponParamArray "magazines"]) select 0} Else {(_v call funcVehParamMagazines) select 0};
					_magazines = if !bool_TZK_199_Mode Then {magazinesArray _v} Else {magazines _v};
					if !(_sabotMag in _magazines) then {_rearm = true} else {
						if (  (if !bool_TZK_199_Mode Then {_magazines select (_magazines find _sabotMag) + 1} Else {_v ammo _gun})
							< (aiSetting select _si select _gi select aisAutoRearmSabot)  ) then {_rearm = true}
}	}	}	}	}	};
_rearm