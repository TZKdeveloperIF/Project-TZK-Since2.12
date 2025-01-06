comment {args: type};
comment {return: allowed};

private [{_ret}];
_ret = true;

comment {MLRS};
if (_ret) then {if (_this in typesRocketLauncher) then {
	if not (localize {TZK_LANG_MULTIPLE_LAUNCH_ROCKET_SYSTEM} call preprocessFile "RuleCmd\Check.sqf") then {
		hint "MLRS is banned by CMD rule. Ask CMD(s) to decide the rule again (left colume in Options dialog).";
		_ret = false;
	};
}};

comment {Assult Aircraft};
if (_ret) then {if (_this in _assultAircraftCache) then {
	if not (format ["%1 %2", localize {TZK_LANG_ASSAULT}, localize {TZK_LANG_AIRCRAFT}] call preprocessFile "RuleCmd\Check.sqf") then {
		hint format [
			"%1 %2 is banned by CMD rule. Ask CMD(s) to decide the rule again (left colume in Options dialog)."
			, localize {TZK_LANG_ASSAULT}
			, localize {TZK_LANG_AIRCRAFT}
		];
		_ret = false;
	};
}};

comment {Transport Aircraft};
if (_ret) then {if (_this in _transportAirCache) then {
	if not (format ["%1 %2", localize {TZK_LANG_TRANSPORT}, localize {TZK_LANG_AIRCRAFT}] call preprocessFile "RuleCmd\Check.sqf") then {
		hint format [
			"%1 %2 is banned by CMD rule. Ask CMD(s) to decide the rule again (left colume in Options dialog)."
			, localize {TZK_LANG_TRANSPORT}
			, localize {TZK_LANG_AIRCRAFT}
		];
		_ret = false;
	};
}};

_ret