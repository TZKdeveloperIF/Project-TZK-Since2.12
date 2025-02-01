// args: custom message
// When commander send RTS order to player, this message will raise to describe the order
private [{_units}, {_content}];
_units = _this select 0;
_content = _this select 1;

if (count _units > 0) then {
	format [TzkRtsCmdMsg
		, name leader (groupCommander select siPlayer)
		, _units call funcGetUids
		, _content
	] call funcSideMsg;
};