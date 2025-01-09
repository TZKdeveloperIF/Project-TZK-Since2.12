comment {args: none};

private [{_siEnemy}, {_gapGenerators}];

_siEnemy = siEnemy select siPlayer;
comment {_siEnemy = siPlayer;};
_gapGenerators = [_siEnemy, stGapGenerator] call funcGetWorkingStructures;

if (count _gapGenerators > 0) then {
	private [{_i},{_c}, {_pos}];
	_i = 0, _c = count _gapGenerators; while {_i < _c} do {
		_pos = getPosASL(_gapGenerators select _i);
		_pos set [2, 15 + (_pos select 2)];

		_blocker = "ViewBlocker_xj400" camCreate _pos;
		_blocker setPosASL _pos;
		_gapGeneratorBlocks set [_i, _blocker];

		_i = _i + 1;
	};
};