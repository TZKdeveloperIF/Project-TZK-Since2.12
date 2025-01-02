comment {======================================== AI GROUP SETTINGS ========================================} ;
comment {setting definition entry format: [ name, [s0, s1, ...], default ]} ;
aiSettingDefs = []; _type = 0;

aisPickupWaitTimeDefs = [0, 120, 240, 360, 480, 600, 720, 840, 960, 1080, 1800, 3600, 5940];
aisPickupWaitTimeDisp = []; {
	aisPickupWaitTimeDisp set [
		count aisPickupWaitTimeDisp, 
		call format [{"%2%1"}, "min", _x/60]
	]
} foreach aisPickupWaitTimeDefs; aisPickupWaitTimeDisp set [0, localize {TZK_LANG_DONT_USE}];
aisRallyPoint1 = _type;
aiSettingDefs set [_type, [
	format ["%1 %2 1#", localize {TZK_LANG_RALLY}, localize {TZK_LANG_POINT}]
	, [
		"None", "co0", "co1", "co2", "co3", "co4", "co5", "co6", "co7", "co8", "co9"
		, "co10", "co11", "co12", "co13", "co14", "co15", "co16", "co17", "co18", "co19"
	], 0
	, format ["%1 %2 and %3%4 %5"
		, localize {TZK_LANG_RALLY}, localize {TZK_LANG_POINT}
		, localize {TZK_LANG_PICKUP_WAIT}, ""
		, localize {TZK_LANG_SETTING}
	]
]];
_type = _type + 1;

aisPickupWait1 = _type;
aiSettingDefs set [_type, [format ["%1%2 1#", localize {TZK_LANG_PICKUP_WAIT}, ""], aisPickupWaitTimeDisp, 1, ""] ];
_type = _type + 1;

aisRallyPoint2 = _type;
aiSettingDefs set [_type, [
	format ["%1 %2 2#", localize {TZK_LANG_RALLY}, localize {TZK_LANG_POINT}]
	, [
		"None", "co0", "co1", "co2", "co3", "co4", "co5", "co6", "co7", "co8", "co9"
		, "co10", "co11", "co12", "co13", "co14", "co15", "co16", "co17", "co18", "co19"
	], 0, ""
]];
_type = _type + 1;

aisPickupWait2 = _type;
aiSettingDefs set [_type, [format ["%1%2 2#", localize {TZK_LANG_PICKUP_WAIT}, ""], aisPickupWaitTimeDisp, 0, ""] ];
_type = _type + 1;


aisKeepDefs = [
	0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 
	800, 1000, 1500, 2000, 5000, 6500, 10000, 35000, 95000
]; aisKeepDisp = [];
{ if (_x < 1000) then {aisKeepDisp set [ count aisKeepDisp, call format[{"%1%2"}, "$", _x, {} ] ]} } foreach aisKeepDefs;
aisKeepMin = _type;
aiSettingDefs set [_type, [
	format ["%1 %2", localize {TZK_LANG_KEEP_MONEY}, localize {TZK_LANG_AT_LEAST}], aisKeepDisp, 0, 
	format ["%1 %2/%3", localize {TZK_LANG_KEEP_MONEY}, localize {TZK_LANG_AT_LEAST}, localize {TZK_LANG_AT_MOST}]
]];
_type = _type + 1;
aisKeepDisp = []; {aisKeepDisp set [ count aisKeepDisp, call format[{"%1%2"}, "$", _x, {} ] ] } foreach aisKeepDefs;
aisKeepMax = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_KEEP_MONEY}, localize {TZK_LANG_AT_MOST}], aisKeepDisp, 2, ""] ];
_type = _type + 1;


