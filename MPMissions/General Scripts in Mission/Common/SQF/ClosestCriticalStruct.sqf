private [{_object}, {_distMin}, {_posV}, {_si}, {_posT}, {_d0}, {_d1}, {_distSquare}];

_object = objNull; _distMin = 100000;
_posV = _this select 0; _si = _this select 1;
{
	{
		if (!isNull _x) then {
			_posT = getPosASL _x;
			_d0 = (_posT select 0) - (_posV select 0);
			_d1 = (_posT select 1) - (_posV select 1);
			_distSquare = _d0 * _d0 + _d1 * _d1;
			if (_distSquare < _distMin) then {
				_distMin = _distSquare;
				_object = _x;
			};
		};
	} forEach (structMatrix select _si select _x);
} foreach structsCritcal;

[_object, sqrt _distMin]