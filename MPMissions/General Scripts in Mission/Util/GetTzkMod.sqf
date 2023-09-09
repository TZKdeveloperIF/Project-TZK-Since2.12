private [{_str}];

_str = "STR_CRCTI_MOD";
if bool_TZK_MF_Mode then {_str = "STR_CRCTI_Kaos_MOD"};
if bool_TZK_Yugo_Mode then {_str = "STR_CRCTI_Yugo_MOD"};
if bool_TZK_SEMod_Mode then {_str = "STR_CRCTI_SE_MOD"};

localize _str