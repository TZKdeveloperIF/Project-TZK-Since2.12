
// AI GROUP SETTINGS;
// setting definition entry format: [ name, [s0, s1, ...], default ];
aiSettingDefs = []; _type = 0;

aisPickupWaitTimeDefs = [0, 120, 240, 360, 480, 600, 720, 840, 960, 1080, 1800, 3600, 5940];
aisPickupWaitTimeDisp = []; {
	aisPickupWaitTimeDisp set [
		count aisPickupWaitTimeDisp, 
		call format [{%3%2%1%3}, "min", _x/60, ""]
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


aisKeepDefs = [0, 50, 100, 150, 200, 250, 300, 350, 400, 500, 600, 800, 1000, 1500, 2000, 5000, 6500, 10000, 35000, 95000]; aisKeepDisp = [];
{ if (_x < 1000) then {aisKeepDisp set [ count aisKeepDisp, call format[{%3%1%2%3}, "$", _x, {} ] ]} } foreach aisKeepDefs;
aisKeepMin = _type;
aiSettingDefs set [_type, ["Keep At Least", aisKeepDisp, 0, "Keep At Least/At Most"] ];
_type = _type + 1;
aisKeepDisp = []; {aisKeepDisp set [ count aisKeepDisp, call format[{%3%1%2%3}, "$", _x, {} ] ] } foreach aisKeepDefs;
aisKeepMax = _type;
aiSettingDefs set [_type, ["Keep At Most", aisKeepDisp, 2, ""] ];
_type = _type + 1;


aisBuy = _type;
aiSettingDefs set [_type, ["Auto-Buy", [
	"none", "Soldier", "MG/Snipers", "LAW/RPG-Infantry", "LAW/RPG+M21/SVD", "LAW/RPG-Mixed", "AT-Infantry", "AT+M21/SVD", "AT-mixed", 
	"AA-Infantry", "AA/Snipers", "AA/AT-Sniper", "Infantry-Mixed", "Armor Mixed", "T72/M60", "Armor-Heavy", "M2A2/BMP2-AT", "AA-Heavy", 
	"AA-Vehicles", "Saboteurs", "Miners", "Transp-Land", "Transp-Air", "Support Vehicles", "Planes", "Mortar", "M82/KSVK"
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
{aisAutoSupportRange set [ count aisAutoSupportRange, call format[{%3%2%1%3}, "m", _x, {} ] ] } foreach aisAutoSupportRangeDefs;
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

// current setting entry format: [orderID, orderType, [param 0, param 1, ...]];
aiSetting = [ [], [] ];
_si = si0; _list = aiSetting select _si; { _list set [ count _list, +_default ] } foreach (groupMatrix select _si);
_si = si1; _list = aiSetting select _si; { _list set [ count _list, +_default ] } foreach (groupMatrix select _si);
aiBuying = [ [], [] ];
_si = si0; _list = aiSetting select _si; { _list set [ count _list, [0,0,0,0] ] } foreach (groupMatrix select _si);
_si = si1; _list = aiSetting select _si; { _list set [ count _list, [0,0,0,0] ] } foreach (groupMatrix select _si);

// AI Auto-Buy Factory Selected by Setting. Format: [ [Factory1], [Factory2], [Factory3], [Factory4] ];
// abandoned. maybe use it in next version;
// aiAutoBuyFactory = [ [], [] ];
// _si = si0; _list = aiAutoBuyFactory select _si; { _list set [ count _list, [ [objNull, -1], [objNull, -1], [objNull, -1], [objNull, -1] ] ] } foreach (groupMatrix select _si);
// _si = si1; _list = aiAutoBuyFactory select _si; { _list set [ count _list, [ [objNull, -1], [objNull, -1], [objNull, -1], [objNull, -1] ] ] } foreach (groupMatrix select _si);


// AI GROUP ORDERS;
// order def entry format: [name, params, script];
// order def param format: [name, countFunc, toTextFunc];
_dirIndexToText = {["All", "N", "NE", "E", "SE", "S", "SW", "W", "NW"] select _this};
_coCnt = {count (wpCO select siPlayer)}
_coDispStr = {
	_posRelTown = (wpCO select siPlayer select _this) call funcCalcTownDirDistFromPos; 
	format [{co%1 %2}, _this, [_posRelTown, {}] select (wpCO select siPlayer select _this select 0 == -1)]
};
_distByOffset = format [{{format [{%1m}, (_this + %2) * %1]}}, _this select 0, _this select 1];

orderDefs = []; _type = 0;

orderTakeTowns = _type;
orderDefs set [_type, ["Take Towns", [], "\TZK_Scripts_4_0_5\Server\Order\TakeTowns.sqs"] ];
_type = _type + 1;

orderTakeHoldTowns = _type;
_param0 = ["Hold Distance", "5", format [{<%1m}, 500* (_this + 1)]];
_param1 = ["Hold Time", "10", format [{%1min}, 5* (_this + 1)]];
orderDefs set [_type, ["Take Hold Towns", [_param0, _param1], "\TZK_Scripts_4_0_5\Server\Order\TakeHoldTowns.sqs"] ];
_type = _type + 1;

orderHoldTown = _type;
_param0 = [ "Town", "count towns", "towns select _this select 1" ];
_param1 = [ "Defend Distance", "10", [50, 1] call _distByOffset];
_param2 = [ "Defend Direction", "9", _dirIndexToText ];
orderDefs set [_type, ["Hold Town", [_param0, _param1, _param2], "\TZK_Scripts_4_0_5\Server\Order\HoldTown.sqs"] ];
_type = _type + 1;

orderGuardArea = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Defend Distance", "10", [50, 1] call _distByOffset];
_param2 = [ "Defend Direction", "9", _dirIndexToText ];
orderDefs set [_type, ["Guard Area", [_param0, _param1, _param2], "\TZK_Scripts_4_0_5\Server\Order\GuardArea.sqs"] ];
_type = _type + 1;

orderGuardLine = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Waypoint", _coCnt, _coDispStr];
orderDefs set [_type, ["Guard Line", [_param0, _param1], "\TZK_Scripts_4_0_5\Server\Order\GuardLine.sqs"] ];
_type = _type + 1;

orderPatrolArea = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Patrol Radius", "10", [50, 1] call _distByOffset];
_script = "\TZK_Scripts_4_0_5\Server\Order\PatrolArea.sqs";
if bool_TZK_DEV_FPS then {_script = ""};
orderDefs set [_type, ["Patrol Area", [_param0, _param1], _script] ];
_type = _type + 1;

orderPatrolLine = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Waypoint", _coCnt, _coDispStr];
orderDefs set [_type, ["Patrol Line", [_param0, _param1], "\TZK_Scripts_4_0_5\Server\Order\PatrolLine.sqs"] ];
_type = _type + 1;

orderAdvance = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Meters/minute", "10", [100, 1] call _distByOffset];
orderDefs set [_type, ["Advance", [_param0, _param1], "\TZK_Scripts_4_0_5\Server\Order\Advance.sqs"] ];
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
orderDefs set [_type, ["Mine Line", [_param0, _param1], "\TZK_Scripts_4_0_5\Server\Order\MineLine.sqs"] ];
_type = _type + 1;

orderDisableMines = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
orderDefs set [_type, ["Disable Mines", [_param0], "\TZK_Scripts_4_0_5\Server\Order\DisableMines.sqs"] ];
_type = _type + 1;

orderHalt = _type;
orderDefs set [_type, ["Halt", [], "\TZK_Scripts_4_0_5\Server\Order\Halt.sqs"] ];
_type = _type + 1;

// order entry format: [orderID, orderType, [param 0, param 1, ...]];
orderMatrix = [ [], [] ];
_si = si0; _gi = 0; { (orderMatrix select _si) set [ _gi, [0, orderTakeHoldTowns, [3, 1]] ]; _gi = _gi + 1 } foreach (groupMatrix select _si);
_si = si1; _gi = 0; { (orderMatrix select _si) set [ _gi, [0, orderTakeHoldTowns, [3, 1]] ]; _gi = _gi + 1 } foreach (groupMatrix select _si);



// Concurrent AI Group Orders. Different from "AI Group Orders", units fits the parameters of the command will break off from the "AI Group Order" 
// and follow the Concurrent Order for a period, then return to the "AI Group Order";

// Constants used in Concurrent Orders' Send/Msg Scripts;
TempOrderNum = 30; TempParamNum = 10; TempParam0 = 30; TempParam1 = 30; TempParam2 = 20; TempParam3 = 20; TempParam4 = 20;

// orderTemp def entry format: [name, params, script];
// orderTemp def param format: [name, countFunc, toTextFunc];
orderTempDefs = []; _type = 0;
_typeDefs0 = [
	"Transport Car", "Transport Ship", "Transport APC", "Transport Heli", "Battle Ship", "Light Tank", "Heavy Tank", "Artillery", 
	"AT APC", "AA Vehicle", "Kamov", "Cobra\Apac\Hind", "Transports", "Tanks", "APCs", "Support APC"
];
_typeDefs1 = _typeDefs0 + ["non-AT-Infantry", "AT-Infantry", "All Infantry"];
_typeDefs2 = _typeDefs1 + ["All"];

orderTempClearType = _type;
ClearTypeDefs = _typeDefs2;
_param0 = [ "Unit type", "count ClearTypeDefs", "format [""%1"", ClearTypeDefs select _this ]" ];
orderTempDefs set [_type, ["ClearOrder(Type)", [_param0], "\TZK_Scripts_4_0_5\Server\OrderTemp\ClearType.sqs"] ];
_type = _type + 1;

orderTempClearUnit = _type;
_param0 = [ "Unit Number ID", "13", "format [""%1"", (_this) ]" ];
orderTempDefs set [_type, ["ClearOrder(Unit)", [_param0], "\TZK_Scripts_4_0_5\Server\OrderTemp\ClearUnit.sqs"] ];
_type = _type + 1;

orderTempRepair = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Response Radius", "20", [100, 1] call _distByOffset];
_param2 = [ "Support Radius", "20", [100, 1] call _distByOffset];
_param3 = [ "Repair Rate",  "20", "format [""%1%"", 5*_this]" ];
_param4 = [ "Duration", "20", "format [""%1min"", 0.5* (_this + 1)]" ];
orderTempDefs set [_type, ["Repair", [_param0, _param1, _param2, _param3, _param4], "\TZK_Scripts_4_0_5\Server\OrderTemp\Repair.sqs"] ];
_type = _type + 1;

orderTempRearm = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Response Radius", "20", [100, 1] call _distByOffset];
_param2 = [ "Support Radius", "20", [100, 1] call _distByOffset];
_param3 = [ "Sabots", "20", "format [""%1"", _this]" ];
_param4 = [ "Duration", "20", "format [""%1min"", 0.5* (_this + 1)]" ];
orderTempDefs set [_type, ["Rearm", [_param0, _param1, _param2, _param3, _param4], "\TZK_Scripts_4_0_5\Server\OrderTemp\Rearm.sqs"] ];
_type = _type + 1;

orderTempReclaim = _type;
ReclaimTypeDefs = _typeDefs0;
ReclaimPrioDefs = ["Driver", "Gunner"];
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Vehicle type", "count ReclaimTypeDefs", "format [""%1"", ReclaimTypeDefs select _this ]" ];
_param2 = [ "Reciaim Radius", "20", [50, 1] call _distByOffset];
_param3 = [ "Priority Seat", "count ReclaimPrioDefs", "format [""%1"", ReclaimPrioDefs select _this]" ];
_param4 = [ "Duration", "20", "format [""%1min"", 1.5* (_this + 1)]" ];
orderTempDefs set [_type, ["Reclaim", [_param0, _param1, _param2, _param3, _param4], "Server\OrderTemp\Reclaim.sqs"] ];
_type = _type + 1;

orderTempOccupy = _type;
OccupyTypeDefs = ["All Defense", "Mortar", "MG Ground", "MG Tower", "Howitzer", "Gun Fort"];
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Structure type", "count OccupyTypeDefs", "format [""%1"", OccupyTypeDefs select _this ]" ];
_param2 = [ "Occupy Radius", "20", [50, 1] call _distByOffset];
_param3 = [ "Duration", "20", "format [""%1min"", 1.5* (_this + 1)]" ];
orderTempDefs set [_type, ["Occupy", [_param0, _param1, _param2, _param3], localize TZK_ORDER_SERVER_OCCUPY] ];
_type = _type + 1;

orderTempBoard = _type;
BoardTypeDefs = ["Car", "Truck", "Zodiac", "Ship", "APC", "RepairTruck", "Heli", "Plane"];
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Transport type", "count BoardTypeDefs", "format [""%1"", BoardTypeDefs select _this ]" ];
_param2 = [ "Board Radius", "20", [50, 1] call _distByOffset];
_param3 = [ "Duration", "20", "format [""%1min"", 0.5* (_this + 1)]" ];
orderTempDefs set [_type, ["Board", [_param0, _param1, _param2, _param3], "\TZK_Scripts_4_0_5\Server\OrderTemp\Board.sqs"] ];
_type = _type + 1;

orderTempLand = _type;
LandTypeDefs = ["All Helicopters", "Transport Heli", "Gunship"];
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Helicopter type", "count LandTypeDefs", "format [""%1"", LandTypeDefs select _this ]" ];
_param2 = [ "Land Radius", "20", [200, 1] call _distByOffset];
_param3 = [ "Duration", "20", "format [""%1min"", 0.5* (_this + 1)]" ];
orderTempDefs set [_type, ["Land Helicopters", [_param0, _param1, _param2, _param3], "\TZK_Scripts_4_0_5\Server\OrderTemp\Land.sqs"] ];
_type = _type + 1;

orderTempSetFlightAltitude = _type;
HeightDefs = [3, 5, 10, 20, 30, 40, 50, 100, 150, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1200, 1500];
SetFlightAltitudeTypeDefs = ["Transport Heli", "Original Gunship", "AT Gunship", "All Helicopters", "Planes", "All Aircrafts"];
_param0 = [ "Height", "count HeightDefs", "format [""%1m"", HeightDefs select _this ]" ];
_param1 = [ "Aircraft type", "count SetFlightAltitudeTypeDefs", "format [""%1"", SetFlightAltitudeTypeDefs select _this ]" ];
orderTempDefs set [_type, ["Set Flight Altitude", [_param0, _param1], "\TZK_Scripts_4_0_5\Server\OrderTemp\SetFlightAltitude.sqs"] ];
_type = _type + 1;

orderTempSpoofMissileON = _type;
SpoofTypeDefs = ["Transport Heli", "Original Gunship", "AT Gunship", "All Helicopters", "Planes", "All Aircrafts"];
_param0 = [ "Aircraft type", "count SpoofTypeDefs", "format [""%1"", SpoofTypeDefs select _this ]" ];
orderTempDefs set [_type, ["Spoof Missile ON", [_param0], "\TZK_Scripts_4_0_5\Server\OrderTemp\SpoofMissileON.sqs"] ];
_type = _type + 1;

orderTempTransportDuty = _type;
TransportDutyTypeDefs = ["Car", "Truck", "Zodiac", "Ship", "APC", "Land", "Transport Heli", "Mi24"];
_param0 = [ "Pickup Pos", _coCnt, _coDispStr];
_param1 = [ "Eject Pos", _coCnt, _coDispStr];
_param2 = [ "Eject Distance", "20", [50, 1] call _distByOffset];
_param3 = [ "Transport type", "count TransportDutyTypeDefs", "format [""%1"", TransportDutyTypeDefs select _this ]" ];
_param4 = [ "Duration", "20", "format [""%1min"", 3* (_this + 1)]" ];
orderTempDefs set [_type, ["Transport Duty", [_param0, _param1, _param2, _param3, _param4], "\TZK_Scripts_4_0_5\Server\OrderTemp\TransportDuty.sqs"] ];
_type = _type + 1;

orderTempMoveType = _type;
MoveTypeDefs = _typeDefs1;
_param0 = [ "Position", _coCnt, _coDispStr];
_param1 = [ "Unit type", "count MoveTypeDefs", "format [""%1"", MoveTypeDefs select _this ]" ];
_param2 = [ "Guard Radius", "20", [5, 0] call _distByOffset];
_param3 = [ "Defend Direction", "9", _dirIndexToText ];
_param4 = [ "Duration", "20", "format [""%1min"", 12* (_this + 1)]" ];
orderTempDefs set [_type, ["Move(Type)", [_param0, _param1, _param2, _param3, _param4], "\TZK_Scripts_4_0_5\Server\OrderTemp\MoveType.sqs"] ];
_type = _type + 1;

orderTempMoveUnit = _type;
_param0 = [ "Position", _coCnt, _coDispStr];
_param1 = [ "Unit Number ID", "12", "format [""%1"", (_this+1) ]" ];
_param2 = [ "Guard Radius", "20", [5, 0] call _distByOffset];
_param3 = [ "Defend Direction", "9", _dirIndexToText ];
_param4 = [ "Duration", "20", "format [""%1min"", 12* (_this + 1)]" ];
orderTempDefs set [_type, ["Move(Unit)", [_param0, _param1, _param2, _param3, _param4], "\TZK_Scripts_4_0_5\Server\OrderTemp\MoveUnit.sqs"] ];
_type = _type + 1;

orderTempHaltType = _type;
HaltTypeDefs = _typeDefs1;
_param0 = [ "Unit type", "count HaltTypeDefs", "format [""%1"", HaltTypeDefs select _this ]" ];
_param1 = [ "Duration", "20", "format [""%1min"", 12* (_this + 1)]" ];
orderTempDefs set [_type, ["Halt(Type)", [_param0, _param1], "\TZK_Scripts_4_0_5\Server\OrderTemp\HaltType.sqs"] ];
_type = _type + 1;

orderTempHaltUnit = _type;
_param0 = [ "Unit Number ID", "12", "format [""%1"", (_this+1) ]" ];
_param1 = [ "Duration", "20", "format [""%1min"", 12* (_this + 1)]" ];
orderTempDefs set [_type, ["Halt(Unit)", [_param0, _param1], "\TZK_Scripts_4_0_5\Server\OrderTemp\HaltUnit.sqs"] ];
_type = _type + 1;

orderTanksEngineOFF = _type;
_param0 = [ "Duration", "20", "format [""%1 second"", 6* (_this + 1)]" ];
orderTempDefs set [_type, ["Tanks EngineOFF", [_param0], "\TZK_Scripts_4_0_5\Server\OrderTemp\TanksEngineOFF.sqs"] ];
_type = _type + 1;

orderTempDisengageType = _type;
DisengageTypeDefs = _typeDefs1;
_param0 = [ "Unit type", "count DisengageTypeDefs", "format [""%1"", DisengageTypeDefs select _this ]" ];
orderTempDefs set [_type, ["Disengage(Type)", [_param0, _param0, _param0], "Server\OrderTemp\DisengageType.sqs"] ];
_type = _type + 1;

orderTempDisengageUnit = _type;
_param0 = [ "Unit Number ID", "12", "format [""%1"", (_this+1) ]" ];
orderTempDefs set [_type, ["Disengage(Unit)", [_param0], "\TZK_Scripts_4_0_5\Server\OrderTemp\DisengageUnit.sqs"] ];
_type = _type + 1;

orderTempHoldTown = _type;
HoldTownTypeDefs = ["non-AT-Infantry", "AT-Infantry", "Light Tank", "Heavy Tank", "Artillery", "AT APC", "AA Vehicle", "Kamov", "Cobra\Apac\Hind", "Infantry", "Tanks", "APCs"];
_param0 = [ "Town", "count towns", "towns select _this select 1" ];
_param1 = [ "Unit type", "count HoldTownTypeDefs", "format [""%1"", HoldTownTypeDefs select _this ]" ];
_param2 = [ "Defend Distance", "10", [50, 1] call _distByOffset];
_param3 = [ "Defend Direction", "9", _dirIndexToText ];
_param4 = [ "Duration", "20", "format [""%1min"", 12* (_this + 1)]" ];
orderTempDefs set [_type, ["HoldTown", [_param0, _param1, _param2, _param3, _param4], "\TZK_Scripts_4_0_5\Server\OrderTemp\HoldTown.sqs"] ];
_type = _type + 1;

orderTempPatrolLine = _type;
PatrolLineTypeDefs = ["non-AT-Infantry", "AT-Infantry", "Light Tank", "Heavy Tank", "Artillery", "AT APC", "AA Vehicle", "Kamov", "Cobra\Apac\Hind", "Infantry", "Tanks", "APCs"];
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Waypoint", _coCnt, _coDispStr];
_param2 = [ "Unit type", "count PatrolLineTypeDefs", "format [""%1"", PatrolLineTypeDefs select _this ]" ];
_param3 = [ "Duration", "20", "format [""%1min"", 12* (_this + 1)]" ];
orderTempDefs set [_type, ["Patrol Line", [_param0, _param1, _param2, _param3], "\TZK_Scripts_4_0_5\Server\OrderTemp\PatrolLine.sqs"] ];
_type = _type + 1;

orderTempMineLine = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Waypoint", _coCnt, _coDispStr];
_param2 = [ "Duration", "20", "format [""%1min"", 3* (_this + 1)]" ];
orderTempDefs set [_type, ["Mine Line", [_param0, _param1, _param2], "\TZK_Scripts_4_0_5\Server\OrderTemp\MineLine.sqs"] ];
_type = _type + 1;

orderTempDisableMines = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Search Radius", "20", [25, 1] call _distByOffset];
_param2 = [ "Duration", "20", "format [""%1min"", 3* (_this + 1)]" ];
orderTempDefs set [_type, ["Disable Mines", [_param0, _param1, _param2], "\TZK_Scripts_4_0_5\Server\OrderTemp\DisableMines.sqs"] ];
_type = _type + 1;

orderTempChangeAmmo = _type;
ChangeAmmoTypeDefs = ["Light Tank", "Heavy Tank", "All"];
_param0 = [ "Unit type", "count ChangeAmmoTypeDefs", "format [""%1"", ChangeAmmoTypeDefs select _this ]" ];
_param1 = [ "Ammo", "2", "format [""%1"", [""Sabot"",""Heat""] select _this]" ];
orderTempDefs set [_type, ["Change Ammo", [_param0, _param1], "\TZK_Scripts_4_0_5\Server\OrderTemp\ChangeAmmo.sqs"] ];
_type = _type + 1;

orderTempSwitchMagazine = _type;
ArtilleryMagazineSpeedList = [80, 120, 180, 300, 400, 500, 600, 700, 800, 900, 1000, 1200, 1500];
ArtilleryTypeDefs = ["Howitzer Vehicle", "Rocket Launcher", "Mortar Structure", "Howitzer Structure", "Vehicles", "Structures", "ALL"];
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Response Radius", "20", [100, 1] call _distByOffset];
_param2 = [ "Unit Type", "count ArtilleryTypeDefs", "ArtilleryTypeDefs select _this" ];
_param3 = [ "InitSpeed", "count ArtilleryMagazineSpeedList", "format [""%1"", ArtilleryMagazineSpeedList select _this ]" ];
_param4 = [ "Curved", "2", "[{false},{true}] select _this" ];
_script = localize TZK_ORDER_SERVER_SWITCH_MAG;
if bool_TZK_SEMod_Mode then {
	ArtilleryMagazineSpeedList set [count ArtilleryMagazineSpeedList, "Recover TD"];
	_param2 = [ "Unit Type", "count ([{SE TD}] + ArtilleryTypeDefs)", "([{SE TD}] + ArtilleryTypeDefs) select _this" ];
	_script = "Extra\SwitchMag_Server.sqs";
};
orderTempDefs set [_type, ["Switch Magazine", [_param0, _param1, _param2, _param3, _param4], _script] ];
_type = _type + 1;

orderTempDeployVehicle = _type;
_param0 = [ "Waypoint", _coCnt, _coDispStr];
_param1 = [ "Response Radius", "20", [100, 1] call _distByOffset];
_param2 = [ "Unit Type", "count [{Howitzer Vehicle}, {Rocket Launcher}, {ALL}]", "[{Howitzer Vehicle}, {Rocket Launcher}, {ALL}] select _this" ];
_param3 = [ "Deploy", "2", "[{OFF},{ON}] select _this" ];
orderTempDefs set [_type, ["Deploy Vehicle", [_param0, _param1, _param2, _param3], "\TZK_Scripts_4_0_5\Server\OrderTemp\DeployVehicle.sqs"] ];
_type = _type + 1;

orderTempShootTarget = _type;
_param0 = [ "Attack Pos", _coCnt, _coDispStr];
_param1 = [ "Radius", "20", [5, 1] call _distByOffset];
_param2 = [ "Unit Type", "count ([{Soldier}, {Light Tank}, {Heavy Tank}] + ArtilleryTypeDefs)", "([{Soldier}, {Light Tank}, {Heavy Tank}] + ArtilleryTypeDefs) select _this" ];
_param3 = [ "Target", "countTargetMarkers", "format [""%1"", _this ]" ];
_param4 = [ "Dispersion", "20", [10, 0] call _distByOffset];
orderTempDefs set [_type, ["Shoot Target", [_param0, _param1, _param2, _param3, _param4], "Server\OrderTemp\ShootTarget.sqs"] ];
_type = _type + 1;

orderTempShootBigAngle = _type;
_param0 = [ "Attack Pos", _coCnt, _coDispStr];
_param1 = [ "Radius", "20", [5, 1] call _distByOffset];
_param2 = [ "Unit Type", "count ([{Soldier}, {Light Tank}, {Heavy Tank}] + ArtilleryTypeDefs)", "([{Soldier}, {Light Tank}, {Heavy Tank}] + ArtilleryTypeDefs) select _this" ];
_param3 = [ "Target", "countTargetMarkers", "format [""%1"", _this ]" ];
_param4 = [ "Dispersion", "20", [10, 0] call _distByOffset];
orderTempDefs set [_type, ["Shoot Big Angle", [_param0, _param1, _param2, _param3, _param4], "Server\OrderTemp\ShootBiggerAngle.sqs"] ];
_type = _type + 1;


TempOrderNum = count orderTempDefs;
// orderTemp entry format: [orderTempID, orderTempType, [param 0, param 1, ...]];
orderTempMatrix = [ [], [] ];
_si = si0; _gi = 0; { (orderTempMatrix select _si) set [ _gi, [-1, orderTempClearUnit, [0]] ]; _gi = _gi + 1 } foreach (groupMatrix select _si);
_si = si1; _gi = 0; { (orderTempMatrix select _si) set [ _gi, [-1, orderTempClearUnit, [0]] ]; _gi = _gi + 1 } foreach (groupMatrix select _si);


// initStatusMatrix structure: array[]. Index = _si * GroupsNum + _gi.
// element of array above: array[]. Index = type of concurrent order.
// element of array above: [option item on/off, param 0, param 1, ...]
initStatusMatrix = [];
{
	_si = _x; _gi = 0;
	{
		_matrix = []; _i = 0; _c = count orderTempDefs;
		while {_i < _c} do {
			_params = [];  _params set [0, 0];
			_j = 0; while {_j < count (orderTempDefs select _i select 1)} do {
				_params set [_j + 1, -1]; _j = _j + 1;
			};
			_matrix set [_i, _params];
			_i = _i + 1;
		};
		initStatusMatrix set [_si * GroupsNum + _gi, _matrix];
		_gi = _gi + 1
	} foreach (groupMatrix select _x)
} forEach [si0, si1];


call loadFile "impl\AI_Order_Server.sqf";