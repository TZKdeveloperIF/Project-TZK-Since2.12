// args: none
_playerSi = -1; _aicoSi = -1;
// player globalChat format ["%1", pvInit_0],

if (pvInit_0 != -1) then {_playerSi = pvInit_0 % count sides; _aicoSi = siEnemy select _playerSi};
if (pvCustomPlayerMoney != -1) then {
	startMoney set [_playerSi, pvCustomPlayerMoney];
};
if (pvCustomAicoMoney != -1) then {
	startMoney set [_aicoSi, pvCustomAicoMoney];
};