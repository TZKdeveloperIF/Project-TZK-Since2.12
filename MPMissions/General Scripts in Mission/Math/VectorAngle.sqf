// args: [vector1, vector2]
// return: included angle between 2 vectors. Degree

acos (
	([_this select 0, _this select 1] call funcVectorDot)
	/ ((_this select 0) call funcVectorLength)
	/ ((_this select 1) call funcVectorLength)
)