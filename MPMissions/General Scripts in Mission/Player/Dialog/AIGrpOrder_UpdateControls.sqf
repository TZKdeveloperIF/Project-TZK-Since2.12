// args: bool

{ctrlShow [_x, _this]} foreach [_idcOrderLabel, _idcSendOrder, _idcOrder];

if not _this then {
	{ctrlShow [_x, false]} foreach [_idcPar0Label, _idcPar0, _idcPar1Label, _idcPar1, _idcPar2Label, _idcPar2];
};

_i = 0; while {_i < _cSettings} do {
	ctrlEnable [_idcSettingCombo + _i, _this];
	_i = _i + 1; 
};

if _this then {
	false call _refreshOrder;
};