// arguments: object
// return: [ [wpn, ...], [mag, ...] ] ([[],[]] if not found)

private [ "_return", "_i" ];

_return = [ [], [] ];

_i = rearmDataObj find _this;
if (_i != -1) then {_return set [0, (rearmDataEquip select _i) select 0]; _return set [1, (rearmDataEquip select _i) select 1]};

_return
