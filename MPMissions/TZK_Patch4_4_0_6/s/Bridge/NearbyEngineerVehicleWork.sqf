// args: 2D-array returned by funcGetNearbyVehicles (format: array of [_vehicle, _type, _distance])
private [
	{_i}, {_c}
	, {_entry}, {_type}, {_idx}, {_veh}
];
_i = 0; _c = count _this; while {_i < _c} do {
	_entry = _this select _i;
	_type = _entry select 1;
	
	_idx = typesEngineeringVeh find _type;
	if (-1 != _idx) then {
		_veh = _entry select 0;
		if (_veh animationPhase (["Crane", "Strela_V"] select _idx) == 0) then {
			[_veh, "Up"] exec (localize ([{TZK_ACTION_M88_CRANE}, {TZK_ACTION_BREM1_CRANE}] select _idx));
		};
	};

	_i = _i + 1;
};