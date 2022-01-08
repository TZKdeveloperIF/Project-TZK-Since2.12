// script to calculate the equipment price
private ["_unit", "_weaData", "_magData", "_discount", "_cost", "_weapons", "_index", "_price", "_magazines"];
_unit = _this select 0; _weaData = _this select 1; _magData = _this select 2;
_discount = if (count _this > 3) then {_this select 3} else {1};
_cost = 0;

_weapons = weapons _unit;
{
	if !(_x in _weapons) then {
		_index = weaponSearch find _x;
		if (_index != -1) then {_price = weaponDefs select _index select wdcost; _cost = _cost + _price};
	};
} forEach _weaData;

_magazines = _unit call funcGetNotEmptyMags;
{
	if !(_x in _magazines) then {
		_index = equipSearch find _x;
		if (_index != -1) then {_price = equipDefs select _index select edcost; _cost = _cost + _price};
	} else {
		_index = _magazines find _x;
		_magazines set [_index, ""];
	};
} forEach _magData;

if (_cost > 0) then {_cost = _cost * _discount};

_cost = _cost - (_cost % 1);
_cost