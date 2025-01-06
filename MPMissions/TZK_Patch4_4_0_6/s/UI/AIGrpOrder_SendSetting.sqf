comment {returns: need update the group};
comment {modify AI setting is asynchronized. Unable to do this in SQF file};

private [{_ret}]; _ret = false;

_val = lbCurSel (_idcSettingCombo + _set);
comment {update "last setting" cache};
_lastSetting set [_set, _val];

if (_gi == -1) then {
	if (_set != aisSuperior) then {
		[_si, giPlayer, _set, _val, true] call preprocessFile (TzkScripts select 172)
	};
} else {
	comment {check whether player is ai group's superior};
	if (isCommander || [_si, _gi, giPlayer] call _funcLeadBy) then {
		[_si, _gi, _set, _val, false] call preprocessFile (TzkScripts select 172);

		if (_set == aisSuperior) then {
			_ret = true; 
			comment {call _update4OneGroup;};
		};
	};
};
_ret