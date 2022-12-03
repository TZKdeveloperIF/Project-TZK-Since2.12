if (_this) then {
	{
		{
			if ((getPosASL _x) call preprocessFile "Util\InSelectedArea.sqf") then {
				TzkSelectedUnits set [count TzkSelectedUnits, _x];
			}
		} forEach (units _x);
	} forEach (groupAiMatrix select siPlayer);
	// activate selected units' highlighting
	TzkMapSelectedHighlight = false;
	if (0 == count TzkSelectedUnits) then {TzkMapSelectEmptyTime = time} else {TzkMapSelectEmptyTime = 0};
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
	TzkSelectedUnits resize 0;
	TzkMapSelectEmptyTime = 0;
};