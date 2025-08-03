// args: [button value, dialog param, accept dialog enum]
// return: switch succeeded(bool)
private [{_succeeded}];
_succeeded = false;

if bool_TZK_Rts_Cmd_Mode then {
	private [{_valid}, {_i}, {_c}];
	_valid = false; _i = 0; _c = count (_this select 2); while {_i < _c && not _valid} do {
		if ((_this select 0) == 2 ^ (_this select 2 select _i)) then {_valid = true};
		_i = _i + 1;
	};

	if _valid then {
		if (2^0 == (_this select 0)) then {(_this select 1) exec "Rts\Dialog\RtsMap.sqs"};
		if (2^1 == (_this select 0)) then {(_this select 1) exec "Rts\Dialog\AreaMap.sqs"};
		if (2^2 == (_this select 0)) then {(_this select 1) exec (TzkScripts select 028)};
		if (2^3 == (_this select 0)) then {(_this select 1) exec (TzkScripts select 020)};
		if (2^4 == (_this select 0)) then {(_this select 1) exec "Rts\Dialog\PointMap.sqs"};

		_succeeded = true;
	};
} else {
	TitleText [
		"RTS Commanding Mode is OFF. Switch dialog behaviour won't effect."
	, "Plain"];
};

if _succeeded then {closeDialog 0};

_succeeded