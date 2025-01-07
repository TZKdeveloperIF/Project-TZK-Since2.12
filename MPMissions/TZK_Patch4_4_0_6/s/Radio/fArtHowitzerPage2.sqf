comment {args: [mag short name in art module. By now it is a useless param, speed]};

_name = _this select 0;
_speed = _this select 1;

Radio003 setTriggerText "Switch 600m/s Magazine";
Radio003 setTriggerStatements ["this", {[(vehicle player), 600, _name] exec (TzkScripts select 199)}, ""];

if (_speed > 0) then {
	Radio004 setTriggerText format ["Switch %1m/s Magazine", _speed]; 
	Radio004 setTriggerStatements ["this", format [{[(vehicle player), %1, _name] exec (TzkScripts select 199)}, _speed], ""];
} else {
	Radio004 setTriggerText " "; Radio004 setTriggerStatements ["this", "", ""];
};

Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];