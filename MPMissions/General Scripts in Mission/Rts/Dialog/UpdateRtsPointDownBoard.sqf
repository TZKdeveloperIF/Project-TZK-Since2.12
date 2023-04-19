// args: downBoardStack

private [{_processed}];
_processed = false;

{ctrlShow [_idcDownBtn0 + _x, false]} forEach [0,1,2,3,4,5,6,7,8];
// initial state
if (not _processed && 0 == count _downBoardStack) then {
	// ctrlSetText [_idcDownBtnInfo0, "Img\MG.paa"]
	ctrlSetText [_idcDownBtn0 + 1, "Build"];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [1];

	if (isCommander || bIsAiSuperior) then {
		ctrlSetText [_idcDownBtn0, "Base MG"];
		ctrlSetText [_idcDownBtn0 + 2, "Worker"];
		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,2];
	};
	_processed = true;
};