comment {args: mag short name in art module. By now it is a useless param};

_this call loadFile (TzkScripts select 320);

Radio005 setTriggerText "Switch 180m/s Magazine";
Radio005 setTriggerStatements ["this", {[(vehicle player), 180, _this] exec (TzkScripts select 199)}, ""];

Radio006 setTriggerText "Switch 300m/s Magazine";
Radio006 setTriggerStatements ["this", {[(vehicle player), 300, _this] exec (TzkScripts select 199)}, ""];

Radio007 setTriggerText "Switch 400m/s Magazine";
Radio007 setTriggerStatements ["this", {[(vehicle player), 400, _this] exec (TzkScripts select 199)}, ""];