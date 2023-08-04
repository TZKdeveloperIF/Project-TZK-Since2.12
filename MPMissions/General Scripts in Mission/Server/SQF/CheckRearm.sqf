private ["_unit", "_si", "_gi", "_rearm", "_v"];
_unit = _this select 0; _si = _this select 1; _gi = _this select 2;
_rearm = false; _v = vehicle _unit;

if (_unit == driver _v) then {
	if (_unit == _v) then {
		_rearm = _unit call preprocessFile "Util\NeedRearmSoldier.sqf";
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
					_sabotMag = (call format ["%1", _gun GetWeaponParamArray "magazines"]) select 0;
					_magazines = magazinesArray _v;
					if !(_sabotMag in _magazines) then {_rearm = true} else {
						if (_magazines select (_magazines find _sabotMag) + 1
							< (aiSetting select _si select _gi select aisAutoRearmSabot)  ) then {_rearm = true}
}	}	}	}	}	};
_rearm