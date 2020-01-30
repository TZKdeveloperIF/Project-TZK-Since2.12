// args: [pos, si]
// return: [object, distance]

private ["_x", "_object", "_distMin", "_siEnemy", "_objects", "_dist"];

_object = objNull;
_distMin = 100000;

_siEnemy = siEnemy select (_this select 1);

_objects = [mhq select _siEnemy];
_objects = _objects + (MCV select _siEnemy);
{ _objects = _objects + ((structMatrix select _siEnemy) select _x) } foreach structsDestroy;
_objects = _objects - [objNull];

{
	if ( alive _x && !(isNull _x) ) then
	{
		_dist = [_this select 0, _x] call funcCalcDistanceToObject;
		if (_distMin > _dist) then
		{
			_object = _x;
			_distMin = _dist;
		};
	};
} foreach _objects;

[_object, _distMin]