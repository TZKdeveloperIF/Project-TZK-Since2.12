// initialization of rts markers. By now only area markers definitions here

// since we didn't define variables to record server marker count on player client,
// same type marker on player client and server should use same count
private [{_artMarkerCnt}]; _artMarkerCnt = 10;
private [{_mineMarkerCnt}]; _mineMarkerCnt = 5;

private [{_enum}, {_info}];

if isServer then {
	// Matrix for server area info
	TzkSvrRtsAreaInfo = [ [], [] ];

	// Art Area
	_enum = "Art" call preprocessFile "Rts\Marker\EnumOfType.sqf";
	{
		_sideInfo = TzkSvrRtsAreaInfo select _x;
		// Format of element: [x, y, w, h, dir]
		_info = []; _i = 0; while {_i < _artMarkerCnt} do {
			_info set [_i, [-10, -10, 0, 0, 0]];
			_i = _i + 1;
		};
		_sideInfo set [_enum, _info];
	} forEach [si0, si1];

	// Mine Area
	_enum = "Mine" call preprocessFile "Rts\Marker\EnumOfType.sqf";
	{
		_sideInfo = TzkSvrRtsAreaInfo select _x;
		// Format of element: [x, y, w, h, dir]
		_info = []; _i = 0; while {_i < _mineMarkerCnt} do {
			_info set [_i, [-10, -10, 0, 0, 0]];
			_i = _i + 1;
		};
		_sideInfo set [_enum, _info];
	} forEach [si0, si1];
};

if (not isNull player) then {
	// Matrix for player area info
	TzkPplRtsAreaInfo = [];

	// Art area markers
	_enum = "Art" call preprocessFile "Rts\Marker\EnumOfType.sqf";
	_info = []; _i = 0; while {_i < _artMarkerCnt} do {
		_info set [_i, [-10, -10, 0, 0, 0]];
		_i = _i + 1;
	};
	TzkPplRtsAreaInfo set [_enum, _info];
	[
		"Art", "Server", "Svr", "ColorOrange_xj400", _artMarkerCnt
	] call preprocessFile "Rts\Marker\CreateArea.sqf";
	[
		"Art", "Player", "Ppl", "ColorGreen", _artMarkerCnt
	] call preprocessFile "Rts\Marker\CreateArea.sqf";

	// Mine area markers
	_enum = "Mine" call preprocessFile "Rts\Marker\EnumOfType.sqf";
	_info = []; _i = 0; while {_i < _mineMarkerCnt} do {
		_info set [_i, [-10, -10, 0, 0, 0]];
		_i = _i + 1;
	};
	TzkPplRtsAreaInfo set [_enum, _info];
	[
		"Mine", "Server", "Svr", "ColorRedAlpha", _mineMarkerCnt
	] call preprocessFile "Rts\Marker\CreateArea.sqf";
	[
		"Mine", "Player", "Ppl", "ColorDarkPurple_xj400", _mineMarkerCnt
	] call preprocessFile "Rts\Marker\CreateArea.sqf";
};

// Define Art Area pre-analysis results
call preprocessFile "Art\InitAreaAnalysis.sqf"