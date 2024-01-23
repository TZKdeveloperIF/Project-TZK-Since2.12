// should be a synchronous sqf

TzkCmdRules = [];
// element format: [rule name, [west cmd opinion, east cmd opinion], result, cfg key name]
_elem = ["Sneak attack on start", [true, true], true, "CmdRule_SneakAttackOnStart"];
TzkCmdRules set [count TzkCmdRules, _elem];

_elem = ["Assult Aircraft", [false, false], false, "CmdRule_AssultAircraft"];
TzkCmdRules set [count TzkCmdRules, _elem];

_elem = ["Transport Aircraft", [false, false], false, "CmdRule_TransportAircraft"];
TzkCmdRules set [count TzkCmdRules, _elem];

_elem = ["MLRS", [false, false], false, "CmdRule_MLRS"];
TzkCmdRules set [count TzkCmdRules, _elem];

_elem = ["Gap Generator", [true, true], true, "CmdRule_GapGenerator"];
TzkCmdRules set [count TzkCmdRules, _elem];

_elem = ["At most 3 factories", [false, false], false, "CmdRule_AtMost3Factories"];
TzkCmdRules set [count TzkCmdRules, _elem];