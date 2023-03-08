if ([_si, _gi, giPlayer] call _funcLeadBy) then {
	true call _updateCtrls;
} else {
	false call _updateCtrls;
	// still allow commander edit ai group's "Superior"
	if isCommander then {ctrlEnable [_idcSettingCombo + aisSuperior, true]};
};