private ["_pos"];
_pos = _this;

if TzkMapSelectClicked then {
	call preprocessFile "Player\Marker\ResetGuideLines.sqf";

	TzkMap2x = _pos select 0; TzkMap2y = _pos select 1;
	if (TzkMap1x > TzkMap2x) then {_tmp = TzkMap1x, TzkMap1x = TzkMap2x, TzkMap2x = _tmp};
	if (TzkMap1y > TzkMap2y) then {_tmp = TzkMap1y, TzkMap1y = TzkMap2y, TzkMap2y = _tmp};
	TzkMapUnitsSelected = true;

	// marker op
	"TzkRtsArea" setMarkerSize [(TzkMap2x - TzkMap1x) / 2, (TzkMap2y - TzkMap1y) / 2];
	"TzkRtsArea" setMarkerPos [(TzkMap2x + TzkMap1x) / 2, (TzkMap2y + TzkMap1y) / 2];
	// select area op
} else {
	TzkMap1x = _pos select 0;
	TzkMap1y = _pos select 1;
	TzkMapSelectClicked = true;
	TzkMapSelectedTime = time;
	TzkMapUnitsSelected = false;
	// marker op
	"TzkRtsArea" setMarkerSize [0,0];
	"TzkRtsArea" setMarkerPos [0,0];

	"TzkRtsMarkerBgX" setMarkerPos [TzkMap1x, TzkMap1y];
	"TzkRtsMarkerBgY" setMarkerPos [TzkMap1x, TzkMap1y];
	"TzkRtsMarkerLineX" setMarkerPos [TzkMap1x, TzkMap1y];
	"TzkRtsMarkerLineY" setMarkerPos [TzkMap1x, TzkMap1y];
};