// args: none
// load variables from caller

private [{_i}, {_bit}];
_i = 0; while {_i < 4} do {
	// display selected type column
	_bit = btnValue02 select _i;
	ctrlShow [_idcBtnBg_0_0 + _i, _bit];
	// control big angle type column
	if not _bit then {
		btnValue03 set [_i, false];
		ctrlShow [_idcBtn_1_0 + _i, false];
		ctrlShow [_idcBtnBg_1_0 + _i, false];
	} else {
		ctrlShow [_idcBtn_1_0 + _i, true];
	};
	// display big angle type column
	ctrlShow [_idcBtnBg_1_0 + _i, btnValue03 select _i];

	_i = _i + 1;
};

// below buttons hasn't "big angle" option
while {_i < 5} do {
	// display selected type column
	_bit = btnValue02 select _i;
	ctrlShow [_idcBtnBg_0_0 + _i, _bit];

	_i = _i + 1;
};