// args: none
// this is a process but not a function. script read/write local variables directly
_ret = true;

if _ret then {
	if (count _ammoArray == 0) then {
		_msg = "No available magazine. Order aborted. Rearm me please, sir.";
		_ret = false;
	};
};

if _ret then {
	//  The applying of "_ammoOld" will invalid magazines containing only 1 shot. 
	// If wish to use such a magazine, adjust this script manually.
	_equippedMag = _ammoArray select 0, _ammoOld = _ammoArray select 1;
	if (_equippedMag == "") then {_ret = false};
};

if _ret then {
	_bAvoidStruct = if (not _isVehicle && not _isStruct) then {false} else {
		if _isVehicle then {
			50 + _dispersion > ([getPos _target, _si] call loadFile "Common\SQF\ClosestEnemyCritcalStruct.sqf") select 1 && _type in typesHowitzer
		} else {
			50 + _dispersion > ([getPos _target, _si] call loadFile "Common\SQF\ClosestEnemyCritcalStruct.sqf") select 1
		};
	};
	if _bAvoidStruct then {
		_msg = "Banned in shooting structure directly.";
		_ret = false;
	}
};

_ret