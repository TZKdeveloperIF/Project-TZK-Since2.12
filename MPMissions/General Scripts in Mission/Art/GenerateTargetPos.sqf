// args: [_avoidBaseDist, _absLegalTargetPos, _si]
// external read-only variables: _markerInfo, _orderType
// external output variables: _posT, _msg, _defenceObject
// return: 

private [{_processed}, {_ret}
	, {_avoidBaseDist}, {_absLegalTargetPos}, {_si}];
_processed = false; _ret = false;
_avoidBaseDist = _this select 0; _absLegalTargetPos = _this select 1; _si = _this select 2;

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
	if not _found then {_msg = format ["%1 %2 %3 %4. %5"
		, localize {TZK_LANG_NO}
		, localize {TZK_LANG_OBSTRUCTION}
		, localize {TZK_LANG_IN}
		, localize {TZK_LANG_AREA}
		, localize {TZK_LANG_ORDER_ABORTED}
	]};
};

if ("Auto Detect" == _orderType) then {
	_processed = true;
	_ret = true;
	_posT = getPosASL _adObj;
};

if not _processed then {
	if ("General Area" != _orderType) then {"Unexpected _orderType in Art\CoreOrder.sqs." call fDebugLog};
	
	_ret = true;
	_posT = _markerInfo call preprocessFile "Art\AreaRandomPos.sqf";
	if _needAvoidStruct then {
		private [{_enemyStructInfo}, {_nearestInfo}, {_try}, {_legal}];
		_enemyStructInfo = _si call preprocessFile "Art\getEnemyStructInfo.sqf";
		_nearestInfo = [_posT, _enemyStructInfo] call preprocessFile "Art\nearestEnemyStructPos.sqf";
		_try = 0; 
		_legal = (_nearestInfo select 0) > _avoidBaseDist;

		while {not _legal && _try < 3} do {
			_posT = _markerInfo call preprocessFile "Art\AreaRandomPos.sqf";
			_nearestInfo = [_posT, _enemyStructInfo] call preprocessFile "Art\nearestEnemyStructPos.sqf";
			_legal = (_nearestInfo select 0) > _avoidBaseDist;
			_try = _try + 1;
		};
		if (3 == _try && not _legal) then {
			if (_absLegalTargetPos select 0) then {
				_posT set [0, _absLegalTargetPos select 1 select 0]; _posT set [1, _absLegalTargetPos select 1 select 1];
				_nearestInfo = [_posT, _enemyStructInfo] call preprocessFile "Art\nearestEnemyStructPos.sqf";
				_legal = (_nearestInfo select 0) > _avoidBaseDist;
				if (not _legal) then {_ret = false};
			} else {
				_ret = false;
			};
		};
	};
};

_ret