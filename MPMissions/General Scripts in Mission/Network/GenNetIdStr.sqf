// args: object
// returns: string

// generate available "NetworkID" string
// if server hosts too long the NetworkID will return a too large number
// and auto-convert the number to string will lost info
// format the str manually

// The return value of "NetworkID" is an array while this function returns a string.
// The CONTENT of this string is the desired "NetworkID" return value

private [{_netId}, {_num1}, {_num2}, {_leadingZero}];
_netId = NetworkID _this;
_num2 = (_netId select 1) % 10000; _num1 = ((_netId select 1) - _num2) / 10000;
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
format [{["%1",%2%4%3]}, _netId select 0, if (0 == _num1) then {""} else {_num1}, _num2, _leadingZero]