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

diag_log "TZK CTI: MissionEnv initialized";
