{
	_si = _x;
	_groups = groupMatrix select _si;
	_countGroups = count _groups;
	_countPlayers = count ((groupMatrix select _si) - (groupAiMatrix select _si));
	if (_countGroups != 0) then {
		_startMoney = startMoney select _si;
		_startMoneyPlayer = startMoneyPlayer select _si;
		if (!dev && (groupMatrix select _si select 0) in (groupAiMatrix select _si)
			&& _countPlayers > 0) then {
			_startMoneyPlayer = 0.5*_startMoney/_countPlayers;
		};
		if (!dev && _startMoneyPlayer > 8000) then  {_startMoneyPlayer = 8000};
		if bool_TZK_MF_Mode then {_startMoneyPlayer = 2000};

		while {_countPlayers*_startMoneyPlayer > 0.5*_startMoney} do {
			_startMoneyPlayer = 0.5*_startMoneyPlayer;
		};

		_startMoneyPlayer = _startMoneyPlayer - (_startMoneyPlayer % 1);
		_moneyRequest = moneyRequest select _si;
		private [{_commanderIndex}];
		_index = 0; while {_index < _countGroups} do {
			_group = _groups select _index;
			_bSkipGroupSide = false;
			if (_group == groupCommander select _si) then {
				_commanderIndex = _index; _bSkipGroupSide = true;
			};
			if (_group in (groupAiMatrix select _si)) then {_bSkipGroupSide = true};
			if !_bSkipGroupSide then {
				[_si, _index, _startMoneyPlayer, 1] exec localize {TZK_MONEY_SERVER_ADD};
				_startMoney = _startMoney - _startMoneyPlayer;
			};

			_moneyRequest set [_index, 0];
			_index = _index + 1;
		};
		[_si, _commanderIndex, _startMoney, 1] exec localize {TZK_MONEY_SERVER_ADD};
	}
} forEach [si0, si1];