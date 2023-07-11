private ["_pos"];
_pos = _this;

if TzkMapSelectClicked then {
	call preprocessFile "Player\Rts\ResetGuideLines.sqf";

	TzkMap2x = _pos select 0; TzkMap2y = _pos select 1;
	TzkDiag2x = _pos select 0; TzkDiag2y = _pos select 1;

	true call preprocessFile "Player\Rts\Area.sqf";
	true call preprocessFile "Player\Rts\Selection.sqf";
} else {
	TzkMap1x = _pos select 0; TzkMap1y = _pos select 1;
	TzkDiag1x = _pos select 0; TzkDiag1y = _pos select 1;
	
	TzkMapSelectClicked = true; TzkMapFirstGuideLineDrawnTime = time;

	call preprocessFile "Player\Rts\SetGuideLines.sqf";

	false call preprocessFile "Player\Rts\Area.sqf";
	false call preprocessFile "Player\Rts\Selection.sqf";
};