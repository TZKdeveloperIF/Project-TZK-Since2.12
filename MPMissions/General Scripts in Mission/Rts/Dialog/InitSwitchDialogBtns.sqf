private [{_idcBtn}, {_idcBg}, {_enum}];
_idcBtn = IDC + 16 * 10 + 0;
_idcBg = IDC + 16 * 11 + 0;

{ctrlShow [_idcBtn + _x, false]} forEach [0,1,2,3,4,5,6,7,8];
{ctrlShow [_idcBg + _x, false]} forEach [0,1,2,3,4,5,6,7,8];

// rts
_enum = 0;
ctrlSetText [_idcBtn + _enum, "RTS"];
if (_enum != _this) then {
	if (0 < count TzkSelectedUnits) then {
		ctrlShow [_idcBtn + _enum, true];
	};
} else {
	ctrlShow [_idcBg + _enum, true];
	ctrlShow [_idcBtn + _enum, true]; ctrlEnable [_idcBtn + _enum, false];
};
// area
_enum = 1;
ctrlSetText [_idcBtn + _enum, "AREA"];
if (_enum != _this) then {
	// area
	if (TzkMapAreaCreated) then {
		ctrlShow [_idcBtn + _enum, true];
	};
} else {
	ctrlShow [_idcBg + _enum, true];
	ctrlShow [_idcBtn + _enum, true]; ctrlEnable [_idcBtn + _enum, false];
};
// wpco
_enum = 2;
ctrlSetText [_idcBtn + _enum, "WP/CO"];
if (_enum != _this) then {
	ctrlShow [_idcBtn + _enum, true];
} else {
	ctrlShow [_idcBg + _enum, true];
	ctrlShow [_idcBtn + _enum, true]; ctrlEnable [_idcBtn + _enum, false];
};

// point
_enum = 4;
ctrlSetText [_idcBtn + _enum, "POINT"];
if (_enum != _this) then {
	// always available
	ctrlShow [_idcBtn + _enum, true];
} else {
	ctrlShow [_idcBg + _enum, true];
	ctrlShow [_idcBtn + _enum, true]; ctrlEnable [_idcBtn + _enum, false];
};