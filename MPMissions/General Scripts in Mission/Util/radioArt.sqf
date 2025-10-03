// [](positive number) -> translated string
// for number less than 100, leading zeros will be generated

private [{_num}, {_leadingZeros}];

_num = _this;
_leadingZeros = "";
if (_num < 100) then {_leadingZeros = "0"};
if (_num < 10) then {_leadingZeros = "00"};

format [(TzkInGameText select 025 select 27), format ["%1%2", _leadingZeros, _num]]