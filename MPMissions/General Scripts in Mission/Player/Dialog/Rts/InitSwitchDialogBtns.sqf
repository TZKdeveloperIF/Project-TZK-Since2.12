private [{_idc}, {_processed}];
_processed = false;
_idc = IDC + 64 * 2 + 32 + 0;

{ctrlShow [_idc + _x, false]} forEach [0,1,2,3,4,5,6,7,8];

if (not _processed && 0 == _this) then {
	ctrlShow [_idc + 1, true];
	ctrlSetText [_idc + 1, "AREA"];
	_processed = true;
};
if (not _processed && 1 == _this) then {
	if (0 < count TzkSelectedUnits) then {
		ctrlShow [_idc + 0, true];
		ctrlSetText [_idc + 0, "RTS"];
	};
	_processed = true;
};