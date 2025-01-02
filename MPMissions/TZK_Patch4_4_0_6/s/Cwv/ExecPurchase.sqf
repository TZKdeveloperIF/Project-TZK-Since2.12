{_vehicle removeWeapon _x} forEach (weapons _vehicle);

// _shoppingCartMag: mag index, _shoppingCartCnt: mag number (count by unit)
private [{_k}, {_c}, {_infoIdx}, {_mag}, {_wep}];
_k = 0; _c = count _shoppingCartMag; while {_k < _c} do {
	_infoIdx = _shoppingCartMag select _k;
	_mag = _availMags select _infoIdx;
	_wep = _magInfo select _infoIdx select _piWeapon;

	[_magInfo select _infoIdx select _piName, _si, _enum, _vehicle] call loadFile "\TZK_Patch4_4_0_6\s\Cwv\ProperMagWep.sqf";

	_ammunition = (_shoppingCartCnt select _k) * (_magInfo select _infoIdx select _piUnitCount);
	_volume = call format ["%1", _mag GetWeaponParam "count"];
	while {_volume <= _ammunition} do {_vehicle addMagazine _mag; _ammunition = _ammunition - _volume};
	if (_ammunition > 0) then {_vehicle addMagazinePrecise [_mag, _ammunition]};

	_vehicle addWeapon _wep;
	_k = _k + 1;
};

// General weapons (cannon for gunship, spoof for helicopter and after burner for plane)
_m = []; _w = [];
_vehicle call loadFile "\TZK_Patch4_4_0_6\s\Cwv\AppendGeneralEquips.sqf";
{_vehicle addMagazine _x} forEach _m; {_vehicle addWeapon _x} forEach _w;

_vehicle selectWeapon (weapons _vehicle select 0);

[_vehicle, (_info select 0) + _upgradeCost, true, _enum] exec "\TZK_Patch4_4_0_6\s\Cwv\Net\sCwvInfo.sqs";