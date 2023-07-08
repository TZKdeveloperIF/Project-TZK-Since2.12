if (_this >= 0) then {
	_this - (_this % 1)
} else {
	- ((-_this) call loadFile "Math\Ceil.sqf")
}