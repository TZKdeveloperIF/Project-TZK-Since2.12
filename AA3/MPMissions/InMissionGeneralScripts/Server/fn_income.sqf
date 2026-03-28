// TZK CTI - Income Calculation (Server only)
// Mirrors OFP: TZK_Patch4_4_0_6/s/Server/Loop/Income.sqf
// Called once per minute from fn_incomeLoop.sqf.
// Reads: towns, incomex, IncomeGrow_TZK, groupMatrix, groupAiMatrix,
//        groupCommander, incomeRateCo, incomeRatePlayer, scoreMoney
// Writes: groupMoneyMatrix via fn_moneyAdd, _totalIncome (via caller's namespace)

if (!isServer) exitWith {};

private _incomeTowns = [0, 0];

private _factor = 1;
private _gameTime = time - tzkMatchStartTime;
if (_gameTime > 5400) then { _factor = 1.2 };
if (_gameTime > 9000) then { _factor = 1.5 };
_factor = [1, _factor] select IncomeGrow_TZK;

{
	private _si = _x select tdSide;
	private _val = _x select tdValue;
	if (_si != siRes && _si != siCiv && _si != siBoth) then {
		_incomeTowns set [_si, (_incomeTowns select _si) + _val * incomex * _factor];
	};
} forEach towns;

{
	_incomeTowns set [_x, floor (_incomeTowns select _x)];
	_totalIncome set [_x, (_totalIncome select _x) + (_incomeTowns select _x)];
} forEach [si0, si1];

private _moneyPerScore = 10;

{
	private _si = _x;
	private _rateCo = incomeRateCo select _si;
	private _ratePlayer = incomeRatePlayer select _si;
	private _groups = groupMatrix select _si;
	private _cmdGroup = groupCommander select _si;
	private _aiGroups = groupAiMatrix select _si;
	private _playerGroups = _groups - [_cmdGroup] - _aiGroups;

	private _playerIncome = 0;
	private _aiIncome = 0;

	if (count _playerGroups > 0) then {
		_playerIncome = (_incomeTowns select _si) * (1 - _rateCo) * _ratePlayer / (count _playerGroups);
		_playerIncome = _playerIncome - (_playerIncome % 1);
	};
	if (count _aiGroups > 0) then {
		_aiIncome = (_incomeTowns select _si) * (1 - _rateCo) * (1 - _ratePlayer) / (count _aiGroups);
		_aiIncome = _aiIncome - (_aiIncome % 1);
	};

	private _commanderIncome = (_incomeTowns select _si) - _playerIncome * (count _playerGroups) - _aiIncome * (count _aiGroups);
	_commanderIncome = _commanderIncome - (_commanderIncome % 1);

	private _gi = 0;
	{
		private _bonus = _moneyPerScore * (scoreMoney select _si select _gi);
		_bonus = _bonus - (_bonus % 1);
		_totalIncome set [_si, (_totalIncome select _si) + _bonus];

		private _income = 0;
		if (_x == _cmdGroup) then {
			_income = _commanderIncome;
		} else {
			if (_x in _aiGroups) then {
				_income = _aiIncome;
			} else {
				_income = _playerIncome;
			};
		};

		[_si, _gi, _income + _bonus, 0] call TZK_fnc_moneyAdd;
		scoreMoney select _si set [_gi, 0];
		_gi = _gi + 1;
	} forEach _groups;
} forEach [si0, si1];
