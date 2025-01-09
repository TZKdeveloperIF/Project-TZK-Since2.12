// args: [income rate (percentage), si]
// should be a synchronous sqf

private [{_value}];
_value = (_this select 0) + 128 * (_this select 1);

_value call loadFile "\TZK_Patch4_4_0_6\s\Net\hIncomeRatePpl.sqf";
publicExec format [{%1 call loadFile "\TZK_Patch4_4_0_6\s\Net\hIncomeRatePpl.sqf"}, _value];