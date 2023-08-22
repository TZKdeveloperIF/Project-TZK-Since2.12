
comment {
	AI GROUP SETTINGS
	setting definition entry format: [ name, [s0, s1, ...], default ]
};
aiSettingDefs = []; _type = 0;

aisPickupWaitTimeDefs = [0, 120, 240, 360, 480, 600, 720, 840, 960, 1080, 1800, 3600, 5940];
aisPickupWaitTimeDisp = []; {
	aisPickupWaitTimeDisp set [
		count aisPickupWaitTimeDisp, 
		call format [{"%2%1"}, "min", _x/60]
	]
} foreach aisPickupWaitTimeDefs; aisPickupWaitTimeDisp set [0, "Don't use"];
aisRallyPoint1 = _type;
aiSettingDefs set [_type, [
	"Rally Point 1#", 
	["None", "co0", "co1", "co2", "co3", "co4", "co5", "co6", "co7", "co8", "co9", 
	"co10", "co11", "co12", "co13", "co14", "co15", "co16", "co17", "co18", "co19"], 
	0, 
	"Rally Points and Pickup Wait Setting"
]];
_type = _type + 1;

aisPickupWait1 = _type;
aiSettingDefs set [_type, ["Pickup Wait 1#", aisPickupWaitTimeDisp, 1, ""] ];
_type = _type + 1;

aisRallyPoint2 = _type;
aiSettingDefs set [_type, [
	"Rally Point 2#", 
	["None", "co0", "co1", "co2", "co3", "co4", "co5", "co6", "co7", "co8", "co9", 
	"co10", "co11", "co12", "co13", "co14", "co15", "co16", "co17", "co18", "co19"], 
	0, 
	""
]];
_type = _type + 1;

aisPickupWait2 = _type;
aiSettingDefs set [_type, ["Pickup Wait 2#", aisPickupWaitTimeDisp, 0, ""] ];
_type = _type + 1;


aisKeepDefs = [
	0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 
	800, 1000, 1500, 2000, 5000, 6500, 10000, 35000, 95000
]; aisKeepDisp = [];
{ if (_x < 1000) then {aisKeepDisp set [ count aisKeepDisp, call format[{"%1%2"}, "$", _x, {} ] ]} } foreach aisKeepDefs;
aisKeepMin = _type;
aiSettingDefs set [_type, ["Keep At Least", aisKeepDisp, 0, "            Keep At Most"] ];
_type = _type + 1;
aisKeepDisp = []; {aisKeepDisp set [ count aisKeepDisp, call format[{"%1%2"}, "$", _x, {} ] ] } foreach aisKeepDefs;
aisKeepMax = _type;
aiSettingDefs set [_type, ["Keep At Most", aisKeepDisp, 2, ""] ];
_type = _type + 1;


aisBuy = _type;
aiSettingDefs set [_type, ["Auto-Buy", [
	"none", "Soldier", "Sniper", "LAW/RPG", "AA-Infantry", "AA/Snipers",
	"AT I", "AT II", "AT III", "AT IV", "Soldier III", "Soldier IV",
	"MG I", "MG II", "MG III", "MG IV", "Sniper Heavy",
	"Armor-Heavy", "M2A2/BMP2-AT", "AA-Cannon", "Support Vehicles", "Planes",
	"Miners", "Mortar"
], 0, "Auto-Buy"] ];
if bool_TZK_SEMod_Mode then {
	aiSettingDefs set [_type, ["Auto-Buy", [
		"none", "Soldier", "MG/Snipers", "LAW/RPG-Infantry", "LAW/RPG+M21/SVD", "LAW/RPG-Mixed", "AT-Infantry", "Heavy AT-Infantry", 
		"AT+M21/SVD", "AT-mixed", "AA-Infantry", "AA/Snipers", "AA/AT-Sniper", "Infantry-Mixed", "HMMWV/BRDM Mixed", "HMMWV/BRDM-AT", 
		"Armor Mixed", "T72/M60", "Armor-Heavy", "Challenger2/T90MS", "Tank Destroyers", "Armor-Heavy and TD", "T72/M60 and TD", 
		"M2A2/BMP2-AT", "Warrior80/BMP3", "AA-Heavy", "AA-Vehicles", "Saboteurs", "Miners", "Transp-Land", "Transp-Air", 
		"Support Vehicles", "Planes", "AH1/Ka52", "AH64/Mi28"
	], 0, "Auto-Buy"] ];
};
_type = _type + 1;

comment "todo: remove this part";
BuyFactory = ["No Struct", "1# Barrack", "2# Barrack", "3# Barrack", "4# Barrack", "1# Heavy", "2# Heavy", "3# Heavy", "4# Heavy" ];
aisBuyFactory1 = _type;
aiSettingDefs set [_type, ["Buy Factory 1", BuyFactory, 0, "Buy Factory 1, 2"] ];
_type = _type + 1;
aisBuyFactory2 = _type;
aiSettingDefs set [_type, ["Buy Factory 2", BuyFactory, 0, ""] ];
_type = _type + 1;
aisBuyFactory3 = _type;
aiSettingDefs set [_type, ["Buy Factory 3", BuyFactory, 0, "Buy Factory 3, 4"] ];
_type = _type + 1;
aisBuyFactory4 = _type;
aiSettingDefs set [_type, ["Buy Factory 4", BuyFactory, 0, ""] ];
_type = _type + 1;


