_selStItem = lbCurSel _idcStItem;
if(_selStItem == -1) then {
	"{ ctrlShow [_x, false] } forEach [_idcStLabel + _x, _idcStParam + _x]" forEach [0,1,2,3,4,5]
} else {
	_paramDefs = orderTempDefs select (_status select _selStLev select _selStItem) select 1; _i = 0; _c = count _paramDefs;
	while "_i < _c" do {
		_paramDef = _paramDefs select _i;

		ctrlShow [_idcStLabel + _i, true]; ctrlSetText [_idcStLabel + _i, _paramDef select 0];
		ctrlShow [_idcStParam + _i, true];
		lbClear (_idcStParam + _i); lbSetCurSel [_idcStParam + _i, -1];
		_count = call (_paramDef select 1);
		_toText = _paramDef select 2;
		_index = 0; while "_index < _count" do {lbAdd [_idcStParam + _i, _index call _toText]; _index = _index + 1};
		if(_gi != -1) then {
			_j = initStatusMatrix select _si * GroupsNum + _gi select (_status select _selStLev select _selStItem) select _i + 1;
			if(_j != -1) then "lbSetCurSel [_idcStParam + _i, _j]"
		};
		_i = _i + 1
	}
};