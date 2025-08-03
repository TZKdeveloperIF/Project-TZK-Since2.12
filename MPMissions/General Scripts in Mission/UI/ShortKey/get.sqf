// args: [design: array reference, attribute: string]
// return: design elem (reference for array)

private [{_design}, {_name}, {_ret}];
_design = _this select 0; _name = _this select 1;

_ret = _design select 0; // key
if (_name == "function") then {
	_ret = _design select 1;
};
if (_name == "item text idx") then {
	_ret = _design select 2;
};
if (_name == "display text idx") then {
	_ret = _design select 3;
};

_ret