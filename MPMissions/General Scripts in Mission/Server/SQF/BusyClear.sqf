private [{_skill}];
_skill = (skill _this) * 10000;
_skill = _skill call loadFile "Math\Round.sqf";
if (_skill call preprocessFile "Server\SQF\IsBusy.sqf") then {
	_skill = (_skill + 1) / 10000;
	_this setSkill _skill;
};