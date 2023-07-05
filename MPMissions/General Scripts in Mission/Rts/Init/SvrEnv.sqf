// Framework
mutexTzkRtsW = false;
TzkRtsSvrId = 0; TzkRtsId4Gc = 0;
TzkRtsWriteTime = 0;

// object pool.
// Index array is for indexing using "find"
// object pool restore extra info
// Available index array restore available indexes
// syntax of object pool element: [object, rts order ID, rts status: bool]
TzkRtsIdxArr = [];
TzkRtsObjPool = [];
TzkRtsAvailableIdx = [];

// Area info correspond to visible area marker
	private [{_enum}, {_info}];
	// Matrix for server area info
	TzkSvrRtsAreaInfo = [ [], [] ];
	// Matrix for travelling server area
	TzkSvrRtsTravelArea = [ [], [] ];

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