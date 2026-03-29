// TZK CTI - Options Dialog Per-Tick Update (Client only)
// Mirrors OFP: TZK_Patch5_4_0_6/s/UI/Options_Update.sqf
// Called every ~0.2s from fn_optionsDialog.sqf loop.
// Args: [display, si, gi, groups, groupsAI, groupsName, groupsMoney, groupCommander, isCommander]

params ["_disp", "_si", "_gi", "_groups", "_groupsAI", "_groupsName", "_groupsMoney", "_groupCommander", "_isCommander"];

// ========== Game time ==========
private _elapsed = if (tzkMatchStartTime >= 0) then { time - tzkMatchStartTime } else { 0 };
private _h = floor (_elapsed / 3600);
private _m = floor ((_elapsed % 3600) / 60);
private _s = floor (_elapsed % 60);
(_disp displayCtrl TZK_IDC_OPT_GAMETIME) ctrlSetText format ["%1:%2:%3",
	[str _h, "0" + str _h] select (_h < 10),
	[str _m, "0" + str _m] select (_m < 10),
	[str _s, "0" + str _s] select (_s < 10)
];

// ========== Money ==========
private _myMoney = _groupsMoney select _gi;
private _sideMoney = 0;
{ _sideMoney = _sideMoney + (_groupsMoney select _forEachIndex) } forEach _groups;
(_disp displayCtrl TZK_IDC_OPT_MONEY) ctrlSetText format ["$ You/Side: %1/%2", _myMoney, _sideMoney];

// ========== Score ==========
private _score = [_si, _gi] call TZK_fnc_calcScore;
(_disp displayCtrl TZK_IDC_OPT_SCORE) ctrlSetText format ["Score: %1", _score];

// ========== Towns & Income ==========
private _townCount = count towns;
private _myTowns = 0;
private _rawIncome = 0;
{
	if ((_x select tdSide) == _si) then {
		_myTowns = _myTowns + 1;
		_rawIncome = _rawIncome + (_x select tdValue);
	};
} forEach towns;
(_disp displayCtrl TZK_IDC_OPT_TOWNS) ctrlSetText format ["Towns: %1 of %2", _myTowns, _townCount];

private _factor = 1;
if (!isNil "IncomeGrow_TZK" && {IncomeGrow_TZK}) then {
	private _gt = if (tzkMatchStartTime >= 0) then { time - tzkMatchStartTime } else { 0 };
	if (_gt > 5400) then { _factor = 1.2 };
	if (_gt > 9000) then { _factor = 1.5 };
};
private _totalIncome = _rawIncome * incomex * _factor;

private _rateCo = incomeRateCo select _si;
private _ratePl = incomeRatePlayer select _si;
private _players = count (_groups - [_groupCommander] - _groupsAI);
private _aiCount = count _groupsAI;

private _incPlayer = 0;
private _incAI = 0;
if (_players > 0) then {
	_incPlayer = _totalIncome * (1 - _rateCo) * _ratePl / _players;
	_incPlayer = _incPlayer - (_incPlayer mod 1);
};
if (_aiCount > 0) then {
	_incAI = _totalIncome * (1 - _rateCo) * (1 - _ratePl) / _aiCount;
	_incAI = _incAI - (_incAI mod 1);
};
private _incCo = _totalIncome - _incPlayer * _players - _incAI * _aiCount;
_incCo = _incCo - (_incCo mod 1);

private _myInc = if ((group player) == _groupCommander) then { _incCo } else { _incPlayer };
(_disp displayCtrl TZK_IDC_OPT_INCOME) ctrlSetText format ["Income You/Side: %1/%2", _myInc, floor _totalIncome];

// ========== Sync income combo selection from server values ==========
private _selCo = lbValue [TZK_IDC_OPT_INCOME_CO, lbCurSel (_disp displayCtrl TZK_IDC_OPT_INCOME_CO)];
if (_selCo >= 0 && {_rateCo != _selCo / 100}) then {
	(_disp displayCtrl TZK_IDC_OPT_INCOME_CO) lbSetCurSel (round (_rateCo * 10));
};
private _selPl = lbValue [TZK_IDC_OPT_INCOME_PLAYER, lbCurSel (_disp displayCtrl TZK_IDC_OPT_INCOME_PLAYER)];
if (_selPl >= 0 && {_ratePl != _selPl / 100}) then {
	(_disp displayCtrl TZK_IDC_OPT_INCOME_PLAYER) lbSetCurSel (round (_ratePl * 10));
};

// ========== Rebuild transfer group list (names + money + unit count) ==========
private _ctrlGrp = _disp displayCtrl TZK_IDC_OPT_TRANSFER_GRP;
private _prevSel = lbCurSel _ctrlGrp;
lbClear _ctrlGrp;
{
	private _idx = _forEachIndex;
	private _label = format ["%1 %2  $%3  [%4]",
		[name leader _x, "AI"] select (_x in _groupsAI),
		_groupsName select _idx,
		_groupsMoney select _idx,
		count units _x
	];
	_ctrlGrp lbAdd _label;
} forEach _groups;
if (_prevSel >= 0 && _prevSel < lbSize _ctrlGrp) then {
	_ctrlGrp lbSetCurSel _prevSel;
};

// ========== Upgrade list refresh (color by state) ==========
if (!isNil "upgDefs") then {
	private _ctrlUpg = _disp displayCtrl TZK_IDC_OPT_UPGRADE_LIST;
	private _upgState = upgMatrix select _si;
	private _prevUpgSel = lbCurSel _ctrlUpg;
	lbClear _ctrlUpg;
	{
		private _id = _ctrlUpg lbAdd format ["%1 $%2 %3min", _x select 0, _x select 1, _x select 2];
		private _state = _upgState select _forEachIndex;
		_ctrlUpg lbSetColor [_id,
			switch (_state) do {
				case 0: { [1,1,1,0.5] };
				case 1: { [1,1,0,0.7] };
				case 2: { [0,1,0.2,0.8] };
				default { [1,1,1,0.5] };
			}
		];
	} forEach upgDefs;
	if (_prevUpgSel >= 0 && _prevUpgSel < lbSize _ctrlUpg) then {
		_ctrlUpg lbSetCurSel _prevUpgSel;
	};
};
