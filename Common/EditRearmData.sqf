// arguments: [object, weapons[], magazines[], bool reset]
// retrun: bool(object in rearmDataObj or not)

private [ "_i", "_c", "_obj", "_w", "_m", "_breset" ];


_obj = _this select 0;
_w = _this select 1;
_m = _this select 2;
_breset = _this select 3;

_i = -1; if (alive _obj) then {_i = rearmDataObj find _obj};
if (_i != -1) then {[_obj, _w, _m, _breset, _i] exec "Common\EditRearmdata.sqs"};
(_i != -1)