aisBuy = _type;
aiSettingDefs set [_type, [format ["%1-%2", localize {TZK_LANG_AUTO}, localize {TZK_LANG_BUY}], [
	"none", "Soldier", "Sniper", "LAW/RPG", "AA-Infantry", "AA/Snipers",
	"AT I", "AT II", "AT III", "AT IV", "Soldier III", "Soldier IV",
	"MG I", "MG II", "MG III", "MG IV", "Sniper Heavy",
	"Armor-Heavy", "M2A2/BMP2-AT", "AA-Cannon", "Support Vehicles", "Planes",
	"Miners", "Mortar"
], 0, format ["%1-%2", localize {TZK_LANG_AUTO}, localize {TZK_LANG_BUY}]] ];
if bool_TZK_SEMod_Mode then {
	aiSettingDefs set [_type, [format ["%1-%2", localize {TZK_LANG_AUTO}, localize {TZK_LANG_BUY}], [
		"none", "Soldier", "MG/Snipers", "LAW/RPG-Infantry", "LAW/RPG+M21/SVD", "LAW/RPG-Mixed", "AT-Infantry", "Heavy AT-Infantry", 
		"AT+M21/SVD", "AT-mixed", "AA-Infantry", "AA/Snipers", "AA/AT-Sniper", "Infantry-Mixed", "HMMWV/BRDM Mixed", "HMMWV/BRDM-AT", 
		"Armor Mixed", "T72/M60", "Armor-Heavy", "Challenger2/T90MS", "Tank Destroyers", "Armor-Heavy and TD", "T72/M60 and TD", 
		"M2A2/BMP2-AT", "Warrior80/BMP3", "AA-Heavy", "AA-Vehicles", "Saboteurs", "Miners", "Transp-Land", "Transp-Air", 
		"Support Vehicles", "Planes", "AH1/Ka52", "AH64/Mi28"
	], 0, format ["%1-%2", localize {TZK_LANG_AUTO}, localize {TZK_LANG_BUY}]] ];
};
_type = _type + 1;

comment {"4 history setting items"} ;
_type = _type + 4;

aisWatch = _type;
aiSettingDefs set [_type, [localize {TZK_LANG_WATCH}, ["Scan", "N", "NE", "E", "SE", "S", "SW", "W", "NW"], 0, localize {TZK_LANG_WATCH}] ];
_type = _type + 1;
aisRespawn = _type;
aiSettingDefs set [_type, [localize {TZK_LANG_RESPAWN}, [
	localize {TZK_LANG_DEFAULT}, "1# Command", "2# Command", "3# Command", "4# Command", "1# Barrack", "2# Barrack", "3# Barrack", "4# Barrack", 
	"1# Light", "2# Light", "3# Light", "4# Light", "1# Heavy", "2# Heavy", "3# Heavy", "4# Heavy", "1# Air", "2# Air", 
	"3# Air", "4# Air"
], 0, localize {TZK_LANG_RESPAWN}] ];
_type = _type + 1;
aisCombatMode = _type;
aisCombatModeDefs = [ "YELLOW", "RED", "GREEN", "BLUE" ];
aiSettingDefs set [_type, [
	format ["%1%2", localize {TZK_LANG_COMBAT}, localize {TZK_LANG_MODE}], [
		localize {TZK_LANG_DISENGAGE}
		, format ["%1%2", localize {TZK_LANG_ENGAGE}, localize {TZK_LANG_AT_WILL}]
		, format ["%1", localize {TZK_LANG_HOLD_FIRE}]
		, format ["%1%2", localize {TZK_LANG_NEVER}, localize {TZK_LANG_FIRE}]
	], 0, format ["%1%2", localize {TZK_LANG_COMBAT}, localize {TZK_LANG_MODE}]
]];
_type = _type + 1;
aisBehaviour = _type;
aisBehaviourDefs = [ localize {TZK_LANG_AWARE}, localize {TZK_LANG_COMBAT}, localize {TZK_LANG_STEALTH}, localize {TZK_LANG_CARELESS} ];
aiSettingDefs set [_type, [localize {TZK_LANG_BEHAVIOUR}, aisBehaviourDefs, 0, localize {TZK_LANG_BEHAVIOUR}] ];
_type = _type + 1;


aisAutoSupportRangeDefs = [100, 150, 200, 300, 400, 500, 800, 1000, 1200, 1500]; aisAutoSupportRange = [];
{
	aisAutoSupportRange set [count aisAutoSupportRange, call format [{"%2%1"}, "m", _x]]
} foreach aisAutoSupportRangeDefs;
aisAutoRepair = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_REPAIR}, localize {TZK_LANG_PLACE_NOUN}]
	, [format ["%1 %2 %3", localize {TZK_LANG_AT}, localize {TZK_LANG_BOTH}, localize {TZK_LANG_SHORT_SUPPORT}]
		, format ["%1 %2 %3", localize {TZK_LANG_AT}, localize {TZK_LANG_OUR}, localize {TZK_LANG_SHORT_SUPPORT}]
		, localize {TZK_LANG_DONT_USE}
	], 0, format ["%1%2", localize {TZK_LANG_REPAIR}, localize {TZK_LANG_PLACE_NOUN}]
]];
_type = _type + 1;
aisAutoRepairRange = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_REPAIR}, localize {TZK_LANG_RANGE}]
	, aisAutoSupportRange, 9, format ["%1%2", localize {TZK_LANG_REPAIR}, localize {TZK_LANG_RANGE}]] ];
