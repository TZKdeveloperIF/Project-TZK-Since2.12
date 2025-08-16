// args: [Network IDs[], param: any, script name: string, script folder: string]

private [{_netIds},{_param},{_scriptName}];
_netIds = _this select 0; _param = _this select 1; _scriptName = _this select 2;
// update ID and time
TzkRtsSvrId = TzkRtsSvrId + 1; TzkRtsWriteTime = time;

private [{_scriptPath}, {_i},{_j},{_k},{_c},{_unit},{_idx},{_found},{_bNewObj}];
_scriptPath = format ["%1\%2\%3.sqs", "Rts", "Order", _scriptName];

_i = 0; _j = count TzkRtsIdxArr; _k = count TzkRtsAvailableIdx; _c = count _netIds;
while {_i < _c} do {
	_unit = UnitById(_netIds select _i);
	_idx = TzkRtsIdxArr find _unit; _found = -1 != _idx;
	if (-1 == _idx) then {
		if (0 == _k) then {
			_idx = _j; _j = _j + 1;
		} else {
			_idx = TzkRtsAvailableIdx select(_k - 1); _k = _k - 1;
		};
	};
	_len = count TzkRtsObjPool; _bNewObj = not _found && _idx >= _len;
	if not _found then {TzkRtsIdxArr set [_idx, _unit]};
	if _bNewObj then {
		TzkRtsObjPool set [_idx, [_unit, TzkRtsSvrId, true]];
	} else {
		TzkRtsObjPool select _idx set [0, _unit];
		TzkRtsObjPool select _idx set [1, TzkRtsSvrId];
		TzkRtsObjPool select _idx set [2, true];
	};
	[_unit, _param, TzkRtsObjPool select _idx, TzkRtsSvrId] exec _scriptPath;
	_i = _i + 1;
};

TzkRtsAvailableIdx resize _k;
// update time again. Using latest time
TzkRtsWriteTime = time;