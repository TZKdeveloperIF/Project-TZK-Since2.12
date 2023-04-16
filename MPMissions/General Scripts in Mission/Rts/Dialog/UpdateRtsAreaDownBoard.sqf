// args: downBoardStack

private [{_processed}];
_processed = false;

{ctrlShow [_idcDownBtn0 + _x, false]} forEach [0,1,2,3,4,5,6,7,8];
// initial state
if (not _processed && 0 == count _downBoardStack) then {
	// ctrlSetText [_idcDownBtnInfo0, "Img\MG.paa"]
	ctrlSetText [_idcDownBtn0 + 3, "Set As..."];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [3];
	_processed = true;
};
// Area "set as..." sub board
if (not _processed && 1 == count _downBoardStack) then {
	if (not _processed && 3 == _downBoardStack select 0) then {
		ctrlSetText [_idcDownBtn0, "Art Area"];
		ctrlSetText [_idcDownBtn0 + 8, "Return"];
		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,8];
	};
};