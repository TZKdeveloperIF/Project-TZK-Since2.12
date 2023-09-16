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
// store infomations in a matrix
AutoBuyInfo = [[],[]];
_eStruct = 0; _eType = 1; _eNum = 2;
{
	_si = _x; _gi = 0;
	{
		_entry = [];

		_structs = [objNull, objNull, objNull, objNull]; _entry set [_eStruct, _structs];
		_types = [-1,-1,-1,-1]; _entry set [_eType, _types];
		_nums = [0,0,0,0]; _entry set [_eNum, _nums];

		AutoBuyInfo select _si set [_gi, _entry];
		_gi = _gi + 1;
	} forEach (groupMatrix select _si);
} forEach [si0, si1];