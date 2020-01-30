// args: [si, flag, distSpawn]
// return: bool

private ["_si", "_flag", "_distSpawn", "_spawn", "_groups", "_i", "_c", "_x"];
_si = _this select 0;
_flag = _this select 1;
_distSpawn = _this select 2;

if (_si == siRes) then
{
	_spawn = false;
	_groups = groupMatrix select si0; _i = 0; _c = count _groups;
	while "_i < _c && !_spawn" do
	{
		{
			if ((_x distance _flag) < _distSpawn) then { _spawn = true };
		} forEach (units (_groups select _i));
		_i = _i + 1;
	};
	_groups = groupMatrix select si1; _i = 0; _c = count _groups;
	while "_i < _c && !_spawn" do
	{
		{
			if ((_x distance _flag) < _distSpawn) then { _spawn = true };
		} forEach (units (_groups select _i));
		_i = _i + 1;
	};
}
else
{
	_spawn = false;
	_groups = groupMatrix select (siEnemy select _si); _i = 0; _c = count _groups;
	while "_i < _c && !_spawn" do
	{
		{
			if ((_x distance _flag) < _distSpawn) then { _spawn = true };
		} forEach (units (_groups select _i));
		_i = _i + 1;
	};	
	_groups = townGroups select (siEnemy select _si); _i = 0; _c = count _groups;
	while "_i < _c && !_spawn" do
	{
		{
			if ((_x distance _flag) < _distSpawn) then { _spawn = true };
		} forEach (units (_groups select _i));
		_i = _i + 1;
	};	
	_groups = workerGroups select (siEnemy select _si); _i = 0; _c = count _groups;
	while "_i < _c && !_spawn" do
	{
		{
			if ((_x distance _flag) < _distSpawn) then { _spawn = true };
		} forEach (units (_groups select _i));
		_i = _i + 1;
	};	
	_groups = (groupMatrix select siRes) - groupsPatrol; _i = 0; _c = count _groups;
	while "_i < _c && !_spawn" do
	{
		{
			if ((_x distance _flag) < _distSpawn) then { _spawn = true };
		} forEach (units (_groups select _i));
		_i = _i + 1;
	};	
	_groups = groupsPatrol; _i = 0; _c = count _groups;
	while "_i < _c && !_spawn" do
	{
		{
			if ((_x distance _flag) < _distSpawn) then { _spawn = true };
		} forEach (units (_groups select _i));
		_i = _i + 1;
	};	
};
_spawn