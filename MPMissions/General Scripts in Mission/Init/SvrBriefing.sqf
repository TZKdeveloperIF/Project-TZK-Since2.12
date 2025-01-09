// blocked players
pingTimes = [[], []]; blockedPlayers = [[], []];
{
	_si = _x; _gi = 0;
	{
		pingTimes select _si set [_gi, -1];
		blockedPlayers select _si set [_gi, false];
		_gi = _gi + 1;
	} foreach (groupMatrix select _si);
} forEach [si0, si1];

// score money
scoreMoney = [[],[]]; {
	_si = _x; _groups = groupMatrix select _si;
	_i = 0; _c = count _groups; while {_i < _c} do {
		scoreMoney select _si set [_i, 0];
		_i = _i + 1;
	};
} forEach [si0, si1];