// args: none

{ ctrlShow [_x, false] } forEach [_idcPar0Label, _idcPar0List, _idcPar1Label, _idcPar1List, _idcPar2Label, _idcPar2List, _idcButtonBG1, _idcButtonBG2];

// init orders
private [{_i}, {_c}, {_picCnt}, {_useChn}];
// aiOrdersChn1 is lazy-defined variable. It might be undefined
_picCnt = -1; if (_picCnt < count aiOrdersChn1) then {_picCnt = count aiOrdersChn1};

_i = 0; _c = count aiOrders1; while {_i < _c} do {
	_useChn = false;
	if (bool_TZK_CHN_Lang && _i < _picCnt) then {if (aiOrdersChn1 select _i != "bind") then {_useChn = true}};

	if _useChn then {
		lbAdd [_idcOrders1, ""], lbSetPicture [_idcOrders1, _i, aiOrdersChn1 select _i];
	} else {
		lbAdd [_idcOrders1, (aiOrders1 select _i select 0) call funcLocStr];
	};
	_i = _i + 1;
};

// aiOrdersChn2 is lazy-defined variable. It might be undefined
_picCnt = -1; if (_picCnt < count aiOrdersChn2) then {_picCnt = count aiOrdersChn2};

_i = 0; _c = count aiOrders2; while {_i < _c} do {
	_useChn = false;
	if (bool_TZK_CHN_Lang && _i < _picCnt) then {if (aiOrdersChn2 select _i != "bind") then {_useChn = true}};

	if _useChn then {
		lbAdd [_idcOrders2, ""], lbSetPicture [_idcOrders2, _i, aiOrdersChn2 select _i];
	} else {
		lbAdd [_idcOrders2, (aiOrders2 select _i select 0) call funcLocStr];
	};

	_i = _i + 1;
};

if (lastOrder1 != -1) then { lbSetCurSel [_idcOrders1, lastOrder1] };
if (lastOrder2 != -1) then { lbSetCurSel [_idcOrders2, lastOrder2] };