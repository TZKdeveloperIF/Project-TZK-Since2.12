// args: none
// return: none
private ["_groupNames", "_countGroups", "_countTownGroups", "_countWorkerGroups", "_gi", "_index", "_m", "_x", "_siEnemy"];

_groupNames = groupNameMatrix select siPlayer;

// Leaders
_index = 0;
{ _leader=leader _x; _m=Format ["%1%2", _groupNames select _index, siPlayer]; _m setMarkerPos hiddenMarkerPos; _index = _index + 1} foreach (groupMatrix select siPlayer);

// Players Numbered AI
{ format["PlayerUnit_%1", _x] setMarkerPos hiddenMarkerPos } foreach [2,3,4,5,6,7,8,9,10,11,12];

// Group Member Markers
_gi = 0;
_countGroups = count (groupMatrix select siPlayer);
while "_gi < _countGroups" do
{
    _index = 0;
	while "_index < 12" do
	{
	    Format["GroupUnit_%1_%2_%3", siPlayer, _gi, _index] setMarkerPos hiddenMarkerPos;
	    _index = _index + 1;
	};
	_gi = _gi + 1;	
};

// Town Unit Markers
_gi = 0;
_countTownGroups = count (townGroups select siPlayer);
while "_gi < _countTownGroups" do
{
	_index = 0;
	while "_index < 12" do
	{
		Format["TownUnit_%1_%2_%3", siPlayer, _gi, _index] setMarkerPos hiddenMarkerPos;
		_index = _index + 1;
	};
	_gi = _gi + 1;
};

// Worker Markers
_gi = 0;
_countWorkerGroups = count (workerGroups select siPlayer);
while "_gi < _countWorkerGroups" do
{
	_index = 0;
	while "_index < 12" do
	{
		Format["Worker_%1_%2_%3", siPlayer, _gi, _index] setMarkerPos hiddenMarkerPos;
	    _index = _index + 1;
	};
	_gi = _gi + 1;
};


_siEnemy = siEnemy select siPlayer;

// Vehicles OWN
_index=0; { _m = format["Vehicle_%1_%2", siPlayer, _index]; _m setMarkerPos hiddenMarkerPos; _index=_index+1 } foreach (vehicleMarkerMapping select siPlayer);

// VEHICLES ENEMY
_index=0; { _m = format["Vehicle_%1_%2", _siEnemy, _index]; _m setMarkerPos hiddenMarkerPos; _index=_index+1 } foreach (vehicleMarkerMapping select _siEnemy);
_index=0; { _m = format["Vehicle_%1_%2", siRes, _index]; _m setMarkerPos hiddenMarkerPos; _index=_index+1 } foreach (vehicleMarkerMapping select siRes);