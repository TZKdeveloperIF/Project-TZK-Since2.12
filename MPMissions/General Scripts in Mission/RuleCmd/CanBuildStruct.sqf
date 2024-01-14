// args: [type, si]
// return: bool

private [{_type}, {_si}];
_type = _this select 0; _si = _this select 1;
private [{_res}]; _res = true;

// check aircraft factory
if (_type == stAir) then {
	if (not ("Assult Aircraft" call preprocessFile "RuleCmd\Check.sqf") && 
		not ("Transport Aircraft" call preprocessFile "RuleCmd\Check.sqf")
	) then {
		hint "All aircrafts are banned by CMD rule. Ask CMD(s) to decide the rule again (left colume in Options dialog).";
		_res = false;
	};
};

// check gap generator
if (_type == stGapGenerator) then {
	if (not ("Gap Generator" call preprocessFile "RuleCmd\Check.sqf")) then {
		hint "Gap Generator is banned by CMD rule. Ask CMD(s) to decide the rule again (left colume in Options dialog).";
		_res = false;
	};
};

// check factories number limit
if (_type in structsCritcal) then {
	if (("At most 3 factories" call preprocessFile "RuleCmd\Check.sqf")) then {
		if (structsBuilt select _si select _type >= 3) then {
			hint "CMD rule allow only build 3 factories at most. Ask CMD(s) to decide the rule again (left colume in Options dialog).";
			_res = false;
		};
	};
};

_res