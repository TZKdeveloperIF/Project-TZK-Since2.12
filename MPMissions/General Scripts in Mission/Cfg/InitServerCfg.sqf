// Initialize constants for server
// Values are saved in config file on disk but not memory

// It's not recommended to save constants relate to game design since someone can easily edit the cfg file.
// For server it'll be ok if assume the server hoster is fair
// Or we can define constants in server config only when they're shared among both sides

private [{_i}];
private [{_cfg}, {_initGameVars}];

_initGameVars = {
	
};

_initServerSettings = {
	_i = 0; while {_i < (count TzkCmdRules)} do {
		// Refer to definition of TzkCmdRules
		_this addValue [(TzkCmdRules select _i select 3), format ["%1", TzkCmdRules select _i select 2]];
		_i = _i + 1;
	};
};

_cfg = loadConfig "TzkServer.cfg";
if ((_cfg getValue "Undefined") == "") then { 		// undefined config
	_cfg = newConfig;
	_cfg addValue ["Undefined", "false"];			// Config defined mark

	_cfg call _initGameVars;
	_cfg call _initServerSettings;
} else {
	_cfg call _initGameVars;
};

_cfg saveConfig "TzkServer.cfg";


// =========================Load Config to Server=========================
private [{_str}, {_val}];

// keep consistence with definition of TzkCmdRules
_i = 0; while {_i < (count TzkCmdRules)} do {
	_str = (TzkCmdRules select _i select 3) call preprocessFile "Cfg\LoadServerValue.sqf";
	_val = (if ("" == _str) then {false} else {call _str}); // "true"/"false"
	[_i, _val, true, false] call preprocessFile "RuleCmd\SetValue.sqf";
	// modify opinions as well
	{TzkCmdRules select _i select 1 set [_x, _val]} forEach [si0, si1];

	_i = _i + 1;
};