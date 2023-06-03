_income = 0; _incomeTowns = [0,0];

_factor = 1; 
if (time > 60*90) then {_factor = 1.2}; 
if (time > 60*150) then {_factor = 1.5};
_factor = [1, _factor] select IncomeGrow_TZK;

{
	_si = _x select tdSide;
	_val = _x select tdValue; 
	if (_si != siRes && _si != siCiv && _si != siBoth) then {
		_incomeTowns set [_si, (_incomeTowns select _si) + _val*incomex*_factor];
	};
} forEach towns;
// special income for specific commander
{
	_si = _x;
	if (time > (SideCmdChangedTime select _si) + 5 * 60) then { // On 5 mins after changing commander this income part won't effect
		_extraRate = 0; _name = name leader (groupCommander select _si);
		if ("LXL" == _name) then {_extraRate = 0.25};
		if ("ZHBQ" == _name) then {_extraRate = 1};
		if (_extraRate > 0) then {
			_delta = (_incomeTowns select _si) * _extraRate; _delta = _delta - _delta % 1;
			if (_delta > 0) then {
				_incomeTowns set [_si, _delta + (_incomeTowns select _si)];
				[_si, format ["Extra income $%1 for our expected commander: %2", _delta, _name]] exec "Server\Msg\sSvrMsg2Cmd.sqs";
			};
		};
	};
} forEach [si0, si1];
{
	_incomeTowns set [_x, (_incomeTowns select _x) - (_incomeTowns select _x) % 1], 
	_totalIncome set [_x, (_totalIncome select _x) + (_incomeTowns select _x)];
} forEach [si0, si1];

{
	_si = _x;
	_IncomeRatio = 0; _IncomeRatioPlayer = 0;
	call format ["_IncomeRatio = pvIncomeRatio%1; _IncomeRatioPlayer = pvIncomeRatioPlayer%1", _si];
	_groups = groupMatrix select _si; _groupCommander = groupCommander select _si; _groupAIs = groupAiMatrix select _si;
	_playerIncome = 0; _aiIncome = 0; _playerGroups = _groups - [_groupCommander] - _groupAIs;
	if (count _playerGroups > 0) then {
		_playerIncome = (_incomeTowns select _si) * (1 - _IncomeRatio) * _IncomeRatioPlayer / (count _playerGroups);
		_playerIncome = _playerIncome - _playerIncome % 1;
	};
	if (count _groupAIs > 0) then {
		_aiIncome = (_incomeTowns select _si) * (1 - _IncomeRatio) * (1 - _IncomeRatioPlayer) / (count _groupAIs);
		_aiIncome = _aiIncome - _aiIncome % 1;
	};
	_commanderIncome = (_incomeTowns select _si) - _playerIncome * (count _playerGroups) - _aiIncome * (count _groupAIs);
	_commanderIncome = _commanderIncome - _commanderIncome % 1;
	_gi = 0;
	{
		_bonus = _moneyPerScore * (scoreMoney select _si select _gi);
		_bonus = _bonus - _bonus % 1;
		_totalIncome set [_si, (_totalIncome select _si) + _bonus];
		if (-1 != (_groupAIs - [_groupCommander]) find _x) then {
			_income = _aiIncome;
		} else {
			_income = [_playerIncome, _commanderIncome] select (_x == _groupCommander);
		};
		[_si, _gi, _income + _bonus, 0] exec localize {TZK_MONEY_SERVER_ADD};
		[_bonus, _si, _gi] exec localize {TZK_INFO_SERVER_SCORE_MONEY};
		scoreMoney select _si set [_gi, 0];
		_gi = _gi + 1;
	} forEach _groups;
} forEach [si0, si1];