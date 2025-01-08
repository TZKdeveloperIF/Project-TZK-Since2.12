// args: [item, value, need broadcast, need display message]
private [{_item}, {_value}, {_broadcast}, {_display}];
_item = _this select 0;
_value = _this select 1;
_broadcast = _this select 2;
_display = _this select 3;

private [{_entry}];
_entry = TzkCmdRules select _item;
_entry set [2, _value];

// ASSERT(isServer)

if _broadcast then {
	if _display then {
		format [{CMD %3 "%1" %4 %5 %2}, _entry select 0, _value
			, localize {TZK_LANG_RULE}, localize {TZK_LANG_CHANGE}, localize {TZK_LANG_TO}
		] exec "Util\GlobalMsg.sqs";
	};

	// need delay to wait game start. Actually to wait clients initialize TzkCmdRules variable
	_exp = format [{%1 exec "RuleCmd\ClientsReceiveResult.sqs"}, [_item, _value, _display]];
	[
		format [{publicExec {%1};}, _exp],
		0.1
	] exec "\TZK_Scripts_4_0_5\Common\~@\DelayCode.sqs";

	// No save value. Server hoster configures CMD rule default value
	// [(TzkCmdRules select _item select 3), format ["%1", _value]] call preprocessFile "Cfg\SaveServerValue.sqf";
};