_type = _type + 1;
aisAutoRepairDamage = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_REPAIR}, localize {TZK_LANG_RATE}], [
	"0%","5%","10%","15%","20%","25%","30%","35%","40%","45%",
	"50%","55%","60%","65%","70%","75%","80%","85%","90%","95%"
], 4, format ["%1 %2", localize {TZK_LANG_REPAIR}, localize {TZK_LANG_RATE}]] ];
_type = _type + 1;

aisAutoRearm = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_REARM}, localize {TZK_LANG_PLACE_NOUN}]
	, [format ["%1 %2 %3", localize {TZK_LANG_AT}, localize {TZK_LANG_BOTH}, localize {TZK_LANG_SHORT_SUPPORT}]
		, format ["%1 %2 %3", localize {TZK_LANG_AT}, localize {TZK_LANG_OUR}, localize {TZK_LANG_SHORT_SUPPORT}]
		, localize {TZK_LANG_DONT_USE}
	], 0, format ["%1%2", localize {TZK_LANG_REARM}, localize {TZK_LANG_PLACE_NOUN}]] ];
_type = _type + 1;
aisAutoRearmRange = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_REARM}, localize {TZK_LANG_RANGE}]
	, aisAutoSupportRange, 9, format ["%1%2", localize {TZK_LANG_REARM}, localize {TZK_LANG_RANGE}]] ];
_type = _type + 1;
aisAutoRearmSabot = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_REARM}, localize {TZK_LANG_SABOT}]
	, ["0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15"], 7
	, format ["%1 %2", localize {TZK_LANG_REARM}, localize {TZK_LANG_SABOT}]
]];
_type = _type + 1;


aisSuperior = _type;
aiSettingDefs set [_type, [localize {TZK_LANG_SUPERIOR}, [localize {TZK_LANG_COMMANDER}] + callsigns, 0, localize {TZK_LANG_SUPERIOR}] ];
_type = _type + 1;

aisGroupSize = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_GROUP}, localize {TZK_LANG_SIZE}]
	, [localize {TZK_LANG_DEFAULT},"1","2","3","4","5","6","7","8","9","10","11","12"], 0
	, format ["%1 %2", localize {TZK_LANG_GROUP}, localize {TZK_LANG_SIZE}]
]];
_type = _type + 1;


aisLockOrder = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_LOCK}, localize {TZK_LANG_ORDER}]
	, [localize {TZK_LANG_UNLOCK}, localize {TZK_LANG_LOCK}], 0
	, format ["%1 %2\%3", localize {TZK_LANG_LOCK}, localize {TZK_LANG_ORDER}, localize {TZK_LANG_SETTING}]
]];
_type = _type + 1;
aisLockSetting = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_LOCK}, localize {TZK_LANG_SETTING}]
	, [localize {TZK_LANG_UNLOCK}, localize {TZK_LANG_LOCK}], 0, ""
]];
_type = _type + 1;

aisMoveMode = _type;
aiSettingDefs set [_type, [format ["%1 %2", localize {TZK_LANG_MOVE}, localize {TZK_LANG_MODE}]
	, [localize {TZK_LANG_DEFAULT}, localize {TZK_LANG_STEP_BY_STEP}], 0
	, format ["%1 %2", localize {TZK_LANG_MOVE}, localize {TZK_LANG_MODE}]
]];
_type = _type + 1;


_default = [];
{ _default set [count _default, _x select 2] } foreach aiSettingDefs;

comment {current setting entry format: [orderID, orderType, [param 0, param 1, ...]]} ;
aiSetting = [ [], [] ];
_si = si0; _list = aiSetting select _si; { _list set [ count _list, +_default ] } foreach (groupMatrix select _si);
_si = si1; _list = aiSetting select _si; { _list set [ count _list, +_default ] } foreach (groupMatrix select _si);
comment {Fix error definition in aiSetting} ;
comment {todo: what error?} ;
{
	_list = aiSetting select _x; _list resize (count (groupMatrix select _x));
}
forEach [si0, si1];



comment {======================================== AI GROUP ORDERS ========================================} ;
comment {order def entry format: [name, params, script]} ;
comment {order def param format: [name, countFunc, toTextFunc]} ;
_dirIndexToText = {["All", "N", "NE", "E", "SE", "S", "SW", "W", "NW"] select _this};
_coCnt = {count (wpCO select siPlayer)};
_coDispStr = {
	_posRelTown = (wpCO select siPlayer select _this) call funcCalcTownDirDistFromPos; 
	format [{co%1 %2}, _this, [_posRelTown, {}] select (wpCO select siPlayer select _this select 0 == -1)]
};
_distByOffset = "format [{format [{%3m}, (_this + %2) * %1]}, _this select 0, _this select 1, {%1}]";

