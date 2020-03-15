// arguments: object
// return: type (-1 if not found)

private ["_type", "_found", "_array", "_i", "_j"];
_type = typeOf _this; _found = false;
_array = +unitTypeArray;
_i = _array find _type;

while "_i != -1 && !_found" do {
	if ( _this in ((unitMatrix select si0) select _i) || _this in ((unitMatrix select si1) select _i) || _this in ((unitMatrix select siRes) select _i) || _this in ((unitMatrix select siCiv) select _i) ) then {_found = true} else {_array set [_i, ""]; _i = _array find _type};
};
_i