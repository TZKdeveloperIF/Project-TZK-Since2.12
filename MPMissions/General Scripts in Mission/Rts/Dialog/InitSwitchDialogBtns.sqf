private [{_idc}];
_idc = IDC + 64 * 2 + 32 + 0;

{ctrlShow [_idc + _x, false]} forEach [0,1,2,3,4,5,6,7,8];

// rts
if (0 != _this) then {
	if (0 < count TzkSelectedUnits) then {
		ctrlShow [_idc + 0, true];
		ctrlSetText [_idc + 0, "RTS"];
	};
};
// area
if (1 != _this) then {
	// area
	if (isCommander || bIsAiSuperior) then {
		ctrlShow [_idc + 1, true];
		ctrlSetText [_idc + 1, "AREA"];
	};
};
// wpco
if (2 != _this) then {
	ctrlShow [_idc + 2, true];
	ctrlSetText [_idc + 2, "WP/CO"];
};