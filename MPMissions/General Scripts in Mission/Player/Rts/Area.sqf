if (_this) then {
	TzkMapAreaCreated = true;

	"TzkRtsArea" setMarkerSize [(TzkMap2x - TzkMap1x) / 2, (TzkMap2y - TzkMap1y) / 2];
	"TzkRtsArea" setMarkerPos [(TzkMap2x + TzkMap1x) / 2, (TzkMap2y + TzkMap1y) / 2];

	private [{_width}, {_height}];
	_height = 10;
	if (_height > (TzkMap2x - TzkMap1x) / 2) then {_height = (TzkMap2x - TzkMap1x) / 2};
	if (_height > (TzkMap2y - TzkMap1y) / 2) then {_height = (TzkMap2y - TzkMap1y) / 2};
	_width = sqrt((TzkMap2x - TzkMap1x) * (TzkMap2x - TzkMap1x) + 
		(TzkMap2y - TzkMap1y) * (TzkMap2y - TzkMap1y)) / 2;

	"TzkRtsAreadiagonal" setMarkerSize [_width, _height];
	"TzkRtsAreadiagonal" setMarkerPos [(TzkMap2x + TzkMap1x) / 2, (TzkMap2y + TzkMap1y) / 2];

	if (0 == (TzkDiag2y - TzkDiag1y) && 0 == (TzkDiag2x - TzkDiag1x)) then {
		TzkDiagDir = 0;
	} else {
		TzkDiagDir = (TzkDiag2y - TzkDiag1y) atan2 (TzkDiag2x - TzkDiag1x);
	};
	TzkDiagDir = 360 - TzkDiagDir;
	"TzkRtsAreadiagonal" setMarkerDir TzkDiagDir;
} else {
	TzkMapAreaCreated = false;

	0 call loadFile "Player\Rts\AreaSetDir.sqf";

	"TzkRtsArea" setMarkerSize [0,0];
	"TzkRtsArea" setMarkerPos [0,0];

	"TzkRtsAreadiagonal" setMarkerSize [0,0];
	"TzkRtsAreadiagonal" setMarkerPos [0,0];
};