orderDefs = []; _type = 0;

orderTakeTowns = _type;
orderDefs set [_type, [localize {TZK_LANG_TAKE_TOWNS}, [], "Server\Order\TakeTowns.sqs"] ];
_type = _type + 1;

orderTakeHoldTowns = _type;
_param0 = ["Hold Distance", "5", {format [{<%1m}, 500* (_this + 1)]}];
_param1 = ["Hold \nTime", "10", {format [{%1min}, 5* (_this + 1)]}];
orderDefs set [_type, [localize {TZK_LANG_TAKE_HOLD_TOWNS}, [_param0, _param1], "Server\Order\TakeHoldTowns.sqs"] ];
_type = _type + 1;

orderHoldTown = _type;
_param0 = [ "Town", "count towns", "towns select _this select 1" ];
_param1 = [ "Defend \nDistance", "10", [50, 1] call _distByOffset];
_param2 = [ "Defend \nDirection", "9", _dirIndexToText ];
orderDefs set [_type, [localize {TZK_LANG_HOLD_TOWNS}, [_param0, _param1, _param2], "Server\Order\HoldTown.sqs"] ];
_type = _type + 1;

orderGuardArea = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Defend \nDistance", "10", [50, 1] call _distByOffset];
_param2 = [ "Defend \nDirection", "9", _dirIndexToText ];
orderDefs set [_type, [localize {TZK_LANG_GUARD_AREA}, [_param0, _param1, _param2], "Server\Order\GuardArea.sqs"] ];
_type = _type + 1;

orderGuardLine = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "\nWaypoint", _coCnt, _coDispStr];
orderDefs set [_type, [localize {TZK_LANG_GUARD_LINE}, [_param0, _param1], "Server\Order\GuardLine.sqs"] ];
_type = _type + 1;

orderPatrolArea = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Patrol \nRadius", "10", [50, 1] call _distByOffset];
_script = "Server\Order\PatrolArea.sqs";
if bool_TZK_DEV_FPS then {_script = ""};
orderDefs set [_type, [localize {TZK_LANG_PATROL_AREA}, [_param0, _param1], _script] ];
_type = _type + 1;

orderPatrolLine = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "\nWaypoint", _coCnt, _coDispStr];
orderDefs set [_type, [localize {TZK_LANG_PATROL_LINE}, [_param0, _param1], "Server\Order\PatrolLine.sqs"] ];
_type = _type + 1;

orderAdvance = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Meters/\nminute", "10", [100, 1] call _distByOffset];
orderDefs set [_type, [localize {TZK_LANG_ADVANCE}, [_param0, _param1], "Server\Order\Advance.sqs"] ];
_type = _type + 1;

orderTransportDuty = _type;
_param0 = [ "Pickup Pos", _coCnt, _coDispStr];
_param1 = [ "Eject \nPos", _coCnt, _coDispStr];
_param2 = [ "Eject \nDistance", "10", [100, 1] call _distByOffset];
orderDefs set [_type, [localize {TZK_LANG_TRANSPORT_DUTY}, [_param0, _param1, _param2], "Server\Order\TransportDuty.sqs"] ];
_type = _type + 1;

orderMineLine = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "\nWaypoint", _coCnt, _coDispStr];
orderDefs set [_type, [localize {TZK_LANG_MINE_LINE}, [_param0, _param1], "Server\Order\MineLine.sqs"] ];
_type = _type + 1;

orderDisableMines = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
orderDefs set [_type, [localize {TZK_LANG_DISABLE_MINES}, [_param0], "Server\Order\DisableMines.sqs"] ];
_type = _type + 1;

orderHalt = _type;
orderDefs set [_type, [localize {TZK_LANG_HALT}, [], "Server\Order\Halt.sqs"] ];
_type = _type + 1;

comment {order entry format: [orderID, orderType, [param 0, param 1, ...]]} ;
orderMatrix = [ [], [] ];
_si = si0; _gi = 0; { (orderMatrix select _si) set [ _gi, [0, orderTakeHoldTowns, [3, 1]] ]; _gi = _gi + 1 } foreach (groupMatrix select _si);
_si = si1; _gi = 0; { (orderMatrix select _si) set [ _gi, [0, orderTakeHoldTowns, [3, 1]] ]; _gi = _gi + 1 } foreach (groupMatrix select _si);


call preprocessFile "impl\AI_Group_Option.sqf";