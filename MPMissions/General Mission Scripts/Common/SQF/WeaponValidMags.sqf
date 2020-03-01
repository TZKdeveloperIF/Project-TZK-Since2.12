private ["_weapons", "_mags", "_weapon", "_muzzles", "_muzzle", "_x", "_magazines", "_magazine"];
_weapons = _this; _mags = [];
{
	_weapon = _x;
	_muzzles = call format ["%1", _weapon GetWeaponParamArray "muzzles"];
	{
		_muzzle = _x; if (_x == "this") then {
			_muzzle = _weapon; _magazines = call format ["%1", _muzzle GetWeaponParamArray "magazines"];
		} else {
			_magazines = call format ["%1", [_weapon, _muzzle] GetWeaponSubParamArray "magazines"];
		};
		{
			_magazine = _x; if (_x == "this") then {_magazine = _muzzle};
			if !(_magazine in _mags) then {_mags set [count _mags, _magazine]};
		} forEach _magazines;
	} forEach _muzzles;
} forEach _weapons;
_mags