// args: [pos, dist]
// verify whether there're land near pos within dist

private [{_pos}, {_dist}, {_result}, {_checkDegrees},
	{_i}, {_c}, {_v}
];

// 2-d vector
_pos = [(_this select 0) select 0, (_this select 0) select 1];
_dist = _this select 1;

_result = (_pos call funcHASL) >= 5;
_checkDegrees = (if (_dist > 0) then {[0, 45, 90, 135, 180, 225, 270, 315]} else {[]});

_i = 0; _c = count _checkDegrees; while {_i < _c && not _result} do {
	_v = [[0, _dist], _checkDegrees select _i] call funcVectorRot2D;
	_result = (([_pos, _v] call funcVectorAdd) call funcHASL) >= 5;

	_i = _i + 1;
};

_result