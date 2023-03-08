_val = lbCurSel (_idcSettingCombo + _set);
// update "last setting" cache
_lastSetting set [_set, _val];

if (_gi == -1) then {
	if (_set != aisSuperior) then {
		[_si, giPlayer, _set, _val, true] call preprocessFile localize {TZK_MSG_COMMON_SEND_AI_GRP_SETTING}
	};
} else {
	// check whether player is ai group's superior
	if (isCommander || [_si, _gi, giPlayer] call _funcLeadBy) then {
		[_si, _gi, _set, _val, false] call preprocessFile localize {TZK_MSG_COMMON_SEND_AI_GRP_SETTING};

		if (_set == aisSuperior) then {
			call _update4OneGroup;
		};
	};
};