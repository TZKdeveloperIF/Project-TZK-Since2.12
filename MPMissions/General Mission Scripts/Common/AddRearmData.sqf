// args: object
// return: none

private [ "_obj", "_i"];

_obj = _this; _i = -2;
if (alive _obj) then { _i = rearmDataObj find objNull; };
if (_i != -1) then {FindSucceedUnit = FindSucceedUnit + 1};
_i