comment {args: mag short name in art module. By now it is a useless param};

_getStatement = loadFile (TzkScripts select 326);

_this call loadFile (TzkScripts select 322);

Radio005 setTriggerText "Switch 180m/s Magazine";
Radio005 setTriggerStatements ["this", [180, _this] call _getStatement, ""];

Radio006 setTriggerText "Switch 300m/s Magazine";
Radio006 setTriggerStatements ["this", [300, _this] call _getStatement, ""];

Radio007 setTriggerText "Switch 400m/s Magazine";
Radio007 setTriggerStatements ["this", [400, _this] call _getStatement, ""];