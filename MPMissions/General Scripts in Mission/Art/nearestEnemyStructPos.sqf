// args: [destination, enemy struct info]
// return: [distance, position]

private [{_destination}, {_enemyStructInfo}, {_distMin}, {_nearestPos}, {_row}, {_dist}];
_destination = _this select 0;
_enemyStructInfo = _this select 1;

_distMin = 100000; _nearestPos = [0, 0, 0];

{
	_row = _x;
	{
		_dist = [_x, _destination] call funcDistH;
		if (_dist < _distMin) then {
			_distMin = _dist;
			_nearestPos = _x;
		};
	} forEach _row;
} forEach _enemyStructInfo;

[_distMin, _nearestPos]