// arguments: [pos, distance, types, except, side]
// returns: [ [vcl, type, dist], ...]

private ["_x", "_posOrigin", "_distMax", "_types", "_pos", "_except", "_soldiers", "_type", "_count", "_distance"];

_posOrigin = _this select 0;
_distMax = _this select 1;
_types = _this select 2;
_except = _this select 3;
_side = _this select 4;

_soldiers = [];

_type = 0;
_count = count unitDefs;
while "_type < _count" do
{
	if (((count _types == 0) || (_type in _types)) && (count ((unitDefs select _type) select udCrew) == 0)) then
	{
		if (_side == si0) then
		{
			{
				_pos = getPos _x;
				_distance = sqrt ( ((_pos select 0) - (_posOrigin select 0))^2 + ((_pos select 1) - (_posOrigin select 1))^2 );
				if (!(_x in _except) && alive _x && _distance < _distMax) then
				{
					_soldiers set [count _soldiers, [_x, _type, _distance]];
				}
			} foreach ((unitMatrix select si0) select _type);
		}
		else
		{
			{
				_pos = getPos _x;
				_distance = sqrt ( ((_pos select 0) - (_posOrigin select 0))^2 + ((_pos select 1) - (_posOrigin select 1))^2 );
				if (!(_x in _except) && alive _x && _distance < _distMax) then
				{
					_soldiers set [count _soldiers, [_x, _type, _distance]];
				}
			} foreach ((unitMatrix select si1) select _type);
		};
	};
	
	_type = _type + 1;
};

_soldiers