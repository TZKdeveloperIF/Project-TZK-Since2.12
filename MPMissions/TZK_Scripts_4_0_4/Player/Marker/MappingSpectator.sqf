private ["_si", "_gi", "_countGroups", "_countTownGroups", "_countWorkerGroups", "_group", "_units", "_count", "_index", "_marker", "_ai", 
"_leader", "_markerType", "_i", "_v", "_m"];

_si = 0;
while "_si < 2" do {
	_index = 0;
	{
		_leader = leader _x;
		_markerType = (["Marker","Dot"] select (alive _leader));
		_marker = Format ["%1%2", (groupNameMatrix select _si) select _index, _si];
		_marker setMarkerPos getPos _leader;
		_marker setMarkerType _markerType;
		_index = _index + 1;
	} foreach (groupMatrix select _si);
	
	_gi = 0;
	_countGroups = count (groupMatrix select _si);
	while "_gi < _countGroups" do {
		_group = (groupMatrix select _si) select _gi;
		_units = units _group - [leader _group];
		_count = count _units; _index = 0;
		while "_index < 12" do {
			_marker = Format["GroupUnit_%1_%2_%3", _si, _gi, _index];
			if (_index < _count) then {_ai = _units select _index; _marker setMarkerPos getPos _ai} else {_marker setMarkerPos hiddenMarkerPos};
		_index = _index + 1;
		};
		_gi = _gi + 1;	
	};
	
	_gi = 0;
	_countTownGroups = count (townGroups select _si);
	while "_gi < _countTownGroups" do {
		_group = (townGroups select _si) select _gi;
		_units = units _group;
		_count = count _units; _index = 0;
		while "_index < 12" do {
			_marker = Format["TownUnit_%1_%2_%3", _si, _gi, _index];
			if (_index < _count) then {_ai = _units select _index; _marker setMarkerPos getPos _ai} else {_marker setMarkerPos hiddenMarkerPos};
			_index = _index + 1;
		};
		_gi = _gi + 1;
	};
	
	_gi = 0;
	_countWorkerGroups = count (workerGroups select _si);
	while "_gi < _countWorkerGroups" do {
		_group = (workerGroups select _si) select _gi;
		_units = units _group;
		_count = count _units; _index = 0;
		while "_index < 12" do {
			_marker = Format["Worker_%1_%2_%3", _si, _gi, _index];
			if (_index < _count) then {_ai = _units select _index; _marker setMarkerPos getPos _ai} else {_marker setMarkerPos hiddenMarkerPos};
			_index = _index + 1;
		};
		_gi = _gi + 1;
	};
	_si = _si + 1;
};

_si = 0;
while "_si < 2" do {
	_i = 0;
	while "_i < maxVehicleMarkers" do {
		_v = (vehicleMarkerMapping select _si) select _i;
		_m = format["Vehicle_%1_%2", _si, _i];
		if ( !(alive _v) && _v != (mhq select _si) ) then {_m setMarkerPos hiddenMarkerPos} else {_m setMarkerPos getPos _v};
		_i = _i + 1;
	};
	_si = _si + 1;
};
if (time % 1 < 0.5) then {
	_si = siRes;
	_i = 0;
	while "_i < maxVehicleMarkers" do {
		_v = (vehicleMarkerMapping select _si) select _i;
		_m = format["Vehicle_%1_%2", _si, _i];
		if ( !(alive _v) && _v != (mhq select _si) ) then {_m setMarkerPos hiddenMarkerPos} else {_m setMarkerPos getPos _v};
		_i = _i + 1;
	};
};
if (time % 10 < 1) then {
	_si = siCiv;
	_i = 0;
	while "_i < maxVehicleMarkers" do {
		_v = (vehicleMarkerMapping select _si) select _i;
		_m = format["Vehicle_%1_%2", _si, _i];
		if ( !(alive _v) && _v != (mhq select _si) ) then {_m setMarkerPos hiddenMarkerPos} else {_m setMarkerPos getPos _v};
		_i = _i + 1;
	};
};

if (time % 30 > 28.5) then {
	{
		_i = 0;
		while "_i < maxStructureMarkers" do {
			_v = (StructureMarkerMapping select _x) select _i;
			_m = format["Structure_%1_%2", _x, _i];
			if (isNull _v) then {_m setMarkerPos hiddenMarkerPos};
			_i = _i + 1;
		};
	} forEach [si0, si1];
};