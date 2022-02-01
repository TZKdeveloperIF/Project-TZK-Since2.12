// args: none

// hide orders for non-commander players;
if (groupPlayer != groupCommander select _si) then {
	{ ctrlShow [_x, false] } forEach [_idcOrderLabel, _idcSendOrder, _idcOrder, _idcStBtn, _idcStBtn + 1];
};
// hide params on dialog open
{ ctrlShow [_x, false] } forEach (_idcParamLabels + _idcParams);
// hide levels on dialog open
{
	{ ctrlShow [_x, false] } forEach [_idcStLabel + _x, _idcStParam + _x];
} forEach [0,1,2,3,4,5];
// init orders
_i = 0; _c = count orderTempDefs; while {_i < _c} do {
	_order = orderTempDefs select _i;
	if !bool_TZK_CHN_Lang then {
		lbAdd [_idcOrder, _order select 0];
	} else {
		lbAdd [_idcOrder, ""], lbSetPicture [_idcOrder, _i, orderConDefs select _i];
	};
	_i = _i + 1;
};
// init levels
{lbAdd [_idcStLev, format["%1", _x] ]} forEach [0,1,2,3,4];
