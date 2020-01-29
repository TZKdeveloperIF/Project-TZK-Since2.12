// args: [si, type, object]
// return: none

private [ "_object", "_type", "_si", "_list" ];

_si = _this select 0;
_type = _this select 1;
_object = _this select 2;

_list = (structMatrix select _si) select _type;
_list set [count _list, _object];
mutexEditStructMatrix = false;