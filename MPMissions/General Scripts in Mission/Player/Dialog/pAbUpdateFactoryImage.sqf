// args: [array index of the factory, idc of image]
private [{_idx},{_idc},{_type}];
_idx = _this select 0; _idc = _this select 1;

_type = -1; if (_idx != -1) then {_type = _facTypes select _idx};
if (-1 != _type) then {
	ctrlSetText [_idc, structDefs select _type select sdImage select _si];
} else {
	ctrlSetText [_idc, ""];
};