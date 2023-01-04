// args: none
// this is a process but not a function. script read/write local variables directly
_ret = true;

if (_isVehicle || _isStruct) then {
	_weapon = (_vehicle call funcVehParamWeapons) select 0;
	if not (_vehicle hasWeapon _weapon) then {
		_msg = "No proper weapon. Order aborted. Rearm me or help me deploy, sir.";
		_ret = false;
	};
	_weapons = (weapons _vehicle) - [_weapon];
	{_vehicle removeWeapon _x} forEach _weapons;
	{_vehicle addWeapon _x} forEach _weapons;
};

_ret