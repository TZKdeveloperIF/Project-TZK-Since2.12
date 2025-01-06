comment {args: idc for listbox of AI group orders};
comment {read other local variables from caller};
private [{_idc}]; _idc = _this;

lbClear _idc;
private [{_gis}, {_order}, {_text}, {_id}];
_gis = ([_si] call funcGetAIGroupsIndex);
{
	_order = orderMatrix select _si select _x;
	_text = _order call funcGetOrderDesc;
	_id = lbAdd [_idc, format["%1, %2", _groupNames select _x, _text]];
	lbSetValue [_idc, _id, _x];
} forEach _gis;
if (count _gis > 0) then {_id = lbAdd [_idc, "ALL"]; lbSetValue [_idc, _id, -1]};