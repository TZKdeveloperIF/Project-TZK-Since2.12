private ["_x", "_object", "_distMin", "_siEnemy", "_objects", "_dist"];

_object = objNull;
_distMin = 100000;

_siEnemy = siEnemy select (_this select 1);

_objects = [];
{
	{
		if (!isNull _x) then {_objects set [count _objects, _x]};
	} forEach (structMatrix select _siEnemy select _x);
} foreach structsCritcal;

{
	_dist = [_this select 0, _x] call funcCalcDistanceToObject;
	if (_distMin > _dist) then
	{
		_object = _x;
		_distMin = _dist;
	};
} foreach _objects;

[_object, _distMin]