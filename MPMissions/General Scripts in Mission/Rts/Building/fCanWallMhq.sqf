// args: [si, pos, dir]
// return: can build mhq wall

// check all "mhq wall" position and direction to judge whether current wall can be built

private [{_si}, {_buildPos}, {_dir}, {_allow}, {_i}, {_c}, {_wall}];
_si = _this select 0; _buildPos = _this select 1; _dir = _this select 2;

_allow = true;
_i = 0; _c = count TzkMhqWallObjs;
while {_i < _c && _allow} do {
	_wall = TzkMhqWallObjs select _i;
	if (alive _wall) then {
		if (
			abs((TzkMhqWallInfos select (_i * 2) select 0) - (_buildPos select 0)) < 1 && 
			abs((TzkMhqWallInfos select (_i * 2) select 1) - (_buildPos select 1)) < 1 && 
			abs((TzkMhqWallInfos select (_i * 2 + 1)) -_dir) < 5
		) then {
			_allow = false;
		};
	};
	_i = _i + 1;
};
_allow