// args: none

private [{_page}, {_itemCnt}]; _page = 0; _itemCnt = count TzkCmdRules;

_j = 0 + _page * _itemCnt; _k = 0; _lines = count TzkCmdRules;

// exist items part
while {_j < _lines && _k < _itemCnt} do
{
	ctrlSetText [_idcItems + _k, TzkCmdRules select _j select 0];
	ctrlShow [_idcSelections + _k, true];
	lbClear (_idcSelections + _k);
	
		lbAdd [_idcSelections + _k, "false"];
		lbAdd [_idcSelections + _k, "true"];
	
	lbSetCurSel [_idcSelections + _k, [0, 1] select (TzkCmdRules select _j select 1 select siPlayer)];
	ctrlShow [_idcResult + _k, true];
	ctrlSetText [_idcResult + _k, format ["%1", TzkCmdRules select _j select 2]];
	ctrlShow [_idcConfirmBtn + _k, true];
	_j = _j + 1; _k = _k + 1;
};

// rest part
// current dialog uses "vote menu" so the rest part should be hided
while {_k < TZK_Vote_Items} do
{
	ctrlSetText [_idcItems + _k, ""];
	ctrlShow [_idcSelections + _k, false];
	lbSetCurSel [_idcSelections + _k, -1];
	ctrlShow [_idcResult + _k, false];
	ctrlShow [_idcConfirmBtn + _k, false];
	_k = _k + 1;
};