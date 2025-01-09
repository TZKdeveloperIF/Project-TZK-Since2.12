// args: none
// this is a process but not a function. script read/write local variables directly
_ret = true;

if (_isVehicle || _isStruct) then {
	_weapon = _vehicle call preprocessFile "Art\GetAvailableArtWeapon.sqf";
	if ("" == _weapon) then {
		_msg = localize {TZK_LANG_NO_PROPER_WEAPON} + ". " + localize {TZK_LANG_ORDER_ABORTED} + " " + localize {TZK_LANG_HELP_ME_REARM_DEPLOY};
		_ret = false;
	};

	if _ret then {
		private [{_weapons}];
		_weapons = weapons _vehicle;
		[_weapons, [_weapon]] call preprocessFile "Algo\arraySubtract.sqf";
		{_vehicle removeWeapon _x} forEach _weapons;
		{_vehicle addWeapon _x} forEach _weapons;
	};
};

_ret