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
	format [{CMD rule "%1" has changed to %2}, _entry select 0, _value] exec "Util\GlobalMsg.sqs";

	publicExec format [{%1 exec "RuleCmd\ClientsReceiveResult.sqs"}, [_item, _value, _display]];

	[(TzkCmdRules select _item select 3), format ["%1", _value]] call preprocessFile "Cfg\SaveServerValue.sqf";
};