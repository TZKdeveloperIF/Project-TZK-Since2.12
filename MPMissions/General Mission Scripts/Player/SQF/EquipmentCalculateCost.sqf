private ["_typePrim", "_typeSec", "_typeHandgun", "_equipment", "_unit", "_boolPurchase", "_mags0", "_mags1", "_mags2", "_magTypes", "_salvage", "_charge", "_weapons", "_optics", "_weaponTypes", "_magazinesArray", "_index", "_count", "_magazinesList", "_ammunitionList", "_volumeList", "_index2"];

RespawnW = RespawnWeapon + [-1]; RespawnM = RespawnMagazine + [-1]; RespawnA = RespawnAmmunition + [-1];

_typePrim = _this select 0; _typeSec = _this select 1; _typeHandgun = _this select 2; _equipment = _this select 3; _unit = _this select 4; _boolPurchase = _this select 5;
_mags0 = _equipment select 0; _mags1 = _equipment select 1; _mags2 = _equipment select 2;
_magTypes = []; { _magTypes = _magTypes + [_x select 0] } forEach (_mags0 + _mags1 + _mags2);
_salvage = 0; _charge = 0;

_weapons = weapons _unit; _optics = [];
			if (false) then {
{ if (call format ["%1", _x GetWeaponParam "isBinocular"] + call format ["%1", _x GetWeaponParam "isNVG"] > 0) then {_optics set [count _optics, _x]} } forEach _weapons;
			};
_weapons = _weapons - _optics;

_weaponTypes = []; { if ((weaponSearch find _x) != -1) then {_weaponTypes set [count _weaponTypes, weaponSearch find _x]} } forEach _weapons;
{
	if !(_x in [_typePrim, _typeSec, _typeHandgun]) then {
		_salvage = _salvage + ([_x] call loadFile "Player\SQF\EquipmentRespawnWeapon.sqf");
	};
} forEach _weaponTypes; _weapons = nil;

_magazinesArray = magazinesarray _unit; _index = 0; _count = count _magazinesArray; _magazinesList = []; _ammunitionList = []; _volumeList = []; _index2 = 0;
while "_index < _count" do {
	_magazine = _magazinesArray select _index; _ammunition = _magazinesArray select (_index + 1); _volume = call format ["%1", _magazine GetWeaponParam "count"];
	_index2 = _magazinesList find _magazine; if (_index2 == -1) then {_index2 = count _magazinesList} else {_ammunition = _ammunition + (_ammunitionList select _index2)};
	_magazinesList set [_index2, _magazine]; _ammunitionList set [_index2, _ammunition]; _volumeList set [_index2, _volume];
	_index = _index + 2;
};
{_index2 = count _magazinesList; _magazinesList set [_index2, _x]; _ammunitionList set [_index2, 1]; _volumeList set [_index2, 1]} forEach _optics; _magazinesArray = nil;

_index = 0; _count = count _magazinesList; 
while "_index < _count" do {
	_magazine = _magazinesList select _index; _magazineType = equipSearch find _magazine;
	if (_magazineType != -1) then {
		_difference = (_ammunitionList select _index) - ("_x == _magazineType" count _magTypes)*(_volumeList select _index);
		if (_difference > 0) then {
			_difference = [_magazineType, _difference] call loadFile "Player\SQF\EquipmentRespawnAmmunition.sqf";
		};
		_magCount = _difference; if ((_volumeList select _index) != 0) then {_magCount = _difference / (_volumeList select _index)};
		_cost = _magCount * ((equipDefs select _magazineType) select edcost);
		if (_cost > 0) then {_salvage = _salvage + _cost} else {_charge = _charge - _cost};
	};
	_index = _index + 1;
};

{
	if (!(_x in _weaponTypes) && _x != -1) then {
		_charge = _charge + ((weaponDefs select _x) select wdcost);
	};
} forEach [_typePrim, _typeSec, _typeHandgun];
{
	if (!((equipSearch select _x) in _magazinesList) && _x != -1) then {
		_charge = _charge + ((equipDefs select _x) select edcost);
	};
} forEach _magTypes;
if (_boolPurchase) then {RespawnWeapon = RespawnW; RespawnMagazine = RespawnM; RespawnAmmunition = RespawnA};
_salvage = _salvage * salvageRatio; _salvage = _salvage - (_salvage % 1);
if (_charge % 1 != 0) then {_charge = _charge + 1}; _charge = _charge - (_charge % 1);
(_charge - _salvage)