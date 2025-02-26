// args: none
private [{_i}, {_name}];

lbClear IDC_LB_TEMPLATES; lbSetCurSel [IDC_LB_TEMPLATES, -1];
_i = 0; {
	_name = "empty"; if (count _x > 0) then {_name = _x select 0};
	lbAdd [IDC_LB_TEMPLATES, format["cs%1 %2", _i, _name]];
	_i = _i + 1;
} foreach infCustom;