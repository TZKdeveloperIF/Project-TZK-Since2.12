// args: [area idx, time stamp, si, for server: boolean]
// assert that caller is executed serially
private [{_idx}, {_stamp}, {_si}, {_b4Server}, {_suffix},{_result},{_found}];
_idx = _this select 0; _stamp = _this select 1; _si = _this select 2; _b4Server = _this select 3;

_suffix = if (si0 == _si) then {"W"} else {"E"}; if not _b4Server then {_suffix = ""};
_result = call format [{%2%1 select _idx}, _suffix, if _b4Server then {"TzkArtSvrAreaAnal"} else {"TzkArtPplAreaAnal"}];
_found = false;

if (_stamp > _result select 0) then {
	_result set [0, _stamp];

	private [{_markerInfo}];
	_markerInfo = call format [{%2%1 select _idx}, _suffix, if _b4Server then {"TzkArtSvrArea"} else {"TzkArtPplArea"}];
	
	_siEnemy = siEnemy select _si;

	_i = 2;
	_extendedRange = [
		_markerInfo select 0, _markerInfo select 1,
		(_markerInfo select 2) + 50, (_markerInfo select 3) + 50, 
		_markerInfo select 4
	];
	{{if (not isNull _x) then {
		_pos = getPosASL _x;
		if ([_pos, _extendedRange] call preprocessFile "Util\PosInRect.sqf") then {
			_result set [_i, _pos]; _i = _i + 1;
		};
	};} forEach (structMatrix select _siEnemy select _x);} foreach structsCritcal;
	_result resize _i;

	// find the nearest (to center) available target pos
	private [{_a},{_b},{_c},{_d}, {_dir},{_cos},{_sin}];
	_dir = _markerInfo select 4;
	_cos = cos (-_dir), _sin = sin (-_dir);
	_d = 0, _limit = (_markerInfo select 2) + (_markerInfo select 3);
	_c = count _result;
	_distSquare = {
		private [{_dx},{_dy}];
		_dx = ((_this select 0 select 0) - (_this select 1 select 0));
		_dy = ((_this select 0 select 1) - (_this select 1 select 1));
		_dx * _dx + _dy * _dy
	};
	while {_d <= _limit && not _found} do {
		_w = _markerInfo select 2; if (_w > _d) then {_w = _d};
		_a = -_w; while {_a <= _w && not _found} do {
			_h = _markerInfo select 3; if (_h > _d - abs(_a)) then {_h = _d - abs(_a)};
			_b = -_h; while {_b <= _h && not _found} do {
				_rotVecX = _cos * _a - _sin * _b; _rotVecY = _sin * _a + _cos * _b;
				_px = _rotVecX + (_markerInfo select 0); _py = _rotVecY + (_markerInfo select 1);
				_i = 2; _invalid = false; while {_i < _c && not _invalid} do {
					if (([_result select _i, [_px, _py]] call _distSquare) < 50 * 50) then {_invalid = true};
					_i = _i + 1;
				};
				if (not _invalid) then {
					_found = true;
					_result select 1 set [0, true];
					_result select 1 set [1, _px];
					_result select 1 set [2, _py];
				};
				_b = _b + 10;
			};
			_a = _a + 10;
		};
		_d = _d + 10;
	};
	if not _found then {_result select 1 set [0, false]};
} else {
	_found = _result select 1 select 0;
};
_found