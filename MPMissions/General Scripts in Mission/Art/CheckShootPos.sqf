// args: _avoidBaseDist
// this is a process but not a function. script read/write local variables directly

// not allow general art units shoot if near base (because enemy can't counterattack by art)
private [{_avoidBaseDist}, {_ret}]; _ret = true; _avoidBaseDist = _this;
if (_needAvoidStruct && 0 == _firedCnt % 5) then {
	if (([getPosASL _vehicle, _si] call loadFile "Common\SQF\ClosestCriticalStruct.sqf") select 1 < _avoidBaseDist) then {
		_ret = false;
		_msg = format ["Not allow shooting art near base within %1 meters.", _avoidBaseDist];
	};
};
_ret