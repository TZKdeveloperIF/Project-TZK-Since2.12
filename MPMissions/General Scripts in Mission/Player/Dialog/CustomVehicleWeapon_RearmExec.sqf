private [{_redTop}, {_i}, {_weapons}];

_weapons = weapons _vehicle;
{_vehicle removeWeapon _x} forEach _weapons;

_redtop = (if (viewDistance > 1300) then {"RedTop_30_xj400"} else {"RedTop_26_xj400"});
_k = 0; _c = count _shoppingCartMag;
while {_k < _c} do {
	_magInfoIdx = _shoppingCartMag select _k;
	_mag = PlaneMags select _magInfoIdx;
	_wep = PlaneMagInfo select _magInfoIdx select _piWeapon;

	_var1 = PlaneMagInfo select _magInfoIdx select _piName;
	if (_var1 == "RedTop") then {_mag = _redtop, _wep = _redtop};

	_i = 0; while {_i < _shoppingCartCnt select _k} do {_vehicle addMagazine _mag; _i = _i + 1}; _vehicle addWeapon _wep;
	_k = _k + 1;
};
if ("Air" count [_vehicle] > 0) then {{_vehicle addMagazine _x} forEach SpoofMagazines};
if ("A10_xj400" countType [_vehicle] > 0 || "Su25_xj400" countType [_vehicle] > 0) then {
	_vehicle addMagazine "AfterBurnerSwitch_xj400"
};
_vehicle selectWeapon (weapons _vehicle select 0);

[_vehicle, (PlanesInfo select _vehicleIndex select 0) + _upgradeCost, true] exec "Common\Msg\sPlaneInfo.sqs";