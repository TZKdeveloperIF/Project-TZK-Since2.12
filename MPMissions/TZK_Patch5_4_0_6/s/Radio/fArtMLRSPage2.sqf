comment {args: mag short name in art module. By now it is a useless param};

_getStatement = loadFile (TzkScripts select 326);

Radio003 setTriggerText (600 call preprocessFile "Util\radioArt.sqf");
Radio003 setTriggerStatements ["this", [600, _this] call _getStatement, ""];

Radio004 setTriggerText (800 call preprocessFile "Util\radioArt.sqf");
Radio004 setTriggerStatements ["this", [800, _this] call _getStatement, ""];

Radio005 setTriggerText (1000 call preprocessFile "Util\radioArt.sqf");
Radio005 setTriggerStatements ["this", [1000, _this] call _getStatement, ""];

Radio006 setTriggerText (1200 call preprocessFile "Util\radioArt.sqf");
Radio006 setTriggerStatements ["this", [1200, _this] call _getStatement, ""];

Radio007 setTriggerText (1500 call preprocessFile "Util\radioArt.sqf");
Radio007 setTriggerStatements ["this", [1500, _this] call _getStatement, ""];