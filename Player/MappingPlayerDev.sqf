// args: none
// return: none
private ["_index",  "_count", "_leader", "_markerType", "_marker", "_x", 
"_ids", "_id", "_units",
"_gi", "_countGroups", "_countTownGroups", "_countWorkerGroups", "_group", "_marker", "_ai", 
"_i", "_v", "_m", "_radars", "_siEnemy"];


// Leaders
_index = 0;
{
	_leader = leader _x;
	_markerType = (["Marker","Dot"] select (alive _leader));
	_marker = Format ["%1%2", (groupNameMatrix select siPlayer) select _index, siPlayer];
	_marker setMarkerPos getPos _leader;
	_marker setMarkerType _markerType;
	_index = _index + 1;
} foreach (groupMatrix select siPlayer);

// Players Numbered AI
_ids = (groupUnitIDMatrix select siPlayer) select giPlayer;
if !bNumberedAI then
{
	{ format["PlayerUnit_%1", _x] setMarkerPos hiddenMarkerPos } foreach [2,3,4,5,6,7,8,9,10,11,12];
}
else
{
	_units = (units groupPlayer) - [player];
	_id = 2;
	_index = 0;
	_count = count _units;
	while "_id <= 12" do
	{
	    _marker = format["PlayerUnit_%1", _id];
		if !(_index < _count) then
		{
			_marker setMarkerPos hiddenMarkerPos; 
		}
		else
		{
			_ai = _units select _index;
			_text = format["%1", _ai];
			if ( _text == (_ids select _id) ) then { _marker setMarkerPos getPos _ai; _index = _index + 1 } else { _marker setMarkerPos hiddenMarkerPos };
		};	
		_id = _id + 1;
	};
};

// Group Member Markers
_gi = 0;
_countGroups = count (groupMatrix select siPlayer);
while "_gi < _countGroups" do
{
	_group = (groupMatrix select siPlayer) select _gi;
	_units = units _group - [leader _group];
	_count = count _units;
    _index = 0;
	while "_index < 12" do
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

// Town Unit Markers
_gi = 0;
_countTownGroups = count (townGroups select siPlayer);
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

// Worker Markers
_gi = 0;
_countWorkerGroups = count (workerGroups select siPlayer);
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


// Vehicles OWN
_i = 0;
while "_i < maxVehicleMarkers" do
{
	_v = (vehicleMarkerMapping select siPlayer) select _i;
	_m = format["Vehicle_%1_%2", siPlayer, _i];
	if ( !(alive _v) && _v != (mhq select siPlayer) ) then
	{
		_m setMarkerPos hiddenMarkerPos;
	}
	else
	{
		_m setMarkerPos getPos _v;
	};
	_i=_i+1;
};

// Vehicles Enemy
_radars = [siPlayer, stradarair] call funcGetWorkingStructures;
if ( ((upgMatrix select siPlayer) select upgVehicleAirRadar) == 2 ) then
{
	{
		_j = _x;
		{
			if (alive _x) then
			{
				_radars = _radars + [_x];
			}
		} forEach ((UnitMatrix select siPlayer) select _j)
	} forEach (vRadarAir select siPlayer);
};
if (count _radars > 0 || dev) then
{
	_siEnemy = siEnemy select siPlayer;
	_i = 0;
	while "_i < maxVehicleMarkers" do
	{
		_v = (vehicleMarkerMapping select _siEnemy) select _i;
		_m = format["Vehicle_%1_%2", _siEnemy, _i];
		if !(alive _v) then {_m setMarkerPos hiddenMarkerPos;} else
		{
			if ( 50 > ((getPos _v) select 2) && !dev) then {_m setMarkerPos hiddenMarkerPos;} else
			{
				_inrange = false;
				{ if ((_v distance _x) < 4000) then { _inrange = true } } foreach _radars;
				if ( !_inrange && !dev ) then {_m setMarkerPos hiddenMarkerPos;} else
				{
					_m setMarkerPos getPos _v;
				};
			};
		};
		_i = _i + 1;
	};
	_i = 0;
	while "_i < maxVehicleMarkers" do
	{
		_v = (vehicleMarkerMapping select siRes) select _i;
		_m = format["Vehicle_%1_%2", siRes, _i];
		if !(alive _v) then {_m setMarkerPos hiddenMarkerPos;} else
		{
			if ( 50 > ((getPos _v) select 2) && !dev) then {_m setMarkerPos hiddenMarkerPos;} else
			{
				_inrange = false;
				{ if ((_v distance _x) < 4000) then { _inrange = true } } foreach _radars;
				if ( !_inrange && !dev ) then {_m setMarkerPos hiddenMarkerPos;} else
				{
					_m setMarkerPos getPos _v;
				};
			};
		};
		_i = _i + 1;
	};
};