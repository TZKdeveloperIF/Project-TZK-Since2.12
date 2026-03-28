// TZK CTI - Server subsystem initialization
// Called from initServer.sqf

if (!isServer) exitWith {};

// init.sqf 和 initServer.sqf 在 A3 中并行启动（都是 scheduled）。
// 必须等 init.sqf 完成，否则 si0/groupMatrix/TzkFixedStarts 等全局变量尚未定义。
waitUntil {!isNil "TZK_initComplete"};
diag_log "TZK CTI: init.sqf confirmed complete, server init proceeding";

// Money tracking (OFP: Server/Init/Money.sqf)
mutexEditMoneyMatrix = [[],[]];
{
	private _si = _x;
	private _groups = groupMatrix select _si;
	private _i = 0;
	private _c = count _groups;
	while {_i < _c} do {
		mutexEditMoneyMatrix select _si set [_i, false];
		_i = _i + 1;
	};
} forEach [si0, si1];

moneySpent = [0, 0];
startMoney = [10000, 10000];
startMoneyPlayer = [2000, 2000];
moneyRequest = [[], []];

// Factory system globals
factoryQueues = [[], []];
mutexFacQueues = false;
mutexbuildingInUse = false;
buildingsInUse = [];
qidNext = [0, 0];
groupUnitsBuildingMatrix = [[], []];
mutexBuildingQueue = [[], []];
{
	private _si = _x;
	private _c = count (groupMatrix select _si);
	private _i = 0;
	while {_i < _c} do {
		groupUnitsBuildingMatrix select _si set [_i, 0];
		mutexBuildingQueue select _si set [_i, false];
		_i = _i + 1;
	};
} forEach [si0, si1];

// MHQ / MCV globals (will be populated by SvrFormalStart in Phase B)
mhq = [objNull, objNull];
MCV = [[], []];

// Side respawn objects
sideRespawnObjects = [objNull, objNull];

// Worker behaviour (0=Reckless, 1=Cautious)
workerBehaviour = [0, 0];

// Income rate distribution
incomeRateCo = [0.5, 0.5];
incomeRatePlayer = [0.5, 0.5];

// Match timing
pvGameOver = -1;

// Initialize scoreMoney per group
{
	private _si = _x;
	private _c = count (groupMatrix select _si);
	private _i = 0;
	while {_i < _c} do {
		scoreMoney select _si set [_i, 0];
		moneyRequest select _si set [_i, 0];
		_i = _i + 1;
	};
} forEach [si0, si1];

diag_log "TZK CTI: Server subsystems initialized";

// ---- Auto-start: determine spawn positions and trigger formal start ----
// Uses TzkFixedStarts from spawnPoints.sqf, or random positions
private _posWest = [0,0,0];
private _posEast = [0,0,0];

if (!isNil "TzkFixedStarts" && {count TzkFixedStarts >= 2}) then {
	_posWest = TzkFixedStarts select 0;
	_posEast = TzkFixedStarts select 1;
} else {
	_posWest = posCenter vectorAdd [-2000, 0, 0];
	_posEast = posCenter vectorAdd [2000, 0, 0];
};

diag_log format ["TZK CTI: Auto-starting formal match - West=%1 East=%2", _posWest, _posEast];
[_posWest, _posEast] call compile preprocessFileLineNumbers "Server\fn_svrFormalStart.sqf";
