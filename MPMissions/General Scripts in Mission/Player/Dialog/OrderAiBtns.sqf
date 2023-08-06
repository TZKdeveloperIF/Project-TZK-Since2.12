// args: none

// Left buttons
ctrlSetText [_idcLeftBtn0 + 0, "Move"];
ctrlSetText [_idcLeftBtn0 + 1, "Clear Order"];
ctrlSetText [_idcLeftBtn0 + 13, "Stop"];

ctrlSetText [_idcLeftBtn0 + 2, "Shoot Area"];
// 3
ctrlSetText [_idcLeftBtn0 + 4, "Switch Magazine"];
ctrlSetText [_idcLeftBtn0 + 5, "Buy Equipment"];
ctrlSetText [_idcLeftBtn0 + 6, "Switch Seat"];
ctrlSetText [_idcLeftBtn0 + 7, "Join"];
ctrlSetText [_idcLeftBtn0 + 8, "CrossBridge"];
ctrlSetText [_idcLeftBtn0 + 9, "Move Land"];
ctrlSetText [_idcLeftBtn0 + 10, "Move Ship"];
ctrlSetText [_idcLeftBtn0 + 11, "DisableMine"];
ctrlSetText [_idcLeftBtn0 + 12, "Mine Area"];
// 13

// Middle buttons
ctrlSetText [_idcMidBtn0 + 0, "Heal & (Rearm)"];
ctrlSetText [_idcMidBtn0 + 1, "Rearm & Heal"];
ctrlSetText [_idcMidBtn0 + 2, "Board..."];
// 3
ctrlSetText [_idcMidBtn0 + 4, "Clear Order"];
ctrlSetText [_idcMidBtn0 + 5, "Disband"];

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