comment {args: type};
comment {this function is for player only. Player can buy units if near CC or anyone of his member is nearby};
private [{_res}, {_units}]; 
_res = [];
_units = units group player;
{
	if (alive _x) then {
		private [{_valid}];
		_valid = ([getPos _x, siPlayer, stComm] call funcGetClosestStructure) select 1 < CCdistMax select siPlayer;

		private [{_i}, {_c}]; _i = 0; _c = count _units; while {_i < _c && not _valid} do {
			if ((_units select _i) distance _x < 15) then {_valid = true};
			_i = _i + 1;
		};
		if _valid then {_res set [count _res, _x]};
	};
} forEach (structMatrix select siPlayer select _this);
_res