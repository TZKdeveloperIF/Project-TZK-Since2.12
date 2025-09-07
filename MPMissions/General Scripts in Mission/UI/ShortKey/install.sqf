// available only in CWA_CE 2.03 or higher version
if (UsedVersion >= 2030) then {

// Format of shortkey design: [0. keys[], 1. functions[], 2. display text indices[], 3. display text idx]
// display text rely on TzkInGameText, which may initialized later than short key.
// Thus only record item indices and design index. Load it dynamically in-game

private [{_get}, {_initDesign}, {_initItem}, {_planIdx}, {_design}, {_i}];
_get = preprocessFile "UI\ShortKey\get.sqf";
_initDesign = { // args: [design: arrayRef, display text idx: number]
	private [{_design}]; _design = _this select 0;
	{_design set [_x, []]} forEach [0, 1, 2];
	_design set [3, _this select 1]
};
_initItem = { // args: [design: arrayRef, key: string, function: string, item display text idx: number]
	private [{_design}, {_key}, {_function}, {_itemTextIdx}, {_keys}, {_funcs}, {_displayTextIndices}];
	_design = _this select 0; _key = _this select 1; _function = _this select 2; _itemTextIdx = _this select 3;
	_keys = [_design, "key"] call _get;
	if (_keys find _key != -1) then {player globalChat format ["WARNING: duplicated key '%1'-'%2' appear!", _key, _function]};
	_keys set [count _keys, _key];

	_funcs = [_design, "function"] call _get;
	if (_funcs find _function != -1) then {player globalChat format ["WARNING: duplicated function '%1'-'%2' appear!", _key, _function]};
	_funcs set [count _funcs, _function];

	_displayTextIndices = [_design, "item text idx"] call _get;
	_displayTextIndices set [count _displayTextIndices, _itemTextIdx];
};
_loadFromConfig = { // args: [design: arrayRef, name: string]
	private [{_design}, {_name}];
	_design = _this select 0, _name = _this select 1;

	_cfg = loadConfig "TzkPlayer.cfg";
	if ((_cfg getValue "Undefined") != "") then {if ((_cfg getValue (_name + "_saved")) != "") then {
		private [{_cfgKeys}, {_cfgFuncs}];
		_cfgKeys = _cfg getValue (_name + "_keys"); _cfgFuncs = _cfg getValue (_name + "_funcs");
		if (count _cfgKeys == count _cfgFuncs) then {
			// remove configured keys
			_keys = [_design, "key"] call _get; _funcs = [_design, "function"] call _get;
			_i = 0; _c = count _cfgFuncs; while {_i < _c} do {
				_cfgFunc = _cfgFuncs select _i;
				_idx = _funcs find _cfgFunc;
				if (_idx != -1) then {_keys set [_idx, ""]};
				_i = _i + 1;
			};
			// add configured keys. Duplicated key will be ignored.
			_i = 0; _c = count _cfgFuncs; while {_i < _c} do {
				_cfgFunc = _cfgFuncs select _i;
				_idx = _funcs find _cfgFunc;
				if (_idx != -1) then {
					_cfgKey = format ["%1", _cfgKeys select _i]; // force text in case of [0-9]
					if not (_cfgKey in _keys) then {_keys set [_idx, _cfgKey]};
				};
				_i = _i + 1;
			};
		};
	}};
};

// Array of shortkey designs. Each design is for specific dialog
TzkShortkeyDesignArray = []; TzkShortkeyNameArray = []; _planIdx = -1;

// Rts map
	_planIdx = _planIdx + 1; _name = "dlg_rts";
	TzkShortkeyDesignArray set [_planIdx, []];
	TzkShortkeyNameArray set [_planIdx, _name];

	_design = TzkShortkeyDesignArray select _planIdx;
	[_design, 015] call _initDesign; _i = 0;

	[_design, "M", "move", _i] call _initItem; _i = _i + 1;
	[_design, "C", "clear", _i] call _initItem; _i = _i + 1;
	[_design, "S", "stop", _i] call _initItem; _i = _i + 1;
	[_design, "B", "board", _i] call _initItem; _i = _i + 1;
	[_design, "O", "occupy", _i] call _initItem; _i = _i + 1;
	[_design, "R", "reclaim", _i] call _initItem; _i = _i + 1;
	[_design, "Q", "shoot area", _i] call _initItem; _i = _i + 1;
	[_design, "E", "equip soldiers", _i] call _initItem; _i = _i + 1;

	[_design, "G", "group display", _i] call _initItem; _i = _i + 1;

	[_design, "P", "select player units", _i] call _initItem; _i = _i + 1;

	[_design, "J", "join", _i] call _initItem; _i = _i + 1;
	[_design, "D", "disband", _i] call _initItem; _i = _i + 1;
	[_design, "A", "art mag", _i] call _initItem; _i = _i + 1;

	[_design, "1", "attach center", _i] call _initItem; _i = _i + 1;
	[_design, "2", "attach right", _i] call _initItem; _i = _i + 1;
	[_design, "3", "attach left", _i] call _initItem; _i = _i + 1;
	[_design, "F1", "detach center", _i] call _initItem; _i = _i + 1;
	[_design, "F2", "detach right", _i] call _initItem; _i = _i + 1;
	[_design, "F3", "detach left", _i] call _initItem; _i = _i + 1;

	[_design, "8 [NUM]", "Area", _i] call _initItem; _i = _i + 1;
	[_design, "9 [NUM]", "WP/CO", _i] call _initItem; _i = _i + 1;
	[_design, "4 [NUM]", "Order", _i] call _initItem; _i = _i + 1;
	[_design, "5 [NUM]", "Point", _i] call _initItem; _i = _i + 1;

	// load from config
	[_design, _name] call _loadFromConfig;

// Area map
	_planIdx = _planIdx + 1;
	TzkShortkeyDesignArray set [_planIdx, []];
	TzkShortkeyNameArray set [_planIdx, "dlg_area"];

	_design = TzkShortkeyDesignArray select _planIdx;
	[_design, 016] call _initDesign; _i = 0;

	[_design, "D", "destruction", _i] call _initItem; _i = _i + 1;
	[_design, "B", "bridge", _i] call _initItem; _i = _i + 1;

	[_design, "G", "group display", _i] call _initItem; _i = _i + 1;

	[_design, "P", "select player units", _i] call _initItem; _i = _i + 1;

	[_design, "1", "AI art area", _i] call _initItem; _i = _i + 1;
	[_design, "2", "player art", _i] call _initItem; _i = _i + 1;
	[_design, "Q", "AI mine area", _i] call _initItem; _i = _i + 1;
	[_design, "W", "player mine", _i] call _initItem; _i = _i + 1;

	[_design, "O", "obstruct", _i] call _initItem; _i = _i + 1;

	[_design, "7 [NUM]", "Rts", _i] call _initItem; _i = _i + 1;
	[_design, "9 [NUM]", "WP/CO", _i] call _initItem; _i = _i + 1;
	[_design, "4 [NUM]", "Order", _i] call _initItem; _i = _i + 1;
	[_design, "5 [NUM]", "Point", _i] call _initItem; _i = _i + 1;

	[_design, "Z", "clockwise 30", _i] call _initItem; _i = _i + 1;
	[_design, "X", "anticlockwise 30", _i] call _initItem; _i = _i + 1;
	[_design, "C", "clockwise 10", _i] call _initItem; _i = _i + 1;
	[_design, "V", "anticlockwise 10", _i] call _initItem; _i = _i + 1;

	// load from config
	[_design, _name] call _loadFromConfig;

// Point map
	_planIdx = _planIdx + 1;
	TzkShortkeyDesignArray set [_planIdx, []];
	TzkShortkeyNameArray set [_planIdx, "dlg_point"];

	_design = TzkShortkeyDesignArray select _planIdx;
	[_design, 017] call _initDesign; _i = 0;

	[_design, "W", "worker", _i] call _initItem; _i = _i + 1;
	[_design, "B", "build", _i] call _initItem; _i = _i + 1;

	[_design, "G", "group display", _i] call _initItem; _i = _i + 1;

	[_design, "7 [NUM]", "Rts", _i] call _initItem; _i = _i + 1;
	[_design, "8 [NUM]", "Area", _i] call _initItem; _i = _i + 1;
	[_design, "9 [NUM]", "WP/CO", _i] call _initItem; _i = _i + 1;
	[_design, "4 [NUM]", "Order", _i] call _initItem; _i = _i + 1;

	// load from config
	[_design, _name] call _loadFromConfig;

// WP/CO map
	_planIdx = _planIdx + 1;
	TzkShortkeyDesignArray set [_planIdx, []];
	TzkShortkeyNameArray set [_planIdx, "dlg_wpco"];

	_design = TzkShortkeyDesignArray select _planIdx;
	[_design, 018] call _initDesign; _i = 0;

	[_design, "S", "set", _i] call _initItem; _i = _i + 1;
	[_design, "C", "clear", _i] call _initItem; _i = _i + 1;

	[_design, "G", "group display", _i] call _initItem; _i = _i + 1;

	[_design, "1", "co", _i] call _initItem; _i = _i + 1;
	[_design, "2", "wp", _i] call _initItem; _i = _i + 1;

	[_design, "7 [NUM]", "Rts", _i] call _initItem; _i = _i + 1;
	[_design, "8 [NUM]", "Area", _i] call _initItem; _i = _i + 1;
	[_design, "5 [NUM]", "Point", _i] call _initItem; _i = _i + 1;
	[_design, "4 [NUM]", "Order", _i] call _initItem; _i = _i + 1;

	// load from config
	[_design, _name] call _loadFromConfig;

// Player group order map
	_planIdx = _planIdx + 1;
	TzkShortkeyDesignArray set [_planIdx, []];
	TzkShortkeyNameArray set [_planIdx, "dlg_ppl_grp_order"];

	_design = TzkShortkeyDesignArray select _planIdx;
	[_design, 019] call _initDesign; _i = 0;

	[_design, "M", "move", _i] call _initItem; _i = _i + 1;
	[_design, "C", "clear", _i] call _initItem; _i = _i + 1;
	[_design, "S", "stop", _i] call _initItem; _i = _i + 1;
	[_design, "Q", "shoot area", _i] call _initItem; _i = _i + 1;
	[_design, "E", "equip soldiers", _i] call _initItem; _i = _i + 1;

	[_design, "H", "heal/repair", _i] call _initItem; _i = _i + 1;
	[_design, "R", "rearm", _i] call _initItem; _i = _i + 1;
	[_design, "B", "board", _i] call _initItem; _i = _i + 1;

	[_design, "J", "join", _i] call _initItem; _i = _i + 1;
	[_design, "D", "disband", _i] call _initItem; _i = _i + 1;
	[_design, "A", "art mag", _i] call _initItem; _i = _i + 1;

	[_design, "1", "attach center", _i] call _initItem; _i = _i + 1;
	[_design, "2", "attach right", _i] call _initItem; _i = _i + 1;
	[_design, "3", "attach left", _i] call _initItem; _i = _i + 1;
	[_design, "F1", "detach center", _i] call _initItem; _i = _i + 1;
	[_design, "F2", "detach right", _i] call _initItem; _i = _i + 1;
	[_design, "F3", "detach left", _i] call _initItem; _i = _i + 1;

	[_design, "7 [NUM]", "Rts", _i] call _initItem; _i = _i + 1;
	[_design, "8 [NUM]", "Area", _i] call _initItem; _i = _i + 1;
	[_design, "9 [NUM]", "WP/CO", _i] call _initItem; _i = _i + 1;
	[_design, "5 [NUM]", "Point", _i] call _initItem; _i = _i + 1;

	// load from config
	[_design, _name] call _loadFromConfig;

// Build structure dialog
	_planIdx = _planIdx + 1;
	TzkShortkeyDesignArray set [_planIdx, []];
	TzkShortkeyNameArray set [_planIdx, "dlg_build_struct"];

	_design = TzkShortkeyDesignArray select _planIdx;
	[_design, 022] call _initDesign; _i = 0;

	[_design, "Space", "confirm", _i] call _initItem; _i = _i + 1;

	[_design, "F1", "class 1", _i] call _initItem; _i = _i + 1;
	[_design, "F2", "class 2", _i] call _initItem; _i = _i + 1;
	[_design, "F3", "class 3", _i] call _initItem; _i = _i + 1;
	[_design, "F4", "class 4", _i] call _initItem; _i = _i + 1;
	[_design, "F5", "class 5", _i] call _initItem; _i = _i + 1;
	[_design, "F6", "class 6", _i] call _initItem; _i = _i + 1;

	[_design, "1", "item 1", _i] call _initItem; _i = _i + 1;
	[_design, "2", "item 2", _i] call _initItem; _i = _i + 1;
	[_design, "3", "item 3", _i] call _initItem; _i = _i + 1;
	[_design, "4", "item 4", _i] call _initItem; _i = _i + 1;
	[_design, "5", "item 5", _i] call _initItem; _i = _i + 1;
	[_design, "6", "item 6", _i] call _initItem; _i = _i + 1;
	[_design, "7", "item 7", _i] call _initItem; _i = _i + 1;
	[_design, "8", "item 8", _i] call _initItem; _i = _i + 1;
	[_design, "9", "item 9", _i] call _initItem; _i = _i + 1;

	// load from config
	[_design, _name] call _loadFromConfig;

// Build structure dialog
	_planIdx = _planIdx + 1;
	TzkShortkeyDesignArray set [_planIdx, []];
	TzkShortkeyNameArray set [_planIdx, "dlg_switch_seat"];

	_design = TzkShortkeyDesignArray select _planIdx;
	[_design, 023] call _initDesign; _i = 0;

	[_design, "Space", "confirm", _i] call _initItem; _i = _i + 1;

	[_design, "1", "item 1", _i] call _initItem; _i = _i + 1;
	[_design, "2", "item 2", _i] call _initItem; _i = _i + 1;
	[_design, "3", "item 3", _i] call _initItem; _i = _i + 1;

	// load from config
	[_design, _name] call _loadFromConfig;

// Area marker dialog
	_planIdx = _planIdx + 1;
	TzkShortkeyDesignArray set [_planIdx, []];
	TzkShortkeyNameArray set [_planIdx, "dlg_area_marker"];

	_design = TzkShortkeyDesignArray select _planIdx;
	[_design, 027] call _initDesign; _i = 0;

	[_design, "Space", "confirm", _i] call _initItem; _i = _i + 1;

	[_design, "Q", "button 1", _i] call _initItem; _i = _i + 1;
	[_design, "W", "button 2", _i] call _initItem; _i = _i + 1;
	[_design, "E", "button 3", _i] call _initItem; _i = _i + 1;

	[_design, "1", "item 1", _i] call _initItem; _i = _i + 1;
	[_design, "2", "item 2", _i] call _initItem; _i = _i + 1;
	[_design, "3", "item 3", _i] call _initItem; _i = _i + 1;
	[_design, "4", "item 4", _i] call _initItem; _i = _i + 1;
	[_design, "5", "item 5", _i] call _initItem; _i = _i + 1;
	[_design, "6", "item 6", _i] call _initItem; _i = _i + 1;
	[_design, "7", "item 7", _i] call _initItem; _i = _i + 1;
	[_design, "8", "item 8", _i] call _initItem; _i = _i + 1;
	[_design, "9", "item 9", _i] call _initItem; _i = _i + 1;
	[_design, "0", "item 0", _i] call _initItem; _i = _i + 1;

	// load from config
	[_design, _name] call _loadFromConfig;

// Art order preset dialog
	_planIdx = _planIdx + 1;
	TzkShortkeyDesignArray set [_planIdx, []];
	TzkShortkeyNameArray set [_planIdx, "dlg_art_order_preset"];

	_design = TzkShortkeyDesignArray select _planIdx;
	[_design, 028] call _initDesign; _i = 0;

	[_design, "Space", "confirm", _i] call _initItem; _i = _i + 1;

	[_design, "F1", "big angle 1", _i] call _initItem; _i = _i + 1;
	[_design, "F2", "big angle 2", _i] call _initItem; _i = _i + 1;
	[_design, "F3", "big angle 3", _i] call _initItem; _i = _i + 1;
	[_design, "F4", "big angle 4", _i] call _initItem; _i = _i + 1;

	[_design, "1", "item 1", _i] call _initItem; _i = _i + 1;
	[_design, "2", "item 2", _i] call _initItem; _i = _i + 1;
	[_design, "3", "item 3", _i] call _initItem; _i = _i + 1;
	[_design, "4", "item 4", _i] call _initItem; _i = _i + 1;
	[_design, "5", "item 5", _i] call _initItem; _i = _i + 1;
	[_design, "6", "item 6", _i] call _initItem; _i = _i + 1;
	[_design, "7", "item 7", _i] call _initItem; _i = _i + 1;
	[_design, "8", "item 8", _i] call _initItem; _i = _i + 1;
	[_design, "9", "item 9", _i] call _initItem; _i = _i + 1;
	[_design, "0", "item 0", _i] call _initItem; _i = _i + 1;

	// load from config
	[_design, _name] call _loadFromConfig;

// Switch art mag dialog
	_planIdx = _planIdx + 1;
	TzkShortkeyDesignArray set [_planIdx, []];
	TzkShortkeyNameArray set [_planIdx, "dlg_switch_art_mag"];

	_design = TzkShortkeyDesignArray select _planIdx;
	[_design, 022] call _initDesign; _i = 0;

	[_design, "Space", "confirm", _i] call _initItem; _i = _i + 1;

	[_design, "F1", "class 1", _i] call _initItem; _i = _i + 1;
	[_design, "F2", "class 2", _i] call _initItem; _i = _i + 1;
	[_design, "F3", "class 3", _i] call _initItem; _i = _i + 1;
	[_design, "F4", "class 4", _i] call _initItem; _i = _i + 1;
	[_design, "F5", "class 5", _i] call _initItem; _i = _i + 1;
	[_design, "F6", "class 6", _i] call _initItem; _i = _i + 1;

	[_design, "1", "item 1", _i] call _initItem; _i = _i + 1;
	[_design, "2", "item 2", _i] call _initItem; _i = _i + 1;
	[_design, "3", "item 3", _i] call _initItem; _i = _i + 1;
	[_design, "4", "item 4", _i] call _initItem; _i = _i + 1;
	[_design, "5", "item 5", _i] call _initItem; _i = _i + 1;
	[_design, "6", "item 6", _i] call _initItem; _i = _i + 1;
	[_design, "7", "item 7", _i] call _initItem; _i = _i + 1;
	[_design, "8", "item 8", _i] call _initItem; _i = _i + 1;
	[_design, "9", "item 9", _i] call _initItem; _i = _i + 1;

	// load from config
	[_design, _name] call _loadFromConfig;
};