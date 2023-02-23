// args: unit
// Arma:Resistance is required
// For non-player unit only
private [{_str}, {_size}, {_left}, {_char}];
_str = format ["%1", _this]; _size = sizeofstr _str; _left = _size - 1;
_char = substr [_str, _size - 2, _size - 1];
if (":" != _char) then {
	// ASSERT(substr [_str, _size - 3, _size - 2] == ":");
	_left = _size - 2;
};
call substr [_str, _left, _size]