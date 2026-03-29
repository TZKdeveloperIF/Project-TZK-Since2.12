// TZK CTI - Main initialization (runs on ALL machines)
// Mirrors OFP: init.sqs post-process flow

// ======== Phase 1: Environment ========
call compile preprocessFileLineNumbers "Init\fn_initMissionEnv.sqf";

// ======== Phase 2: Map-specific data ========
call compile preprocessFileLineNumbers "townDefs.sqf";
call compile preprocessFileLineNumbers "spawnPoints.sqf";

// ======== Phase 3: Group matrix (reads mission.sqm placed units) ========
call compile preprocessFileLineNumbers "Init\fn_initGroupMatrix.sqf";

// ======== Phase 4: Script registry ========
call compile preprocessFileLineNumbers "Init\fn_gblScripts.sqf";

// ======== Phase 5: Data definitions (structures before units) ========
call compile preprocessFileLineNumbers "Init\fn_initStructureTypes.sqf";
call compile preprocessFileLineNumbers "Init\fn_initUnitTypes.sqf";

// ======== Phase 5b: RTS system data (orderDefs, orderMatrix, selection state) ========
call compile preprocessFileLineNumbers "Init\fn_initRts.sqf";

// ======== Commander rules（必须在城镇同步等待之前）========
// 多人客户端在 Phase 6 开头会 waitUntil towns；若 CmdRule 仍在等待之后，则永不到达 → isNil "TzkCmdRules"。
call compile preprocessFileLineNumbers "Common\fn_cmdRule.sqf";

// ======== Phase 6: Sort towns by Y coordinate (from OFP init.sqs) ========
// 城镇仅在服务器创建；客户端在此等待同步后再排序/算中心，避免 count towns == 0 除零。
if (!isServer) then { waitUntil { count towns > 0 } };

private ["_c", "_i", "_j", "_townI", "_townJ"];
_c = count towns;
_i = 0;
while {_i < _c - 1} do {
	_j = _i + 1;
	while {_j < _c} do {
		_townI = towns select _i;
		_townJ = towns select _j;
		if (((getPosATL (_townI select tdFlag)) select 1) > ((getPosATL (_townJ select tdFlag)) select 1)) then {
			towns set [_i, _townJ];
			towns set [_j, _townI];
		};
		_j = _j + 1;
	};
	_i = _i + 1;
};

// Calculate map center from town positions
private ["_posX", "_posY"];
_posX = 0; _posY = 0;
{
	private _p = getPosATL (_x select tdFlag);
	_posX = _posX + (_p select 0);
	_posY = _posY + (_p select 1);
} forEach towns;
posCenter = [_posX / _c, _posY / _c];

if (isServer) then {
	publicVariable "towns";
	publicVariable "posCenter";
};

// ======== Phase 7: Vote Matrix (simplified from OFP init.sqs) ========
Vote_Matrix = [];
Vote_ItemNames = [];
private _vi = 0;

Vote_ItemNames set [_vi, "Weather"];
Vote_Matrix set [_vi, [Vote_ItemNames select _vi, ["Sunny","Cloudy","Overcast","Rainy","Stormy"], 0, 0]];
_vi = _vi + 1;

Vote_ItemNames set [_vi, "Time Limit"];
Vote_Matrix set [_vi, [Vote_ItemNames select _vi, ["3h","4h","6h","Infinity"], 1, 1]];
Vote_Item_Time_Limit_Hours = [3, 4, 6, 0];
_vi = _vi + 1;

Vote_ItemNames set [_vi, "Resistance"];
Vote_Matrix set [_vi, [Vote_ItemNames select _vi, ["Very Low","Low","Middle","High","Doom"], restanksx, restanksx]];
_vi = _vi + 1;

Vote_ItemNames set [_vi, "Income Ratio"];
Vote_Matrix set [_vi, [Vote_ItemNames select _vi, ["1x","2x"], 0, 0]];
_vi = _vi + 1;

IncomeGrow_TZK = false;

// ======== Phase 8: Param processing ========
private _paramSpawn = ("SpawnPos" call BIS_fnc_getParamValue) max 0;
private _paramRes = ("Resistance" call BIS_fnc_getParamValue) max 0;
private _paramTime = ("TimeLimit" call BIS_fnc_getParamValue) max 0;

restanksx = _paramRes;
timeLimit = [10800, 14400, 21600, 0] param [_paramTime, 14400];

diag_log format [
	"TZK CTI: init.sqf complete - %1 towns, %2 WEST groups, %3 EAST groups, timeLimit=%4",
	count towns,
	count (groupMatrix select si0),
	count (groupMatrix select si1),
	timeLimit
];

// 通知 initServer.sqf：init.sqf 所有阶段已完成，全局变量可用
TZK_initComplete = true;