aisWatch = _type;
aiSettingDefs set [_type, ["Watch", ["Scan", "N", "NE", "E", "SE", "S", "SW", "W", "NW"], 0, "Watch"] ];
_type = _type + 1;
aisRespawn = _type;
aiSettingDefs set [_type, ["Respawn", [
	"Default", "1# Command", "2# Command", "3# Command", "4# Command", "1# Barrack", "2# Barrack", "3# Barrack", "4# Barrack", 
	"1# Light", "2# Light", "3# Light", "4# Light", "1# Heavy", "2# Heavy", "3# Heavy", "4# Heavy", "1# Air", "2# Air", 
	"3# Air", "4# Air"
], 0, "Respawn"] ];
_type = _type + 1;
aisCombatMode = _type;
aisCombatModeDefs = [ "YELLOW", "RED", "GREEN", "BLUE" ];
aiSettingDefs set [_type, ["CombatMode", ["Disengage", "Engage@Will", "HoldFire", "NeverFire"], 0, "CombatMode"] ];
_type = _type + 1;
aisBehaviour = _type;
aisBehaviourDefs = [ "AWARE", "COMBAT", "STEALTH", "CARELESS" ];
aiSettingDefs set [_type, ["Behaviour", aisBehaviourDefs, 0, "Behaviour"] ];
_type = _type + 1;


aisAutoSupportRangeDefs = [100, 150, 200, 300, 400, 500, 800, 1000, 1200, 1500]; aisAutoSupportRange = [];
{
	aisAutoSupportRange set [count aisAutoSupportRange, call format [{"%2%1"}, "m", _x]]
} foreach aisAutoSupportRangeDefs;
aisAutoRepair = _type;
aiSettingDefs set [_type, ["Repair Place", ["At Both Sup", "At Our Sup", "Don't Use"], 0, "RepairPlace"] ];
_type = _type + 1;
aisAutoRepairRange = _type;
aiSettingDefs set [_type, ["Repair Range", aisAutoSupportRange, 9, "RepairRange"] ];
_type = _type + 1;
aisAutoRepairDamage = _type;
aiSettingDefs set [_type, ["Repair Rate", [
	"0%","5%","10%","15%","20%","25%","30%","35%","40%","45%",
	"50%","55%","60%","65%","70%","75%","80%","85%","90%","95%"
], 4, "Repair Rate"] ];
_type = _type + 1;

aisAutoRearm = _type;
aiSettingDefs set [_type, ["Rearm Place", ["At Both Sup", "At Our Sup", "Don't Use"], 0, "Rearm Place"] ];
_type = _type + 1;
aisAutoRearmRange = _type;
aiSettingDefs set [_type, ["Rearm Range", aisAutoSupportRange, 9, "RearmRange"] ];
_type = _type + 1;
aisAutoRearmSabot = _type;
aiSettingDefs set [_type, ["Rearm Sabot", ["0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15"], 7, "Rearm Sabot"] ];
_type = _type + 1;


aisSuperior = _type;
aiSettingDefs set [_type, ["Superior", ["Commander"] + callsigns, 0, "Superior"] ];
_type = _type + 1;

aisGroupSize = _type;
aiSettingDefs set [_type, ["Group Size", ["Default","1","2","3","4","5","6","7","8","9","10","11","12"], 0, "Group Size"] ];
_type = _type + 1;


aisLockOrder = _type;
aiSettingDefs set [_type, ["Lock Order", ["Unlock", "Lock"], 0, "Lock Order\Setting"] ];
_type = _type + 1;
aisLockSetting = _type;
aiSettingDefs set [_type, ["Lock Setting", ["Unlock", "Lock"], 0, ""] ];
_type = _type + 1;

aisMoveMode = _type;
aiSettingDefs set [_type, ["Move Mode", ["Default", "StepByStep"], 0, "Move Mode"] ];
_type = _type + 1;


_default = [];
{ _default set [count _default, _x select 2] } foreach aiSettingDefs;

comment { current setting entry format: [orderID, orderType, [param 0, param 1, ...]]; };
aiSetting = [ [], [] ];
_si = si0; _list = aiSetting select _si; { _list set [ count _list, +_default ] } foreach (groupMatrix select _si);
_si = si1; _list = aiSetting select _si; { _list set [ count _list, +_default ] } foreach (groupMatrix select _si);

