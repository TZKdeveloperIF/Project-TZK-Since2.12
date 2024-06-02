// args: none
// initial settings from config
private [{_val}];

_val = "RtsMapMode" call preprocessFile "Cfg\LoadPlayerValue.sqf";
if ("" == _val) then {
	bool_TZK_Rts_Map_Mode = false;
} else {
	bool_TZK_Rts_Map_Mode = call _val; // "true"/"false"
};

_val = "RtsCmdMode" call preprocessFile "Cfg\LoadPlayerValue.sqf";
bool_TZK_Rts_Cmd_Mode = (if ("" == _val) then {false} else {call _val});