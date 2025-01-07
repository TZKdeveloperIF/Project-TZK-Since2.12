comment {args: mag short name in art module. By now it is a useless param};

Radio003 setTriggerText "Switch 080m/s Magazine";
Radio003 setTriggerStatements ["this", {[(vehicle player), 080, _this] exec (TzkScripts select 199)}, ""];

Radio004 setTriggerText "Switch 120m/s Magazine";
Radio004 setTriggerStatements ["this", {[(vehicle player), 120, _this] exec (TzkScripts select 199)}, ""];