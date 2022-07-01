{_try = 0; _si = _x; {
	_gi = (groupMatrix select _si) find (_x);
	while {_try < 10 && _gi == -1} do {
		_gi = (groupMatrix select _si) find (_x);
		_try = _try + 1;
	};
	[_si, _gi] exec "\TZK_Scripts_4_0_4\Server\Info\GroupIsAI.sqs";
} forEach (groupAiMatrix select _si)} forEach [si0, si1];
{
	_si = _x;
	if (bool_TZK_MF_Mode && !dev && (groupMatrix select _si select 0) in (groupAiMatrix select _si)) then {
		startMoney set [_si, 57500+10000];
	};
	_bSkip = false;
	if (bool_TZK_MF_Mode && !dev && count (groupMatrix select _si) == count (groupAiMatrix select _si)) then {
		startMoney set [_si, (startMoney select _si) * 2];
		_bSkip = true;
	};
	if (!_bSkip && !bool_TZK_MF_Mode && !dev && count (groupMatrix select _si) == count (groupAiMatrix select _si)) then {
		startMoney set [_si, 10*(startMoney select _si)];
		if ((groupMatrix select (siEnemy select _si) select 0) in (groupAiMatrix select (siEnemy select _si))) then {
			startMoney set [_si, 0.5*(startMoney select _si)]
		};
		_bSkip = true;
	};
	if (!_bSkip && !bool_TZK_MF_Mode && !dev && (groupMatrix select _si select 0) in (groupAiMatrix select _si)) then {
		startMoney set [_si, 10*0.5*(startMoney select _si)];
		startMoneyPlayer set [_si, 14*(startMoneyPlayer select _si)];
	}
} forEach [si0, si1];

call preprocessFile "Server\InitCustomStartMoney.sqf";