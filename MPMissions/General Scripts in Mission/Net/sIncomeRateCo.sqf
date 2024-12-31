// args: [income rate (percentage), si]
// should be a synchronous sqf

private [{_value}];
_value = (_this select 0) + 128 * (_this select 1);

_value call preprocessFile "\TZK_Patch4_4_0_6\s\Net\hIncomeRateCo.sqf";
publicExec format [[{%1 call preprocessFile "\TZK_Patch4_4_0_6\s\Net\hIncomeRateCo.sqf"}, _value]];