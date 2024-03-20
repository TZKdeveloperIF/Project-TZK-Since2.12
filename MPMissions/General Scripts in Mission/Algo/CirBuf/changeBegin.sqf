// args: [circular buffer, delta]
private [{_buffer}, {_info}, {_delta}, {_begin}, {_data}];
_buffer = _this select 0;
_info = _buffer call preprocessFile "Algo\CirBuf\info.sqf";
_delta = _this select 1;

_begin = _buffer call preprocessFile "Algo\CirBuf\begin.sqf";

// only allow increase/decrease begin 1 or set it to 0
if (_delta != 1 && _delta != -1 && _delta != -_begin) then {
	"Unexpected delta in CircularBuffer::changeBegin(delta)" call fDebugLog;
} else {
	_data = _buffer call preprocessFile "Algo\CirBuf\data.sqf";
	_begin = _begin + _delta;
	if (_begin >= count _data) then {_begin = _begin - count _data};
	_info set [0, _begin];
};