if not _found then {if ("J" == _firstChar) then {
	if not _found then {if ("Jeep_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Car", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("JeepMG_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Car", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
}};
if not _found then {if ("U" == _firstChar) then {
	if not _found then {if ("UAZ_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Car", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("Ural_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Car", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("UralRepair_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Car", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
	if not _found then {if ("UralRefuel_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Car", _scriptPath = "\TZK_Config_4_0_4", _found = true;
	}};
}};