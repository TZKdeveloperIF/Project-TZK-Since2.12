private ["_value", "_array", "_digit", "_integral", "_array2", "_index"];

_value = _this; _array = [];

while "_value > 0" do {
	_digit = log _value / log 2; _integral = _digit - _digit % 1;
	if (_value >= 2^(_integral + 1)) then {_digit = _integral + 1} else {_digit = _integral};
	_array set [count _array, _digit]; _value = _value - 2^_digit;
};
if (count _array > 0) then {
	_array2 = []; _array2 resize count _array; _index = 0;
	while "_index < count _array" do {_array2 set [_index, _array select ((count _array)- 1 - _index)]; _index = _index + 1};
	_array = _array2
};
_array