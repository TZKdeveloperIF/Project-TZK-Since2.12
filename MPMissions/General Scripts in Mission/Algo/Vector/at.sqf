// args: [vector, index]

private [{_vector}, {_index}];

_vector = _this select 0; _index = _this select 1;

if (_index >= 0 && _index < _vector select 1) then {
	_vector select 0 select _index
} else {
	"Unexpected index in Vector::at(index)" call fDebugLog;
	objNull
}