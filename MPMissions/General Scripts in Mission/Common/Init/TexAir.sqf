if not _found then {if ("A" == _firstChar) then {
	if not _found then {if ("A10_xj400" countType [_vehicle] > 0) then {
		_scriptName = "A10", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("AH1W_Vit_Base_xj400" countType [_vehicle] > 0) then {
		_scriptName = "AH1W_Vit", _found = true;
	}};
	if not _found then {if ("AH64_MPIV_Base_xj400" countType [_vehicle] > 0) then {
		_scriptName = "AH64_MPIV", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
}};
if not _found then {if ("Helicopter" countType [_vehicle] > 0) then {
	if not _found then {if ("Mi17_owp_Base_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Mi17_owp", _found = true;
	}};
	if not _found then {if ("Mi24_RHS_Base_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Mi24_RHS", _found = true;
	}};
	if not _found then {if ("Kamov_Base_xj400" countType [_vehicle] > 0) then {
		_scriptName = "ka50", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("UH60_CSLA_Base_xj400" countType [_vehicle] > 0) then {
		_scriptName = "UH60A_CSLA", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("UH60_CSLA_Base_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Tiger", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
}};

	if not _found then {if ("Su25_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Su25", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("C130_xj400" countType [_vehicle] > 0) then {
		_scriptName = "C130", _found = true;
	}};