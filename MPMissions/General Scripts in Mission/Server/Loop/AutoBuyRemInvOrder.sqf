private [{_i},{_c},{_entry},{_val}];
// remove invalid orders
_i = count _grpBuyOrders - 1; while {_i >= 0} do {
	_entry = _grpBuyOrders select _i select 9;
	if (count _entry == 1) then {
		_val = _entry select 0;
		_val = _val - 1; // grow old to die
		if (_val < 0) then {
			_grpBuyOrders resize _i;
		} else {
			_entry set [0, _val];
		};
	};
	_i = _i - 1;
};