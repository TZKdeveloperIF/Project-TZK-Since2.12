// args: [pos]
// return: true/false

private [ "_x", "_pos", "_dist", "_poses", "_v", "_res", "_forest" ];

_pos = [(_this select 0) select 0, (_this select 0) select 1];

_poses = [_pos];
_dist = 50;
{ _v = [[0,_dist], _x] call funcVectorRot; _poses set [count _poses, [_pos, _v] call funcVectorAdd ] } foreach [0, 45, 90, 135, 180, 225, 270, 315];

_res = false;

if ( (([_pos, [siRes], []] call funcGetClosestTown) select 1) > 500 ) then
{
  if ( !([_pos, 200] call funcPosNearSea)) then
  {
    if ( ([_pos, 50, 10] call funcAreaFlat) ) then
    {
      _forest = false;
      {
        if ( ([_x] call funcInForest) ) then
        {
          _forest = true;
        };
      } foreach _poses;
      
      if (!_forest) then
      {
        _res = true;
      };
    };
  };
};
_res
