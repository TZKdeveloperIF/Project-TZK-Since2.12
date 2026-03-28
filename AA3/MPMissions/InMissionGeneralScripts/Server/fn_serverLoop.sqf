// TZK CTI - Server Main Loop
// Mirrors OFP: Server/Loop/Server.sqs
// Spawned from fn_svrFormalStart.sqf. Checks game over, time limit, MHQ/MCV status.

if (!isServer) exitWith {};

private _mhqAlive = [true, true];
private _mcvAlive = [false, false];

// Time limit reminders: at 60m left, 10m, 5m, 1m
private _remind = [3600, 600, 300, 60, -10000];
private _ir = 0;
private _timeNextRemind = if (timeLimit > 0) then {
	timeLimit - (_remind select _ir)
} else {
	1e10
};

while {true} do {
	sleep 2;

	private _gameTime = time - tzkMatchStartTime;

	if (pvGameOver != -1) exitWith {
		[] call TZK_fnc_triggerGameEnd;
		diag_log "TZK CTI: Server loop exiting (game over)";
	};

	// Time limit
	if (timeLimit != 0 && _gameTime > timeLimit) exitWith {
		// Draw: pvGameOver = 1 + 2*0 = 1
		pvGameOver = 1;
		publicVariable "pvGameOver";
		diag_log "TZK CTI: GAME OVER - time limit reached (draw)";
		[] call TZK_fnc_triggerGameEnd;
	};

	// MHQ alive tracking（objNull 时 alive 为 false，勿当作“被击毁”）
	{
		private _si = _x;
		private _mhqObj = mhq select _si;
		if (isNull _mhqObj) then { /* 等待同步或部署失败，不触发摧毁胜利 */ } else {
			if (_mhqAlive select _si && !(alive _mhqObj)) then {
				_mhqAlive set [_si, false];
				[_si] spawn TZK_fnc_checkWinDestruction;
			};
			if (!(_mhqAlive select _si) && alive _mhqObj) then {
				_mhqAlive set [_si, true];
			};
		};
	} forEach [si0, si1];

	// MCV alive tracking
	{
		private _si = _x;
		private _mcvList = MCV select _si;
		if (count _mcvList > 0) then {
			private _anyAlive = {alive _x} count _mcvList > 0;
			if (_mcvAlive select _si && !_anyAlive) then {
				_mcvAlive set [_si, false];
				[_si] spawn TZK_fnc_checkWinDestruction;
			};
			if (!(_mcvAlive select _si) && _anyAlive) then {
				_mcvAlive set [_si, true];
			};
		};
	} forEach [si0, si1];

	// Time limit reminders
	if (timeLimit != 0 && _gameTime > _timeNextRemind) then {
		private _left = timeLimit - _gameTime;
		private _msg = format ["Time remaining: %1 minutes", round (_left / 60)];
		[_msg] remoteExec ["systemChat", 0];
		diag_log format ["TZK CTI: %1", _msg];
		_ir = _ir + 1;
		_timeNextRemind = if (_ir < count _remind) then {
			timeLimit - (_remind select _ir)
		} else {
			1e10
		};
	};
};
