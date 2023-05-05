// args: downBoardStack

private [{_processed}];
_processed = false;

{ctrlShow [_idcDownBtn0 + _x, false]} forEach [0,1,2,3,4,5,6,7,8];
// art area
if (not _processed && 0 == count _downBoardStack) then {
	ctrlSetText [_idcDownBtn0 + 1, "Ppl Art"];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [1];

	if (isCommander || bIsAiSuperior) then {
		ctrlSetText [_idcDownBtn0, "Svr Art"];
		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0];
	};
	_processed = true;
};