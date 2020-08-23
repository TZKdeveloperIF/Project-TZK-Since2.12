private ["_idcMoney", "_idcScore", "_idcIncomeRatio", "_idcIncomeRatioPlayer", "_idcTowns", "_idcIncome", "_idcGroupMarkers", "_idcWorkerBehaviour", "_idcUpgradeList", "_idcWorkerBehaviour", 
"_groups", "_groupsName", "_groupsMoney", "_groupsAI", "_groupCommander", 
"_texts", "_index", "_count", 
"_id", "_x", "_money", "_moneySide", "_score", "_groupCount", "_place", "_siX", "_giX", "_scoreX", "_incomeRatio", "_selectedIncome", "_incomeRatioPlayer",
"_townCount", "_towns", "_income", "_factor", "_players", "_aileaders", "_incomePlayer", "_incomeAiLeaders", "_incomeCommander", "_upgState"];

_idcMoney = _this select 0;
_idcScore = _this select 1;
_idcIncomeRatio = _this select 2;
_idcIncomeRatioPlayer = _this select 3;
_idcTowns = _this select 4;
_idcIncome = _this select 5;
_idcTransferGroup = _this select 6;
_idcGroupMarkers = _this select 7;
_idcWorkerBehaviour = _this select 8;
_idcUpgradeList = _this select 9;


_groups = groupMatrix select siPlayer;
_groupsName = groupNameMatrix select siPlayer;
_groupsMoney = groupMoneyMatrix select siPlayer;
_groupsAI = groupAiMatrix select siPlayer;
_groupCommander = (groupCommander select siPlayer);


ctrlSetText [IDC_TEXT_GAMETIME_Options, [] call funcGetTimeString ];

_money = _groupsMoney select giPlayer; _moneySide = 0;
_index = 0;
{ _moneySide = _moneySide + (_groupsMoney select _index); _index=_index+1 } forEach _groups;
ctrlSetText [_idcMoney, format["$ You/Side: %1/%2", _money, _moneySide]];

_score = [siPlayer, giPlayer] call funcCalcScore;
_groupCount = count (groupMatrix select si0) + count (groupMatrix select si1);
_place = 1;
_siX = si0;
_giX = 0;
{ _scoreX = [_siX, _giX] call funcCalcScore; if (_score < _scoreX) then {_place=_place+1}; _giX=_giX+1 } forEach (groupScoreMatrix select _siX);
_siX = si1;
_giX = 0;
{ _scoreX = [_siX, _giX] call funcCalcScore; if (_score < _scoreX) then {_place=_place+1}; _giX=_giX+1 } forEach (groupScoreMatrix select _siX);
ctrlSetText [_idcScore, format["Score (Pos): %1 (%2/%3)", _score, _place, _groupCount]];


_incomeRatio = [pvIncomeRatio0, pvIncomeRatio1] select (siPlayer == si1);
_selectedIncome = (lbValue [_idcIncomeRatio, lbCurSel _idcIncomeRatio])/100;
if ( ((ctrlEnabled _idcIncomeRatio) && _incomeRatio != _selectedIncome) ) then {if (siPlayer==si0) then {pvIncomeRatio0=_selectedIncome;PublicVariable "pvIncomeRatio0"} else {pvIncomeRatio1=_selectedIncome;PublicVariable "pvIncomeRatio1"}; };
_incomeRatio = [pvIncomeRatio0, pvIncomeRatio1] select (siPlayer == si1);
if (_incomeRatio != _selectedIncome) then {lbSetCurSel[_idcIncomeRatio, 10*_incomeRatio]};

_incomeRatioPlayer = [pvIncomeRatioPlayer0, pvIncomeRatioPlayer1] select (siPlayer == si1);
_selectedIncome = (lbValue [_idcIncomeRatioPlayer, lbCurSel _idcIncomeRatioPlayer])/100;
if ((ctrlEnabled _idcIncomeRatioPlayer) && _incomeRatioPlayer != _selectedIncome) then { if (siPlayer==si0) then {pvIncomeRatioPlayer0=_selectedIncome;PublicVariable "pvIncomeRatioPlayer0"} else {pvIncomeRatioPlayer1=_selectedIncome;PublicVariable "pvIncomeRatioPlayer1"}; };
_incomeRatioPlayer = [pvIncomeRatioPlayer0, pvIncomeRatioPlayer1] select (siPlayer == si1);
if (_incomeRatioPlayer != _selectedIncome) then { lbSetCurSel[_idcIncomeRatioPlayer, 10*_incomeRatioPlayer]; };

_townCount = count towns; _towns = 0; _income = 0;
{ if ((_x select tdSide) == siPlayer) then { _towns=_towns+1; _income=_income+(_x select tdValue) } } forEach towns;
ctrlSetText [_idcTowns, format["Towns: %1 of %2", _towns, _townCount]];

_factor = 1; if (time > 60*90) Then {_factor = 1.2}; if (time > 60*150) Then {_factor = 1.5};
_income = _income*incomex*_factor;
_players = count (_groups - [_groupCommander] - _groupsAI); _aileaders = count _groupsAI;
_incomePlayer = 0; _incomeAiLeaders = 0;
if (_players > 0) then {_incomePlayer = _income*(1-_incomeRatio)*_incomeRatioPlayer/_players; _incomePlayer = _incomePlayer - _incomePlayer % 1};
if (_aileaders > 0) then {_incomeAiLeaders = _income*(1-_incomeRatio)*(1-_incomeRatioPlayer)/_aileaders; _incomeAiLeaders = _incomeAiLeaders - _incomeAiLeaders % 1};
_incomeCommander = _income - _incomePlayer*_players - _incomeAiLeaders*_aileaders; _incomeCommander = _incomeCommander - _incomeCommander % 1;
ctrlSetText [_idcIncome, format["Income You/Side: %1/%2", [_incomePlayer, _incomeCommander] select (groupPlayer == _groupCommander), _income]];


_texts = []; _index = 0;
{ _texts set [_index, format["%1 %2 $%3 %4", [name leader _x, "AI"] select (_x in _groupsAI), _groupsName select _index, _groupsMoney select _index, count units _x] ]; _index=_index+1 } forEach _groups;

lbClear _idcTransferGroup; _index = 0;
{ _id = lbAdd [_idcTransferGroup, _x]; lbSetPicture [_idcTransferGroup, _id, ""]; _index = _index + 1} forEach _texts;

if (lbCurSel _idcGroupMarkers >= 0) Then {giMarkersAI = lbCurSel _idcGroupMarkers};

call format["pvWorkerBehaviour%1", siPlayer];
if (call format["pvWorkerBehaviour%1 != lbCurSel _idcWorkerBehaviour", siPlayer]) then { call format["pvWorkerBehaviour%1 = lbCurSel _idcWorkerBehaviour; PublicVariable ""pvWorkerBehaviour%1""", siPlayer] };

_index = 0; _upgState = upgMatrix select siPlayer;
lbClear _idcUpgradeList;
private ["_iconPath"]; _iconPath = "\TZK_Texture_4_0_0\CTI_Image\Icon\"; if (bool_TZK_Vanilla_Mode) Then {_iconPath = "\TZK_Objects\CTI_Image\Icon\"};
{ _id=lbAdd [_idcUpgradeList, format["%1 $%2 %3min", (_x select 0) call funcLocStr, _x select 1, _x select 2] ]; lbSetPicture[_idcUpgradeList, _id, [_iconPath + "square_empty.paa", _iconPath + "square_yellow.paa", _iconPath + "square_green.paa"] select (_upgState select _index)]; _index=_index+1} forEach upgDefs;