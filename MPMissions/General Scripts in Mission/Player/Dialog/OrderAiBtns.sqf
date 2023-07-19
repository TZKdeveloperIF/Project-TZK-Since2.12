// args: none
ctrlSetText [_idcMidBtn0 + 0, "Heal & (Rearm)"];
ctrlSetText [_idcMidBtn0 + 1, "Rearm & Heal"];
ctrlSetText [_idcMidBtn0 + 2, "Board..."];
ctrlSetText [_idcMidBtn0 + 3, "Move"];
ctrlSetText [_idcMidBtn0 + 4, "Clear Order"];
ctrlSetText [_idcMidBtn0 + 5, "Disband"];
if (bool_TZK_CHN_inited && bool_TZK_CHN_Lang) then {
	{ctrlSetText [_idcMidBtn0 + _x, ""]} forEach [0,1,2,3,4,5];

	private [{_idcPic}];
	_idcPic = IDC + 16 * 15 + 0;
	{ctrlSetText [_idcPic + _x, aiOrdersChn1 select _x]} forEach [0,1,2,3];

	ctrlSetText [_idcPic + 4, aiOrdersChn1 select 17];
	ctrlSetText [_idcPic + 5, aiOrdersChn1 select 18];

	{ctrlSetText [_idcLeftBtn0 + _x, ""]} forEach [0,1,2,3,4,5];
	_idcPic = IDC + 16 * 16 + 0;
	ctrlSetText [_idcPic + 0, aiOrdersChn2 select 4];
	ctrlSetText [_idcPic + 1, aiOrdersChn2 select 6];
	ctrlSetText [_idcPic + 2, aiOrdersChn2 select 8];
	ctrlSetText [_idcPic + 3, aiOrdersChn2 select 5];
	ctrlSetText [_idcPic + 4, aiOrdersChn2 select 9];
};