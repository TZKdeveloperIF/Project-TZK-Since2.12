// args: none
private [
	{_i}, {_c}, {_id}, {_countGroups}, {_m}, {_v}, 
	{_tzkSelUnitsTop}, {_bHighlight}, {_func}, {_cache}, {_showGroup}, 
	{_unit}, {_units}, {_leader}, {_group}, {_gi}
];

// RTS UI
TzkMapSelectedHighlight = not TzkMapSelectedHighlight;
_tzkSelUnitsTop = call preprocessFile "Rts\Ui\CurSelUnitArray.sqf";
_rtsDisplay = preprocessFile "Player\Marker\RtsDisplay.sqf";
// Leaders
_i = 0; _c = count (groupMatrix select siPlayer); while {_i < _c} do {
	_leader = leader (groupMatrix select siPlayer select _i);

	_m = format ["%1%2", groupNameMatrix select siPlayer select _i, siPlayer];
	_m setMarkerPos getPos _leader;
	_m setMarkerType (if (alive _leader) then {"Dot"} else {"Marker"});

	[_m, _leader, _tzkSelUnitsTop, "ColorBlue"] call _rtsDisplay;

	_i = _i + 1;
};
// Player group members
_func = preprocessFile "Util\UnitIdInGroup.sqf";
_units = units groupPlayer; _cache = -1;
_id = 2; _i = 1; _c = count _units; while {_i < _c && _id <= 12} do {
	_m = format ["PlayerUnit_%1", _id];
	_unit = _units select _i;
	if (-1 == _cache) then {_cache = _unit call _func};
	if (_cache == _id) then {
		_m setMarkerPos getPos _unit;
		_cache = -1; _i = _i + 1;
	} else {
		_m setMarkerPos hiddenMarkerPos;
	};
	_id = _id + 1;
};
// ASSERT(_i == _c);
while {_id <= 12} do {format ["PlayerUnit_%1", _id] setMarkerPos hiddenMarkerPos; _id = _id + 1;};

_gi = 0; _countGroups = count (groupMatrix select siPlayer);
while {_gi < _countGroups} do {
	if (_gi != giPlayer) then {
		_group = groupMatrix select siPlayer select _gi; _units = units _group;
		_i = 1; _c = count _units;
		_showGroup = _gi call loadFile "Player\SQF\GroupUnitsShown.sqf";
		// "GroupUnit" marker has only 0-10 index defined at dynamic initialization marker sqs
		while {_i < 12} do {
			_m = Format["GroupUnit_%1_%2_%3", siPlayer, _gi, _i - 1];
			if (_i < _c && _showGroup) then {
				_unit = _units select _i;
				_m setMarkerPos getPos _unit;

				[_m, _unit, _tzkSelUnitsTop, "ColorYellow"] call _rtsDisplay;
			} else {
				_m setMarkerPos hiddenMarkerPos
			};
			_i = _i + 1;
		};
	};
	_gi = _gi + 1;	
};

_gi = 0; _countGroups = count (townGroups select siPlayer);
while {_gi < _countGroups} do {
	_group = townGroups select siPlayer select _gi; _units = units _group;
	_i = 0; _c = count _units;
	while {_i < 12} do {
		_m = format ["TownUnit_%1_%2_%3", siPlayer, _gi, _i];
		if (_i < _c) then {
			_unit = _units select _i;
			_m setMarkerPos getPos _unit;
		} else {_m setMarkerPos hiddenMarkerPos};
		_i = _i + 1;
	};
	_gi = _gi + 1;
};

_gi = 0; _countGroups = count (workerGroups select siPlayer);
while {_gi < _countGroups} do {
	_group = workerGroups select siPlayer select _gi; _units = units _group;
	_i = 0; _c = count _units;
	while {_i < 12} do {
		_m = format ["Worker_%1_%2_%3", siPlayer, _gi, _i];
		if (_i < _c) then {
			_unit = _units select _i;
			_m setMarkerPos getPos _unit;

			[_m, _unit, _tzkSelUnitsTop, "ColorCyan_xj400"] call _rtsDisplay;
		} else {_m setMarkerPos hiddenMarkerPos};
		_i = _i + 1;
	};
	_gi = _gi + 1;
};

_group = baseGroup select siPlayer; if (not isNull _group) then {
	_gi = 0;
	_units = units _group;
	_i = 0; _c = count _units;
	while {_i < 12} do {
		_m = format ["Base_%1_%2_%3", siPlayer, _gi, _i];
		if (_i < _c) then {
			_unit = _units select _i;
			_m setMarkerPos getPos _unit;

			[_m, _unit, _tzkSelUnitsTop, "ColorOrange_xj400"] call _rtsDisplay;
		} else {_m setMarkerPos hiddenMarkerPos};
		_i = _i + 1;
	};
};

_i = 0; while {_i < maxVehicleMarkers} do {
	_v = vehicleMarkerMapping select siPlayer select _i;
	_m = format ["Vehicle_%1_%2", siPlayer, _i];
	if (not alive _v && _v != (mhq select siPlayer)) then {_m setMarkerPos hiddenMarkerPos} else {_m setMarkerPos getPos _v};
	_i = _i + 1;
};