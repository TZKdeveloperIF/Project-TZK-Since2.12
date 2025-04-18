private ["_x", "_pos", "_units", "_alt", "_shift", "_processed", "_posInfo", "_textPos"];

_pos = _this select 0;
_units = _this select 1;
_alt = _this select 2;
_shift = _this select 3;
_processed = false;

if (!alive player) then {_processed = true};
if (not _processed && count _units > 0) then {
	// process selected units. Since Join is available in TZK, joined units should be excluded
	[_units, {group _this != groupPlayer}] call preprocessFile "Algo\arrayEraseIf.sqf";
};
if (not _processed && count _units > 0 && not _alt && _shift) then {
	[_pos, _units] exec (TzkScripts select 020); _processed = true;
};
if (not _processed) then {
	// clear units current order. Same design as in old CRCTI missions
	if ((count _units) > 0 && !_alt && !_shift) then {
		private [{_allUnits}, {_unit}, {_vehicle}];
		_allUnits = [];
		{
			_vehicle = vehicle _x;
			if (_x == _vehicle) then {_allUnits set [count _allUnits, _x]} else {
				_unit = _x;
				if (not isNull _unit) then {
					if (-1 == _allUnits find _unit) then {_allUnits set [count _allUnits, _unit]};
				};
				_unit = driver _vehicle;
				if (not isNull _unit) then {
					if (-1 == _allUnits find _unit) then {_allUnits set [count _allUnits, _unit]};
				};
				_unit = gunner _vehicle;
				if (not isNull _unit) then {
					if (-1 == _allUnits find _unit) then {_allUnits set [count _allUnits, _unit]};
				};
				_unit = commander _vehicle;
				if (not isNull _unit) then {
					if (-1 == _allUnits find _unit) then {_allUnits set [count _allUnits, _unit]};
				};
			};
		} forEach _units;
		{_x exec "Player\Order\OnMapClickMove.sqs"} forEach _allUnits;
		// TAKE CARE: if current script returns "true", origin OFP map click 
		// including moving and watching won't work again
		// _processed = true;
	};

	// unit cam
	// shift
	if (!_processed && !_alt && _shift && count ([siPlayer, stSatRec] call funcGetWorkingStructures) > 0) then {
		_res = [siPlayer, _pos] call funcGetClosestUnit; 
		_marker = if !bool_TZK_199_Mode Then {(_res select 0) call loadFile (TzkScripts select 122)} else {""};
		_emptyvehicles = [_pos, siPlayer, [], []] call funcGetClosestVehicleEmpty;
		if ( ([getMarkerPos _marker, _pos] call funcDistH < 50 || (_res select 1) < 50) && (group (_res select 0)) in (siPlayer call loadFile "Util\AccessableGroups.sqf") ) then {
			if ( (_emptyvehicles select 1) < 3 ) then {
				[_emptyvehicles select 0] exec (TzkScripts select 027); _processed = true
			} else {[_res select 0] exec (TzkScripts select 027); _processed = true};
		};
		if (!_processed) then {
			_res = [_pos, siPlayer, [], []] call funcGetClosestVehicle;
			if ( (_res select 1) < 50 ) then {[_res select 0] exec (TzkScripts select 027); _processed = true}
		};
	};
	// smart wp
	if (not _processed && _alt && not _shift && not bool_TZK_Rts_Map_Mode && (count _units) == 0) then {
		[_pos] exec (TzkScripts select 136);
		_processed = true;
	};
	// alt + shift
	if (not _processed && _alt && _shift) then {
		// selected area && selected units
		if (not _processed && TzkMapAreaCreated && count (call preprocessFile (TzkScripts select 371)) > 0) then {
			[_pos, _units] exec "Rts\Dialog\RtsMap.sqs";
			_processed = true;
		};
		// selected area && selected nothing
		if (not _processed && TzkMapAreaCreated && count (call preprocessFile (TzkScripts select 371)) == 0) then {
			[_pos, _units] exec "Rts\Dialog\AreaMap.sqs";
			_processed = true;
		};
		// set way points or acitvate point dialog
		if (not _processed) then {
			// lazy-load RtsPriorityPointDialogEnum status on clicking
			if (4 == RtsPriorityPointDialogEnum) then {
				if (time > RtsLatestPointDialogTime + 60) then {
					RtsPriorityPointDialogEnum = 2; // fall back to way point dialog
				};
			};

			private [{_script}];
			_script = (TzkScripts select 028);
			if (4 == RtsPriorityPointDialogEnum) then {
				_script = "Rts\Dialog\PointMap.sqs";
			};
			[_pos, _units] exec _script;
			_processed = true;
		};
	};
	// commander rts selection
	// alt
	if (not _processed && _alt && not _shift && bool_TZK_Rts_Map_Mode && (count _units) == 0) then {
		_pos call preprocessFile (TzkScripts select 366);
		_processed = true;
	};

	if (not _processed && (isCommander || bIsAiSuperior)) then {
		if (!_processed && !_alt && _shift) then {0 exec (TzkScripts select 014); _processed = true};
	};
};

_processed