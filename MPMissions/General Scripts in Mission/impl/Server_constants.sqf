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
// 4.0.6.70. Support vehicle and its last user
TzkSupVehObjs = []; TzkSubVehUsers = []; mutexTzkSup = false;
// 4.0.6.72. Each factory manage its own cancelled QID
    factoryCancelledQid = [[], []];
    // format of (executedOrderTimer select si): array of qid (work as key), array of [gi, unitsToBuild, timeStamp]
    executedOrderTimer = [[[], []], [[], []]]; mutexEot = [false, false];
// 4.0.6.81. MHQ wall
    TzkMhqWallObjs = []; TzkMhqWallInfos = [];