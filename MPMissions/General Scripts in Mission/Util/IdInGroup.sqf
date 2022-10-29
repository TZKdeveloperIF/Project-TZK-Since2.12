// args: unit
// return: number in group
private [{_str}, {_len}];
_str = format ["%1", _this];
_len = sizeofstr _str - (if (local _this) then {0} else {7});
if (":" == substr [_str, _len - 2, _len - 1]) then {
	call substr [_str, _len - 1, _len]
} else {
	call substr [_str, _len - 2, _len]
}