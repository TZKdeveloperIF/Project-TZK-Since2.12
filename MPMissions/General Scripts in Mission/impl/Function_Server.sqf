// use skill to mark server unit's status.
// 1 means busy, 2 means concurrent(temporary), 4 means marker order, 8 means marker busy
busySet = loadFile "Server\SQF\BusySet.sqf";
busyCheck = loadFile "Server\SQF\BusyCheck.sqf";
busyClear = loadFile "Server\SQF\BusyClear.sqf";

temporarySet = loadFile "Server\SQF\ConcurrentSet.sqf";
temporaryCheck = loadFile "Server\SQF\ConcurrentCheck.sqf";
temporaryClear = loadFile "Server\SQF\ConcurrentClear.sqf";