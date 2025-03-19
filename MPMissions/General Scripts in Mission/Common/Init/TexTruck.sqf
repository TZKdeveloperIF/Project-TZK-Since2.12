private [{_bUseStaticTexture}];
_bUseStaticTexture = UsedVersion >= 2020;

if (not _found && not _bUseStaticTexture) then {if ("T" == _firstChar) then {
	if not _found then {if ("Truck5t_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Truck", _found = true;
	}};
	if not _found then {if ("Truck5tRepair_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Truck", _found = true;
	}};
	if not _found then {if ("Truck5tRefuel_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Truck", _found = true;
	}};
}};