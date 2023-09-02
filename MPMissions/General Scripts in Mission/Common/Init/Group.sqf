// define another global variable for all groups. They're widely used thus prepare a singleton
tzkAllGroups = [ [], [] ];
{
    _si = _x; _i = 0; _groups = tzkAllGroups select _si;
	{
		_groups set [_i, _x];
		_i = _i + 1;
	} forEach (groupMatrix select _si);
} forEach [si0, si1];
// define global variable for auto-buy info
AutoBuyStructMatrix = [[],[]]; AutoBuyTypeMatrix = [[],[]];
{
    _si = _x; _i = 0;
	_autoBuyStructEntry = AutoBuyStructMatrix select _si;
	_autoBuyTypeEntry = AutoBuyTypeMatrix select _si;
	{
		_autoBuyStructEntry set [_i, [objNull, objNull, objNull, objNull, objNull]];
		_autoBuyTypeEntry set [_i, [-1,-1,-1,-1]];
		_i = _i + 1;
	} forEach (groupMatrix select _si);
} forEach [si0, si1];