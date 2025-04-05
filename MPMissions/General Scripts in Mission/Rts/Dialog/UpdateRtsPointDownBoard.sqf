// args: downBoardStack

private [{_processed}];
_processed = false;

{ctrlShow [_idcDownBtn0 + _x, false]} forEach [0,1,2,3,4,5,6,7,8,9];
// initial state
if (not _processed && 0 == count _downBoardStack) then {
	// ctrlSetText [_idcDownBtnInfo0, "Img\MG.paa"]
	ctrlSetText [_idcDownBtn0 + 1, localize {TZK_LANG_BUILD}];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [1];

	if (isCommander || bIsAiSuperior) then {
		ctrlSetText [_idcDownBtn0, format ["%1 %2", localize {TZK_LANG_BASE}, localize {TZK_LANG_SHORT_MACHINEGUN}]];
		ctrlSetText [_idcDownBtn0 + 3, format ["%1 %2", localize {TZK_LANG_SHORT_MACHINEGUN}, "Tower"]];
		ctrlSetText [_idcDownBtn0 + 9, format ["%1 %2", localize {TZK_LANG_BASE}, "T55"]];

		ctrlSetText [_idcDownBtn0 + 2, localize {TZK_LANG_WORKER}];
		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0,2,3,9];
	};
	_processed = true;
};