if (_this >= 0) then {
	private [{_dec}];
	_dec = _this % 1;
	if (0 == _dec) then {
		_this
	} else {
		_this - _dec + 1
	}
} else {
	- ((-_this) call loadFile "Math\Floor.sqf")
}