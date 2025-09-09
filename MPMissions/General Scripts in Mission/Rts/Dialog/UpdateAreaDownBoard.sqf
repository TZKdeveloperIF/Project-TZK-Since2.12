// args: downBoardStack

private [{_processed}];
_processed = false;

{ctrlShow [_idcDownBtn0 + _x, false]} forEach [0,1,2,3,4,5,6,7,8];
if (not _processed && 0 == count _downBoardStack) then {
	// art area
	ctrlSetText [_idcDownBtn0 + 1, format ["%1 %2", localize {TZK_LANG_SHORT_PLAYER}, localize {TZK_LANG_SHORT_ARTILLERY}]];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [1];

	if (isCommander || bIsAiSuperior) then {
		ctrlSetText [_idcDownBtn0, format ["%1 %2", TzkInGameText select 029 select 3, localize {TZK_LANG_SHORT_ARTILLERY}]];
		{ctrlShow [_idcDownBtn0 + _x, true]} forEach [0];
	};
	
	// buiding obstruction
	ctrlSetText [_idcDownBtn0 + 2, localize {TZK_LANG_OBSTRUCT}];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [2];

	// mine area
	if (isCommander || bIsAiSuperior) then {
		ctrlSetText [_idcDownBtn0 + 3, format ["%1 %2", TzkInGameText select 029 select 3, localize {TZK_LANG_MINE_VERB}]];
		ctrlShow [_idcDownBtn0 + 3, true];
	};
	ctrlSetText [_idcDownBtn0 + 4, format ["%1 %2", localize {TZK_LANG_SHORT_PLAYER}, localize {TZK_LANG_MINE_VERB}]];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [4];
	
	// buiding roof by area
	ctrlSetText [_idcDownBtn0 + 5, localize {TZK_LANG_ROOF}];
	{ctrlShow [_idcDownBtn0 + _x, true]} forEach [5];

	_processed = true;
};