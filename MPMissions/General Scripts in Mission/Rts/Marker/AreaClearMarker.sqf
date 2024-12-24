// args: cleare marker strategy info (encoded in binary value)
// read info from "TzkRtsArea" marker
_value = _this;

private [{_bit}, {_clearAll}, {_co}, {_wp}, {_svrArt}, {_pplArt}, {_svrMine}, {_pplMine}
	, {_pos}, {_size}, {_dir}, {_area}];

_bit = _value % 2;
_clearAll = 1 == _bit;
_value = (_value - _bit) / 2;

_bit = _value % 2;
_co = 1 == _bit;
_value = (_value - _bit) / 2;

_bit = _value % 2;
_wp = 1 == _bit;
_value = (_value - _bit) / 2;

_bit = _value % 2;
_svrArt = 1 == _bit;
_value = (_value - _bit) / 2;

_bit = _value % 2;
_pplArt = 1 == _bit;
_value = (_value - _bit) / 2;

_bit = _value % 2;
_svrMine = 1 == _bit;
_value = (_value - _bit) / 2;

_bit = _value % 2;
_pplMine = 1 == _bit;
_value = (_value - _bit) / 2;

if _clearAll then {
	_co = true; _wp = true; _svrArt = true; _pplArt = true; _svrMine = true; _pplMine = true;
};

_pos = getMarkerPos "TzkRtsArea";
_size = getMarkerSize "TzkRtsArea";
_dir = getMarkerDir "TzkRtsArea";
_area = [_pos select 0, _pos select 1, _size select 0, _size select 1, _dir];

private [{_message}]; _message = "";
private [{_fmtArr}]; _fmtArr = {if (count _this == 1) then {_this select 0} else {_this}};

private [{_i}];

if (_co && isCommander) then {
	private [{_coIdx}]; _coIdx = [];
	_i = 0; while {_i < countWPCO} do {
		if ([wpCO select siPlayer select _i, _area] call preprocessFile "Util\PosInRect.sqf") then {
			_coIdx set [count _coIdx, _i];
		};
		_i = _i + 1;
	};
	if (count _coIdx > 0) then {
		private [{_param}];
		_param = [siPlayer, giPlayer, [-1, -1]];
		[_param, _coIdx] call preprocessFile "Algo\arrayAppend.sqf";
		_param exec "Common\Msg\sSetWPCO.sqs";
		// process player co idx cache
		_cacheIdx = indexWayPointSelected select 0;
		if (_cacheIdx in _coIdx) then {indexWayPointSelected set [0, -1]};
		// message
		_message = _message + format ["CO: %1  ", _coIdx call _fmtArr];
	};
};

if _wp then {
	private [{_wpIdx}]; _wpIdx = [];
	_i = 0; while {_i < countWPPlayer} do {
		if ([wpPlayer select _i, _area] call preprocessFile "Util\PosInRect.sqf") then {
			_wpIdx set [count _wpIdx, _i];
		};
		_i = _i + 1;
	};
	if (count _wpIdx > 0) then {
		{[_x, [-1,-1]] exec "Player\SetWaypoint.sqs"} forEach _wpIdx;
		// process player co idx cache
		_cacheIdx = indexWayPointSelected select 1;
		if (_cacheIdx in _wpIdx) then {indexWayPointSelected set [1, -1]};
		// message
		_message = _message + format ["WP: %1  ", _wpIdx call _fmtArr];
	};
};

if (_svrArt && isCommander) then {
	private [{_enum}, {_c}];
	_enum = "Art" call preprocessFile "Rts\Marker\EnumOfType.sqf";
	_c = count (TzkPplRtsAreaInfo select _enum);

	private [{_svrArtIdx}]; _svrArtIdx = [];
	private [{_rect}]; _rect = [];
	_i = 0; while {_i < _c} do {
		private [{_marker}];
		_marker = format ["RtsArea%1%2%3", "Art", "Svr", _i];
		if (-10 != (markerPos _marker) select 0) then {
			_rect set [0, (markerPos _marker) select 0];
			_rect set [1, (markerPos _marker) select 1];
			_rect set [2, (markerSize _marker) select 0];
			_rect set [3, (markerSize _marker) select 1];
			_rect set [4, getMarkerDir _marker];

			if ([_rect, _area] call preprocessFile "Util\RectInRect.sqf") then {
				_svrArtIdx set [count _svrArtIdx, _i];
			};
		};
		_i = _i + 1;
	};
	if (count _svrArtIdx > 0) then {
		{
			[
				_x, "Art", true, format ["RtsArea%1%2Idx", "Art", "Svr"]
			] call preprocessFile "Rts\Marker\GenArea.sqf"
		} forEach _svrArtIdx;
		// message
		_message = _message + format ["Server Art Area: %1  ", _svrArtIdx call _fmtArr];
	};
};

