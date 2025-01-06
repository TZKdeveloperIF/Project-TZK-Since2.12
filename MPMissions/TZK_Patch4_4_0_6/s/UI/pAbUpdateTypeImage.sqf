comment {args: index of autobuy type comboboxes};
private [{_idx},{_idcBox},{_idcPic},{_type}];
_idx = _this;
_idcBox = _idcBuyType + _idx;
_idcPic = _idcTypePic + _idx;

_type = -1; if (lbCurSel _idcBox != -1) then {_type = lbValue [_idcBox, lbCurSel _idcBox]};
if (-1 != _type) then {
	ctrlSetText [_idcPic, unitDefs select _type select udImage];
} else {
	ctrlSetText [_idcPic, ""];
};