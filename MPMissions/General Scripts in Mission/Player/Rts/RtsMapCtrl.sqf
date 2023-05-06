private ["_pos"];
_pos = _this;

if TzkMapSelectClicked then {
	call preprocessFile "Player\Rts\ResetGuideLines.sqf";

	TzkMap2x = _pos select 0; TzkMap2y = _pos select 1;
	TzkDiag2x = _pos select 0; TzkDiag2y = _pos select 1;

	if (TzkMap1x > TzkMap2x) then {_tmp = TzkMap1x, TzkMap1x = TzkMap2x, TzkMap2x = _tmp};
	if (TzkMap1y > TzkMap2y) then {_tmp = TzkMap1y, TzkMap1y = TzkMap2y, TzkMap2y = _tmp};

	true call preprocessFile "Player\Rts\Area.sqf";
	true call preprocessFile "Player\Rts\Selection.sqf";
} else {
	TzkMap1x = _pos select 0; TzkMap1y = _pos select 1;
	TzkDiag1x = _pos select 0; TzkDiag1y = _pos select 1;
	
	TzkMapSelectClicked = true; TzkMapSelectedTime = time;

	call preprocessFile "Player\Rts\SetGuideLines.sqf";

	false call preprocessFile "Player\Rts\Area.sqf";
	false call preprocessFile "Player\Rts\Selection.sqf";
};