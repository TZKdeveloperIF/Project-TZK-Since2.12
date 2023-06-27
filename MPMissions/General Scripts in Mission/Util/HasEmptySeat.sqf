// args: [vehicle, seat]
// return: bool

private [{_vehicle}], _vehicle = _this select 0;

1 == ([_vehicle, _this select 1] call funcVehParamHasSeat) 
	&& call format [{isNull %1 _vehicle}, _this select 1]