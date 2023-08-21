// args: idc of image
private [{_idc},{_type}];
_idc = _this;

_type = -1; if (lbCurSel _idc != -1) then {_type = lbValue [_idc, lbCurSel _idc]};
if (-1 != _type) then {
	ctrlSetText [_idcTypePic, unitDefs select _type select udImage];
} else {
	ctrlSetText [_idcTypePic, ""];
};