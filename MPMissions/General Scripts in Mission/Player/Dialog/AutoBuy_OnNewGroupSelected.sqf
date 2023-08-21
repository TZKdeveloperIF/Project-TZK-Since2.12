// args: idc for listbox of AI group orders
// update current group combo boxes

_selGroup = lbCurSel _this; _gi = lbValue [_this, _selGroup]; // external variables

private [{_lastFacCache},{_lastKeepMin},{_lastGroupSize},{_lastBuyType}];
// cache last sel for selecting all
_lastFacCache = + _facIdxCache; _lastBuyType = lbCurSel _idcBuyType;
_lastKeepMin = lbCurSel _idcKeepMin; _lastGroupSize = lbCurSel _idcGroupSize;

// clear factory combobox
_facIdxCache = [-1,-1,-1,-1,-1];
{lbClear (_idcFactory + _x), lbSetCurSel [(_idcFactory + _x), -1], ctrlSetText [_idcFacPic + _x, ""]} forEach [0,1,2,3,4];
// clear buy type combobox
_buyIdxCache = -1;
lbClear _idcBuyType, lbSetCurSel [_idcBuyType, -1], ctrlSetText [_idcTypePic, ""];
// clear ai setting combobox
_keepMinCache = -1, _groupSizeCache = -1;
{lbClear _x, lbSetCurSel [_x, -1]} forEach [_idcKeepMin, _idcGroupSize];

private [{_idx}];
if (_gi == -1) then { // ordering all groups
	if (isCommander || bIsAiSuperior) then {
		call _updateComboBox;
		{
			_idx = _lastFacCache select _x, if (_idx != -1) then {
				lbSetCurSel [_idcFactory + _x, _idx]; _facIdxCache set [_x, _idx];
				[_idx, _idcFacPic + _x] call _updateFacPic;
			};
		} forEach [0,1,2,3,4];
		if (_lastBuyType != -1) then {lbSetCurSel [_idcBuyType, _lastBuyType]; _buyIdxCache = _lastBuyType};
		_idcBuyType call _updateTypePic;

		if (_lastKeepMin != -1) then {lbSetCurSel [_idcKeepMin, _lastKeepMin]; _keepMinCache = _lastKeepMin};
		if (_lastGroupSize != -1) then {lbSetCurSel [_idcGroupSize, _lastGroupSize]; _groupSizeCache = _lastGroupSize};
	};
} else { // ordering specific group
	call _updateComboBox;

	private [{_autoBuyFactories},{_assignedFactory}];
	_autoBuyFactories = AutoBuyStructMatrix select _si select _gi;
	{
		_assignedFactory = _autoBuyFactories select _x;
		_idx = _factories find _assignedFactory;
		if (-1 != _idx) then {
			lbSetCurSel [_idcFactory + _x, _idx]; _facIdxCache set [_x, _idx];
			[_idx, _idcFacPic + _x] call _updateFacPic;
		};
	} forEach [0,1,2,3,4];
	private [{_i},{_c},{_match},{_curType}];
	_i = 0; _c = lbSize _idcBuyType; _match = false;
	_curType = AutoBuyTypeMatrix select _si select _gi;
	while {_i < _c && not _match} do {
		// It's possible to use binary search
		if (_curType == lbValue [_idcBuyType, _i]) then {
			lbSetCurSel [_idcBuyType, _i];
			_match = true;
		};
		_i = _i + 1;
	};
	if _match then {_buyIdxCache = lbCurSel _idcBuyType};
	_idcBuyType call _updateTypePic;

	lbSetCurSel [_idcKeepMin, aiSetting select _si select _gi select aisKeepMin];
	_keepMinCache = aiSetting select _si select _gi select aisKeepMin;
	lbSetCurSel [_idcGroupSize, aiSetting select _si select _gi select aisGroupSize];
	_groupSizeCache = aiSetting select _si select _gi select aisGroupSize;
};