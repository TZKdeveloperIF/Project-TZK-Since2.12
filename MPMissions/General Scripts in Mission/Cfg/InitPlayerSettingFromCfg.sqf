// args: none
// initial settings from config
private [{_keys}, {_vars}, {_defaultVals}, {_i},{_c}];

// variables with bool value but in string format
_initStringBool = {
	private [{_cfgKey}, {_varName}, {_default}, {_val}];
	_cfgKey = _this select 0;
	_varName = _this select 1;
	_default = _this select 2;

	_val = _cfgKey call preprocessFile "Cfg\LoadPlayerValue.sqf";
	if (_varName != "") then {
		call format [{%1 = %2}, _varName, if ("" == _val) then {_default} else {call _val}];
	};
};

["RtsMapMode", "bool_TZK_Rts_Map_Mode", false] call _initStringBool; // RTS map click mode

// mission settings
{
	_keys = 2 call preprocessFile _x;
	_vars = 0 call preprocessFile _x;
	_defaultVals = 3 call preprocessFile _x;
	_i = 0; _c = count _keys; while {_i < _c} do {
		[_keys select _i, _vars select _i, _defaultVals select _i] call _initStringBool;
		_i = _i + 1;
	};
} forEach [
	  "UI\MissionSetting\effect.sqf"
	, "UI\MissionSetting\function.sqf"
	, "UI\MissionSetting\action.sqf"

	, "UI\MissionSetting\gui.sqf"
	, "UI\MissionSetting\environment.sqf"
	, "UI\MissionSetting\control.sqf"
];