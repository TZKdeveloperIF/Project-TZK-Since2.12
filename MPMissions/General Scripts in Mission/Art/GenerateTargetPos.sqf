// args: none
// external read-only variables: _markerInfo, _orderType
// external output variables: _posT, _msg, _defenceObject
// return: 

private [{_processed}, {_ret}];
_processed = false; _ret = false;

if ("Destroy Obstruction" == _orderType) then {
	_processed = true;
	private [{_i},{_c},{_list}, {_found},{_obj}, {_defenceTypes},{_defTypeIdx}];
	_found = false;
	_defTypeIdx = 0; _defenceTypes = [stTankTrap, stWireFence];
	while {_defTypeIdx < count _defenceTypes && not _found} do {
		_list = structMatrix select (siEnemy select _si) select (_defenceTypes select _defTypeIdx);
		_i = 0; _c = count _list;
		while {_i < _c && not _found} do {
			_obj = _list select _i;
			if (alive _obj) then {if ([getPos _obj, _markerInfo] call preprocessFile "Util\PosInRect.sqf") then {
				_found = true;
				_posT = getPos _obj;
				_defenceObject = _obj;
			}};
			_i = _i + 1;
		};
		_defTypeIdx = _defTypeIdx + 1;
	};
	_ret = _found;
	if not _found then {_msg = "No obstruction in area. Order aborted."};
};

if not _processed then {
	if ("General Area" != _orderType) then {"Unexpected _orderType in Art\CoreOrder.sqs." call fDebugLog};
	
	_posT = _markerInfo call preprocessFile "Art\AreaRandomPos.sqf";
	if _needAvoidStruct then {
		private [{_try}, {_legal}];
		_try = 0; _legal = ([_posT, _si] call loadFile "Common\SQF\ClosestEnemyCritcalStruct.sqf") select 1 < 50;
		while {not _legal && _try < 3} do {
			_posT = _markerInfo call preprocessFile "Art\AreaRandomPos.sqf";
			_legal = ([_posT, _si] call loadFile "Common\SQF\ClosestEnemyCritcalStruct.sqf") select 1 < 50;
			_try = _try + 1;
		};
		if (3 == _try && not _legal) then {_posT set [0, _result select 1 select 1]; _posT set [1, _result select 1 select 2]};
	};

	_ret = true;
};

_ret