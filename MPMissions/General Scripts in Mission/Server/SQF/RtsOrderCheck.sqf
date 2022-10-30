private [{_skill}];
_skill = (skill _this) * 10000;
_skill = _skill call loadFile "Math\Round.sqf";
_skill call loadFile "Server\SQF\IsRtsOrder.sqf"