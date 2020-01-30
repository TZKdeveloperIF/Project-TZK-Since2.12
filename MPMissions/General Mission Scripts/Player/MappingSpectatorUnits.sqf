// args: none
// return: none
private ["_si", "_gi", "_countGroups", "_countTownGroups", "_group", "_units", "_count", "_index", "_marker", "_ai"];

_si = 0;
while "_si < 2" do
{
	_countGroups = count (groupMatrix select _si);
	_countTownGroups = count (townGroups select _si);
	_countWorkerGroups = count (workerGroups select _si);
	_gi = 0;
	while "_gi < _countGroups" do
	{
		_group = (groupMatrix select _si) select _gi;
		_units = units _group - [leader _group];
		_count = count _units;
		_index = 0;
		while "_index < 11" do
		{
			_marker = Format["GroupUnit_%1_%2_%3", _si, _gi, _index];
			if (_index < _count) then
			{
				_ai = _units select _index;
				_marker setMarkerPos getPos _ai;
			}
			else
			{
				_marker setMarkerPos hiddenMarkerPos;
			};
		_index = _index + 1;
		};
		_gi = _gi + 1;	
	};
	while "_gi < _countTownGroups" do
	{
		_group = (townGroups select _si) select _gi;
		_units = units _group;
		_count = count _units;
		_index = 0;
		while "_index < 12" do
		{
			_marker = Format["TownUnit_%1_%2_%3", _si, _gi, _index];
			if (_index < _count) then
			{
				_ai = _units select _index;
				_marker setMarkerPos getPos _ai;
			}
			else
			{
				_marker setMarkerPos hiddenMarkerPos;
			};
			_index = _index + 1;
		};
		_gi = _gi + 1;
	};
	while "_gi < _countWorkerGroups" do
	{
		_group = (workerGroups select _si) select _gi;
		_units = units _group;
		_count = count _units;
		_index = 0;
		while "_index < 12" do
		{
			_marker = Format["Worker_%1_%2_%3", _si, _gi, _index];
			if (_index < _count) then
			{
				_ai = _units select _index;
				_marker setMarkerPos getPos _ai;
			}
			else
			{
				_marker setMarkerPos hiddenMarkerPos;
			};
			_index = _index + 1;
		};
		_gi = _gi + 1;
	};
	_si = _si + 1;
};