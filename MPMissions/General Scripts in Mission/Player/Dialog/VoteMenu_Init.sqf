_j = 0 + TZK_Vote_Page * TZK_Vote_Items; _k = 0; _lines = count Vote_Matrix;
while "_j < _lines && _k < TZK_Vote_Items" do
{
	if ((count (Vote_Matrix select _j)) != 0) then {
		ctrlSetText [_idcItems + _k, Vote_Matrix select _j select 0];
		ctrlShow [_idcSelections + _k, true];
		lbClear (_idcSelections + _k);
		{lbAdd [_idcSelections + _k, _x]} forEach (Vote_Matrix select _j select 1);
		lbSetCurSel [_idcSelections + _k, Vote_Matrix select _j select 2];
		ctrlShow [_idcResult + _k, true];
		ctrlSetText [_idcResult + _k, (Vote_Matrix select _j select 1) select (Vote_Matrix select _j select 3)];
		ctrlShow [_idcConfirmBtn + _k, true];
	} else {
		ctrlSetText [_idcItems + _k, ""]; ctrlShow [_idcSelections + _k, false]; lbSetCurSel [_idcSelections + _k, -1]; ctrlShow [_idcResult + _k, false];
	};
	_j = _j + 1; _k = _k + 1;
};
if (!Allow_BOH_WAP_TZK) then {
	_i = Vote_ItemNames find "BOH WAP Vehicle";
	if (_i < TZK_Vote_Page * TZK_Vote_Items + TZK_Vote_Items && _i >= TZK_Vote_Page * TZK_Vote_Items) then {
		{ctrlShow [_x + _i % TZK_Vote_Items, false]} forEach [_idcSelections, _idcConfirmBtn];
	};
};
while "_k < TZK_Vote_Items" do
{
	ctrlSetText [_idcItems + _k, ""];
	ctrlShow [_idcSelections + _k, false];
	lbSetCurSel [_idcSelections + _k, -1];
	ctrlShow [_idcResult + _k, false];
	ctrlShow [_idcConfirmBtn + _k, false];
	 _k = _k + 1;
};