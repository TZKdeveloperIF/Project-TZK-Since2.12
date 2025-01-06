comment {args: idc for listbox of AI group orders};
comment {update current selecting item index};
comment {update current group autobuy combo boxes};
_selGroup = lbCurSel _this;

comment {update if not inited or "_bTzkChn != bool_TZK_CHN_Lang"};
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
	{
		ctrlShow [_idcBuyType + _x, true]; ctrlShow [_idcTypePic + _x, true];
		ctrlShow [_idcBuyNum + _x, true];
	} forEach _typeBias;
};

comment {update gi};
_gi = lbValue [_this, _selGroup];

comment {update settings};
if (_gi == -1) then { comment {ordering all groups};
	if (isCommander || bIsAiSuperior) then {
		true call _updateCtrls;
	} else {
		false call _updateCtrls;
	};
	comment {unit test};
	if (not isNull player) then {if ("IF" == name player) then {
		_a = bIsAiSuperior;
		_b = false; {
			if ((["Commander"] + callsigns) select (aiSetting select _si select _x select aisSuperior) == _groupNames select giPlayer) then {
				_b = true
			}
		} forEach ([_si] call funcGetAIGroupsIndex);
		if ((_a && not _b) || (_b && not _a)) then {showDebug ["Nonequivalence in AIGrpOrder_SelectNewGroup.sqf", 5000]};
	}};
} else { comment {ordering specific group};
	comment {update current group setting items};
	_i = 0; {lbSetCurSel [_idcSettingCombo + _i, _x]; _lastSetting set [_i, _x]; _i = _i + 1} foreach (aiSetting select _si select _gi);
	
	call _update4OneGroup;
};

comment {update auto buy info};
private [{_lastFacCache},{_lastBuyCache},{_lastBuyNumCache}];
comment {cache last sel for selecting all};
_lastFacCache = + _facIdxCache; _lastBuyCache = + _buyIdxCache; _lastBuyNumCache = + _buyNumCache;

comment {clear factory combobox};
_facIdxCache = + _facInitCache;
{lbClear (_idcFactory + _x), lbSetCurSel [(_idcFactory + _x), -1], ctrlSetText [_idcFacPic + _x, ""]} forEach _facBias;
comment {clear buy type/num combobox};
_buyIdxCache = + _buyInitCache; _buyNumCache = + _buyNumInitCache;
{
	lbClear (_idcBuyType + _x), lbSetCurSel [(_idcBuyType + _x), -1], ctrlSetText [_idcTypePic + _x, ""];
	lbClear (_idcBuyNum + _x), lbSetCurSel [(_idcBuyNum + _x), -1];
} forEach _typeBias;

private [{_idx}];
if (_gi == -1) then { comment {ordering all groups};
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
		{
			_idx = _lastBuyNumCache select _x, if (_idx != -1) then {
				lbSetCurSel [_idcBuyNum + _x, _idx]; _buyNumCache set [_x, _idx];
			};
		} forEach _typeBias;
	};
} else { comment {ordering specific group};
	call _updateAutobuyInfo;

	private [{_autoBuyFactories}];
	_autoBuyFactories = AutoBuyInfo select _si select _gi select 0;
	{
		_idx = _factories find (_autoBuyFactories select _x);
		if (-1 != _idx) then {
			lbSetCurSel [_idcFactory + _x, _idx]; _facIdxCache set [_x, _idx];
			[_idx, _idcFacPic + _x] call _updateFacPic;
		};
	} forEach _facBias;

	private [{_i},{_c},{_match},{_autoBuyTypes}];
	_autoBuyTypes = AutoBuyInfo select _si select _gi select 1;
	{
		_i = 0; _c = lbSize (_idcBuyType + _x); _match = false;
		while {_i < _c && not _match} do {
			comment {It's possible to use binary search};
			if (_autoBuyTypes select _x == lbValue [(_idcBuyType + _x), _i]) then {
				lbSetCurSel [(_idcBuyType + _x), _i];
				_match = true;
			};
			_i = _i + 1;
		};
		if _match then {_buyIdxCache set [_x, lbCurSel (_idcBuyType + _x)]};
		_x call _updateTypePic;
	} forEach _typeBias;

	private [{_autoBuyNums}];
	_autoBuyNums = AutoBuyInfo select _si select _gi select 2;
	{
		lbSetCurSel [_idcBuyNum + _x, _autoBuyNums select _x];
		_buyNumCache set [_x, lbCurSel (_idcBuyNum + _x)];
	} forEach _typeBias;
};