if (_this) then {
	TzkMapAreaCreated = true;

	"TzkRtsArea" setMarkerSize [(TzkMap2x - TzkMap1x) / 2, (TzkMap2y - TzkMap1y) / 2];
	"TzkRtsArea" setMarkerPos [(TzkMap2x + TzkMap1x) / 2, (TzkMap2y + TzkMap1y) / 2];
} else {
	TzkMapAreaCreated = false;

	0 call loadFile "Player\Rts\AreaSetDir.sqf";

	"TzkRtsArea" setMarkerSize [0,0];
	"TzkRtsArea" setMarkerPos [0,0];
};