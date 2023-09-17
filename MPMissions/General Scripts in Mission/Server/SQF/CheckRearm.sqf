private ["_unit", "_si", "_gi", "_rearm", "_v"];
_unit = _this select 0; _si = _this select 1; _gi = _this select 2;
_rearm = false; _v = vehicle _unit;

if (_unit == driver _v) then {
	if (_unit == _v) then {
		_rearm = _unit call preprocessFile "Util\NeedRearmSoldier.sqf";
	} else {
		_rearm = [
			_v, 
			if (_gi >= 0 && _gi < count (aiSetting select _si)) then {
				aiSetting select _si select _gi select aisAutoRearmSabot
			} else {
				7 // magic number for non-control AI groups
			}
		] call preprocessFile "Util\NeedRearmVehicle.sqf";
	};
};
_rearm