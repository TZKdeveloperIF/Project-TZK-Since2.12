private [
	"_texts", "_index", "_count", 
	"_id", "_x", "_money", "_moneySide", "_score", "_siX", "_giX", "_scoreX", "_incomeRatioCo", "_selectedIncome", "_incomeRatioPlayer",
	"_townCount", "_towns", "_income", "_factor", "_players", "_aileaders", "_incomePlayer", "_incomeAiLeaders", "_incomeCommander", "_upgState"
];

ctrlSetText [IDC_TEXT_GAMETIME_Options, [] call funcGetTimeString ];

_money = _groupsMoney select giPlayer; _moneySide = 0;
_index = 0; { _moneySide = _moneySide + (_groupsMoney select _index); _index = _index + 1 } forEach _groups;
ctrlSetText [_idcMoney, format["$ You/Side: %1/%2", _money, _moneySide]];

_score = [siPlayer, giPlayer] call funcCalcScore;
ctrlSetText [_idcScore, format ["Score: %1", _score]];


_incomeRatioCo = incomeRateCo select siPlayer;
_selectedIncome = lbValue [_idcIncomeRatio, lbCurSel _idcIncomeRatio];
if ((ctrlEnabled _idcIncomeRatio) && _incomeRatioCo != _selectedIncome / 100) then {
	[_selectedIncome, siPlayer] call preprocessFile "Net\sIncomeRateCo.sqf";
};
_incomeRatioCo = incomeRateCo select siPlayer;
if (_incomeRatioCo != _selectedIncome) then {lbSetCurSel[_idcIncomeRatio, 10*_incomeRatioCo]};

_incomeRatioPlayer = incomeRatePlayer select siPlayer;
_selectedIncome = lbValue [_idcIncomeRatioPlayer, lbCurSel _idcIncomeRatioPlayer];
if ((ctrlEnabled _idcIncomeRatioPlayer) && _incomeRatioPlayer != _selectedIncome / 100) then {
	[_selectedIncome, siPlayer] call preprocessFile "Net\sIncomeRatePpl.sqf";
};
_incomeRatioPlayer = incomeRatePlayer select siPlayer;
if (_incomeRatioPlayer != _selectedIncome / 100) then { lbSetCurSel[_idcIncomeRatioPlayer, 10*_incomeRatioPlayer]; };

_townCount = count towns; _towns = 0; _income = 0;
{ if ((_x select tdSide) == siPlayer) then { _towns=_towns+1; _income=_income+(_x select tdValue) } } forEach towns;
ctrlSetText [_idcTowns, format["Towns: %1 of %2", _towns, _townCount]];

_factor = 1; if (time > 60*90) Then {_factor = 1.2}; if (time > 60*150) Then {_factor = 1.5}; _factor = [1, _factor] select IncomeGrow_TZK;
_income = _income*incomex*_factor;
_players = count (_groups - [_groupCommander] - _groupsAI); _aileaders = count _groupsAI;
_incomePlayer = 0; _incomeAiLeaders = 0;
if (_players > 0) then {_incomePlayer = _income*(1-_incomeRatioCo)*_incomeRatioPlayer/_players; _incomePlayer = _incomePlayer - _incomePlayer % 1};
if (_aileaders > 0) then {_incomeAiLeaders = _income*(1-_incomeRatioCo)*(1-_incomeRatioPlayer)/_aileaders; _incomeAiLeaders = _incomeAiLeaders - _incomeAiLeaders % 1};
_incomeCommander = _income - _incomePlayer*_players - _incomeAiLeaders*_aileaders; _incomeCommander = _incomeCommander - _incomeCommander % 1;
ctrlSetText [_idcIncome, format["Income You/Side: %1/%2", [_incomePlayer, _incomeCommander] select (groupPlayer == _groupCommander), _income]];


_texts = []; _index = 0;
{ _texts set [_index, format["%1 %2 $%3 %4", [name leader _x, "AI"] select (_x in _groupsAI), _groupsName select _index, _groupsMoney select _index, count units _x] ]; _index=_index+1 } forEach _groups;

lbClear _idcTransferGroup; _index = 0;
{ _id = lbAdd [_idcTransferGroup, _x]; lbSetPicture [_idcTransferGroup, _id, ""]; _index = _index + 1} forEach _texts;

if ((workerBehaviour select siPlayer) != lbCurSel _idcWorkerBehaviour) then {
	(lbCurSel _idcWorkerBehaviour) exec "Net\sWorkerBehaviour.sqs";
};

_index = 0; _upgState = upgMatrix select siPlayer;
lbClear _idcUpgradeList;
{
	_showChn = bool_TZK_CHN_Lang;
	if (_showChn) then {_showChn = "" != upgChnDefs select _index};
	if !_showChn then {
		_id = lbAdd [_idcUpgradeList, format["%1 $%2 %3min", (_x select 0) call funcLocStr, _x select 1, _x select 2] ];
		lbSetPicture[_idcUpgradeList, _id, _icons select (_upgState select _index)];
	} else {
		_id = lbAdd [_idcUpgradeList, format[" $%2 %3min", "", _x select 1, _x select 2] ];
		lbSetPicture[_idcUpgradeList, _id, upgChnDefs select _index];
		lbSetColor [_idcUpgradeList, _id, _colors select (_upgState select _index)]
	};
	_index = _index + 1;
} forEach upgDefs;