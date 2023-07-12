// transfer POSITIVE input to string
// assume that input isn't bigger than 100,000,000
// since number in OFP is single precise, it can express integer precisely if the number is no more than 16777216
private [{_num1}, {_num2}, {_leadingZero}];
_num2 = _this % 10000; _num1 = (_this - _num2) / 10000;
if (0 == _num1) then{
	_leadingZero = "";
} else {
	if (_num2 < 10)
		then {_leadingZero = "000"}
	else {if (_num2 < 100)
		then {_leadingZero = "00"}
	else {if (_num2 < 1000)
		then {_leadingZero = "0"}
	else
		{_leadingZero = ""}}};
};
format [{%1%2%3}, if (0 == _num1) then {""} else {_num1}, _leadingZero, _num2]