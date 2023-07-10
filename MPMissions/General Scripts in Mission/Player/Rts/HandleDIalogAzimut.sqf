private [{_input}, {_processed}];

_processed = false;
if not _processed then {
	_input = sliderPosition _idcSliderAzimut;
	_input = _input - _input % 1;
	if (_input != TzkMapSelectDir) then {
		sliderSetPosition [_idcSliderAzimut, _input];
		_AzimutCache = format ["%1", _input];
		ctrlSetText [_idcValueAzimut, _AzimutCache];
		_processed = true;
	};
};
if not _processed then {
	_input = ctrlText _idcValueAzimut;
	if (sizeofstr (_input) > 5) then {
		ctrlSetText [_idcValueAzimut, _AzimutCache];
		_input = _AzimutCache;
	};
	if (_input != _AzimutCache) then {
		_input = [ctrlText _idcValueAzimut, -1] call preprocessFile "Util\Str2Num.sqf";
		if (_input != -1) then {
			_input = _input - _input % 1;
			_input = _input % 360;
			if (_input < 0) then {_input = _input + 360};
			if (_input > 180) then {_input = _input - 180};
			// text change won't always lead to value change (like inputting dot)
			// current design won't response inputting dot
			if (_input != TzkMapSelectDir) then {
				hint format ["%1", _input];
				sliderSetPosition [_idcSliderAzimut, _input];
				_AzimutCache = format ["%1", _input];
				ctrlSetText [_idcValueAzimut, _AzimutCache];
				_processed = true;
			}
		};
	};
};
if _processed then {
	_input call preprocessFile "Player\Rts\AreaSetDir.sqf";
};