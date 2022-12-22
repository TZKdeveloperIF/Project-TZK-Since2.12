private [{_h}, {_v}, {_d}, {_bHigh}];

_posV = _this select 0;
_posT = _this select 1;
_v = _this select 2;
_bHigh = _this select 3;

_valid = TzkArt406; _ret = [false];

if (-1 == TzkArtSpeeds find _v) then {_valid = false};
if (_valid) then {
	_h = (_posT select 2) - (_posV select 2);
	_d = sqrt ( ((_posV select 0) - (_posT select 0))^2 + ((_posV select 1) - (_posT select 1))^2 );
	if (_h < -500 || _h >= 800 || _d < 10 || _d >= 3000) then {_valid = false};
};
if (_valid) then {
	_h1 = _h - _h % 10;
	if (_h < 0 && _h != _h1) then {_h1 = _h1 - 10};
	_h2 = _h1 + 10;
	_d1 = _d - _d % 10;
	_d2 = _d1 + 10;
	_lambda = {format [
		"\TZK_Art_4_0_6\data\s+%1_h%2%3_%4.sqf",
		_this select 0,
		if ((_this select 1) >= 0) then {"+"} else {""},
		_this select 1,
		if (_this select 2) then {"high"} else {"low"}
	]};
	private [{_fh1d1}, {_fh1d2}, {_fh2d1}, {_fh2d2}, {_arr}];
	if (_valid) then {
		_fh1d1 = (_d1 / 10 - 1) call loadFile ([_v, _h1, _bHigh] call _lambda);
		if (180 == _fh1d1) then {_valid = false};
	};
	if (_valid) then {
		_fh2d1 = (_d1 / 10 - 1) call loadFile ([_v, _h2, _bHigh] call _lambda);
		if (180 == _fh2d1) then {_valid = false};
	};
	if (_valid) then {
		_fh1d2 = (_d2 / 10 - 1) call loadFile ([_v, _h1, _bHigh] call _lambda);
		if (180 == _fh1d2) then {_valid = false};
	};
	if (_valid) then {
		_fh2d2 = (_d2 / 10 - 1) call loadFile ([_v, _h2, _bHigh] call _lambda);
		if (180 == _fh2d2) then {_valid = false};
	};
	if (_valid) then {
		_ret set [0, true];
		_elev = (
			(_h - _h1) * (_d - _d1) * _fh2d2 + (_h - _h1) * (_d2 - _d) * _fh2d1 +
			(_h2 - _h) * (_d - _d1) * _fh1d2 + (_h2 - _h) * (_d2 - _d) * _fh1d1
		) / (_h2 - _h1) / (_d2 - _d1);
		_ret set [1, _elev];
	};
};
_ret