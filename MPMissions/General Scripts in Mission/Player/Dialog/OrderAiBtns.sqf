// args: none

// Left buttons
ctrlSetText [_idcLeftBtn0 + 0, localize {TZK_LANG_MOVE}];
ctrlSetText [_idcLeftBtn0 + 1, format ["%1 %2", localize {TZK_LANG_CLEAR}, localize {TZK_LANG_ORDER}]];
ctrlSetText [_idcLeftBtn0 + 13, localize {TZK_LANG_STOP}];

ctrlSetText [_idcLeftBtn0 + 2, localize {TZK_LANG_SHOOT} + " " + localize {TZK_LANG_AREA}];
// 3
ctrlSetText [_idcLeftBtn0 + 4, format ["%1 %2", localize {TZK_LANG_SWITCH}, localize {TZK_LANG_MAGAZINE}]];
ctrlShow [_idcLeftBtn0 + 4, false];

ctrlSetText [_idcLeftBtn0 + 5, format ["%1 %2", localize {TZK_LANG_DISABLE}, localize {TZK_LANG_MINE}]];
ctrlSetText [_idcLeftBtn0 + 6, format ["%1 %2", localize {TZK_LANG_MINE_VERB}, localize {TZK_LANG_AREA}]];

ctrlSetText [_idcLeftBtn0 + 7, localize {TZK_LANG_JOIN}];
ctrlShow [_idcLeftBtn0 + 7, false];

ctrlSetText [_idcLeftBtn0 + 8, format ["%1%2", localize {TZK_LANG_CROSS}, localize {TZK_LANG_BRIDGE}]];
ctrlSetText [_idcLeftBtn0 + 9, format ["%1 %2", localize {TZK_LANG_MOVE}, localize {TZK_LANG_LAND}]];
ctrlSetText [_idcLeftBtn0 + 10, format ["%1 %2", localize {TZK_LANG_MOVE}, localize {TZK_LANG_SHIP}]];
ctrlShow [_idcLeftBtn0 + 11, false];
ctrlSetText [_idcLeftBtn0 + 12, format ["%1 %2", localize {TZK_LANG_BUY}, localize {TZK_LANG_EQUIPMENT}]];
// 13

// Middle buttons
ctrlSetText [_idcMidBtn0 + 0, format ["%1 (& %2)", localize {TZK_LANG_HEAL}, localize {TZK_LANG_REARM}]];
ctrlSetText [_idcMidBtn0 + 1, format ["%1 & %2", localize {TZK_LANG_REARM}, localize {TZK_LANG_HEAL}]];
ctrlSetText [_idcMidBtn0 + 2, format ["%1...", localize {TZK_LANG_BOARD}]];
// 3
ctrlSetText [_idcMidBtn0 + 4, format ["%1 %2", localize {TZK_LANG_CLEAR}, localize {TZK_LANG_ORDER}]];
ctrlSetText [_idcMidBtn0 + 5, localize {TZK_LANG_DISBAND}];

if (bool_TZK_CHN_inited && bool_TZK_CHN_Lang) then {
	{ctrlSetText [_idcMidBtn0 + _x, ""]} forEach [0,1,2,4,5];

	private [{_idcPic}];
	_idcPic = IDC + 16 * 15 + 0;
	{ctrlSetText [_idcPic + _x, aiOrdersChn1 select _x]} forEach [0,1,2];

	ctrlSetText [_idcPic + 4, aiOrdersChn1 select 17];
	ctrlSetText [_idcPic + 5, aiOrdersChn1 select 18];

	{ctrlSetText [_idcLeftBtn0 + _x, ""]} forEach [2,4,5,6,7];
	_idcPic = IDC + 16 * 16 + 0;
	ctrlSetText [_idcPic + 2, aiOrdersChn2 select 4];
	ctrlSetText [_idcPic + 4, aiOrdersChn2 select 6];
	ctrlSetText [_idcPic + 5, aiOrdersChn2 select 8];
	ctrlSetText [_idcPic + 6, aiOrdersChn2 select 5];
	ctrlSetText [_idcPic + 7, aiOrdersChn2 select 9];
};