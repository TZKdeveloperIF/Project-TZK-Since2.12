// args: type
// return: allowed

private [{_ret}];
_ret = true;

// MLRS
if (_ret) then {if (_this in typesRocketLauncher) then {
	if not ("MLRS" call preprocessFile "RuleCmd\Check.sqf") then {
		hint "MLRS is banned by CMD rule. Ask CMD(s) to decide the rule again (left colume in Options dialog).";
		_ret = false;
	};
}};

// Assult Aircraft
if (_ret) then {if (_this in _assultAircraftCache) then {
	if not ("Assult Aircraft" call preprocessFile "RuleCmd\Check.sqf") then {
		hint "Assult Aircraft is banned by CMD rule. Ask CMD(s) to decide the rule again (left colume in Options dialog).";
		_ret = false;
	};
}};

// Transport Aircraft
if (_ret) then {if (_this in _transportAirCache) then {
	if not ("Transport Aircraft" call preprocessFile "RuleCmd\Check.sqf") then {
		hint "Transport Aircraft is banned by CMD rule. Ask CMD(s) to decide the rule again (left colume in Options dialog).";
		_ret = false;
	};
}};

_ret