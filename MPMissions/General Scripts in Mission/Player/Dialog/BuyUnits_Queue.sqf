// update buy units queue in right-bottom corner

private [{_idcQueue}, {_lastSelQID}, {_qids}, {_types}, {_i}, {_size}, {_qid}, {_type}, {_name}, {_lbId}];

_idcQueue = _this select 0;
_lastSelQID = _this select 1;

lbClear _idcQueue;
lbSetCurSel [_idcQueue, -1];

_qids = qPplIds select 0;
_types = qPplTypes select 0;
_i = 0; _size = qPplIds select 1; while {_i < _size} do {
	_qid = _qids select _i;
	if (_qid != -1) then {
		_type = _types select _i;
		if (_type >= maxUnitTypes) then {
			_name = format ["cs%1", _type - maxUnitTypes];
		} else {
			_name = unitDefs select _type select udName;
		};
		_lbId = lbAdd [_idcQueue, _name];
		if (_type < maxUnitTypes) then {lbSetPicture [_idcQueue, _lbId, unitDefs select _type select udImage]};
		lbSetValue [_idcQueue, _lbId, _qid];
		if (_lastSelQID == _qid) then {lbSetCurSel [_idcQueue, _lbId]};
	};
	_i = _i + 1;
};