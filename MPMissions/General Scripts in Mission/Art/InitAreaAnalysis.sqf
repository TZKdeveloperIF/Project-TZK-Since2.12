// initialization for Art module Area pre-analysis results
// this script relys on initial of rts area markers. by now it's called there as well

private [{_enum}];
_enum = "Art" call preprocessFile "Rts\Marker\EnumOfType.sqf";
// ASSERT(_enum >= 0)

if isServer then {
	TzkSvrArtAreaAnal = [ [], [] ];
	{
		private [{_entry}, {_cnt}];
		_entry = TzkSvrArtAreaAnal select _x;
		_cnt = count (TzkSvrRtsAreaInfo select _x select _enum);

		_i = 0; while {_i < _cnt} do {
			_entry set [_i, [0, [true]]];
			_i = _i + 1;
		};
	} forEach [si0, si1];
};

if (not isNull player) then {
	TzkPplArtAreaAnal = [];
	call { // format the code
		private [{_cnt}];
		_entry = TzkPplArtAreaAnal;
		_cnt = count (TzkPplRtsAreaInfo select _enum);

		_i = 0; while {_i < _cnt} do {
			_entry set [_i, [0, [true]]];
			_i = _i + 1;
		};
	};
};