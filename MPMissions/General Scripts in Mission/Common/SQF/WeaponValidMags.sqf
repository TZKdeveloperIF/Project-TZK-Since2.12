private ["_weapons", "_mags", "_weapon", "_muzzles", "_muzzle", "_x", "_magazines", "_magazine"];
_weapons = _this; _mags = [];
{
	_weapon = _x; if ("" != _weapon) then {
		private [{_text}];
		_text = format ["%1", _weapon GetWeaponParamArray "muzzles"];
		if ("<null>" != _text) then {
			_muzzles = call _text;
			{
				_muzzle = _x; if (_x == "this") then {
					_muzzle = _weapon; _text = format ["%1", _muzzle GetWeaponParamArray "magazines"];
				} else {
					_text = format ["%1", [_weapon, _muzzle] GetWeaponSubParamArray "magazines"];
				};
				if ("<null>" != _text) then {
					_magazines = call _text;
					{
						_magazine = _x; if (_x == "this") then {_magazine = _muzzle};
						if !(_magazine in _mags) then {_mags set [count _mags, _magazine]};
					} forEach _magazines;
				};
			} forEach _muzzles;
		};
	};
} forEach _weapons;
_mags