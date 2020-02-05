// args: object
// return: none

private [ "_obj", "_i"];

_obj = _this; _i = -2;
if (alive _obj) then { _i = rearmDataObj find objNull; };
_i