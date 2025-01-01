// args: [custom info]

{_try = 0; _si = _x; {
	_gi = (groupMatrix select _si) find (_x);
	while {_try < 10 && _gi == -1} do {
		_gi = (groupMatrix select _si) find (_x);
		_try = _try + 1;
	};
	[_si, _gi] exec localize {TZK_INFO_SERVER_CHECK_AI};
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
		private [{_siEnemy}]; _siEnemy = (siEnemy select _si);
		if ((groupMatrix select _siEnemy select 0) in (groupAiMatrix select _siEnemy)) then {
			if (count (groupMatrix select _siEnemy) > count (groupAiMatrix select _siEnemy)) then {
				startMoney set [_si, 0.5*(startMoney select _si)]
			};
		};
		_bSkip = true;
	};
	if (!_bSkip && !bool_TZK_MF_Mode && !dev && (groupMatrix select _si select 0) in (groupAiMatrix select _si)) then {
		startMoney set [_si, 10*0.5*(startMoney select _si)];
		startMoneyPlayer set [_si, 14*(startMoneyPlayer select _si)];
	}
} forEach [si0, si1];

// process custom info
if (_this select 0) then {
	private [{_playerSi}, {_aicoSi}, {_val}];
	_playerSi = _this select 3; _aicoSi = siEnemy select _playerSi;

	if (_this select 1 != -1) then {
		startMoney set [_playerSi, _this select 1];
	};
	if (_this select 2 != -1) then {
		startMoney set [_aicoSi, _this select 2];
	};
};