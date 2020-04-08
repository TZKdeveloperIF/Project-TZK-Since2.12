// arguments: [pos, si, [ti, ...]]
// returns: [ti, distance]

private ["_x", "_distMin", "_tiNear", "_pos", "_dist", "_ti"];

_distMin = 100000;
_tiNear = -1;
_ti = 0;

{
	_pos = getPos (_x select tdFlag);
	if ( !(_ti in (_this select 2)) && (_this select 1) != (_x select tdSide) ) then 
	{
	  _dist = [_pos, _this select 0] call funcDistH;
    if ( _dist < _distMin ) then
    {
      _tiNear = _ti;
      _distMin = _dist;
    };
  };
	_ti = _ti + 1;
} forEach towns;

[_tiNear, _distMin]