comment {should be a synchronous sqf} ;

private [{_rate}, {_si}];
_rate = _this % 128;
_si = (_this - _rate) / 128;

incomeRatePlayer set [_si, _rate / 100];