// args: unit
// Arma:Resistance is required
// For local unit except PLAYER. Remote unit has "REMOTE" postfix while PLAYER has his "name"
private [{_str}, {_size}, {_left}, {_char}];
if (local _this) then {
	_str = format ["%1", _this]; _size = sizeofstr _str; _left = _size - 1;
	_char = substr [_str, _size - 2, _size - 1];
	if (":" != _char) then {
		// ASSERT(substr [_str, _size - 3, _size - 2] == ":");
		_left = _size - 2;
	};
	call substr [_str, _left, _size]
} else {
	0
}