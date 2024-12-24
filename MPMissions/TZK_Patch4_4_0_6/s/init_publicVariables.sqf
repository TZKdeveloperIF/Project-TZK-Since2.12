// VARIABLES SENT BY SERVER AND PLAYERS
// 2.01 ArmA:Resistance provides another available broadcast method and some scripts have applied them

// Ver 2.12 v02 pvKilled
indexKilledTank = 0; mutexKilledTank = false; _i = 0; _c = 5; while {_i < _c} do {
	call format [{pvKilledTank%1 = objNull}, _i];
	_i = _i + 1;
};
pvKilledAircraft = objNull; pvKilledBoat = objNull;
// Ver 2.12 v02 mutex ReEquip
mutexReEquip = false;
// Ver 2.00 Variables
pvAfterBurnerON = objNull; pvAfterBurnerOFF = objNull;
pvNuclearX = 0; pvNuclearY = 0; pvNuclearZ = 0;
pvCheckAI = -1;

mutexTownWorkerGroups = false;

// Earlier Version Variables

mutexScore = false;
mutexReadScore = false;
pvScore = -1;

mutexEditRearmData = false;
mutexAddToUnitMatrix = false;
pvStructMatrixRemove = -1; mutexSendStructMatrixRemove = false; mutexEditStructMatrix = false;

pvRespawnObjectAi0 = objNull;
pvRespawnObjectAi1 = objNull;

pvWorkerBehaviour0 = 0;
pvWorkerBehaviour1 = 0;

pvIncomeRatio0 = 0.7;
pvIncomeRatio1 = 0.7;
pvIncomeRatioPlayer0 = 0.9;
pvIncomeRatioPlayer1 = 0.9;

mutexLock = false;
pvLock = objNull;
pvUnlock = objNull;
pvDisembarkUnit = objNull;

pvObjectRepaired = -1;
pvObjectRepaired_Object = objNull;

mutexInitTownGroupVehicles = false;
mutexTextMsg = false;

// VARIABLES SENT BY SERVER

mutexStructBuilt = false;
pvStructBuilt = -1;
pvStructBuilt_Object = objNull;

// pvTownSide format: townIndex + 100*newSide + 1000*oldSide
mutexTownSide = false;
pvTownSide = -1;

mutexUnitBuilt = false; indexUnitBuiltMsg = 0; countUnitBuiltMsg = 5; _i = 0;
while {_i < countUnitBuiltMsg} do {
	call format [{pvUnitBuilt%1 = -1}, _i];
	call format [{pvUnitBuilt%1_Object = objNull}, _i];
	_i = _i + 1;
};

// pvMoney format: Used to be amount + 100 000*groupIndex + 10 000 000*side. 
// Now _Group PV added and used to save giFrom, giTo and si, pvMoney are for
// amount only, so there is no need to limit money less than 100000 in order
// to avoid amount information's loss in value's passing.
mutexMoney = false;
_i = 0; while {_i < 10} do {call format [{pvMoney%1 = -1; pvMoneyGroup%1 = -1}, _i]; _i = _i + 1};

mutexMoneyTransfer = false;
pvMoneyTransfer = -1;
pvMoneyTransferGroup = -1;

mutexInfo = false;
pvInfo0 = -1; pvInfo1 = -1; pvInfo2 = -1; pvInfo3 = -1;
pvInfoEx0 = -1; pvInfoEx1 = -1; pvInfoEx2 = -1; pvInfoEx3 = -1;

mutexAIGroup = false;

pvMoneySideTotal = -1;
pvMoneySideSpent = -1;

pvMovingToSupport_Unit = objNull;
pvMovingToSupport_Support = objNull;

// pvGameOver values: (draw) + 2*(reasonDraw) + 2*4*(siWinner) + 2*4*2*(reasonWin)
// 2-draw: 0:noDraw, 1:draw
// 4-reasonDraw: (ignored if draw=0) 0:timeLimit, 1:TBD, 2:TBD, 3:TBD
// 2-siWinner: (ignored if draw=1)
// 4-reasonWin: (ignored if draw=1) 0:destruction, 1:towns, 2:TBD, 3:TBD
pvGameOver = -1;

pvDebugVars = false;
pvDebugVar1 = -1000;
pvDebugVar2 = -1000;
pvDebugVar3 = -1000;

// VARIABLES SENT BY PLAYERS

mutexGroupIsAI = false;

pvBuildStruct_Type = -1;
pvBuildStruct_PosX = 0;
pvBuildStruct_PosY = 0;
pvBuildStruct_Dir = 0;

pvUndo = grpNull;

pvMoneyGive = -1; pvMoneyGiveGroup = -1;
mutexMoneyGive = false;
pvMoneySpent = -1;

pvUpgrade = -1;

pvArt = -1;
pvArtPos = -1;

pvEnemy0 = objNull; pvEnemy1 = objNull;

pvRepairMHQ = -1;
mutexRepairMCV = false;
pvRepairMCV = -1;
pvRepairMCV_object = objNull;
pvPing = -1;

pvCO = -1;

Destruction_Undo0 = false;
Destruction_Undo1 = false;

mutexDestruction = false;
pvDestruction = -1;
pvDestruction_Object = objNull;

// todo: redirect current file since definitions removed
pvCustomPlayerMoney = -1; pvCustomAicoMoney = -1;

if bool_TZK_199_Mode then {
	pvSpoofTarget = objNull, 
	mutexSpoofTarget = false,
};

call preprocessFile "impl\PublicVariable.sqf"

