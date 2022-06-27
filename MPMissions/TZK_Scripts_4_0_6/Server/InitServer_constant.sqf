
// DEFINE CONSTANT POINTER FOR FUNCTION;
// TG0 = townGroups select si0; TG1 = townGroups select si1; WG0 = workerGroups select si0; WG1 = workerGroups select si1; GM0 = groupMatrix select si0; GM1 = groupMatrix select si1;

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
indexMoneyMsg = 0;
countMoneyMsg = 10;
indexInfoMsg = 0;
countInfoMsg = 4;
qidNext = [0,0];
qidCancel = [[],[]];
qidToCancel = [[],[]];

timeCheckSupport = 120;
ratioAttackEnemy = ([0.70, 0.70] select dev);

countQueueMsg = 5;
indexQueueAddMsg = 0;
indexQueueRemMsg = 0;
indexUnitAddMsg = 0;
mutexBuildingQueue = false;
mutexEditMoneyMatrix = false;
mutexMovingToSupport = false;
mutexSendMoneySide = false;
mutexEnemySpotted = false;
mutexqidCancel = false;
mutexFuelVehicle = false;

scoreMoney = [[],[]];
groupsPatrol = []; groupPatrolJoinMatrix = []; mutexInitResGroups = false; mutexResPatrolScript = false;

mutexAddResPatrol = false;
mutexWorkerJoin = false;

call preprocessFile "impl\Server_constants.sqf";
