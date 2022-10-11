// args: none

// redefine mutexEditMoneyMatrix as a matrix to make server able to handle money faster

mutexEditMoneyMatrix = [[], []];
{
    _si = _x;
    _i = 0; _c = count (groupMoneyMatrix select _si);
    while {_i < _c} do {
        mutexEditMoneyMatrix select _si set [_i, false];
        _i = _i + 1;
    };
} forEach [si0, si1];