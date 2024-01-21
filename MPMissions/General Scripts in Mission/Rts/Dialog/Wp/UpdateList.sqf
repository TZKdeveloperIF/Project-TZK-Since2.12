// Prepare listboxes
lbClear _idcList;
lbClear _idcDevidedList0; lbClear _idcDevidedList1;
ctrlShow [_idcList, true];
{ctrlShow [_x, false]} forEach [_idcDevidedList0, _idcDevidedList1];

private [{_bUpdated}, {_pos}];
_bUpdated = false;

if (not _bUpdated && "CO" == _highlight) then {
	_bUpdated = true;
	private [{_i}];
	_i = -1;
	if _co then {
		_i = 0;
	} else {if _Superior then {
		_i = _COcount;
	} else {
		format ["<_co || _Superior> is false in Player\Dialog\Wp\UpdateList.sqf"] call fDebugLog;
	}};

	if (_i >= 0) then {
		_list = wpCO select siPlayer;
		while {_i < countWPCO} do {
			_pos = _list select _i;
			_text = "";
			if ((_pos select 0) != -1) then {_text = format["%1 %2", _pos call funcCalcMapPos, _pos call funcCalcTownDirDistFromPos]};
			lbAdd [_idcList, format["co%1: %2", _i, _text]];
			_i = _i + 1;
		};
	};
};
if (not _bUpdated && "WP" == _highlight) then {
	_bUpdated = true;

	ctrlShow [_idcList, bool_TZK_Rts_Cmd_Mode];
	{ctrlShow [_x, not bool_TZK_Rts_Cmd_Mode]} forEach [_idcDevidedList0, _idcDevidedList1];

	private [{_idcWpList}];
	_idcWpList = (if bool_TZK_Rts_Cmd_Mode then {_idcList} else {_idcDevidedList0});

	_i = 0; while {_i < countWPPlayer} do {
		_pos = wpPlayer select _i;
		_text = "";
		if ((_pos select 0) != -1) then {_text = format["%1 %2", _pos call funcCalcMapPos, _pos call funcCalcTownDirDistFromPos]};
		lbAdd [_idcWpList, format["wp%1: %2", _i, _text]];
		_i = _i + 1;
	};

	if not bool_TZK_Rts_Cmd_Mode then {
		// player art target
		private [{_enum}];
		_enum = "Art" call preprocessFile "Rts\Marker\EnumOfType.sqf";
		_cnt = count (TzkPplRtsAreaInfo select _enum);
		[_idcDevidedList1, "Art", "Ppl", _cnt] call preprocessFile "Rts\SubMenu\UpdateAreaListbox.sqf";
	};
};
if (not _bUpdated && "SvrTarget" == _highlight) then {
	_bUpdated = true;

	if not bool_TZK_Rts_Cmd_Mode then {
		// server art target
		private [{_enum}];
		_enum = "Art" call preprocessFile "Rts\Marker\EnumOfType.sqf";
		_cnt = count (TzkSvrRtsAreaInfo select siPlayer select _enum);
		[_idcList, "Art", "Svr", _cnt] call preprocessFile "Rts\SubMenu\UpdateAreaListbox.sqf";
	};
};
// update current selected item index
if (indexWayPointSelected select _mode != -1 && (_mode == 0 || _mode == 1)) then {
	lbSetCurSel [_idcList, indexWayPointSelected select _mode];
};
if ("WP" == _highlight && not bool_TZK_Rts_Cmd_Mode) then {
	// prioritize art
	if (-1 != RtsAreaArtPplIdx) then {
		lbSetCurSel [_idcDevidedList1, RtsAreaArtPplIdx];
	} else {if (indexWayPointSelected select _mode != -1) then {
		lbSetCurSel [_idcDevidedList0, indexWayPointSelected select _mode];
	}};
};
if ("SvrTarget" == _highlight && not bool_TZK_Rts_Cmd_Mode) then {
	if (-1 != RtsAreaArtSvrIdx) then {
		lbSetCurSel [_idcList, RtsAreaArtSvrIdx];
	};
};