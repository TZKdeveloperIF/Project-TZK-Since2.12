private [{_int}, {_dec}];
if (_this >= 0) then {
	_dec = _this % 1;
	_int = _this - _dec;
	if (_dec >= 0.5) then {_int = _int + 1};
	_int
} else {
	- ((-_this) call loadFile "Math\Round.sqf")
}