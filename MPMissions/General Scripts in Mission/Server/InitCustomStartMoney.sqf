// args: none

if (pvCustomPveStatus != -1 && pvCustomPveStatus != 0) then {
	private [{_playerSi}, {_aicoSi}, {_val}];
	_playerSi = -1; _aicoSi = -1;
	_val = pvCustomPveStatus; _val = (_val - _val % 2) / 2;
	_playerSi = _val % count sides; _aicoSi = siEnemy select _playerSi;

	if (pvCustomPlayerMoney != -1) then {
		startMoney set [_playerSi, pvCustomPlayerMoney];
	};
	if (pvCustomAicoMoney != -1) then {
		startMoney set [_aicoSi, pvCustomAicoMoney];
	};
};