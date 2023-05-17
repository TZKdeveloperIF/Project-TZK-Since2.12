// define another global variable for all groups. They're widely used thus prepare a singleton
tzkAllGroups = [ [], [] ];
{
    _si = _x; _i = 0; _groups = tzkAllGroups select _si;
	{
		_groups set [_i, _x];
		_i = _i + 1;
	} forEach (groupMatrix select _si);
} forEach [si0, si1];