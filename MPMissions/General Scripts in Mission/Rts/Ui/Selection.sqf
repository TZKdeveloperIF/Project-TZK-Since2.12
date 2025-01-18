if (_this) then {
	private [{_aiUnits}, {_workers}, {_baseUnits}, {_playerUnits}];
	_aiUnits = 		TzkSelUnitsCube select 0 select 0;
	_workers = 		TzkSelUnitsCube select 1 select 0;
	_baseUnits = 	TzkSelUnitsCube select 2 select 0;
	_playerUnits = 	TzkSelUnitsCube select 3 select 0;

	if (isCommander || bIsAiSuperior) then {
		private [{_funcLeadBy}, {_gi}];
		_funcLeadBy = preprocessFile "Util\GrpLeadBy.sqf";
		{
			_gi = (groupMatrix select siPlayer) find _x;
			if (([siPlayer, _gi, giPlayer] call _funcLeadBy) && _gi call loadFile "Player\SQF\GroupUnitsShown.sqf") then {
				{
					if ((getPosASL _x) call preprocessFile "Util\InSelectedArea.sqf") then {
						_aiUnits set [count _aiUnits, _x];
					}
				} forEach (units _x);
			}
		} forEach (groupAiMatrix select siPlayer);
	};
	if isCommander then {
		private [{_group}];
		_gi = 0; while {_gi < count (workerGroups select siPlayer)} do {
			_group = (workerGroups select siPlayer) select _gi;
			{
				if ((getPosASL _x) call preprocessFile "Util\InSelectedArea.sqf") then {
					_workers set [count _workers, _x];
				}
			} forEach (units _group);
			_gi = _gi + 1;
		};
		_group = baseGroup select siPlayer;
		{
			if ((getPosASL _x) call preprocessFile "Util\InSelectedArea.sqf") then {
				_baseUnits set [count _baseUnits, _x];
			}
		} forEach (units _group);

		_gi = 0; while {_gi < count (groupMatrix select siPlayer)} do {
			_group = groupMatrix select siPlayer select _gi;
			if (_gi != giPlayer && 
				(groupAiMatrix select siPlayer) find _group == -1 && 
				_gi call loadFile "Player\SQF\GroupUnitsShown.sqf"
			) then {
				{
					if ((getPosASL _x) call preprocessFile "Util\InSelectedArea.sqf") then {
						_playerUnits set [count _playerUnits, _x];
					}
				} forEach (units _group);
			};
			_gi = _gi + 1;
		};
	};
	// activate selected units' highlighting
	TzkMapSelectedHighlight = false;
	TzkMapAreaLastUsedTime = time;
	// on selecting new units, turn off art dynamic marker immediately
	if (count _aiUnits > 0) then {
		TzkMarkerArtAreaState = false;
	};
} else {
	_index = 0;
	{
		_marker = format ["%1%2", (groupNameMatrix select siPlayer) select _index, siPlayer];
		_marker setMarkerColor "ColorBlue";
		_index = _index + 1;
	} forEach (groupMatrix select siPlayer);

	_gi = 0;
	_countGroups = count (groupMatrix select siPlayer);
	while {_gi < _countGroups} do {
		if (_gi != giPlayer) then {
			_index = 1;
			while {_index < 12} do {
				_marker = Format["GroupUnit_%1_%2_%3", siPlayer, _gi, _index - 1];
				_marker setMarkerColor "ColorYellow";
				_index = _index + 1;
			};
		};
		_gi = _gi + 1;	
	};
	call preprocessFile "Rts\Ui\Unselect.sqf";
	TzkMapAreaLastUsedTime = 0;
};