if (not _found && "M" == _firstChar) then {
	if (not _found && "M1A1_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M1A1", _scriptPath = "\TZK_Config_4_0_6", _found = true;
	};
	if (not _found && "M1A2_INQ_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M1A2", _found = true;
	};
	if (not _found && "M109A6G_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M109A6G", _scriptPath = "\TZK_Config_4_0_6", _found = true;
	};
	if (not _found && "M270_M29064_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M270", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	};
	if (not _found && "M60_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M60", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	};
	if (not _found && "M60_120S_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M60_120S", _scriptPath = "\TZK_Config_4_0_5", _found = true;
	};
};
if (not _found && "T" == _firstChar) then {
	if (not _found && ("T80_xj400" countType [_vehicle] > 0 || "T80Res_TZK_xj400" countType [_vehicle] > 0)) then {
		_scriptName = "T80", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	};
	if (not _found && "T90ms_xj400" countType [_vehicle] > 0) then {
		_scriptName = "T90ms", _found = true;
	};
	if (not _found && "TOS1_TZK_xj400" countType [_vehicle] > 0) then {
		_scriptName = "TOS1", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	};
	if (not _found && "T55E_xj400" countType [_vehicle] > 0) then {
		_scriptName = "T55", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	};
	if (not _found && "T72_xj400" countType [_vehicle] > 0) then {
		_scriptName = "T72", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	};
};

	if (not _found && "AMX10RC_OFrP_xj400" countType [_vehicle] > 0) then {
		_scriptName = "AMX10RC", _scriptPath = "\TZK_Config_4_0_6", _found = true;
	};
	if (not _found && "Leo2A6_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Leo2A6", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	};
	if (not _found && "PLZ05_TZK_xj400" countType [_vehicle] > 0) then {
		_scriptName = "PLZ05", _scriptPath = "\TZK_Config_4_0_6", _found = true;
	};
	if (not _found && "ZTZ99_xj400" countType [_vehicle] > 0) then {
		_scriptName = "ZTZ99", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	};
	if (not _found && "2S6_DKM_xj400" countType [_vehicle] > 0) then {
		_scriptName = "2S6", _found = true;
	};