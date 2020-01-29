// args: [unit, si, gi]

private [ "_x", "_unit", "_si", "_gi", "_v", "_crew", "_iWatch", "_pos", "_posWatch", "_dir" ];

_unit = _this select 0;
_si = _this select 1;
_gi = _this select 2;

_iWatch = (call grpSetting) select aisWatch;
 
_v = vehicle _unit;
_pos = getPos _v;

_crew = [commander _v, gunner _v, driver _v];
_crew = _crew - [objNull];

if (_iWatch == 0) then
{
  _posWatch = [_pos, 200, 200] call funcGetRandomPos;
  { _x doWatch _posWatch } foreach _crew;
}
else
{
  _dir = 45*(_iWatch - 1);
  _posWatch = [(_pos select 0) + 200*(sin _dir), (_pos select 1) + 200*(cos _dir)];
  { _x doWatch _posWatch } foreach _crew;
}