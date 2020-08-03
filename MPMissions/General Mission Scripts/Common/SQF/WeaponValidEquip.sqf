private ["_weapons", "_type", "_mags", "_weapon", "_x", "_magList", "_array"];
_weapons = _this; _mags = [];
{
	_weapon = _x; _type = weaponSearch find _weapon;
	if (_type != -1) Then {
		_magList = weaponDefs select _type select wdAmmoTypes; _i = 0; _c = count _magList; _array = [];
		while "_i < _c" do {
			_array set [_i, equipSearch select (_magList select _i select 0)];
			_i = _i + 1
		};
		_mags = _mags + _array;
	};
} forEach _weapons;
_mags