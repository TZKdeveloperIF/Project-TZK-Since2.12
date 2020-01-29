// args: [unit, pos]
// return: none
private [ "_x", "_unit", "_pos", "_v", "_crew" ];

_unit = _this select 0;
_pos = _this select 1;

_v = vehicle _unit;

if ( _unit == _v ) then
{
  if ( ([getPos _unit, _pos] call funcDistH) > 500 ) then
  {
    _unit setUnitPos "UP";
  }
  else
  {
    _unit setUnitPos "AUTO";
  };
  _unit doMove _pos;
}
else
{
  _crew = [commander _v, gunner _v, driver _v];
  _crew = _crew - [objNull];

  { if (alive _x && local _x) then { _x doMove _pos } } foreach _crew;
};
