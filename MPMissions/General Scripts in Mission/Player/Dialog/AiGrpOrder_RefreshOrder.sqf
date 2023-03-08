// args: update "current selection" in parameter lists: bool

if (_selOrder != -1) then {if (_this || not _this) then { // arg must be bool otherwise endless loop will appear
	_orderType = _selOrder;
	{ ctrlShow [_x, false] } foreach [_idcPar0Label, _idcPar0, _idcPar1Label, _idcPar1, _idcPar2Label, _idcPar2];
	_paramDefs = orderDefs select _orderType select 1;
	private [{_idcLabel}, {_idcParam}];
	_i = 0; _c = count _paramDefs; while {_i < _c} do {
		_idcLabel = _idcParamLabels select _i; _idcParam = _idcParams select _i;

		_paramDef = _paramDefs select _i;

		ctrlShow [_idcLabel, true];
		ctrlSetText [_idcLabel, _paramDef select 0];
		
		_toText = _paramDef select 2;
		ctrlShow [_idcParam, true];
		lbClear _idcParam;
		_j = 0; _cj = call (_paramDef select 1); while {_j < _cj} do {
			lbAdd [_idcParam, _j call _toText];
			_j = _j + 1;
		};
		// update "current selection" in parameter lists when required
		if _this then {lbSetCurSel [_idcParams select _i, 0]};

		_i = _i + 1;
	};
}};