// args: [circular buffer, element]
private [
	{_buffer}, {_elem},
	{_data}, {_size}
];
_buffer = _this select 0; _elem = _this select 1;
_data = _buffer call preprocessFile "Algo\CirBuf\data.sqf";
_size = _buffer call preprocessFile "Algo\CirBuf\size.sqf";
if (_size < count _data) then {
	private [{_idx}];

	[_buffer, 1] call preprocessFile "Algo\CirBuf\changeSize.sqf";
	// "_size" now is (current size - 1)
	_idx = (_buffer call preprocessFile "Algo\CirBuf\begin.sqf") + _size;
	if (_idx >= count _data) then {_idx = _idx - count _data};
	_data set [_idx, _elem];
} else {
	private [{_newSize}, {_newData}, {_i}];

	// enlarge and copy data
	_newSize = 2 * _size; if (_newSize <= 0) then {_newSize = 1};
	_newData = []; _newData resize _newSize;
	_i = 0; while {_i < _size} do {
		_newData set [_i, [_buffer, _i] call preprocessFile "Algo\CirBuf\at.sqf"];
		_i = _i + 1;
	};
	// update circular buffer data
	_buffer set [0, _newData];
	// set begin index as 0
	[_buffer, -(_buffer call preprocessFile "Algo\CirBuf\begin.sqf")] call preprocessFile "Algo\CirBuf\changeBegin.sqf";
	// append new elememt
	[_buffer, 1] call preprocessFile "Algo\CirBuf\changeSize.sqf";
	_newData set [_size, _elem];
};