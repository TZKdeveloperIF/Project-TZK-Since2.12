// arguments: object
// return: [ [wpn, ...], [mag, ...] ] ([[],[]] if not found)

private [ "_return", "_i" ];

_return = [ [], [] ];

_i = _this call funcGetUnitTypeFromObject;
if (_i != -1) then {
	_list = rDataMatrix select _i;
	if (count _list != 0) then {_return set [0, _list select 1]; _return set [1, _list select 2]}
} else {
	_i = rearmDataObj find _this;
	if (_i != -1) then {_return set [0, (rearmDataEquip select _i) select 0]; _return set [1, (rearmDataEquip select _i) select 1]}
};

_return
