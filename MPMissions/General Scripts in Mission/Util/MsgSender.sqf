publicExec format [
	"[%1, %2, {%3}] call preprocessFile {Util\MsgReceiver.sqf}", 
	_this select 0, _this select 1, _this select 2
];
[_this select 0, _this select 1, _this select 2] call preprocessFile {Util\MsgReceiver.sqf};