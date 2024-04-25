// args: none
// this is a process but not a function. script read/write local variables directly
_ret = true;

if _ret then {
	if (count _ammoArray == 0) then {
		_msg = localize {TZK_LANG_NO_AVAILABLE_MAG};
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
	if _needAvoidStruct then {
		if not (_result select 1 select 0) then {
			_msg = localize {TZK_LANG_AREA_FILLED_ENEMY_STRUCT};
			_ret = false;
		};
	};
};

_ret