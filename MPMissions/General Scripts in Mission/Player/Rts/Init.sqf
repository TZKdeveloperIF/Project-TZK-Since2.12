TzkMapUnitsSelected = false;
TzkMap1x = 0;
TzkMap1y = 0;
TzkMap2x = 0;
TzkMap2y = 0;
TzkMapSelectClicked = false;
TzkMapSelectedTime = 0;
TzkMapSelectEmptyTime = 0;

TzkMapSelectedHighlight = false;
TzkSelectedUnits = [];

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