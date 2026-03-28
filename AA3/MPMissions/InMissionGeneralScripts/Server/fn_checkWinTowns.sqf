// TZK CTI - Check Town Victory (Server only)
// Mirrors OFP: TZK_Patch4_4_0_6/s/Server/CheckWinTowns.sqs
// Args: [si]
// If all towns belong to si for a countdown period, declare town victory.
// pvGameOver encoding: draw + 2*reasonDraw + 2*4*siWinner + 2*4*2*reasonWin
//   reasonWin: 0=destruction, 1=towns, 2=surrender

if (!isServer) exitWith {};

params ["_si"];

private _townCount = count towns;
private _minutes = (10 - _townCount) max 2;
private _seconds = _minutes * 60;
private _interval = 15;

while {_seconds > 0 && pvGameOver == -1} do {
	private _held = { (_x select tdSide) == _si } count towns;
	if (_held != _townCount) exitWith {};

	if ((_seconds % 60) == 0) then {
		private _msg = format ["%1 holds all towns! Victory in %2 minute(s)...", ["WEST","EAST"] select _si, _seconds / 60];
		[_msg] remoteExec ["systemChat", 0];
		diag_log format ["TZK CTI: %1", _msg];
	};

	sleep _interval;
	_seconds = _seconds - _interval;
};

// Final check
if (pvGameOver != -1) exitWith {};
private _held = { (_x select tdSide) == _si } count towns;
if (_held == _townCount) then {
	// reasonWin = 1 (towns)
	pvGameOver = 0 + 2 * 4 * _si + 2 * 4 * 2 * 1;
	publicVariable "pvGameOver";
	diag_log format ["TZK CTI: GAME OVER - side %1 wins by towns", _si];
};
