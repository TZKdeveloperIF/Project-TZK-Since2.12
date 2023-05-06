// args: none
// external read-only variables: _markerInfo, _orderType
// external output variables: _posT, _msg, _defenceObject
// return: 

private [{_processed}, {_ret}];
_processed = false; _ret = false;

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