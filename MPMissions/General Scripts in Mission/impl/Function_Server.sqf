// use skill to mark server unit's status.
// 1 means busy, 2 is empty, 4 means marker order, 8 means marker busy
busySet = preprocessFile "Server\SQF\BusySet.sqf";
busyCheck = preprocessFile "Server\SQF\BusyCheck.sqf";
busyClear = preprocessFile "Server\SQF\BusyClear.sqf";

rtsOrderCheck = preprocessFile "Server\SQF\RtsOrderCheck.sqf";