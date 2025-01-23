private [{_skill}];
_skill = _this call TzkEncodedSkill;
if not (_skill call isBusy) then {
	_skill = (_skill - 1) / 10000;
	_this setSkill _skill;
};