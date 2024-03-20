// args: [circular buffer, index]
// return: none

// ATTENTION: this script isn't tested. No stability guarantee

private [
	{_buffer}, {_input},
	{_size}, {_begin}, {_data}, {_cntData}, {_j}, {_write}, {_read}
];
_buffer = _this select 0; _input = _this select 1;
_size = _buffer call preprocessFile "Algo\CirBuf\size.sqf";
if (_input >= 0 && _input < _size) then {
	// move elements
	_begin = _buffer call preprocessFile "Algo\CirBuf\begin.sqf";
	_data = _buffer call preprocessFile "Algo\CirBuf\data.sqf";
	_cntData = count _data;
	_j = _input; while {_j < _size - 1} do {
		_write = _begin + _j; if (_write >= _cntData) then {_write = _write - _cntData};
		_read = _begin + _j + 1; if (_read >= _cntData) then {_read = _read - _cntData};
		_data set [_write, _data select _read];
		_j = _j + 1;
	};
	_buffer call preprocessFile "Algo\CirBuf\pop_back.sqf";
} else {
	"Unexpected index in CircularBuffer::erase(index)" call fDebugLog;
};