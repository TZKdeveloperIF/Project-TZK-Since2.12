// args: none
// this is a process but not a function. script read/write local variables directly

private [{_legal}, {_start}];
_legal = true;
_start = getPosASL vehicle _unit;

// ship should near sea enough
if _legal then {if not ([_start, 100] call funcPosNearSea) then {
	_legal = false;
	_msg = format ["%1 %2 %3 %4 %5 %6 %7 %5 %8 100m. Order not executed."
		, localize {TZK_LANG_START}
		, localize {TZK_LANG_POSITION}
		, localize {TZK_LANG_SHOULD}
		, localize {TZK_LANG_IN}
		, localize {TZK_LANG_SEA}
		, localize {TZK_LANG_OR}
		, localize {TZK_LANG_NEAR}
		, localize {TZK_LANG_WITHIN}
	];
}};
// check points along the way. Enter water twice is unacceptable
if _legal then {
	private [{_vec}, {_len}, {_step}, {_cursor}, {_point}
		, {_waterEntered}, {_leaveWater}, {_inWater}
	];

	_vec = [_destination, _start] call funcVectorSub; _len = _vec call funcVectorLength;
	_vec = [_vec, 1 / _len] call funcVectorScale; // _vec is unit vector now
	_waterEntered = false; _leaveWater = false;

	_step = 25; _cursor = _step; while {_cursor < _len && _legal} do {
		_point = [_start, [_vec, _cursor] call funcVectorScale] call funcVectorAdd;
		_inWater = [_point, 0] call funcPosNearSea;
		if (not _inWater) then {
			if _waterEntered then {_leaveWater = true};
		} else {
			if not _waterEntered then {_waterEntered = true};
			if _leaveWater then {_legal = false};
		};
		_cursor = _cursor + _step;
	};
	if not _legal then {
		_msg = format ["%1 %2 %3 2 %4. Order not executed."
			, localize {TZK_LANG_THERE_ARE}
			, localize {TZK_LANG_LAND}
			, localize {TZK_LANG_BETWEEN}
			, localize {TZK_LANG_POINT}
		];
	};
};
_legal