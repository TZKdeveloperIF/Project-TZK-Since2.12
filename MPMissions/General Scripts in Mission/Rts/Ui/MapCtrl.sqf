private ["_pos"];
_pos = _this;

if TzkMapSelectClicked then {
	call preprocessFile (TzkScripts select 364);

	TzkMap2x = _pos select 0; TzkMap2y = _pos select 1;
	TzkDiag2x = _pos select 0; TzkDiag2y = _pos select 1;

	true call preprocessFile (TzkScripts select 361);
	true call preprocessFile (TzkScripts select 362);
} else {
	TzkMap1x = _pos select 0; TzkMap1y = _pos select 1;
	TzkDiag1x = _pos select 0; TzkDiag1y = _pos select 1;
	
	TzkMapSelectClicked = true; TzkMapFirstGuideLineDrawnTime = time;

	call preprocessFile (TzkScripts select 365);

	false call preprocessFile (TzkScripts select 361);
	false call preprocessFile (TzkScripts select 362);
};