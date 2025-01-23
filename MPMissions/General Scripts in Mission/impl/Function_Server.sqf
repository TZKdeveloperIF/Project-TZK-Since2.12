// use skill to mark server unit's status.
// 1 means busy, 2 is empty, 4 means marker order, 8 means marker busy

TzkEncodedSkill = {((skill _this) * 10000) call loadFile "Math\Round.sqf"};

isBusy = {1 == (10000 - _this) % 2};
isRts = {1 == ((((10000 - _this) % 8) / 4) call loadFile "Math\Floor.sqf")};

busySet = preprocessFile "Server\SQF\BusySet.sqf";
busyCheck = preprocessFile "Server\SQF\BusyCheck.sqf";
busyClear = preprocessFile "Server\SQF\BusyClear.sqf";

rtsOrderCheck = {(_this call TzkEncodedSkill) call isRts};