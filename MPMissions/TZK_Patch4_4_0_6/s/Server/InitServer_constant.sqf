
comment {DEFINE CONSTANT POINTER FOR FUNCTION} ;

{deleteVehicle (leader _x)} forEach (workerGroups select si0); {deleteVehicle (leader _x)} forEach (workerGroups select si1);


ResDestroyStruct = []; mutexResDestStruct = false;

CheckSupportUnits = []; mutexCheckSupport = false;

repairableStructureMatrix = [ [], [] ]; repairableStructureInfo = [ [], [] ]; mutexRepStructMatrix = false; mutexRepairStructure = false;
structServer = []; structsServer = []; mutexStructServer = false;
primStructsPlaced = []; mutexPlacedPrimStructs = false;
factoryQueues = [ [], [] ]; mutexFacQueues = false;
buildingsInUse = []; mutexbuildingInUse = false;
undoList = []; mutexUndo = false;

startMoney = [[40000, 40000],[80000, 80000]] select PricingMode;
if dev then {startMoney = [800000, 800000]};
startMoneyPlayer = [1000, 1000];
if dev then {startMoneyPlayer = [2000, 2000]};
if (bool_TZK_Lester_Mode) then {
	startMoney set [0, 400000];
	startMoneyPlayer set [0, 80000];
};
moneySpent = [0, 0];
moneyRequest = [[],[]];
qidNext = [0,0];

timeCheckSupport = 120;
ratioAttackEnemy = ([0.70, 0.70] select dev);

mutexEditMoneyMatrix = false;
mutexMovingToSupport = false;

groupsPatrol = []; groupPatrolJoinMatrix = []; mutexResPatrolScript = false;

mutexAddResPatrol = false;
mutexWorkerJoin = false;

FreeMhqWallTime = [-9999, -9999];
mutexWallMhq = [false, false];
FreeMgCnt = [3, 3];
true exec "Common\Init\Confuser.sqs";

Array_TZK_Town_Triggered_By = [];
Array_TZK_Group_MaybeAi = [];

comment {4.0.6.40} ;
comment {redefine mutexBuildingQueue as a matrix} ;
mutexBuildingQueue = [[], []];
{
    _si = _x;
    _i = 0; _c = count (groupMatrix select _si);
    while {_i < _c} do {
        mutexBuildingQueue select _si set [_i, false];
        _i = _i + 1;
    };
} forEach [si0, si1];
comment {define mutex for reclaim} ;
mutexReclaim = false;
comment {4.0.6.70. Support vehicle and its last user} ;
TzkSupVehObjs = []; TzkSubVehUsers = []; mutexTzkSup = false;
comment {4.0.6.72. Each factory manage its own cancelled QID} ;
    factoryCancelledQid = [[], []];
    comment {format of (executedOrderTimer select si): array of qid (work as key), array of [gi, unitsToBuild, timeStamp]} ;
    executedOrderTimer = [[[], []], [[], []]]; mutexEot = [false, false];
comment {4.0.6.81. MHQ wall} ;
    TzkMhqWallObjs = []; TzkMhqWallInfos = [];
comment {4.0.6.84. A bigger mutex for join-to-server. Join units to AI in short time crashes the server.} ;
    mutexTzkSvrJoin = false;

call preprocessFile "impl\Server_constants.sqf";
