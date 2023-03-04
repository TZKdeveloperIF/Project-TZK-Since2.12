// args: none

{ ctrlShow [_x, false] } forEach [_idcPar0Label, _idcPar0List, _idcPar1Label, _idcPar1List, _idcPar2Label, _idcPar2List, _idcButtonBG1, _idcButtonBG2];

// init orders
private [{_i}, {_c}, {_picCnt}];
_i = 0; _c = count aiOrders1; _picCnt = count aiOrdersChn1; while {_i < _c} do {
	if (bool_TZK_CHN_Lang && _i < _picCnt) then {
		lbAdd [_idcOrders1, ""], lbSetPicture [_idcOrders1, _i, aiOrdersChn1 select _i];
	} else {
		lbAdd [_idcOrders1, (aiOrders1 select _i select 0) call funcLocStr];
	};
	_i = _i + 1;
};
_i = 0; _c = count aiOrders2; _picCnt = count aiOrdersChn2; while {_i < _c} do {
	if (bool_TZK_CHN_Lang && _i < _picCnt) then {
		lbAdd [_idcOrders2, ""], lbSetPicture [_idcOrders2, _i, aiOrdersChn2 select _i];
	} else {
		lbAdd [_idcOrders2, (aiOrders2 select _i select 0) call funcLocStr];
	};

	_i = _i + 1;
};

if (lastOrder1 != -1) then { lbSetCurSel [_idcOrders1, lastOrder1] };
if (lastOrder2 != -1) then { lbSetCurSel [_idcOrders2, lastOrder2] };