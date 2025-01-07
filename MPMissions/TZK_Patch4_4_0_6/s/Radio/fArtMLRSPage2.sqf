comment {args: mag short name in art module. By now it is a useless param};

Radio003 setTriggerText "Switch 600m/s Magazine";
Radio003 setTriggerStatements ["this", {[(vehicle player), 600, _this] exec (TzkScripts select 199)}, ""];

Radio004 setTriggerText "Switch 800m/s Magazine";
Radio004 setTriggerStatements ["this", {[(vehicle player), 800, _this] exec (TzkScripts select 199)}, ""];

Radio005 setTriggerText "Switch 1000m/s Magazine";
Radio005 setTriggerStatements ["this", {[(vehicle player), 1000, _this] exec (TzkScripts select 199)}, ""];

Radio006 setTriggerText "Switch 1200m/s Magazine";
Radio006 setTriggerStatements ["this", {[(vehicle player), 1200, _this] exec (TzkScripts select 199)}, ""];

Radio007 setTriggerText "Switch 1500m/s Magazine";
Radio007 setTriggerStatements ["this", {[(vehicle player), 1500, _this] exec (TzkScripts select 199)}, ""];