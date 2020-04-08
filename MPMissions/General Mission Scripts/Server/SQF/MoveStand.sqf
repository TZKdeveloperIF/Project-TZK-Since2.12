// args: [unit, pos]
// return: none
private [ "_x", "_unit", "_pos", "_v", "_crew" ];

_unit = _this select 0;
_pos = _this select 1;

_v = vehicle _unit;

if ( _unit == _v ) then
{
  _unit setUnitPos "UP";
  _unit doMove _pos;
}
else
{
  _crew = [commander _v, gunner _v, driver _v];
  _crew = _crew - [objNull];

  { if (alive _x && local _x) then { _x doMove _pos } } foreach _crew;
}
