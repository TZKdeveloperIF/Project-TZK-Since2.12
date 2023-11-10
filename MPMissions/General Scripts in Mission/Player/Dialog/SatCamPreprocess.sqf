// args: none

private [{_siEnemy}, {_gapGenerators}];

_siEnemy = siEnemy select siPlayer;
_siEnemy = siPlayer;
_gapGenerators = [_siEnemy, stGapGenerator] call funcGetWorkingStructures;

if (count _gapGenerators > 0) then {
	private [{_i},{_c}, {_pos}];

	_roofCls = structDefs select stRoof select
		([sdObjects0, sdObjects1] select (_siEnemy == si1)) select 0 select 0;
	
	_roofSize = 10; _objCnt = 200 / _roofSize;

	_i = 0, _c = count _gapGenerators; while {_i < _c} do {
		_pos = getPos(_gapGenerators select _i);
		_px = _pos select 0; _py = _pos select 1; _pz = 15 + (_pos select 2);

		_gapRoofs = []; _gapRoofsArray set [_i, _gapRoofs];
		_a = 0, _ca = _objCnt, while {_a < _ca} do {
			_b = 0, _cb = _objCnt, while {_b < _cb} do {
				_roof = _roofCls camCreate [_px + (_a - _ca / 2) * _roofSize, _py + (_b - _cb / 2) * _roofSize, _pz];
				_gapRoofs set [count _gapRoofs, _roof];

				_b = _b + 1;
			};
			_a = _a + 1;
		};

		_i = _i + 1;
	};
};