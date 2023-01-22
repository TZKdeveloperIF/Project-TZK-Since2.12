// args: none
// this is a process but not a function. script read/write local variables directly
_ret = true;

if _ret then {
	if (count _ammoArray == 0) then {
		_msg = "No available magazine. Order aborted. Rearm me please, sir.";
		_ret = false;
	};
};
//  The applying of "_ammoOld" will invalid magazines containing only 1 shot. 
// If wish to use such a magazine, adjust this script manually.
_equippedMag = _ammoArray select 0, _ammoOld = _ammoArray select 1;

if _ret then {
	if (_equippedMag == "") then {_ret = false};
};

if _ret then {
	if ((_isVehicle && _type in typesHowitzer) || _isStruct) then {
		if not (_result select 1 select 0) then {
			_msg = "No available shooting pos (the whole area is filed with enemy critical structure)";
			_ret = false;
		};
	};
};

_ret