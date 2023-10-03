// args: [units, state]

private [{_units},{_vehicle},{_i},{_j},{_c}];
_units = _this select 0; _i = 0; _c = count _units;

if (_this select 1) then {
	while {_i < _c} do {
		_vehicle = vehicle (_units select _i);
		if (-1 == autoShootVehs find _vehicle) then {
			_j = autoShootVehs find objNull;
			if (_j == -1) then {_j = count autoShootVehs};
			autoShootVehs set [_j, _vehicle];
		};

		_i = _i + 1;
	};
} else {
	while {_i < _c} do {
		_vehicle = vehicle (_units select _i);
		_j = autoShootVehs find _vehicle;
		if (-1 != _j) then {
			autoShootVehs set [_j, objNull];
		};

		_i = _i + 1;
	};
};