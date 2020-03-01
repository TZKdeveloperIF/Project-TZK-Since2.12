// args: unit
// return: template def if success, empty array if failure

private [ "_x", "_wpns", "_mags", "_wpn", "_i", "_typePrim", "_typeSec", "_typeHandgun",  "_typeBinocular", "_typeNVG", "_magsGen", "_magsHandgun", "_nameTempl", "_entry" ];

_wpns = weapons _this;
_mags = magazines _this;
{ if (_this hasWeapon _x) then {_wpns set [count _wpns, _x]} } forEach weaponThrowPutList;

_typePrim = -1; _typeSec = -1; _typeHandgun = -1; _typeBinocular = -1; _typeNVG = -1;
_magsGen = [];
_magsHandgun = [];

{
	_i = weaponSearch find _x;
	if (_i != -1) then {
		_entry = weaponDefs select _i;
		if (wtPrimary == (_entry select wdType) || wtPrimaryOnly == (_entry select wdType)) then {_typePrim = _i};
		if (wtSecondary == (_entry select wdType)) then {_typeSec = _i};
		if (wtHandgun == (_entry select wdType)) then {_typeHandgun = _i};
		if (wtBinocular == (_entry select wdType)) then {_typeBinocular = _i};
		if (wtNVG == (_entry select wdType)) then {_typeNVG = _i};
	};
} forEach _wpns;

{
	_i = equipSearch find _x;
	if (_i != -1) then {
		_entry = equipDefs select _i;
		if (isGeneral == (_entry select edSlotType)) then { _magsGen = _magsGen + [ [_i, _entry select edSlots] ] };
		if (isHandgun == (_entry select edSlotType)) then { _magsHandgun = _magsHandgun + [ [_i, _entry select edSlots] ] };
	
	};
} foreach _mags;

_nameTempl = [_typePrim, _typeSec, _magsGen] call funcGetEqName;

[_nameTempl, _typePrim, _typeHandgun, _typeSec, _typeBinocular, _typeNVG, [_magsGen, _magsHandgun] ]
