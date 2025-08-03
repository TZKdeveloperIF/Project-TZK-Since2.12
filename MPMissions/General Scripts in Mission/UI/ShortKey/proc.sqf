// args: short_key_design_name: string
// return: specific function name

private [{_short_key_design_name}, {_planIdx}
	, {_ret}
];

_short_key_design_name = _this; _ret = "";
if (UsedVersion >= 2030) then {
	_planIdx = TzkShortkeyNameArray find _short_key_design_name;
	if (_planIdx != -1) then {
		private [{_design}, {_pressingKey}, {_get}, {_keys}, {_keyIdx}, {_funcs}];

		_design = TzkShortkeyDesignArray select _planIdx;
		_pressingKey = call preprocessFile "Util\PressingKey.sqf";
		if (_pressingKey != "") then {
			_get = preprocessFile "UI\ShortKey\get.sqf";
			_keys = [_design, "key"] call _get;

			_keyIdx = _keys find _pressingKey;
			if (_keyIdx != -1) then {
				_funcs = [_design, "function"] call _get;
				_ret = _funcs select _keyIdx;
			};
		};
	};
};

_ret