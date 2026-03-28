// TZK CTI - Check Destruction Victory (Server only)
// Mirrors OFP: TZK_Scripts_4_0_4/Server/CheckWinDestruction.sqs
// Args: [siLose]
// If losing side has dead MHQ, no alive MCVs, and no critical structures → enemy wins.
// pvGameOver encoding: 0 + 2*4*siWin + 2*4*2*reasonWin (reasonWin=0 destruction)

if (!isServer) exitWith {};

params ["_siLose"];

sleep 2;
if (pvGameOver != -1) exitWith {};

private _mhqObj = mhq select _siLose;
if (isNull _mhqObj) exitWith {
	diag_log format ["TZK CTI: destruction check skipped (MHQ null) si=%1", _siLose];
};
if (alive _mhqObj) exitWith {};

private _mcvs = MCV select _siLose;
if ({alive _x} count _mcvs > 0) exitWith {};

{
	private _working = [_siLose, _x] call TZK_fnc_getWorkingStructures;
	if (count _working > 0) exitWith {};
} forEach structsCritcal;

// If we reach here after checking all critical struct types and none alive:
private _allDead = true;
{
	if (count ([_siLose, _x] call TZK_fnc_getWorkingStructures) > 0) exitWith { _allDead = false };
} forEach structsCritcal;

if (!_allDead) exitWith {};

private _siWin = siEnemy select _siLose;
// reasonWin = 0 (destruction)
pvGameOver = 0 + 2 * 4 * _siWin + 2 * 4 * 2 * 0;
publicVariable "pvGameOver";
diag_log format ["TZK CTI: GAME OVER - side %1 wins by destruction (side %2 eliminated)", _siWin, _siLose];
