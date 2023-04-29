// args: downBoardStack

private [{_processed}];
_processed = false;

{ctrlShow [_idcDownBtn0 + _x, false]} forEach [0,1,2,3,4,5,6,7,8];
// initial state
if (not _processed && 0 == count _downBoardStack) then {
	ctrlSetText [_idcDownBtn0, "Disband"];
	ctrlSetText [_idcDownBtn0 + 1, "Eject"];

	ctrlSetText [_idcDownBtn0 + 6, "Transport"];

	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,6];
	_processed = true;
};
// Area "set as..." sub board
if (not _processed && 1 == count _downBoardStack) then {
	if (not _processed && 6 == _downBoardStack select 0) then {
		ctrlSetText [_idcDownBtn0 + 0, "ON"];
		ctrlSetText [_idcDownBtn0 + 1, "OFF"];

		ctrlSetText [_idcDownBtn0 + 8, "Return"];

		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,1,8];
	};
	_processed = true;
};