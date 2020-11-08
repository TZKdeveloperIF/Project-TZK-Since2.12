private ["_unit", "_heal", "_v", "_x"];
private ["_damageRate"];
private ["_si", "_gi"];

_unit = _this select 0;
_si = _this select 1;
_gi = _this select 2;

_heal = false;
_damageRate = if (_gi == giTown || _gi == giWorker) then {0.2} else {(aiSetting select _si select _gi select aisAutoRepairDamage) * 0.05};

if (_unit == driver vehicle _unit) then {
	_v = vehicle _unit;
	if (_unit == _v) then {
		if ((damage _unit) > _damageRate) then {_heal = true};
	} else {
		if ((damage _v) > _damageRate) then {_heal = true};
		{ if ((damage _x) > _damageRate) then { _heal = true } } foreach (crew _v);
	};
};
_heal