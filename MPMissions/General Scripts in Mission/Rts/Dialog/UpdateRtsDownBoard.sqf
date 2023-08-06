// args: downBoardStack

private [{_processed}];
_processed = false;

{ctrlShow [_idcDownBtn0 + _x, false]} forEach [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14];
// initial state
if (not _processed && 0 == count _downBoardStack) then {
	ctrlSetText [_idcDownBtn0 + 0, "Disband"];
	ctrlSetText [_idcDownBtn0 + 1, "Eject"];
	ctrlSetText [_idcDownBtn0 + 2, "GetOff"];

	ctrlSetText [_idcDownBtn0 + 3, "Join"];

	ctrlSetText [_idcDownBtn0 + 5, "Air"];
	ctrlSetText [_idcDownBtn0 + 6, "Transp"];
	ctrlSetText [_idcDownBtn0 + 7, "Tank"];

	ctrlSetText [_idcDownBtn0 + 9, "Watch"];
	ctrlSetText [_idcDownBtn0 + 10, "Seat"];
	ctrlSetText [_idcDownBtn0 + 11, "EngineOff"];

	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,2, 3, 5,6,7, 9,10,11];
	_processed = true;
};
// sub board
if (not _processed && 1 == count _downBoardStack) then {
	if (not _processed && 5 == _downBoardStack select 0) then {
		ctrlSetText [_idcDownBtn0 + 0, "Spoof ON"];
		ctrlSetText [_idcDownBtn0 + 1, "Spoof OFF"];
		ctrlSetText [_idcDownBtn0 + 2, "Height"];
		ctrlSetText [_idcDownBtn0 + 3, "AB ON"];
		ctrlSetText [_idcDownBtn0 + 4, "AB OFF"];

		ctrlSetText [_idcDownBtn0 + 8, "Return"];

		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,2,3,4,8];
		_processed = true;
	};
	if (not _processed && 6 == _downBoardStack select 0) then {
		ctrlSetText [_idcDownBtn0 + 0, "ON"];
		ctrlSetText [_idcDownBtn0 + 1, "OFF"];

		ctrlSetText [_idcDownBtn0 + 8, "Return"];

		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,8];
		_processed = true;
	};
	if (not _processed && 7 == _downBoardStack select 0) then {
		ctrlSetText [_idcDownBtn0 + 0, "Sabot"];
		ctrlSetText [_idcDownBtn0 + 1, "Heat"];

		ctrlSetText [_idcDownBtn0 + 2, "Disengage"];

		ctrlSetText [_idcDownBtn0 + 8, "Return"];

		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,2,8];
		_processed = true;
	};
};