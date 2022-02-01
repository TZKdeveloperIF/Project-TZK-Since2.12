// args: none

{ ctrlShow [_x, false] } forEach [_idcPar0Label, _idcPar0List, _idcPar1Label, _idcPar1List, _idcPar2Label, _idcPar2List, _idcButtonBG1, _idcButtonBG2];

// init orders
private [{_i}, {_c}];
_i = 0; _c = count aiOrders1; while {_i < _c} do {
	_order = aiOrders1 select _i;
	if !bool_TZK_CHN_Lang then {
		lbAdd [_idcOrders1, (_order select 0) call funcLocStr];
	} else {
		lbAdd [_idcOrders1, ""], lbSetPicture [_idcOrders1, _i, aiOrdersChn1 select _i];
	};
	_i = _i + 1;
};
_i = 0; _c = count aiOrders2; while {_i < _c} do {
	_order = aiOrders2 select _i;
	if !bool_TZK_CHN_Lang then {
		lbAdd [_idcOrders2, (_order select 0) call funcLocStr];
	} else {
		lbAdd [_idcOrders2, ""], lbSetPicture [_idcOrders2, _i, aiOrdersChn2 select _i];
	};
	_i = _i + 1;
};

if (lastOrder1 != -1) then { lbSetCurSel [_idcOrders1, lastOrder1] };
if (lastOrder2 != -1) then { lbSetCurSel [_idcOrders2, lastOrder2] };