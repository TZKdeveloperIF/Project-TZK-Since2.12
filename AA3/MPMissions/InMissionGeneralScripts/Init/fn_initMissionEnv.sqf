// TZK CTI - Mission Environment Initialization
// Mirrors OFP: Init/MissionEnv.sqf + early parts of init.sqs
// Called FIRST in init.sqf, before any other script

gameEndType = -1;

// Town array - populated by townDefs.sqf (map-specific)
towns = [];

// Side constants (matching OFP TZK)
si0 = 0; si1 = 1; siRes = 2; siBoth = 3; siCiv = 4;
sides = [west, east, resistance];
siEnemy = [1, 0];

// Town descriptor indexes
tdFlag = 0;
tdName = 1;
tdValue = 2;
tdSide = 3;

// Group arrays
townGroups = [[], [], []];
workerGroups = [[], []];
if (isServer) then {
	patrolGroups = [];
};
functionalGroups = [[], []];
tzkAllGroups = [[], []];

// Group matrices - populated by fn_initGroupMatrix.sqf
groupMatrix = [[], []];
groupAiMatrix = [[], []];
groupMoneyMatrix = [[], []];
groupNameMatrix = [[], []];
groupCommander = [grpNull, grpNull];

// Flags textures for A3
flags = [
	"\A3\Data_F\Flags\Flag_NATO_CO.paa",
	"\A3\Data_F\Flags\Flag_CSAT_CO.paa",
	"\A3\Data_F\Flags\Flag_FIA_CO.paa",
	"\A3\Data_F\Flags\Flag_white_CO.paa"
];

// Game config (from OFP init.sqs environment variables)
debug = true;
pvGameOver = -1;

// Maximum group size
maxGroupSize = 12;

// Income multiplier (from vote, default 1x)
incomex = 1;

// Pricing mode (0=normal, 1=expensive)
PricingMode = 0;

// Time limit in seconds (0 = no limit; from Params)
timeLimit = 0;

// Resistance strength (from Params, 0-4)
restanksx = 2;

// Map center - recalculated after towns are loaded
posCenter = [0, 0];

// Structures that must be destroyed for destruction victory
structsCritcal = [];
structsDestroy = [];
structsRespawn = [];

// Marker ID counter (from OFP TZK 4.0.6.71)
TzkMarkerId = 0;

// RTS globals
TzkRtsWriteTime = 0;
TzkRtsSvrId = 0;
TzkRtsId4Gc = 0;
bool_TZK_Rts_Map_Mode = false;

// Match start money distribution config (from OFP: SvrStartMoney.sqf)
costWorker = 200;

// Phase E: Options-related globals
incomeRateCo = [0.5, 0.5];
incomeRatePlayer = [0.5, 0.5];
workerBehaviour = [0, 0];
sideRespawnObjects = [objNull, objNull];
mhq = [objNull, objNull];
MCV = [[], []];
TZK_reportLevel = 0;
bNumberedAI = false;
bSpySat = false;
GroupsNum = 18;

// Upgrade system (stub — full definitions TBD in later sub-phase)
upgDefs = [];
upgMatrix = [[], []];
upgSatCam = 0;
upgSpySat = 1;
upgUnitCam = 2;

