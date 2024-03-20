// args: none
// this is a process but not a function. script read/write local variables directly

private [{_now}, {_i}, {_c}, {_entry}];

// set 15 secs as threshold
// refer to definition to know values' element format

_now = time;
_i = 0; _c = count _keys; while {_i < _c} do {
	if (_keys select _i != -1) then {
		_entry = _values select _i;
		if (_now > (_entry select 2) + 15) then {
			[_si, _entry select 0, _entry select 1] exec "Server\BuyUnit\AsyncFreeBuildingUnitsCount.sqs";
			
			_keys set [_i, -1]; _entry resize 0;
		};
	};

	_i = _i + 1;
};