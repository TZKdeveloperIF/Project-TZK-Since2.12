private ["_typePrim", "_typeSec", "_typeHandgun", "_typeBinocular", "_typeNVG", "_equipment", "_mags0", "_mags1", "_magTypes", "_mt", "_x", "_ammunition"];

RespawnWeapon resize 0; RespawnMagazine resize 0; RespawnAmmunition resize 0;
RespawnW resize 0; RespawnM resize 0; RespawnA resize 0;

_typePrim = _this select 0; _typeSec = _this select 1; _typeHandgun = _this select 2; _typeBinocular = _this select 3; _typeNVG = _this select 4;
{RespawnWeapon set [count RespawnWeapon, _x] } forEach [_typePrim, _typeSec, _typeHandgun, _typeBinocular, _typeNVG];

_equipment = _this select 5; 
_mags0 = _equipment select 0; _mags1 = _equipment select 1;
_magTypes = []; { _magTypes = _magTypes + [_x select 0] } forEach (_mags0 + _mags1);

{
	_mt = _x;
	if (!(_mt in RespawnMagazine) && _mt != -1 && !bool_TZK_199_Mode) then {
		_ammunition = ("_x == _mt" count _magTypes)*(call format ["%1", (equipSearch select _mt) GetWeaponParam "count"]);
		RespawnMagazine set [count RespawnMagazine, _mt]; RespawnAmmunition set [count RespawnAmmunition, _ammunition];
	};
} forEach _magTypes;

RespawnW = RespawnWeapon + [-1]; RespawnM = RespawnMagazine + [-1]; RespawnA = RespawnAmmunition + [-1]; 