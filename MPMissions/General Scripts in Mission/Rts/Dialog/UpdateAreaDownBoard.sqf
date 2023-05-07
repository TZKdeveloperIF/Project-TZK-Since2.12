// args: downBoardStack

private [{_processed}];
_processed = false;

{ctrlShow [_idcDownBtn0 + _x, false]} forEach [0,1,2,3,4,5,6,7,8];
if (not _processed && 0 == count _downBoardStack) then {
	// art area
	ctrlSetText [_idcDownBtn0 + 1, "Ppl Art"];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [1];

	if (isCommander || bIsAiSuperior) then {
		ctrlSetText [_idcDownBtn0, "Svr Art"];
		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0];
	};
	
	// buiding obstruction
	ctrlSetText [_idcDownBtn0 + 2, "Obstruct"];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [2];
	_processed = true;
};