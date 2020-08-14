_j = 0; _Line = count Vote_Matrix;
while "_j < _Line" do
{
	if ((count (Vote_Matrix select _j)) != 0) then {
		ctrlSetText [_idcItems + _j, Vote_Matrix select _j select 0];
		{lbAdd [_idcSelections + _j, _x]} forEach (Vote_Matrix select _j select 1);
		lbSetCurSel [_idcSelections + _j, Vote_Matrix select _j select 2];
		ctrlSetText [_idcResult + _j, (Vote_Matrix select _j select 1) select (Vote_Matrix select _j select 3)];
	} else {
		ctrlSetText [_idcItems + _j, ""]; ctrlShow [_idcSelections + _j, false]; lbSetCurSel [_idcSelections + _j, -1]; ctrlShow [_idcResult + _j, false];
	};
	_j = _j + 1;
};
private ["_c"];
_c = 20;
while "_j < _c" do {ctrlSetText [_idcItems + _j, ""]; ctrlShow [_idcSelections + _j, false]; lbSetCurSel [_idcSelections + _j, -1]; ctrlShow [_idcResult + _j, false]; _j = _j + 1};