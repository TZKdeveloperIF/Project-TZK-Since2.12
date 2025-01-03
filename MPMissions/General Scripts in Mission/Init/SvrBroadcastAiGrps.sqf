// args: none
private [{_gisWest}, {_gisEast}, {_gi}];

_gisWest = [];
{
	_gi = groupMatrix select si0 find _x;
	if (_gi != -1) then {_gisWest set [count _gisWest, _gi]};
} forEach (groupAiMatrix select si0);

_gisEast = [];
{
	_gi = groupMatrix select si1 find _x;
	if (_gi != -1) then {_gisEast set [count _gisEast, _gi]};
} forEach (groupAiMatrix select si1);

[si0, _gisWest, si1, _gisEast] exec "\TZK_Patch4_4_0_6\s\Net\hGroupsAreAi.sqs";
publicExec format [{%1 exec "\TZK_Patch4_4_0_6\s\Net\hGroupsAreAi.sqs"}, [si0, _gisWest, si1, _gisEast]];