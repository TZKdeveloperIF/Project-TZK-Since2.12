// args: [pos]
// return: true/false

private ["_res"];

_res = false;
if ( (([_this select 0, [siRes], []] call funcGetClosestTown) select 1) > 500 ) then
{
  if ( !([_this select 0, 50] call funcPosNearSea) ) then
  {
    if ( !([_this select 0] call funcInForest) ) then
    {
      if ( ([_this select 0, 50, 10] call funcAreaFlat) ) then
      {
        _res = true;
      };
    };
  };
};
_res