// Options dialog IDC — must match defines.hpp IDC_OPTIONS_BASE (10000) + UI/options.hpp 偏移
private _optBase = 10000;
TZK_IDC_OPT_MONEY = _optBase + 1;
TZK_IDC_OPT_SCORE = _optBase + 2;
TZK_IDC_OPT_TOWNS = _optBase + 3;
TZK_IDC_OPT_INCOME = _optBase + 4;
TZK_IDC_OPT_GAMETIME = _optBase + 5;
TZK_IDC_OPT_TRANSFER_GRP = _optBase + 10;
TZK_IDC_OPT_TRANSFER_AMT = _optBase + 11;
TZK_IDC_OPT_REPORTS = _optBase + 12;
TZK_IDC_OPT_INCOME_CO = _optBase + 13;
TZK_IDC_OPT_INCOME_PLAYER = _optBase + 14;
TZK_IDC_OPT_CMD_TRANSFER = _optBase + 15;
TZK_IDC_OPT_WORKER_BHV = _optBase + 16;
TZK_IDC_OPT_AI_RESPAWN = _optBase + 17;
TZK_IDC_OPT_UPGRADE_LIST = _optBase + 18;
TZK_IDC_OPT_BTN_GIVE = _optBase + 30;
TZK_IDC_OPT_BTN_GIVE_AI = _optBase + 31;
TZK_IDC_OPT_BTN_GIVE_ALL = _optBase + 32;
TZK_IDC_OPT_BTN_TAKE = _optBase + 33;
TZK_IDC_OPT_BTN_CMD_XFER = _optBase + 34;
TZK_IDC_OPT_BTN_UPGRADE = _optBase + 35;
TZK_IDC_OPT_BTN_UPG_CANCEL = _optBase + 36;
TZK_IDC_OPT_BTN_DESTRUCT = _optBase + 37;
TZK_IDC_OPT_BTN_SPYSAT_BG = _optBase + 38;
TZK_IDC_OPT_BTN_NUMBERED_BG = _optBase + 39;

// Score-based bonus money: scoreMoney[si][gi] accumulates between income ticks
scoreMoney = [[], []];

// Score type constants (for fn_addScore)
scTown = 0;

// Match start time (set by SvrFormalStart, used everywhere)
// -1 = not started; SvrFormalStart sets to time (>=0); all waitUntil checks use >= 0
tzkMatchStartTime = -1;

// Common helper functions (compiled once, usable everywhere)
TZK_fnc_getClosestTown = compile preprocessFileLineNumbers "Common\fn_getClosestTown.sqf";
TZK_fnc_updateTownCheckUnits = compile preprocessFileLineNumbers "Common\fn_updateTownCheckUnits.sqf";
TZK_fnc_getWorkingStructures = compile preprocessFileLineNumbers "Common\fn_getWorkingStructures.sqf";

// Server-side function stubs (compiled on all machines for remoteExec; server-only guard inside)
TZK_fnc_moneyAdd = compile preprocessFileLineNumbers "Server\Money\fn_moneyAdd.sqf";
TZK_fnc_moneySpend = compile preprocessFileLineNumbers "Server\Money\fn_moneySpend.sqf";
TZK_fnc_syncMoneyStatus = compile preprocessFileLineNumbers "Net\fn_syncMoneyStatus.sqf";
TZK_fnc_townSideChange = compile preprocessFileLineNumbers "Net\fn_townSideChange.sqf";
TZK_fnc_addScore = compile preprocessFileLineNumbers "Net\fn_addScore.sqf";
TZK_fnc_townTrigger = compile preprocessFileLineNumbers "Server\fn_townTrigger.sqf";
TZK_fnc_checkWinTowns = compile preprocessFileLineNumbers "Server\fn_checkWinTowns.sqf";
TZK_fnc_checkWinDestruction = compile preprocessFileLineNumbers "Server\fn_checkWinDestruction.sqf";
TZK_fnc_triggerGameEnd = compile preprocessFileLineNumbers "Server\fn_triggerGameEnd.sqf";

// Phase C: Factory / production / building
TZK_fnc_newOrder = compile preprocessFileLineNumbers "Server\BuyUnit\fn_newOrder.sqf";
TZK_fnc_factory = compile preprocessFileLineNumbers "Server\BuyUnit\fn_factory.sqf";
TZK_fnc_createUnit = compile preprocessFileLineNumbers "Server\BuyUnit\fn_createUnit.sqf";
TZK_fnc_freeBuildingUnits = compile preprocessFileLineNumbers "Server\BuyUnit\fn_freeBuildingUnits.sqf";
TZK_fnc_factoryDestroyed = compile preprocessFileLineNumbers "Server\BuyUnit\fn_factoryDestroyed.sqf";
TZK_fnc_buildStruct = compile preprocessFileLineNumbers "Server\fn_buildStruct.sqf";

// Client-side: event-driven factory action attachment (called by server via remoteExec)
TZK_fnc_addFactoryActions = compile preprocessFileLineNumbers "Player\fn_factoryActions.sqf";

