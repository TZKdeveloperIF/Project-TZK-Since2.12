// args: none
// return: none
private ["_gi", "_countGroups", "_countTownGroups", "_group", "_units", "_count", "_index", "_marker", "_ai"];


_countGroups = count (groupMatrix select siPlayer);
_countTownGroups = count (townGroups select siPlayer);
_countWorkerGroups = count (workerGroups select siPlayer);
_gi = 0;
while "_gi < _countGroups" do
{
	_group = (groupMatrix select siPlayer) select _gi;
	_units = units _group - [leader _group];
	_count = count _units;
    _index = 0;
	while "_index < 11" do
	{
  		_marker = Format["GroupUnit_%1_%2_%3", siPlayer, _gi, _index];
  		if ( _gi == giPlayer && bNumberedAI ) then 
		{
			_marker setMarkerPos hiddenMarkerPos;
		}
		else
		{
			if ( (_index < _count) && (_gi == giPlayer || giMarkersAI == _gi || giMarkersAI == _countGroups) ) then
			{
				_ai = _units select _index;
				_marker setMarkerPos getPos _ai;
			}
			else
			{
				_marker setMarkerPos hiddenMarkerPos;
			};
		};
	    _index = _index + 1;
	};
	_gi = _gi + 1;	
};
while "_gi < _countTownGroups" do
{
	_group = (townGroups select siPlayer) select _gi;
	_units = units _group;
	_count = count _units;
	_index = 0;
	while "_index < 12" do
	{
  		_marker = Format["TownUnit_%1_%2_%3", siPlayer, _gi, _index];
  		if ( (_index < _count) && giMarkersAI == _countGroups ) then
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
	_group = (workerGroups select siPlayer) select _gi;
	_units = units _group;
	_count = count _units;
	_index = 0;
	while "_index < 12" do
	{
  		_marker = Format["Worker_%1_%2_%3", siPlayer, _gi, _index];
  		if ( (_index < _count) && giMarkersAI == _countGroups ) then
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
