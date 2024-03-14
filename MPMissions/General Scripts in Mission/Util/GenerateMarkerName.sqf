// args: prefix
// return: marker name

private [{_name}];
_name = format ["%1%2", _this, TzkMarkerId];
TzkMarkerId = TzkMarkerId + 1;
_name