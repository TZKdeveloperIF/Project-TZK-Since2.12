private [{_int}, {_dec}];
_dec = _this % 1;
_int = _this - _dec;
if (_dec >= 0.5) then {_int = _int + 1};
_int