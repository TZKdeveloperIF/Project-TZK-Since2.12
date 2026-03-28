// TZK CTI - Distribute Starting Money (Server only)
// Mirrors OFP: TZK_Patch4_4_0_6/s/Net/sStartMoney.sqf
// Called from fn_svrFormalStart.sqf after match start time is set.

if (!isServer) exitWith {};

{
	private _si = _x;
	private _groups = groupMatrix select _si;
	private _countGroups = count _groups;
	private _aiGroups = groupAiMatrix select _si;
	private _countPlayers = count (_groups - _aiGroups);

	if (_countGroups == 0) then { continue };

	private _sideMoney = startMoney select _si;
	private _playerMoney = startMoneyPlayer select _si;

	// If commander is AI and there are players, halve side money per player
	if ((groupMatrix select _si select 0) in _aiGroups && _countPlayers > 0) then {
		_playerMoney = 0.5 * _sideMoney / _countPlayers;
	};
	_playerMoney = _playerMoney min 8000;

	// Shrink if total player allocation > half of side money
	while {_countPlayers * _playerMoney > 0.5 * _sideMoney} do {
		_playerMoney = 0.5 * _playerMoney;
	};
	_playerMoney = floor _playerMoney;

	private _commanderIdx = -1;
	{
		private _gi = _forEachIndex;
		private _grp = _x;

		if (_grp == (groupCommander select _si)) then {
			_commanderIdx = _gi;
		} else {
			if !(_grp in _aiGroups) then {
				[_si, _gi, _playerMoney, 1] call TZK_fnc_moneyAdd;
				_sideMoney = _sideMoney - _playerMoney;
			};
		};
	} forEach _groups;

	// Commander gets the remainder
	if (_commanderIdx >= 0) then {
		[_si, _commanderIdx, _sideMoney, 1] call TZK_fnc_moneyAdd;
	};
} forEach [si0, si1];

diag_log "TZK CTI: Starting money distributed";
