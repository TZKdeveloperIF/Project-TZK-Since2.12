// args: none

{ ctrlShow [_x, false] } forEach [_idcPar0Label, _idcPar0List, _idcPar1Label, _idcPar1List, _idcPar2Label, _idcPar2List, _idcButtonBG1, _idcButtonBG2];

// init orders
private [{_i}, {_c}];

_i = _bias1; _c = count aiOrders1 + _offsetOrder1End; while {_i < _c} do {
	lbAdd [_idcOrders1, (aiOrders1 select _i select 0) call funcLocStr];
	_i = _i + 1;
};

if (_lastOrder != -1) then { lbSetCurSel [_idcOrders1, _lastOrder - _bias1] };