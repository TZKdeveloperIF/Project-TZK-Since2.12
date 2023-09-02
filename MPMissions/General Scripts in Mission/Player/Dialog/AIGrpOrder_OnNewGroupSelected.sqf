// args: idc for listbox of AI group orders
// update current selecting item index
// update current group autobuy combo boxes
_selGroup = lbCurSel _this;

// update if not inited or "_bTzkChn != bool_TZK_CHN_Lang"
if (not _bSettingDispInited || ((_bTzkChn && not bool_TZK_CHN_Lang) || (bool_TZK_CHN_Lang && not _bTzkChn))) then {
	_bTzkChn = bool_TZK_CHN_Lang; _bSettingDispInited = true;
	
	_i = 0; _c = count aiSettingDefs; while {_i < _c} do {
		ctrlShow [_idcSettingLabel + _i, !bool_TZK_CHN_Lang];
		ctrlShow [_idcSettingImage + _i, bool_TZK_CHN_Lang];
		ctrlShow [_idcSettingCombo + _i, true];
		_i = _i + 1; 
	};

	{ctrlShow [_x, true]} foreach [_idcAbLabel, _idcAbLabel + 1];
	{ctrlShow [_idcFactory + _x, true]; ctrlShow [_idcFacPic + _x, true]} forEach _facBias;
	{ctrlShow [_idcBuyType + _x, true]; ctrlShow [_idcTypePic + _x, true]} forEach _typeBias;
};

// update gi
_gi = lbValue [_this, _selGroup];

// update settings
if (_gi == -1) then { // ordering all groups
	if (isCommander || bIsAiSuperior) then {
		true call _updateCtrls;
	} else {
		false call _updateCtrls;
	};
	// unit test
	if (not isNull player) then {if ("IF" == name player) then {
		_a = bIsAiSuperior;
		_b = false; {
			if ((["Commander"] + callsigns) select (aiSetting select _si select _x select aisSuperior) == _groupNames select giPlayer) then {
				_b = true
			}
		} forEach ([_si] call funcGetAIGroupsIndex);
		if ((_a && not _b) || (_b && not _a)) then {showDebug ["Nonequivalence in AIGrpOrder_SelectNewGroup.sqf", 5000]};
	}};
} else { // ordering specific group
	// update current group setting items
	_i = 0; {lbSetCurSel [_idcSettingCombo + _i, _x]; _lastSetting set [_i, _x]; _i = _i + 1} foreach (aiSetting select _si select _gi);
	
	call _update4OneGroup;
};

// update auto buy info
private [{_lastFacCache},{_lastBuyCache}];
// cache last sel for selecting all
_lastFacCache = + _facIdxCache; _lastBuyCache = + _buyIdxCache;

// clear factory combobox
_facIdxCache = + _facInitCache;
{lbClear (_idcFactory + _x), lbSetCurSel [(_idcFactory + _x), -1], ctrlSetText [_idcFacPic + _x, ""]} forEach _facBias;
// clear buy type combobox
_buyIdxCache = + _buyInitCache;
{lbClear (_idcBuyType + _x), lbSetCurSel [(_idcBuyType + _x), -1], ctrlSetText [_idcTypePic + _x, ""]} forEach _typeBias;

private [{_idx}];
if (_gi == -1) then { // ordering all groups
	if (isCommander || bIsAiSuperior) then {
		call _updateAutobuyInfo;
		{
			_idx = _lastFacCache select _x, if (_idx != -1) then {
				lbSetCurSel [_idcFactory + _x, _idx]; _facIdxCache set [_x, _idx];
				[_idx, _idcFacPic + _x] call _updateFacPic;
			};
		} forEach _facBias;
		{
			_idx = _lastBuyCache select _x, if (_idx != -1) then {
				lbSetCurSel [_idcBuyType + _x, _idx]; _buyIdxCache set [_x, _idx];
				_x call _updateTypePic;
			};
		} forEach _typeBias;
	};
} else { // ordering specific group
	call _updateAutobuyInfo;

	private [{_autoBuyFactories}];
	_autoBuyFactories = AutoBuyStructMatrix select _si select _gi;
	{
		_idx = _factories find (_autoBuyFactories select _x);
		if (-1 != _idx) then {
			lbSetCurSel [_idcFactory + _x, _idx]; _facIdxCache set [_x, _idx];
			[_idx, _idcFacPic + _x] call _updateFacPic;
		};
	} forEach _facBias;

	private [{_i},{_c},{_match},{_autoBuyTypes}];
	_autoBuyTypes = AutoBuyTypeMatrix select _si select _gi;
	{
		_i = 0; _c = lbSize (_idcBuyType + _x); _match = false;
		while {_i < _c && not _match} do {
			// It's possible to use binary search
			if (_autoBuyTypes select _x == lbValue [(_idcBuyType + _x), _i]) then {
				lbSetCurSel [(_idcBuyType + _x), _i];
				_match = true;
			};
			_i = _i + 1;
		};
		if _match then {_buyIdxCache set [_x, lbCurSel (_idcBuyType + _x)]};
		_x call _updateTypePic;
	} forEach _typeBias;
};