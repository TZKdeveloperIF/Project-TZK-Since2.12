// args: [circular buffer, index]
// return: element at that index
private [
	{_buffer}, {_input},
	{_idx}, {_data}
];
_buffer = _this select 0; _input = _this select 1;
if (_input >= 0 && _input < (_buffer call preprocessFile "Algo\CirBuf\size.sqf")) then {
	_idx = (_buffer call preprocessFile "Algo\CirBuf\begin.sqf") + _input;
	_data = _buffer call preprocessFile "Algo\CirBuf\data.sqf";
	if (_idx >= count _data) then {_idx = _idx - count _data};
	_data select _idx
} else {
	"Unexpected index in CircularBuffer::at(index)" call fDebugLog;
	objNull
}