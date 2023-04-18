TzkMapAreaCreated = false;
TzkMap1x = 0;
TzkMap1y = 0;
TzkMap2x = 0;
TzkMap2y = 0;
TzkMapSelectClicked = false;
TzkMapSelectedTime = 0;
TzkMapSelectEmptyTime = 0;
TzkMapSelectDir = 0;

TzkMapSelectedHighlight = false; TzkMapRtsFlashingDisabled = false;
TzkSelectedUnits = []; TzkSelUnitsStack = [TzkSelectedUnits, [], []]; TzkSelStackIdx = 0;
TzkSelLv1Btn = -1; TzkSelLv2Btn = -1;

createMarker ["TzkCmdMarker", [-10, -10]];
mutexRtsMouse = false; rtsMouseId = 0;

{
	createMarker [_x, [-10, -10]];
	_x setMarkerColor "ColorBlue";
	_x setMarkerShape "RECTANGLE";
	_x setMarkerSize [10, 10000]
} forEach ["TzkRtsMarkerBgX", "TzkRtsMarkerBgY"];
"TzkRtsMarkerBgY" setMarkerDir 90;
{
	createMarker [_x, [-10, -10]];
	_x setMarkerColor "ColorRed";
	_x setMarkerShape "RECTANGLE";
	_x setMarkerSize [2, 10000]
} forEach ["TzkRtsMarkerLineX", "TzkRtsMarkerLineY"];
"TzkRtsMarkerLineY" setMarkerDir 90;

_marker = "TzkRtsArea";
createMarker [_marker, [0, 0]];
_marker setMarkerColor "ColorCyan_xj400";
_marker setMarkerShape "RECTANGLE";
_marker setMarkerBrush "Cross";
_marker setMarkerSize [0, 0];

// variables for dialog
RtsAreaBuildStruct = [0, 0];
RtsSvrArtAreaIdx = -1;
RtsPplArtAreaIdx = -1;