if (_selOrder != -1) then {
	_orderType = _selOrder;
	"ctrlShow [_x, false]" forEach (_idcParamLabels + _idcParams);
	_paramDefs = orderTempDefs select _orderType select 1;

	_i = 0; _c = count _paramDefs;
	while "_i < _c" do {
		_paramDef = _paramDefs select _i;

		ctrlShow [_idcParamLabels select _i, true]; ctrlSetText [_idcParamLabels select _i, _paramDef select 0];
		ctrlShow [_idcParams select _i, true];
		lbClear (_idcParams select _i);
		_count = call (_paramDef select 1);
		_toText = _paramDef select 2;
		_index = 0; while "_index < _count" do {lbAdd [_idcParams select _i, _index call _toText]; _index = _index + 1};

		_i = _i + 1
	}
};