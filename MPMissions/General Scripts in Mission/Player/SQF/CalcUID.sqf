// args: [unit, si, gi]
// Need to be compatible with old design
private [{_ret}];
_ret = (_this select 0) call preprocessFile "Util\UnitIdInGroup.sqf";
if (0 == _ret) then {_ret = 13};
_ret