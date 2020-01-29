// args: [pos, dist]
// return: true/false

private [ "_x", "_pos", "_dist", "_result", "_poses", "_v" ];

_pos = [(_this select 0) select 0, (_this select 0) select 1];
_dist = _this select 1;

_result = false;

if (_dist > 0) then
{
  _poses = [_pos];
  { _v = [[0,_dist], _x] call funcVectorRot; _poses set [count _poses, [_pos, _v] call funcVectorAdd ] } foreach [0, 45, 90, 135, 180, 225, 270, 315];

  { if ((_x call funcHASL) < 5) then { _result = true } } foreach _poses;
}
else
{
  _result = ((_pos call funcHASL) < 5);
};

_result