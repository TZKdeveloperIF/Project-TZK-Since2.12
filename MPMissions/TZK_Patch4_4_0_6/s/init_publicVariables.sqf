// Origin variables using publicVariable

// Ver 2.12 v02 pvKilled
indexKilledTank = 0; mutexKilledTank = false; _i = 0; _c = 5; while {_i < _c} do {
	call format [{pvKilledTank%1 = objNull}, _i];
	_i = _i + 1;
};
pvKilledAircraft = objNull; pvKilledBoat = objNull;

// VARIABLES SENT BY SERVER

if bool_TZK_SEMod_Mode then {
	mutexTownSide = false;
	pvTownSide = -1;
};

// pvGameOver values: (draw) + 2*(reasonDraw) + 2*4*(siWinner) + 2*4*2*(reasonWin)
// 2-draw: 0:noDraw, 1:draw
// 4-reasonDraw: (ignored if draw=0) 0:timeLimit, 1:TBD, 2:TBD, 3:TBD
// 2-siWinner: (ignored if draw=1)
// 4-reasonWin: (ignored if draw=1) 0:destruction, 1:towns, 2:TBD, 3:TBD
pvGameOver = -1;

// VARIABLES SENT BY PLAYERS
if bool_TZK_199_Mode then {
	pvSpoofTarget = objNull, 
	mutexSpoofTarget = false,
};

call preprocessFile "impl\PublicVariable.sqf"

