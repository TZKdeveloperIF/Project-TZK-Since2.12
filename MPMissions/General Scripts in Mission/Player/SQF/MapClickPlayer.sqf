private ["_x", "_pos", "_units", "_alt", "_shift", "_processed", "_posInfo", "_textPos"];

_pos = _this select 0;
_units = _this select 1;
_alt = _this select 2;
_shift = _this select 3;
_processed = false;

if (!alive player) then {_processed = true};
if (!_processed && (count _units) > 0) then { if (!_processed && !_alt && _shift) then {[_pos, _units] exec "\TZK_Scripts_4_0_4\Player\Dialog\OrderPlayerAI.sqs"; _processed = true} };
if (!_processed) then {
	if (!_processed && !_alt && _shift && count ([siPlayer, stSatRec] call funcGetWorkingStructures) > 0) then {
		_res = [siPlayer, _pos] call funcGetClosestUnit; 
		_marker = if !bool_TZK_199_Mode Then {(_res select 0) call loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetUnitMarker.sqf"} Else {""};
		_emptyvehicles = [_pos, siPlayer, [], []] call funcGetClosestVehicleEmpty;
		if ( ([getMarkerPos _marker, _pos] call funcDistH < 50 || (_res select 1) < 50) && (group (_res select 0)) in ((groupMatrix select siPlayer) + (townGroups select siPlayer) + (workerGroups select siPlayer)) ) then {
			if ( (_emptyvehicles select 1) < 3 ) then {
				[_emptyvehicles select 0] exec "Player\Dialog\UnitCam.sqs"; _processed = true
			} else {[_res select 0] exec "Player\Dialog\UnitCam.sqs"; _processed = true};
		};
		if (!_processed) then {
			_res = [_pos, siPlayer, [], []] call funcGetClosestVehicle;
			if ( (_res select 1) < 50 ) then {[_res select 0] exec "Player\Dialog\UnitCam.sqs"; _processed = true}
		};
	};
	if (!_processed && _alt && !_shift && (count _units) == 0) then {[_pos] exec "\TZK_Scripts_4_0_4\Player\SetWaypointSmart.sqs"; _processed = true};
	if (!_processed && _alt && _shift) then {[_pos] exec "Player\Dialog\Waypoints.sqs"; _processed = true};
	
	_index = 0; _gis = []; _groupsAI = groupAiMatrix select siPlayer; _siGroups = groupMatrix select siPlayer; _groupNames = groupNameMatrix select siPlayer;
	{ if (_x in _groupsAI) then { _gis set [count _gis, _index] }; _index = _index + 1} foreach _siGroups;
	_Superior = false;
	{ if ( (["Commander"] + callsigns) select (aiSetting select siPlayer select _x select aisSuperior) == _groupNames select giPlayer ) then { _Superior = true } } forEach _gis;
	if ( !_processed && ( (groupPlayer == groupCommander select siPlayer) || _Superior ) ) then {
		if (!_processed && !_alt && _shift) then {[] exec "Player\Dialog\AIGroupOrders.sqs"; _processed = true};
	};
};

_processed