lbClear _idcList;

private [{_i}, {_c}];
_c = count _history;
_i = _cursor; while {_i < _c} do {
	lbAdd [_idcList, _history select _i];
	_i = _i + 1;
};
_i = 0; while {_i < _cursor} do {
	lbAdd [_idcList, _history select _i];
	_i = _i + 1;
}