private [{_curTime},{_i},{_c},{_valid},{_v},{_ka}];

_curTime = time;
_i = 0, _c = count _arr; while {_i < _c} do {
	_valid = false;
	_v = _arr select _i;
	if (alive _v) then {
		// helicopter check
		{if (_x distance _v < 2 * viewDistance) then {_valid = true}} forEach _helis;
		// knowsAbout check
		if not _valid then {
			_ka = group player knowsAbout _v;
			if (_ka >= 3 && _ka <= 4) then {_valid = true};
		};
		// time check
		if not _valid then {
			if (_curTime - (_timeArr select _i) < _cycle) then {_valid = true};
		};
	};

	if not _valid then {_arr set [_i, objNull]};
	_i = _i + 1;
};