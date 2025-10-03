comment {args: mag short name in art module. By now it is a useless param};

_getStatement = loadFile (TzkScripts select 326);

_this call loadFile (TzkScripts select 322);

Radio005 setTriggerText (180 call preprocessFile "Util\radioArt.sqf");
Radio005 setTriggerStatements ["this", [180, _this] call _getStatement, ""];

Radio006 setTriggerText (300 call preprocessFile "Util\radioArt.sqf");
Radio006 setTriggerStatements ["this", [300, _this] call _getStatement, ""];

Radio007 setTriggerText (400 call preprocessFile "Util\radioArt.sqf");
Radio007 setTriggerStatements ["this", [400, _this] call _getStatement, ""];