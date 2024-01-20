// Initialize constants for player
// Values are saved in config file on disk but not memory

// It's not recommended to save constants relate to game design like equipment cost discount since player can easily edit them.

// For server it'll be ok if assume the server hoster is fair
// Or we can define constants in server config only when they're shared among both sides

private [{_cfg}, {_initGameVars}];

_initGameVars = {
	_this addValue ["LastOrder", -1]; 				// Player group order idx cache

	_this addValue ["LastCustom", -1]; 				// Custom soldier template idx cache
	_this addValue ["LastEquipTemplate", -1]; 		// Player equipment template idx cache
};

_initPlayerSettings = {
	_this addValue ["RtsMapMode", "false"]; 		// RTS map click mode
	_this addValue ["RtsCmdMode", "false"];			// RTS commanding mode
};

_cfg = loadConfig "TzkPlayer.cfg";
if ((_cfg getValue "Undefined") == "") then { // undefined config
	_cfg = newConfig;
	_cfg addValue ["Undefined", "false"];			// Config defined mark

	_cfg call _initGameVars;
	_cfg call _initPlayerSettings;
} else {
	_cfg call _initGameVars;
};

_cfg saveConfig "TzkPlayer.cfg";