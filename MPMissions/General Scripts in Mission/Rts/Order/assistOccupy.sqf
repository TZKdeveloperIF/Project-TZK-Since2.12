// args: 
// external read-only variables: _nearByTargets, _selectedTypes, _unit
// external output variables: _targets, _suggestedIdx

private [{_object}, {_i}, {_c}, {_vt}, {_j}, {_slot}, {_comp}];
_j = 0;
_i = 0; _c = count _nearByTargets; while {_i < _c} do {
	_object = _nearByTargets select _i select 0;
	_vt = (_object call funcGetStructTypeFromObject);
	_i = _i + 1;

	if (_vt in _selectedTypes && isNull gunner _object) then {
		_targets set [_j, [_object, _unit distance _object]];
		_j = _j + 1;
	};
};
_targets resize _j;

_c = count _targets; if (_c > 0) then {
	// sort by slots
	_comp = {(_this select 0 select 1) < (_this select 1 select 1)};
	[_targets, 0, count _targets, _comp] call preprocessFile "Algo\mergeSort.sqf";
	// calculate suggested index
	private [{_r}, {_total}];
	_total = 0; _i = 0, while {_i < _c} do {
		_total = _total + (_targets select _i select 1);
		_i = _i + 1;
	};
	_r = random _total; _suggestedIdx = -1;
	while {_r >= 0 && _suggestedIdx < _c - 1} do {
		_suggestedIdx = _suggestedIdx + 1;
		_r = _r - (_targets select _suggestedIdx select 1);
	};
};