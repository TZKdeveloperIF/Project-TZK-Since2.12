private [{_redTop}, {_i}, {_weapons}];

_weapons = weapons _vehicle;
{_vehicle removeWeapon _x} forEach _weapons;

_k = 0; _c = count _shoppingCartMag;
while {_k < _c} do {
	_magInfoIdx = _shoppingCartMag select _k;
	_mag = _availMags select _magInfoIdx;
	_wep = _magInfo select _magInfoIdx select _piWeapon;

	call loadFile "Player\Dialog\CVW_getMagWep.sqf";

	if !bool_TZK_199_Mode then {
		_ammunition = _shoppingCartCnt select _k;
		_volume = call format ["%1", _mag GetWeaponParam "count"];
		while {_volume <= _ammunition} do {_vehicle addMagazine _mag; _ammunition = _ammunition - _volume};
		if (_ammunition > 0) then {_vehicle addMagazinePrecise [_mag, _ammunition]};
	} else {
		_i = 0; while {_i < _shoppingCartCnt select _k} do {_vehicle addMagazine _mag; _i = _i + 1};
	};
	_vehicle addWeapon _wep;
	_k = _k + 1;
};
call loadFile "Player\Dialog\CVW_equipGeneral.sqf";
if ("Air" countType [_vehicle] > 0) then {{_vehicle addMagazine _x} forEach SpoofMagazines};
if ("A10_xj400" countType [_vehicle] > 0 || "Su25_xj400" countType [_vehicle] > 0 || "A10_Vanilla_xj405" countType [_plane] > 0 || "Su25_Vanilla_xj405" countType [_plane] > 0) then {
	_vehicle addMagazine "AfterBurnerSwitch_xj400"
};
_vehicle selectWeapon (weapons _vehicle select 0);

[_vehicle, (_info select 0) + _upgradeCost, true, _enum] exec "Common\Msg\sCustomWeaponVehicleInfo.sqs";