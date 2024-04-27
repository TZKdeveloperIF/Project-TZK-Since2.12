// args: none
// this is a process but not a function. script read/write local variables directly
_ret = true;

_calc = [_posV, _posT, _speed, _biggerAngle] call funcElevArt406;
_angle = ((_posT select 1) - (_posV select 1)) atan2 ((_posT select 0) - (_posV select 0));
if (_calc < 180) then {_elev = _calc} else {
	_calc = _calc - 180;
	_bit = _calc % 2;
	if (_ret && _bit > 0) then {
		_msg = format ["%2: %1. %3", _speed
			, localize {TZK_LANG_INVALID_INITSPEED}
			, localize {TZK_LANG_SWITCH_ANOTHER_MAG}
		];
		_ret = false;
	};
	_calc = _calc - _bit;
	_bit = _calc % 4;
	if (_ret && _bit > 0) then {
		_msg = localize {TZK_LANG_INVALID_RANGE};
		_ret = false;
	};
	_calc = _calc - _bit;
	_bit = _calc % 8;
	if (_ret && _bit > 0) then {
		_msg = localize {TZK_LANG_CANT_HIT};
		_ret = false;
	};
	if _ret then {
		_msg = localize {TZK_LANG_UNEXPECTED_CASE};
		_ret = false;
	};
};

_ret