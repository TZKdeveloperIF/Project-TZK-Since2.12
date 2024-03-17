// args: circular buffer
private [
	{_buffer}, {_size}
];
_buffer = _this;
_size = _buffer call preprocessFile "Algo\CirBuf\size.sqf";
if (_size < 1) then {
	"no element on calling CircularBuffer::pop_back()" call fDebugLog;
} else {
	// reduce size
	[_buffer, -1] call preprocessFile "Algo\CirBuf\changeSize.sqf";
};