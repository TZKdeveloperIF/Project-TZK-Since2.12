// arguments: [pos, distance]
// returns: [ [vehicle, dist], ...]

private ["_x", "_posOrigin", "_distMax", "_pos", "_vehicles", "_distance"];

_posOrigin = _this select 0;
_distMax = _this select 1;

_vehicles = [];
{
	if !(isNull _x) then
	{
		_pos = getPos _x;
		_distance = [_pos, _posOrigin] call funcDistH;
		if (alive _x && _distance < _distMax ) then
		{
			_vehicles set [count _vehicles, [_x, _distance]];
		}
	}
} forEach TransportActivatedVehicles;
_vehicles