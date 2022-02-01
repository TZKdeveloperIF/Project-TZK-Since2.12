// args: none

private [{_i}, {_c}];

if (groupPlayer != groupCommander select _si) then {
	{ ctrlShow [_x, false] } foreach [_idcOrderLabel, _idcSendOrder, _idcOrder];
	_i = 0; while {_i < _cSettings} do {
		ctrlEnable [_idcSettingCombo + _i, false];
		_i = _i + 1;
	};
};

_i = 0; while {_i < _cSettings} do {
	ctrlShow [_idcSettingLabel + _i, false];
	ctrlShow [_idcSettingCombo + _i, false];
	ctrlShow [_idcSettingImage + _i, false];
	_i = _i + 1;
};

_i = 0; _c = count aiSettingDefs; while {_i < _c} do {
	_item = aiSettingDefs select _i;
	{lbAdd [_idcSettingCombo + _i, _x]} foreach (_item select 1);
	if !bool_TZK_CHN_Lang then {
		ctrlSetText [_idcSettingLabel + _i, _item select 3];
	} else {
		ctrlSetText [_idcSettingImage + _i, aiSetChnDefs select _i];
	};
	_i = _i + 1;
};

_i = 0; _c = count orderDefs; while {_i < _c} do {
	_order = orderDefs select _i;
	if (_order select 0 != "AI_ONLY") then {
		if !bool_TZK_CHN_Lang then {
			lbAdd [_idcOrder, _order select 0];
		} else {
			lbAdd [_idcOrder, ""], lbSetPicture [_idcOrder, _i, orderGrpChnDefs select _i];
		};
	};
	_i = _i + 1;
};