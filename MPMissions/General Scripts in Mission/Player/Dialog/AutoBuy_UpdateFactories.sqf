// args: none
// update external variable "_factories and _facTypes"

_factories resize 0; _facTypes resize 0;
_factories set [0, objNull]; _facTypes set [0, -1]; _j = 1;
{
	_structs = structMatrix select _si select _x; _i = 0; _c = count _structs;
	while {_i < _c} do {
		_struct = _structs select _i;
		if (not isNull _struct) then {
			_factories set [_j, _struct]; _facTypes set [_j, _x];
			_j = _j + 1;
		};
		_i = _i + 1;
	};
} forEach [stBarracks, stLight, stHeavy, stShip];