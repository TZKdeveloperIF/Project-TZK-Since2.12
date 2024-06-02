// should be a synchronous sqf

TzkCmdRules = [];
// element format: [rule name, [west cmd opinion, east cmd opinion], result, cfg key name]
_elem = [format ["%1 %2"
	, localize {TZK_LANG_SNEAK_ATTACK}
	, localize {TZK_LANG_ON_START}
], [true, true], true, "CmdRule_SneakAttackOnStart"];
TzkCmdRules set [count TzkCmdRules, _elem];

_elem = [format ["%1 %2"
	, localize {TZK_LANG_ASSAULT}
	, localize {TZK_LANG_AIRCRAFT}
], [false, false], false, "CmdRule_AssultAircraft"];
TzkCmdRules set [count TzkCmdRules, _elem];

_elem = [format ["%1 %2"
	, localize {TZK_LANG_TRANSPORT}
	, localize {TZK_LANG_AIRCRAFT}
], [false, false], false, "CmdRule_TransportAircraft"];
TzkCmdRules set [count TzkCmdRules, _elem];

_elem = [localize {TZK_LANG_MULTIPLE_LAUNCH_ROCKET_SYSTEM}, [false, false], false, "CmdRule_MLRS"];
TzkCmdRules set [count TzkCmdRules, _elem];

_elem = [localize {TZK_LANG_GAP_GENERATOR}, [true, true], true, "CmdRule_GapGenerator"];
TzkCmdRules set [count TzkCmdRules, _elem];

_elem = [format ["%1 3 %2"
	, localize {TZK_LANG_AT_MOST}
	, localize {TZK_LANG_FACTORIES}
], [false, false], false, "CmdRule_AtMost3Factories"];
TzkCmdRules set [count TzkCmdRules, _elem];

_initVal = false;
_elem = [format ["%1 %2 %3 %4 LF"
	, localize {TZK_LANG_BUY}
	, localize {TZK_LANG_TRANSPORT}
	, localize {TZK_LANG_SHORT_HELICOPTER}
	, localize {TZK_LANG_FROM}
], [_initVal, _initVal], _initVal, "CmdRule_BuyTranspHeliFromLF"];
TzkCmdRules set [count TzkCmdRules, _elem];