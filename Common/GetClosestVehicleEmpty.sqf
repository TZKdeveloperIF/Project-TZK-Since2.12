// arguments: [pos, si, types, except]
// returns: [vehicleFound, distance]

private ["_x", "_pos", "_si", "_types", "_except", "_vehicleFound", "_dist", "_distFound", "_type", "_count"];

_pos = _this select 0;
_si = _this select 1;
_types = _this select 2;
_except = _this select 3;

_vehicleFound = objNull;
_distFound = 10000;

_type = 0;
_count = count unitDefs;
while "_type < _count" do
{
	if (((count _types == 0) || (_type in _types)) && (count ((unitDefs select _type) select udCrew) > 0)) then
	{
		if (_si == si0 || _si == siBoth) then 
		{
		  {
			  if (!(_x in _except) && alive _x && count (([driver _x] + [gunner _x] + [commander _x]) - [_x, objNull]) == 0) then
			  {
  			  _dist = ([_pos, getPos _x] call funcDistH);
          if (_dist < _distFound) then
          {
            _vehicleFound = _x;
            _distFound = _dist;
          };
			  };
		  } foreach ((unitMatrix select si0) select _type);
		};
    
		if (_si == si1 || _si == siBoth) then 
		{
		  {
			  if (!(_x in _except) && alive _x && count (([driver _x] + [gunner _x] + [commander _x]) - [_x, objNull]) == 0) then
			  {
  			  _dist = ([_pos, getPos _x] call funcDistH);
          if (_dist < _distFound) then
          {
            _vehicleFound = _x;
            _distFound = _dist;
          };
			  };
		  } foreach ((unitMatrix select si1) select _type);
		};

		if (_si == siRes || _si == siBoth) then 
		{
		  {
			  if (!(_x in _except) && alive _x && count (([driver _x] + [gunner _x] + [commander _x]) - [_x, objNull]) == 0) then
			  {
  			  _dist = ([_pos, getPos _x] call funcDistH);
          if (_dist < _distFound) then
          {
            _vehicleFound = _x;
            _distFound = _dist;
          };
			  };
		  } foreach ((unitMatrix select siRes) select _type);
		};

	};
	
	_type = _type + 1;
};

[_vehicleFound, _distFound]