comment { AI Auto-Buy Factory Selected by Setting. Format: [ [Factory1], [Factory2], [Factory3], [Factory4] ]; };
comment { abandoned. maybe use it in next version; };
comment { aiAutoBuyFactory = [ [], [] ]; };
comment { _si = si0; _list = aiAutoBuyFactory select _si; { _list set [ count _list, [ [objNull, -1], [objNull, -1], [objNull, -1], [objNull, -1] ] ] } foreach (groupMatrix select _si); };
comment { _si = si1; _list = aiAutoBuyFactory select _si; { _list set [ count _list, [ [objNull, -1], [objNull, -1], [objNull, -1], [objNull, -1] ] ] } foreach (groupMatrix select _si); };


comment { AI GROUP ORDERS; };
comment { order def entry format: [name, params, script]; };
comment { order def param format: [name, countFunc, toTextFunc]; };
_dirIndexToText = {["All", "N", "NE", "E", "SE", "S", "SW", "W", "NW"] select _this};
_coCnt = {count (wpCO select siPlayer)};
_coDispStr = {
	_posRelTown = (wpCO select siPlayer select _this) call funcCalcTownDirDistFromPos; 
	format [{co%1 %2}, _this, [_posRelTown, {}] select (wpCO select siPlayer select _this select 0 == -1)]
};
_distByOffset = "format [{format [{%3m}, (_this + %2) * %1]}, _this select 0, _this select 1, {%1}]";

orderDefs = []; _type = 0;

orderTakeTowns = _type;
orderDefs set [_type, ["Take Towns", [], "Server\Order\TakeTowns.sqs"] ];
_type = _type + 1;

orderTakeHoldTowns = _type;
_param0 = ["Hold Distance", "5", {format [{<%1m}, 500* (_this + 1)]}];
_param1 = ["Hold Time", "10", {format [{%1min}, 5* (_this + 1)]}];
orderDefs set [_type, ["Take Hold Towns", [_param0, _param1], "Server\Order\TakeHoldTowns.sqs"] ];
_type = _type + 1;

orderHoldTown = _type;
_param0 = [ "Town", "count towns", "towns select _this select 1" ];
_param1 = [ "Defend Distance", "10", [50, 1] call _distByOffset];
_param2 = [ "Defend Direction", "9", _dirIndexToText ];
orderDefs set [_type, ["Hold Town", [_param0, _param1, _param2], "Server\Order\HoldTown.sqs"] ];
_type = _type + 1;

orderGuardArea = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Defend Distance", "10", [50, 1] call _distByOffset];
_param2 = [ "Defend Direction", "9", _dirIndexToText ];
orderDefs set [_type, ["Guard Area", [_param0, _param1, _param2], "Server\Order\GuardArea.sqs"] ];
_type = _type + 1;

orderGuardLine = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Waypoint", _coCnt, _coDispStr];
orderDefs set [_type, ["Guard Line", [_param0, _param1], "Server\Order\GuardLine.sqs"] ];
_type = _type + 1;

orderPatrolArea = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Patrol Radius", "10", [50, 1] call _distByOffset];
_script = "Server\Order\PatrolArea.sqs";
if bool_TZK_DEV_FPS then {_script = ""};
orderDefs set [_type, ["Patrol Area", [_param0, _param1], _script] ];
_type = _type + 1;

orderPatrolLine = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Waypoint", _coCnt, _coDispStr];
orderDefs set [_type, ["Patrol Line", [_param0, _param1], "Server\Order\PatrolLine.sqs"] ];
_type = _type + 1;

orderAdvance = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Meters/minute", "10", [100, 1] call _distByOffset];
orderDefs set [_type, ["Advance", [_param0, _param1], "Server\Order\Advance.sqs"] ];
_type = _type + 1;

orderTransportDuty = _type;
_param0 = [ "Pickup Pos", _coCnt, _coDispStr];
_param1 = [ "Eject Pos", _coCnt, _coDispStr];
_param2 = [ "Eject Distance", "10", [100, 1] call _distByOffset];
orderDefs set [_type, ["Transport Duty", [_param0, _param1, _param2], "Server\Order\TransportDuty.sqs"] ];
_type = _type + 1;

orderMineLine = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Waypoint", _coCnt, _coDispStr];
orderDefs set [_type, ["Mine Line", [_param0, _param1], "Server\Order\MineLine.sqs"] ];
_type = _type + 1;

orderDisableMines = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
orderDefs set [_type, ["Disable Mines", [_param0], "Server\Order\DisableMines.sqs"] ];
_type = _type + 1;

orderHalt = _type;
orderDefs set [_type, ["Halt", [], "Server\Order\Halt.sqs"] ];
_type = _type + 1;

comment { order entry format: [orderID, orderType, [param 0, param 1, ...]]; };
orderMatrix = [ [], [] ];
_si = si0; _gi = 0; { (orderMatrix select _si) set [ _gi, [0, orderTakeHoldTowns, [3, 1]] ]; _gi = _gi + 1 } foreach (groupMatrix select _si);
_si = si1; _gi = 0; { (orderMatrix select _si) set [ _gi, [0, orderTakeHoldTowns, [3, 1]] ]; _gi = _gi + 1 } foreach (groupMatrix select _si);


call preprocessFile "impl\AI_Order_Server.sqf";