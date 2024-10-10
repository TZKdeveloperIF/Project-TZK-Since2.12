// args: downBoardStack

private [{_processed}];
_processed = false;

{ctrlShow [_idcDownBtn0 + _x, false]} forEach [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14];
// initial state
if (not _processed && 0 == count _downBoardStack) then {
	ctrlSetText [_idcDownBtn0 + 0, localize {TZK_LANG_DISBAND}];
	ctrlSetText [_idcDownBtn0 + 1, localize {TZK_LANG_EJECT}];
	ctrlSetText [_idcDownBtn0 + 2, localize {TZK_LANG_GETOFF}];

	ctrlSetText [_idcDownBtn0 + 3, localize {TZK_LANG_JOIN}];
	ctrlSetText [_idcDownBtn0 + 4, "Attach"];
	ctrlSetText [_idcDownBtn0 + 5, localize {TZK_LANG_AIR}];
	ctrlSetText [_idcDownBtn0 + 6, localize {TZK_LANG_SHORT_TRANSPORT}];
	ctrlSetText [_idcDownBtn0 + 7, localize {TZK_LANG_TANK}];
	ctrlSetText [_idcDownBtn0 + 8, localize {TZK_LANG_SHORT_ARTILLERY}];

	ctrlSetText [_idcDownBtn0 + 9, localize {TZK_LANG_WATCH}];
	ctrlSetText [_idcDownBtn0 + 10, localize {TZK_LANG_SEAT}];
	ctrlSetText [_idcDownBtn0 + 11, localize {TZK_LANG_ENGINEOFF}];

	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,2, 3,4,5, 6,7,8,9,10,11];
	_processed = true;
};
// sub board
if (not _processed && 1 == count _downBoardStack) then {
	if (not _processed && 4 == _downBoardStack select 0) then {
		ctrlSetText [_idcDownBtn0 + 0, "Left"];
		ctrlSetText [_idcDownBtn0 + 1, "Center"];
		ctrlSetText [_idcDownBtn0 + 2, "Right"];
	
		ctrlSetText [_idcDownBtn0 + 3, "Left"];
		ctrlSetText [_idcDownBtn0 + 4, "Center"];
		ctrlSetText [_idcDownBtn0 + 5, "Right"];

		ctrlSetText [_idcDownBtn0 + 9, "Attach:"];
		ctrlSetText [_idcDownBtn0 + 10, "Detach:"];

		ctrlSetText [_idcDownBtn0 + 8, localize {TZK_LANG_RETURN}];

		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,2, 3,4,5, 8, 9,10];
		_processed = true;
	};
	if (not _processed && 5 == _downBoardStack select 0) then {
		ctrlSetText [_idcDownBtn0 + 0, format ["%1 %2", localize {TZK_LANG_SPOOF}, localize {TZK_LANG_ON}]];
		ctrlSetText [_idcDownBtn0 + 1, format ["%1 %2", localize {TZK_LANG_SPOOF}, localize {TZK_LANG_OFF}]];
		ctrlSetText [_idcDownBtn0 + 2, localize {TZK_LANG_HEIGHT}];
		ctrlSetText [_idcDownBtn0 + 3, format ["%1 %2", localize {TZK_LANG_SHORT_AFTER_BURNER}, localize {TZK_LANG_ON}]];
		ctrlSetText [_idcDownBtn0 + 4, format ["%1 %2", localize {TZK_LANG_SHORT_AFTER_BURNER}, localize {TZK_LANG_OFF}]];

		ctrlSetText [_idcDownBtn0 + 8, localize {TZK_LANG_RETURN}];

		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,2,3,4,8];
		_processed = true;
	};
	if (not _processed && 6 == _downBoardStack select 0) then {
		ctrlSetText [_idcDownBtn0 + 0, localize {TZK_LANG_ON}];
		ctrlSetText [_idcDownBtn0 + 1, localize {TZK_LANG_OFF}];

		ctrlSetText [_idcDownBtn0 + 8, localize {TZK_LANG_RETURN}];

		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,8];
		_processed = true;
	};
	if (not _processed && 7 == _downBoardStack select 0) then {
		ctrlSetText [_idcDownBtn0 + 0, localize {TZK_LANG_SABOT}];
		ctrlSetText [_idcDownBtn0 + 1, localize {TZK_LANG_HEAT}];

		ctrlSetText [_idcDownBtn0 + 2, localize {TZK_LANG_DISENGAGE}];

		ctrlSetText [_idcDownBtn0 + 8, localize {TZK_LANG_RETURN}];

		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,2,8];
		_processed = true;
	};
	if (not _processed && 8 == _downBoardStack select 0) then {
		ctrlSetText [_idcDownBtn0 + 0, localize {TZK_LANG_DEPLOY}];
		ctrlSetText [_idcDownBtn0 + 1, localize {TZK_LANG_UNDEPLOY}];

		ctrlSetText [_idcDownBtn0 + 2, localize {TZK_LANG_SWITCH} + localize {TZK_LANG_SHORT_MAGAZINE}];

		ctrlSetText [_idcDownBtn0 + 6, localize {TZK_LANG_AUTO} + localize {TZK_LANG_SHORT_SHOOT}];
		ctrlSetText [_idcDownBtn0 + 7, localize {TZK_LANG_OFF}];
		ctrlSetText [_idcDownBtn0 + 11, localize {TZK_LANG_BIG} + localize {TZK_LANG_ANGLE}];

		ctrlSetText [_idcDownBtn0 + 8, localize {TZK_LANG_RETURN}];

		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,2,6,7,8,11];
		_processed = true;
	};
};