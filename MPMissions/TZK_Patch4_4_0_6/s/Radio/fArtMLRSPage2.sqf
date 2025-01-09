comment {args: mag short name in art module. By now it is a useless param};

_getStatement = loadFile (TzkScripts select 326);

Radio003 setTriggerText "Switch 600m/s Magazine";
Radio003 setTriggerStatements ["this", [600, _this] call _getStatement, ""];

Radio004 setTriggerText "Switch 800m/s Magazine";
Radio004 setTriggerStatements ["this", [800, _this] call _getStatement, ""];

Radio005 setTriggerText "Switch 1000m/s Magazine";
Radio005 setTriggerStatements ["this", [1000, _this] call _getStatement, ""];

Radio006 setTriggerText "Switch 1200m/s Magazine";
Radio006 setTriggerStatements ["this", [1200, _this] call _getStatement, ""];

Radio007 setTriggerText "Switch 1500m/s Magazine";
Radio007 setTriggerStatements ["this", [1500, _this] call _getStatement, ""];