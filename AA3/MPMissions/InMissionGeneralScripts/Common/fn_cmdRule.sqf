// TZK CTI - Commander Rules
// Mirrors OFP: Common/Init/CmdRule.sqf

TzkCmdRules = [];

TzkCmdRules pushBack [
	format ["%1 %2", localize "STR_TZK_LANG_SNEAK_ATTACK", localize "STR_TZK_LANG_ON_START"],
	[true, true], true, "CmdRule_SneakAttackOnStart"
];

TzkCmdRules pushBack [
	format ["%1 %2", localize "STR_TZK_LANG_ASSAULT", localize "STR_TZK_LANG_AIRCRAFT"],
	[false, false], false, "CmdRule_AssaultAircraft"
];

TzkCmdRules pushBack [
	format ["%1 %2", localize "STR_TZK_LANG_TRANSPORT", localize "STR_TZK_LANG_AIRCRAFT"],
	[false, false], false, "CmdRule_TransportAircraft"
];

TzkCmdRules pushBack [
	localize "STR_TZK_LANG_MULTIPLE_LAUNCH_ROCKET_SYSTEM",
	[false, false], false, "CmdRule_MLRS"
];

TzkCmdRules pushBack [
	localize "STR_TZK_LANG_GAP_GENERATOR",
	[true, true], true, "CmdRule_GapGenerator"
];

TzkCmdRules pushBack [
	format ["%1 3 %2", localize "STR_TZK_LANG_AT_MOST", localize "STR_TZK_LANG_FACTORIES"],
	[false, false], false, "CmdRule_AtMost3Factories"
];

// 显式写入 missionNamespace，便于 Debug Console 用 getVariable 与存档/同步行为一致
missionNamespace setVariable ["TzkCmdRules", TzkCmdRules];

diag_log format ["TZK CTI: %1 CmdRules defined", count TzkCmdRules];
