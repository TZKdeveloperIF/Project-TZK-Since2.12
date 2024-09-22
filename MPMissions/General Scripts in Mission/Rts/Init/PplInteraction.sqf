TzkMapAreaCreated = false;
TzkMap1x = 0;
TzkMap1y = 0;
TzkMap2x = 0;
TzkMap2y = 0;
// position info for diagonal of TZK Area
TzkDiag1x = 0, TzkDiag1y = 0, TzkDiag2x = 0, TzkDiag2y = 0;
// angle info for diagonal of TZK Area
TzkDiagDir = 0;

TzkMapSelectClicked = false;
TzkMapFirstGuideLineDrawnTime = 0;
TzkMapAreaLastUsedTime = 0;
TzkMapSelectDir = 0;

TzkMapSelectedHighlight = false; TzkMapRtsFlashingDisabled = false;
// Define arrays for different kinds of RTS selected units. Define stack for each of them.
// The array of these stacks is a "cube"
TzkSelUnitsCube = [
	[[], [], []]	// TzkSelUnitsStack = [TzkSelectedUnits, [], []]
,	[[], [], []]	// Stack for selected workers
,	[[], [], []]	// stack for selected base group units
];
// selected units enum. 0: AI group units, 1: worker group units, 2: base group units
TzkRtsSelectEnum = 0;
// By now unnecessary to define different index for each stack
TzkSelStackIdx = 0;
TzkSelLv1Btn = -1; TzkSelLv2Btn = -1;

createMarker ["TzkCmdMarker", [-10, -10]];
mutexRtsMouse = false; rtsMouseId = 0;

{
	createMarker [_x, [-10, -10]];
	_x setMarkerColor "ColorBlue";
	_x setMarkerShape "RECTANGLE";
	_x setMarkerSize [10, 25600]
} forEach ["TzkRtsMarkerBgX", "TzkRtsMarkerBgY"];
"TzkRtsMarkerBgY" setMarkerDir 90;
{
	createMarker [_x, [-10, -10]];
	_x setMarkerColor "ColorRed";
	_x setMarkerShape "RECTANGLE";
	_x setMarkerSize [2, 25600]
} forEach ["TzkRtsMarkerLineX", "TzkRtsMarkerLineY"];
"TzkRtsMarkerLineY" setMarkerDir 90;

_marker = "TzkRtsArea";
createMarker [_marker, [0, 0]];
_marker setMarkerColor "ColorCyan_xj400";
_marker setMarkerShape "RECTANGLE";
_marker setMarkerBrush "Cross";
_marker setMarkerSize [0, 0];

_marker = "TzkRtsAreadiagonal";
createMarker [_marker, [0, 0]];
_marker setMarkerColor "ColorOrange_xj400";
_marker setMarkerShape "RECTANGLE";
_marker setMarkerSize [0, 0];

_marker = "TzkRtsStartPos";
createMarker [_marker, [0, 0]];
_marker setMarkerColor "ColorDarkPurple_xj400";
_marker setMarkerShape "ELLIPSE";
_marker setMarkerSize [0, 0];

// variables for dialog

RtsWpCoMode = 0;
RtsPriorityPointDialogEnum = 2; // determine which dialog will be called when clicking on map
RtsLatestPointDialogTime = 0; // the time that player used rts point dialog 

// mutex in creating objects
mutexRtsBaseSoldier = false;

// Global variable for special-dynamic markers
// Singleton. Player can have only one map-display interaction
TzkMarkerArtAreaTurnOnTime = 0; TzkMarkerArtAreaState = false;
TzkMarkerBuildAreaTurnOnTime = 0; TzkMarkerBuildAreaState = false;