if _pplArt then {
	private [{_enum}, {_c}];
	_enum = "Art" call preprocessFile "Rts\Marker\EnumOfType.sqf";
	_c = count (TzkPplRtsAreaInfo select _enum);

	private [{_pplArtIdx}]; _pplArtIdx = [];
	private [{_rect}]; _rect = [];
	_i = 0; while {_i < _c} do {
		private [{_marker}];
		_marker = format ["RtsArea%1%2%3", "Art", "Ppl", _i];
		if (-10 != (markerPos _marker) select 0) then {
			_rect set [0, (markerPos _marker) select 0];
			_rect set [1, (markerPos _marker) select 1];
			_rect set [2, (markerSize _marker) select 0];
			_rect set [3, (markerSize _marker) select 1];
			_rect set [4, getMarkerDir _marker];

			if ([_rect, _area] call preprocessFile "Util\RectInRect.sqf") then {
				_pplArtIdx set [count _pplArtIdx, _i];
			};
		};
		_i = _i + 1;
	};
	if (count _pplArtIdx > 0) then {
		{
			[
				_x, "Art", false, format ["RtsArea%1%2Idx", "Art", "Ppl"]
			] call preprocessFile "Rts\Marker\GenArea.sqf"
		} forEach _pplArtIdx;
		// message
		_message = _message + format ["Player Art Area: %1  ", _pplArtIdx call _fmtArr];
	};
};

if (_svrMine && isCommander) then {
	private [{_enum}, {_c}];
	_enum = "Mine" call preprocessFile "Rts\Marker\EnumOfType.sqf";
	_c = count (TzkPplRtsAreaInfo select _enum);

	private [{_svrArtIdx}]; _svrArtIdx = [];
	private [{_rect}]; _rect = [];
	_i = 0; while {_i < _c} do {
		private [{_marker}];
		_marker = format ["RtsArea%1%2%3", "Mine", "Svr", _i];
		if (-10 != (markerPos _marker) select 0) then {
			_rect set [0, (markerPos _marker) select 0];
			_rect set [1, (markerPos _marker) select 1];
			_rect set [2, (markerSize _marker) select 0];
			_rect set [3, (markerSize _marker) select 1];
			_rect set [4, getMarkerDir _marker];

			if ([_rect, _area] call preprocessFile "Util\RectInRect.sqf") then {
				_svrArtIdx set [count _svrArtIdx, _i];
			};
		};
		_i = _i + 1;
	};
	if (count _svrArtIdx > 0) then {
		{
			[
				_x, "Mine", true, format ["RtsArea%1%2Idx", "Mine", "Svr"]
			] call preprocessFile "Rts\Marker\GenArea.sqf"
		} forEach _svrArtIdx;
		// message
		_message = _message + format ["Server Mine Area: %1  ", _svrArtIdx call _fmtArr];
	};
};

if _pplMine then {
	private [{_enum}, {_c}];
	_enum = "Mine" call preprocessFile "Rts\Marker\EnumOfType.sqf";
	_c = count (TzkPplRtsAreaInfo select _enum);

	private [{_pplArtIdx}]; _pplArtIdx = [];
	private [{_rect}]; _rect = [];
	_i = 0; while {_i < _c} do {
		private [{_marker}];
		_marker = format ["RtsArea%1%2%3", "Mine", "Ppl", _i];
		if (-10 != (markerPos _marker) select 0) then {
			_rect set [0, (markerPos _marker) select 0];
			_rect set [1, (markerPos _marker) select 1];
			_rect set [2, (markerSize _marker) select 0];
			_rect set [3, (markerSize _marker) select 1];
			_rect set [4, getMarkerDir _marker];

			if ([_rect, _area] call preprocessFile "Util\RectInRect.sqf") then {
				_pplArtIdx set [count _pplArtIdx, _i];
			};
		};
		_i = _i + 1;
	};
	if (count _pplArtIdx > 0) then {
		{
			[
				_x, "Mine", false, format ["RtsArea%1%2Idx", "Mine", "Ppl"]
			] call preprocessFile "Rts\Marker\GenArea.sqf"
		} forEach _pplArtIdx;
		// message
		_message = _message + format ["Player Mine Area: %1  ", _pplArtIdx call _fmtArr];
	};
};

if ("" != _message) then {
	player globalChat (_message + "cleared.");
	// Clear selected area if succeeded in clearing some marker
	false call preprocessFile "Player\Rts\Area.sqf";
	false call preprocessFile "Player\Rts\Selection.sqf";
};