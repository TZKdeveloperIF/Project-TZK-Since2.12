private ["_weapons", "_mags", "_index", "_mt", "_x", "_ammunition"];

RespawnWeapon resize 0; RespawnMagazine resize 0; RespawnAmmunition resize 0;
RespawnW resize 0; RespawnM resize 0; RespawnA resize 0;

_weapons = _this select 0; _mags = _this select 1;

{ _index = weaponSearch find _x; RespawnWeapon set [count RespawnWeapon, _index] } forEach _weapons;


{
	_mag = _x; _mt = equipSearch find _mag;
	if (!(_mt in RespawnMagazine) && _mt != -1 && !bool_TZK_199_Mode) then {
		_ammunition = ("_x == _mag" count _mags)*(call format ["%1", _mag GetWeaponParam "count"]);
		RespawnMagazine set [ count RespawnMagazine, _mt ];
		RespawnAmmunition set [ count RespawnAmmunition, _ammunition ];
	};
} forEach _mags;
			if (false) then {
{
	if (call format ["%1", _x GetWeaponParam "isBinocular"] + call format ["%1", _x GetWeaponParam "isNVG"] > 0) then {
		_index = equipSearch find _x;
		if (_index != -1) then {
			RespawnMagazine set [ count RespawnMagazine, _index];
			RespawnAmmunition set [ count RespawnAmmunition, 1 ];
		};
	}
} forEach _weapons;
			};
			
RespawnW = RespawnWeapon + [-1]; RespawnM = RespawnMagazine + [-1]; RespawnA = RespawnAmmunition + [-1]; 