// Phase D: RTS / AI order system
TZK_fnc_aiGrpOrder    = compile preprocessFileLineNumbers "Common\fn_aiGrpOrder.sqf";
TZK_fnc_leaderAI      = compile preprocessFileLineNumbers "Server\fn_leaderAI.sqf";
TZK_fnc_ordTakeTowns  = compile preprocessFileLineNumbers "Server\Order\fn_takeTowns.sqf";
TZK_fnc_ordHoldTown   = compile preprocessFileLineNumbers "Server\Order\fn_holdTown.sqf";
TZK_fnc_ordGuardArea  = compile preprocessFileLineNumbers "Server\Order\fn_guardArea.sqf";
TZK_fnc_ordAdvance    = compile preprocessFileLineNumbers "Server\Order\fn_advance.sqf";
TZK_fnc_ordHalt       = compile preprocessFileLineNumbers "Server\Order\fn_halt.sqf";

// Phase E: Options dialog + network functions
TZK_fnc_optionsInit    = compile preprocessFileLineNumbers "Player\fn_optionsInit.sqf";
TZK_fnc_optionsUpdate  = compile preprocessFileLineNumbers "Player\fn_optionsUpdate.sqf";
TZK_fnc_giveMoney      = compile preprocessFileLineNumbers "Net\fn_giveMoney.sqf";
TZK_fnc_setIncomeRate  = compile preprocessFileLineNumbers "Net\fn_setIncomeRate.sqf";
TZK_fnc_transferCommand = compile preprocessFileLineNumbers "Net\fn_transferCommand.sqf";
TZK_fnc_setRespawnObj  = compile preprocessFileLineNumbers "Net\fn_setRespawnObj.sqf";
TZK_fnc_setWorkerBehaviour = compile preprocessFileLineNumbers "Net\fn_setWorkerBehaviour.sqf";

// Helper: position → nearest town direction/distance label (replaces OFP funcCalcTownDirDistFromPos)
TZK_fnc_posTownLabel = {
	params ["_pos"];
	private _best = "unknown";
	private _bestDist = 1e9;
	{
		private _fPos = getPosATL (_x select tdFlag);
		private _d = _pos distance2D _fPos;
		if (_d < _bestDist) then { _bestDist = _d; _best = _x select tdName };
	} forEach towns;
	private _dir = switch (true) do {
		case (_bestDist < 100): { "at" };
		default {
			private _bearing = _pos getDir (towns select 0 select tdFlag);
			["N","NE","E","SE","S","SW","W","NW"] select (floor ((_bearing + 22.5) / 45) mod 8)
		};
	};
	format ["%1 %2m %3", _dir, round _bestDist, _best]
};

// Helper: score calculation (replaces OFP funcCalcScore)
TZK_fnc_calcScore = {
	params ["_si", "_gi"];
	private _s = 0;
	if (!isNil "TZK_scores") then {
		if (_si < count TZK_scores && {_gi < count (TZK_scores select _si)}) then {
			_s = (TZK_scores select _si) select _gi;
		};
	};
	_s
};

// Stub: cleanup ground (placeholder for OFP TzkScripts select 076)
TZK_fnc_cleanupGround = {
	if (!isServer) exitWith {};
	params ["_pos"];
	private _objs = nearestObjects [_pos, ["GroundWeaponHolder", "WeaponHolderSimulated"], 50];
	{ deleteVehicle _x } forEach _objs;
	diag_log format ["TZK CTI: Cleaned %1 ground items at %2", count _objs, _pos];
};

// Stubs for upgrade system (server-side; full implementation TBD)
TZK_fnc_upgradeStart = {
	if (!isServer) exitWith {};
	params ["_si", "_gi", "_idx"];
	systemChat format ["[Upgrade %1] Not yet implemented", _idx];
};
TZK_fnc_upgradeCancel = {
	if (!isServer) exitWith {};
	params ["_si", "_gi", "_idx"];
	systemChat format ["[Cancel Upgrade %1] Not yet implemented", _idx];
};

diag_log "TZK CTI: MissionEnv initialized";
