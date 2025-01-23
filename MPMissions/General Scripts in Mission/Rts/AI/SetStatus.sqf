private [{_skill}];
_skill = _this call TzkEncodedSkill;
if not (_skill call isRts) then {
	_skill = (_skill - 4) / 10000;
	_this setSkill _skill;
};