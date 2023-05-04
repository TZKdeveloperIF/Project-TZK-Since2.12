// args: 
// external read-only variables: _nearByTransports, _typesBoard, _unit
// external output variables: _transports, _suggestedIdx

private [{_transp}, {_i}, {_c}, {_vt}, {_j}, {_slot}, {_comp}];
_j = 0;
_i = 0; _c = count _nearByTransports; while {_i < _c} do {
	_transp = _nearByTransports select _i select 0;
	_vt = (_transp call funcGetUnitTypeFromObject);
	_i = _i + 1;

	if (_vt in _typesBoard && not isNull driver _transp && canMove _transp && (getPos _transp) select 2 < 5 && speed _transp < 1) then {
		_slot = (_transp call funcGetTranspVol) - (_transp call funcGetCargoNum);
		if (_slot > 0) then {
			_transports set [_j, [_transp, _slot]];
			_j = _j + 1;
		}
	};
};
_transports resize _j;

_c = count _transports; if (_c > 0) then {
	// sort by slots
	_comp = {(_this select 0 select 1) > (_this select 1 select 1)};
	[_transports, 0, count _transports, _comp] call preprocessFile "Util\stdMergeSort.sqf";
	// calculate suggested index
	private [{_r}, {_total}];
	_total = 0; _i = 0, while {_i < _c} do {
		_total = _total + (_transports select _i select 1);
		_i = _i + 1;
	};
	_r = random _total; _suggestedIdx = -1;
	while {_r >= 0 && _suggestedIdx < _c - 1} do {
		_suggestedIdx = _suggestedIdx + 1;
		_r = _r - (_transports select _suggestedIdx select 1);
	};
};