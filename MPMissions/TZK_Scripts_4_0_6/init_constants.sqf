// args: [scripts];

// side info
si0 = 0; si1 = 1; siRes = 2; siBoth = 3; siCiv = 4;
siEnemy = [si1, si0];
sideNames = ["West", "East", "Resistance", "Both", "Civilian"];
groupName = ["WEST", "EAST", "GUER", "", "CIVL"];
sides = [west, east, resistance];
flags = ["\flags\USA.jpg", "\flags\CHINA.jpg", "\flags\FIA.jpg"];
if (bool_TZK_SEMod_Mode) then {
	sides = [west, east, resistance, unknown, civilian];
	flags = ["\flags\USA.jpg", "\flags\Russia.jpg", "\flags\Pirates.jpg", "\flags\White.jpg", "\flags\White.jpg"];
};
mhq = [objNull, objNull, objNull, objNull, objNull];
MCV = [ [], [], [], [], [] ];

siPlayer = -1; giPlayer = -1;
groupPlayer = grpNull;
costWorker = 400; maxWorkers = [10, 10];
rangeSupport = 25; rangeSupportPlane = 30; rangeGetPlaneFlyingStatus = 150;
sendDelay = 1.0;
deleteUnitDelay = [3*60, 60] select dev; deleteObjDelay = deleteUnitDelay;
maxFlightAltitude = 800; maxFlightAltitudePlus = 700;
costRepairMHQ = 30000;
blockTime = 60;
costRespawn = 0;
factorRepairCost = 0.1; factorRepairTime = 0.02;
distMaxCC = 200; distMaxCCUpgraded = 10000; CCdistMax = [distMaxCC, distMaxCC];
iInitNew = 99;
bShowGroups = false;
bShowInfo = true;
bShowMap = false;
SpoofMagazines = [
	"SpoofSwitch_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400",
	"SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400"
];
positionAttach = [-1000, -1000, 100]; positionRespawn = [-1000, -1000, 10];

callsigns = [
	"Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "Kilo", 
	"November", "Yankee", "Zulu", "Two", "Three", "Buffalo", "Guardian", "Convoy", "Fox"
];
GroupsNum = (count callsigns) + 2; giTown = GroupsNum - 2; giWorker = GroupsNum - 1;
maxQ = 1000;
TotalInfoTypes = 100;
// these constants are used for calculating "value" in publicVariable operation.;
// "TotalInfoTypes" could be defined in init script of "InfoMsgTypes" as well.;
// cautious: number in OFP is "Single" so it's necessary to make sure the value of "value" less than 15,000,000;

Musics0 = [
	"Track1", "Track2", "Track3", "Track4", "Track5", "Track6", "Track7", "Track8", "Track9",
	"Track11", "Track12", "Track15", "Track16", "Frost",
	"RTrack1a", "RTrack4", "RTrack5", "RTrack8", "RTrack9", "RTrack10"
];
music0 = 0;
Musics1h = ["Track14", "RTrack1b", "RTrack3", "RTrack6", "RTrack7"];
music1h = 0;
Musics10m = ["Track1", "Track2", "Track3", "Track4", "Track5", "Track6", "Track7", "Track8", "Track10", "RTrack2"];
music10m = 0;

// WAYPOINTS;
countWPPlayer = 10; countWPCO = 20; countTargetMarkers = 10;
wpCO = [[], []];
{
	_si = _x;
	_i = 0; while {_i < countWPCO} do {
		wpCO select _si set [_i, [-1, -1]]; _i = _i + 1
	};
} forEach [si0, si1];
// { _index = 0; while "_index < countWaypoints" do { (waypoint select _x) set [_index, []];  _index = _index + 1 } } foreach [si0, si1];

// vehicleAttached format: [ [tug, [vehicleCenter, vehicleRight, vehicleLeft]], ...];
tsTug = 0; tsTugged = 1;
tsCenter = 0; tsRight = 1; tsLeft = 2;
vehicleAttached = [];
ttHeli = 0; ttBoat = 1; ttTruck = 2; ttAPC = 3;
// vehicleTuggedServer is used to check vehicles' position and fix the attach/detach position bug;
vehicleTuggedServer = []; vehicleTugServer = [];

// art module
mutexTzkArtModule = false;