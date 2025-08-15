// args: none
private [{_curWpIdx}, {_curArtIdx}];

if ("WP" == _highlight && not bool_TZK_Rts_Cmd_Mode) then {
	_curWpIdx = lbCurSel _idcDevidedList0;
	// new wp selected
	if (_curWpIdx != -1 && _curWpIdx != _lastWpIdx) then {
		_lastWpIdx = _curWpIdx;

		lbClear _idcDevidedList1;
		lbSetCurSel [_idcDevidedList1, -1];
		private [{_enum}, {_cnt}];
		_enum = "Art" call preprocessFile "Rts\Marker\EnumOfType.sqf";
		_cnt = count (TzkPplRtsAreaInfo select _enum);
		[_idcDevidedList1, "Art", "Ppl", _cnt, "Art"] call preprocessFile "Rts\SubMenu\UpdateAreaListbox.sqf";
		_lastArtIdx = -1;
	};

	_curArtIdx = lbCurSel _idcDevidedList1;
	// new art selected
	if (_curArtIdx != -1 && _curArtIdx != _lastArtIdx) then {
		_lastArtIdx = _curArtIdx;

		lbClear _idcDevidedList0;
		lbSetCurSel [_idcDevidedList0, -1];
		private [{_i}, {_pos}, {_text}];
		_i = 0; while {_i < countWPPlayer} do {
			_pos = wpPlayer select _i;
			_text = "";
			if ((_pos select 0) != -1) then {_text = format["%1 %2", _pos call funcCalcMapPos, _pos call funcCalcTownDirDistFromPos]};
			lbAdd [_idcDevidedList0, format["wp%1: %2", _i, _text]];
			_i = _i + 1;
		};
		_lastWpIdx = -1;
	};
};