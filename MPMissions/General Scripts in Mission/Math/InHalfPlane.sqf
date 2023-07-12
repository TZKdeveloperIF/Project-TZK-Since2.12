// args: [object point, destination point, direction vector]
// returns: bool
(
	[
		[_this select 0, _this select 1] call funcVectorSub, 
		_this select 2
	] call funcVectorDot
) >= 0