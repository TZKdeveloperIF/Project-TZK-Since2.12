// args: none
// this is a process but not a function. script read/write local variables directly

if (not isNull _shell) then {
	private [{_posShell}, {_velShell}, {_dirShell}];
	_posShell = getPosASL _shell;
	_velShell = velocity _shell;
	_dirShell = VectorDir _shell;

	// generate any vector that perpendicular to the velocity
	private [{_a},{_b},{_c}, {_normalVector},{_l}, {_angelDiff}, {_i}];
	_a = _velShell select 0; _b = _velShell select 1; _c = _velShell select 2;
	_normalVector = [_b * _c, _a * _c, -2 * _a * _b];
	_l = _normalVector call funcVectorLength;
	_normalVector = [_normalVector, _radius / _l] call funcVectorScale;

	_angelDiff = 360 / _number; _i = 0; while {_i < _number} do {
		private [{_vec}, {_subShell}];
		_vec = [_normalVector, _velShell, _angelDiff * _i] call funcVectorRot3D;
		_vec = [_vec, _posShell] call funcVectorAdd;
		_subShell = createShell [_shellType, _vec, _velShell, _vehicle, objNull];

		_subShell setVectorDir _velShell;
		_subShell setVelocity _velShell; _subShell setPosASL _vec;

		[_vehicle, _subShell] exec localize {TZK_EFFECT_FIRED_ART_IMPACT};

		_i = _i + 1;
	};
};