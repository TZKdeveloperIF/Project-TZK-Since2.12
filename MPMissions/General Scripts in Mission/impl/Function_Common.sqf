// The "GetRearmData.sqf" is designed long time ago. In the old days it works for soldiers too, 
// but now we should use new rearm data design, since both player units and AI units can use 
// custom equipment
// arguments: vehicle
// return: [ [wpn, ...], [mag, ...] ] ([[],[]] if not found)
funcGetVehicleRearmData = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetRearmData.sqf";

funcGetSoldierRearmData = preprocessFile "Common\SQF\RearmData.sqf";
// cfg_todo: check all cases that using funcAutoRearmData. Does it necessary to judge
// whether the caller is soldier? Shall the rearm data be reconstructed? 
funcAutoRearmData = {
	_this call (if (_this == vehicle _this) then {funcGetSoldierRearmData} else {funcGetVehicleRearmData})
};