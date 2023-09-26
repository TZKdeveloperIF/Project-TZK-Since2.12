if not _found then {if ("M" == _firstChar) then {
	if not _found then {if ("M1A2_INQ_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M1A2", _found = true;
	}};
	if not _found then {if ("M109A6G_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M109A6G", _scriptPath = "\TZK_Config_4_0_6", _found = true;
	}};
	if not _found then {if ("M270_M29064_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M270", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("M60_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M60", _scriptPath = "\TZK_Config_4_0_4", _found = true;
		if ("M60_120S_xj400" countType [_vehicle] > 0) then {
		_scriptName = "M60_120S", _scriptPath = "\TZK_Config_4_0_5", _found = true;
		};
	}};
}};
if not _found then {if ("T" == _firstChar) then {
	if not _found then {if ("T90ms_xj400" countType [_vehicle] > 0) then {
		_scriptName = "T90ms", _found = true;
	}};
	if not _found then {if ("TOS1_TZK_xj400" countType [_vehicle] > 0) then {
		_scriptName = "TOS1", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("T55E_xj400" countType [_vehicle] > 0) then {
		_scriptName = "T55", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("T72_xj400" countType [_vehicle] > 0) then {
		_scriptName = "T72", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
}};

	if not _found then {if ("AMX10RC_OFrP_xj400" countType [_vehicle] > 0) then {
		_scriptName = "AMX10RC", _scriptPath = "\TZK_Config_4_0_6", _found = true;
	}};
	if not _found then {if ("PLZ05_TZK_xj400" countType [_vehicle] > 0) then {
		_scriptName = "PLZ05", _scriptPath = "\TZK_Config_4_0_6", _found = true;
	}};
	if not _found then {if ("2S6_DKM_xj400" countType [_vehicle] > 0) then {
		_scriptName = "2S6", _found = true;
	}};