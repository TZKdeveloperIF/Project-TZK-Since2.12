// args: [pos, radius, max]
// return: true/false

private [ "_x", "_pos", "_radius", "_poses", "_v", "_res", "_zMin", "_zMax", "_z" ];

_pos = [(_this select 0) select 0, (_this select 0) select 1];
_radius = _this select 1;
// if (_radius<50) then { _radius = 50 };

_poses = [_pos];
{ _v = [[0,_radius], _x] call funcVectorRot; _poses set [count _poses, [_pos, _v] call funcVectorAdd ] } foreach [0, 45, 90, 135, 180, 225, 270, 315];

_res = false;

_zMin = 1000;
_zMax = -1000;
{
  _z = _x call funcHASL;
  if ( _z < _zMin ) then { _zMin = _z };
  if ( _z > _zMax ) then { _zMax = _z };
} foreach _poses;

if ( (_zMax - _zMin) < (_this select 2) ) then { _res = true };

_res

