// args: [circular buffer, delta]
private [{_info}, {_delta}, {_size}];
_info = (_this select 0) call preprocessFile "Algo\CirBuf\info.sqf";
_delta = _this select 1;

_size = (_this select 0) call preprocessFile "Algo\CirBuf\size.sqf";

// only allow increase/decrease size 1 or set it to 0
if (_delta != 1 && _delta != -1 && _delta != -_size) then {
	"Unexpected delta in CircularBuffer::changeSize(delta)" call fDebugLog;
} else {
	_info set [1, _size + _delta];
};