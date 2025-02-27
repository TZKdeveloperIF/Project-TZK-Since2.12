// Actually this function works for soldiers as well. However it's designed long time ago.
// New design allows both player units or AI units uses custom equipment. We should use new
// rearm data design as well.
funcGetVehicleRearmData = funcGetRearmData;
funcGetSoldierRearmData = preprocessFile "Common\SQF\RearmData.sqf";
// cfg_todo: check all cases that using funcAutoRearmData. Does it necessary to judge
// whether the caller is soldier? Shall the rearm data be reconstructed? 
funcAutoRearmData = {
	_this call (if (_this == vehicle _this) then {funcGetSoldierRearmData} else {funcGetVehicleRearmData})
};