// args: [worker, si]
private [{_unit},{_si}]; _unit = _this select 0; _si = _this select 1;
_unit setdamage 0;
if (upgMatrix select _si select upgWorkers == 2) then {
	private [{_wpnPrim},{_wpnSec},{_magData},{_wpnData}];
	_wpnPrim = primaryWeapon _unit;
	_wpnSec = secondaryWeapon _unit;

	if (upgMatrix select _si select upgTL == 2) then {
		_magData = magsRespawnAI5 select _si; _wpnData = weaponsRespawnAI5 select _si;
	} else {
		_magData = magsRespawnAI1 select _si; _wpnData = weaponsRespawnAI1 select _si;
	};

	if (-1 == _wpnData find _wpnPrim || -1 == _wpnData find _wpnSec) then {
		// Update all weapons
		removeAllWeapons _unit; {_unit addMagazine  _x} forEach _magData; {_unit addWeapon _x} forEach _wpnData;
	} else {
		private [{_magStat},{_idx},{_magArray},{_i},{_j},{_c},{_diff},{_mag},{_container}];
		_magStat = []; {
			_idx = _magStat find _x;
			if (-1 == _idx) then {
				_idx = count _magStat; _magStat set [_idx, _x]; _magStat set [_idx + 1, 1];
			} else {
				_magStat set [_idx + 1, 1 + (_magStat select _idx + 1)];
			};
		} forEach _magData;
		_magArray = magazinesArray _unit;
		_i = 0; _c = count _magArray; while {_i < _c} do {
			if (_magArray select _i + 1 > 0) then {
				_idx = _magStat find (_magArray select _i);
				if (_idx != -1) then {_magStat set [_idx + 1, (_magStat select _idx + 1) - 1]};
			};
			_i = _i + 2;
		};
		_i = 0; _c = count _magStat; while {_i < _c} do {
			_diff = _magStat select _i + 1; _mag = _magStat select _i;
			_j = 0; while {_j < _diff - 1} do {
				_unit addMagazine _mag;
				_j = _j + 1;
			};
			if (_diff >= 1) then {
				_container = "SecondaryWeaponHolder" camCreate getPos _unit; _container addMagazineCargo [_mag, 1];
				_unit action ["TAKE MAGAZINE", _container, 0, 0, _mag];
				[_container, 10] exec localize {TZK_PATH_DELAY_DELETE_UNIT};
			};
			_i = _i + 2;
		};
	};
};