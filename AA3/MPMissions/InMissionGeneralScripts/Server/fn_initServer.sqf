// TZK CTI - Server subsystem initialization
// Called from initServer.sqf

if (!isServer) exitWith {};

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
tzkMatchStartTime = 0;
pvGameOver = -1;

diag_log "TZK CTI: Server subsystems initialized";
