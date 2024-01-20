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
