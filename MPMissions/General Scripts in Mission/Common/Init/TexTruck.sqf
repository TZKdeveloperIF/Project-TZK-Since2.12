if (not _found && "T" == _firstChar) then {
	if (not _found && "Truck5t_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Truck", _found = true;
	};
	if (not _found && "Truck5tRepair_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Truck", _found = true;
	};
	if (not _found && "Truck5tRefuel_xj400" countType [_vehicle] > 0) then {
		_scriptName = "Truck", _found = true;
	};
};