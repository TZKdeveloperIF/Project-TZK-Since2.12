// args: [unit, si, gi]
// return: whether need repair/heal
private ["_unit", "_heal", "_v", "_x"];
private ["_damageRate"];
private ["_si", "_gi"];

_unit = _this select 0;
_si = _this select 1;
_gi = _this select 2;

_heal = false;
if (_gi == giTown || _gi == giWorker) then
{
	_damageRate = 0.2;
}
else
{
	_damageRate = ((call grpSetting) select aisAutoRepairDamage) * 0.05;
};

if (_unit == driver vehicle _unit) then
{
	_v = vehicle _unit;
	if (_unit == _v) then
	{
		if ((damage _unit) > _damageRate) then {_heal = true};
	}
	else
	{
		if ((damage _v) > _damageRate) then {_heal = true};
		{ if ((damage _x) > _damageRate) then { _heal = true } } foreach (crew _v);
	};
};
_heal