// args: [current dialog enum, units]
// return: [acceptable dialog enum]
private [{_curDlgEnum}, {_units}, {_accept}];
_curDlgEnum = _this select 0; _units = _this select 1; _accept = [];

private [{_idcBtn}, {_idcBg}, {_enum}];
_idcBtn = IDC + 16 * 10 + 0;
_idcBg = IDC + 16 * 11 + 0;

{ctrlShow [_idcBtn + _x, false]} forEach [0,1,2,3,4,5,6,7,8];
{ctrlShow [_idcBg + _x, false]} forEach [0,1,2,3,4,5,6,7,8];

// rts
_enum = 0;
ctrlSetText [_idcBtn + _enum, "RTS"];
if (_enum != _curDlgEnum) then {
	if (0 < count (call preprocessFile (TzkScripts select 371))) then {
		ctrlShow [_idcBtn + _enum, true];
		_accept set [count _accept, _enum];
	};
} else {
	ctrlShow [_idcBg + _enum, true];
	ctrlShow [_idcBtn + _enum, true]; ctrlEnable [_idcBtn + _enum, false];
};
// area
_enum = 1;
ctrlSetText [_idcBtn + _enum, localize {TZK_LANG_AREA}];
if (_enum != _curDlgEnum) then {
	// area
	if (TzkMapAreaCreated) then {
		ctrlShow [_idcBtn + _enum, true];
		_accept set [count _accept, _enum];
	};
} else {
	ctrlShow [_idcBg + _enum, true];
	ctrlShow [_idcBtn + _enum, true]; ctrlEnable [_idcBtn + _enum, false];
};
// wpco
_enum = 2;
ctrlSetText [_idcBtn + _enum, "WP/CO"];
if (_enum != _curDlgEnum) then {
	ctrlShow [_idcBtn + _enum, true];
	_accept set [count _accept, _enum];
} else {
	ctrlShow [_idcBg + _enum, true];
	ctrlShow [_idcBtn + _enum, true]; ctrlEnable [_idcBtn + _enum, false];
};

// player group units
_enum = 3;
ctrlSetText [_idcBtn + _enum, localize {TZK_LANG_ORDER}];
if (_enum != _curDlgEnum) then {
	if (count _units > 0) then {
		ctrlShow [_idcBtn + _enum, true];
		_accept set [count _accept, _enum];
	};
} else {
	ctrlShow [_idcBg + _enum, true];
	ctrlShow [_idcBtn + _enum, true]; ctrlEnable [_idcBtn + _enum, false];
};

// point
_enum = 4;
ctrlSetText [_idcBtn + _enum, TzkInGameText select 020 select 0];
if (_enum != _curDlgEnum) then {
	// always available
	ctrlShow [_idcBtn + _enum, true];
	_accept set [count _accept, _enum];

	// turn off build area displaying immediately on switching to non-point dialogs
	TzkMarkerBuildAreaState = false;
} else {
	ctrlShow [_idcBg + _enum, true];
	ctrlShow [_idcBtn + _enum, true]; ctrlEnable [_idcBtn + _enum, false];
};
_accept