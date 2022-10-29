private [
	"_index", "_count", "_leader", "_markerType", "_marker", 
	"_x",  "_ids", "_id", "_units",  "_gi", "_countGroups", "_group", "_marker", 
	"_ai",  "_i", "_v", "_m"
];

TzkMapSelectedHighlight = not TzkMapSelectedHighlight;

_index = 0;
{
	_leader = leader _x;
	_markerType = (["Marker","Dot"] select (alive _leader));
	_marker = format ["%1%2", (groupNameMatrix select siPlayer) select _index, siPlayer];
	_marker setMarkerPos getPos _leader;
	_marker setMarkerType _markerType;
	if (-1 != TzkSelectedUnits find _leader) then {
		if TzkMapSelectedHighlight then {
			_marker setMarkerColor "ColorRedAlpha";
		} else {
			_marker setMarkerColor "ColorBlue";
		};
	};
	_index = _index + 1;
} forEach (groupMatrix select siPlayer);

_ids = (groupUnitIDMatrix select siPlayer) select giPlayer;
if !bNumberedAI then {
	{ format ["PlayerUnit_%1", _x] setMarkerPos hiddenMarkerPos } forEach [2,3,4,5,6,7,8,9,10,11,12];
} else {
	_units = (units groupPlayer) - [player]; _id = 2; _index = 0; _count = count _units;
	while "_id <= 12" do {
		_marker = format ["PlayerUnit_%1", _id];
		if !(_index < _count) then {_marker setMarkerPos hiddenMarkerPos} else {
			_ai = _units select _index; _text = format ["%1", _ai];
			if ( _text == (_ids select _id) ) then { _marker setMarkerPos getPos _ai; _index = _index + 1 } else { _marker setMarkerPos hiddenMarkerPos };
		};	
		_id = _id + 1;
	};
};

_gi = 0;
_countGroups = count (groupMatrix select siPlayer);
while {_gi < _countGroups} do {
	if (_gi != giPlayer) then {
		_group = groupMatrix select siPlayer select _gi;
		_units = units _group;
		_count = count _units; _index = 1;
		// "GroupUnit" marker has only 0-10 index defined at dynamic initialization marker sqs
		while {_index < 12} do {
			_marker = Format["GroupUnit_%1_%2_%3", siPlayer, _gi, _index - 1];
			if (_index < _count && (giMarkersAI == _gi || giMarkersAI == _countGroups)) then {
				_ai = _units select _index;
				_marker setMarkerPos getPos _ai;
				if (-1 != TzkSelectedUnits find _ai) then {
					if TzkMapSelectedHighlight then {
						_marker setMarkerColor "ColorRedAlpha";
					} else {
						_marker setMarkerColor "ColorYellow";
					};
				};
			} else {
				_marker setMarkerPos hiddenMarkerPos
			};
			_index = _index + 1;
		};
	};
	_gi = _gi + 1;	
};

_gi = 0;
_countGroups = count (townGroups select siPlayer);
while "_gi < _countGroups" do {
	_group = (townGroups select siPlayer) select _gi;
	_units = units _group;
	_count = count _units; _index = 0;
	while "_index < 12" do {
		_marker = format ["TownUnit_%1_%2_%3", siPlayer, _gi, _index];
		if (_index < _count) then {
			_ai = _units select _index;
			_marker setMarkerPos getPos _ai;
		} else {_marker setMarkerPos hiddenMarkerPos};
		_index = _index + 1;
	};
	_gi = _gi + 1;
};

_gi = 0;
_countGroups = count (workerGroups select siPlayer);
while "_gi < _countGroups" do
{
	_group = (workerGroups select siPlayer) select _gi;
	_units = units _group;
	_count = count _units;
	_index = 0;
	while "_index < 12" do {
		_marker = format ["Worker_%1_%2_%3", siPlayer, _gi, _index];
		if (_index < _count) then {
			_ai = _units select _index;
			_marker setMarkerPos getPos _ai;
		} else {_marker setMarkerPos hiddenMarkerPos};
		_index = _index + 1;
	};
	_gi = _gi + 1;
};

_i = 0;
while "_i < maxVehicleMarkers" do {
	_v = (vehicleMarkerMapping select siPlayer) select _i;
	_m = format ["Vehicle_%1_%2", siPlayer, _i];
	if ( !(alive _v) && _v != (mhq select siPlayer) ) then {_m setMarkerPos hiddenMarkerPos} else {_m setMarkerPos getPos _v};
	_i = _i + 1;
};