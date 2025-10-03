comment {args: mag short name in art module. By now it is a useless param};

_getStatement = loadFile (TzkScripts select 326);

Radio003 setTriggerText (080 call preprocessFile "Util\radioArt.sqf");
Radio003 setTriggerStatements ["this", [080, _this] call _getStatement, ""];

Radio004 setTriggerText (120 call preprocessFile "Util\radioArt.sqf");
Radio004 setTriggerStatements ["this", [120, _this] call _getStatement, ""];