// args: [vector, element]
private [
	{_vector}, {_elem},
	{_data}, {_size}
];
_vector = _this select 0; _elem = _this select 1;
_data = _vector select 0;
_size = _vector select 1;
if (_size < count _data) then {
	_vector set [1, _size + 1];
	_data set [_size, _elem];
} else {
	private [{_newSize}, {_newData}, {_i}];

	// enlarge and copy data
	_newSize = 2 * _size; if (_newSize <= 0) then {_newSize = 1};
	_newData = []; _newData resize _newSize;
	_i = 0; while {_i < _size} do {
		_newData set [_i, _data select _i];
		_i = _i + 1;
	};
	// update circular buffer data
	_vector set [0, _newData];
	// append new elememt
	_vector set [1, _size + 1];
	_newData set [_size, _elem];
};