FreeMhqWallTime = [-9999, -9999];
mutexWallMhq = [false, false];
FreeMgCnt = [3, 3];
true exec "Common\Init\Confuser.sqs";
SideCmdChangedTime = [-9999, -9999];
// 4.0.6.40
// redefine mutexBuildingQueue as a matrix
mutexBuildingQueue = [[], []];
{
    _si = _x;
    _i = 0; _c = count (groupMatrix select _si);
    while {_i < _c} do {
        mutexBuildingQueue select _si set [_i, false];
        _i = _i + 1;
    };
} forEach [si0, si1];
// define mutex for reclaim
mutexReclaim = false;