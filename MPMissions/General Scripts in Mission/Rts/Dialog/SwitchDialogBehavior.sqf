// args: [button value, dialog param]
if bool_TZK_Rts_Cmd_Mode then {
	if (2^0 == (_this select 0)) then {(_this select 1) exec "Rts\Dialog\RtsMap.sqs"};
	if (2^1 == (_this select 0)) then {(_this select 1) exec "Rts\Dialog\AreaMap.sqs"};
	if (2^2 == (_this select 0)) then {(_this select 1) exec (TzkScripts select 028)};
	if (2^3 == (_this select 0)) then {(_this select 1) exec (TzkScripts select 020)};
	if (2^4 == (_this select 0)) then {(_this select 1) exec "Rts\Dialog\PointMap.sqs"};
} else {
	TitleText [
		"RTS Commanding Mode is OFF. Switch dialog behaviour won't effect."
	, "Plain"];
};
closeDialog 0;