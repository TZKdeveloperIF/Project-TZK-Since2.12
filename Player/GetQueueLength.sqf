// arguments: obj
// returns: length

private ["_found", "_i", "_c", "_ret"];

_found = false;
_i = 0;
_c = count qLen;
_ret = -1;
while "_i<_c && !_found" do { if ( _this == (qLen select _i) select 0 ) then { _ret = (qLen select _i) select 1; _found = true }; _i=_i+1 };

_ret
