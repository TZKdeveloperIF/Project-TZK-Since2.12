comment {args: [mag short name in art module. By now it is a useless param, speed]};

_name = _this select 0;
_speed = _this select 1;

_getStatement = loadFile (TzkScripts select 326);

Radio003 setTriggerText (600 call preprocessFile "Util\radioArt.sqf");
Radio003 setTriggerStatements ["this", [600, _name] call _getStatement, ""];

if (_speed > 0) then {
	Radio004 setTriggerText (_speed call preprocessFile "Util\radioArt.sqf"); 
	Radio004 setTriggerStatements ["this", [_speed, _name] call _getStatement, ""];
} else {
	Radio004 setTriggerText " "; Radio004 setTriggerStatements ["this", "", ""];
};

Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];