// args: none
// this is a process but not a function. script read/write local variables directly

// not allow general art units shoot if near base (because enemy can't counterattack by art)
private [{_ret}]; _ret = true;
if (_needAvoidStruct && 0 == _firedCnt % 5) then {
	if (([getPosASL _vehicle, _si] call loadFile "Common\SQF\ClosestCriticalStruct.sqf") select 1 < 50) then {
		_ret = false;
	};
};
_ret