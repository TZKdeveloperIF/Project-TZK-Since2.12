// TZK CTI - Trigger Game End
// Mirrors OFP: TZK_Patch4_4_0_6/s/Common/TriggerGameEnd.sqs
// Decodes pvGameOver and creates appropriate end triggers for A3.
// pvGameOver encoding:
//   bit 0: draw flag (1=draw, 0=winner)
//   bits 1-2: reasonDraw (if draw)
//   bits 1-2: siWinner (if not draw)   → (pvGameOver / 8) % 2 = siWinner
//   bits 3+: reasonWin (if not draw)   → pvGameOver / 16

if (!isServer) exitWith {};

private _isDraw = (pvGameOver % 2) == 1;

if (_isDraw) then {
	private _reasonDraw = floor ((pvGameOver / 2) % 4);
	diag_log format ["TZK CTI: Game ended in DRAW (reason %1)", _reasonDraw];
	// A3: end with no winner
	private _reasonText = ["Time Limit", "Unknown"] select (_reasonDraw min 1);
	private _msg = format ["Game Over - Draw (%1)", _reasonText];
	[_msg] remoteExec ["systemChat", 0];
} else {
	private _siWinner = floor ((pvGameOver / 8) % 2);
	private _reasonWin = floor (pvGameOver / 16);
	private _reasonTexts = ["Destruction", "Town Control", "Surrender"];
	private _reasonText = _reasonTexts select (_reasonWin min 2);
	private _sideName = ["WEST", "EAST"] select _siWinner;
	diag_log format ["TZK CTI: Game ended - %1 wins by %2", _sideName, _reasonText];
	private _msg = format ["Game Over - %1 wins! (%2)", _sideName, _reasonText];
	[_msg] remoteExec ["systemChat", 0];

	// A3 end triggers
	private _winSide = [west, east] select _siWinner;
	private _loseSide = [east, west] select _siWinner;

	private _trgWin = createTrigger ["EmptyDetector", [0,0,0]];
	_trgWin setTriggerStatements ["true", format ["['end1', true, %1] call BIS_fnc_endMission", _siWinner], ""];

	private _trgLose = createTrigger ["EmptyDetector", [0,0,0]];
	_trgLose setTriggerStatements ["true", format ["['end2', false, %1] call BIS_fnc_endMission", (siEnemy select _siWinner)], ""];
};

// Set gameEndType for compatibility
gameEndType = pvGameOver;
publicVariable "gameEndType";
