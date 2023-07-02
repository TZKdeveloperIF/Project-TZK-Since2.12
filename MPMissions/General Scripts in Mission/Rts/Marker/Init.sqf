// initialization of rts markers. By now only area markers definitions here

private [{_mineMarkerCnt}]; _mineMarkerCnt = 5;

if isServer then {
	// Matrix for server area info
	TzkSvrRtsAreaInfo = [ [], [] ];

	// Art Area
	// todo: move definitions here

	// Mine Area
	private [{_enum}]; _enum = "Mine" call preprocessFile "Rts\Marker\EnumOfType.sqf";
	{
		_sideInfo = TzkSvrRtsAreaInfo select _x;
		// Format of element: [x, y, w, h, dir]
		_mineInfo = []; _i = 0; while {_i < _mineMarkerCnt} do {
			_mineInfo set [_i, [-10, -10, 0, 0, 0]];
			_i = _i + 1;
		};
		_sideInfo set [_enum, _mineInfo];
	} forEach [si0, si1];
};

if (not isNull player) then {
	// Size info about areas
	TzkRtsAreaSizeInfo = [];

	// Mine area markers
	private [{_enum}]; _enum = "Mine" call preprocessFile "Rts\Marker\EnumOfType.sqf";
	TzkRtsAreaSizeInfo set [_enum, _mineMarkerCnt];
	[
		"Mine", "Server", "Svr", "ColorRedAlpha", _mineMarkerCnt
	] call preprocessFile "Rts\Marker\CreateArea.sqf";
	[
		"Mine", "Player", "Ppl", "ColorDarkPurple_xj400", _mineMarkerCnt
	] call preprocessFile "Rts\Marker\CreateArea.sqf";
};