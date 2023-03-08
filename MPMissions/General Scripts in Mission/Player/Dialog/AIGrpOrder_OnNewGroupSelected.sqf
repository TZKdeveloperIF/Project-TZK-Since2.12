// update current selecting item index
_selGroup = lbCurSel _idcCurrent;

// update if not inited or "_bTzkChn != bool_TZK_CHN_Lang"
if (not _bSettingDispInited || ((_bTzkChn && not bool_TZK_CHN_Lang) || (bool_TZK_CHN_Lang && not _bTzkChn))) then {
	_bTzkChn = bool_TZK_CHN_Lang; _bSettingDispInited = true;
	
	_i = 0; _c = count aiSettingDefs; while {_i < _c} do {
		ctrlShow [_idcSettingLabel + _i, !bool_TZK_CHN_Lang];
		ctrlShow [_idcSettingImage + _i, bool_TZK_CHN_Lang];
		ctrlShow [_idcSettingCombo + _i, true];
		_i = _i + 1; 
	};
};

// update gi
_gi = lbValue [_idcCurrent, _selGroup];

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