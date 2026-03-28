// TZK CTI - Income Loop (Server only)
// Mirrors OFP: Server/Loop/Income.sqs
// Spawned from fn_svrFormalStart.sqf. Runs every 60s until game over.

if (!isServer) exitWith {};

private _totalIncome = [startMoney select si0, startMoney select si1];
private _timeNext = 60 + tzkMatchStartTime;

// Broadcast initial side totals
{
	private _varName = format ["TZK_sideMoneyTotal_%1", _x];
	missionNamespace setVariable [_varName, _totalIncome select _x, true];
	private _spentName = format ["TZK_sideMoneySpent_%1", _x];
	missionNamespace setVariable [_spentName, moneySpent select _x, true];
} forEach [si0, si1];

while {pvGameOver == -1} do {
	sleep 1;
	if (time >= _timeNext && pvGameOver == -1) then {
		_timeNext = _timeNext + 60;
		call compile preprocessFileLineNumbers "Server\fn_income.sqf";
		sleep 2;
		{
			private _varName = format ["TZK_sideMoneyTotal_%1", _x];
			missionNamespace setVariable [_varName, _totalIncome select _x, true];
			private _spentName = format ["TZK_sideMoneySpent_%1", _x];
			missionNamespace setVariable [_spentName, moneySpent select _x, true];
		} forEach [si0, si1];
	};
};

// Final broadcast on game over
{
	private _varName = format ["TZK_sideMoneyTotal_%1", _x];
	missionNamespace setVariable [_varName, _totalIncome select _x, true];
	private _spentName = format ["TZK_sideMoneySpent_%1", _x];
	missionNamespace setVariable [_spentName, moneySpent select _x, true];
} forEach [si0, si1];

diag_log "TZK CTI: Income loop ended (game over)";
