private [{_skill}];
_skill = (skill _this) * 10000;
_skill = _skill call loadFile "Math\Round.sqf";
if (_skill call loadFile "Server\SQF\IsRtsOrder.sqf") then {
	_skill = (_skill + 4) / 10000;
	_this setSkill _skill;
};