lbClear _idcList;
private [{_bUpdated}, {_pos}];
_bUpdated = false;

if (not _bUpdated && "CO" == _highlight) then {
	_bUpdated = true;
	private [{_i}];
	_i = -1;
	if _co then {
		_i = 0;
	} else {if _Superior then {
		_i = _COcount;
	} else {
		format ["<_co || _Superior> is false in Player\Dialog\Wp\UpdateList.sqf"] call fDebugLog;
	}};

	if (_i >= 0) then {
		_list = wpCO select siPlayer;
		while {_i < countWPCO} do {
			_pos = _list select _i;
			_text = "";
			if ((_pos select 0) != -1) then {_text = format["%1 %2", _pos call funcCalcMapPos, _pos call funcCalcTownDirDistFromPos]};
			lbAdd [_idcList, format["co%1: %2", _i, _text]];
			_i = _i + 1;
		};
	};
};
if (not _bUpdated && "WP" == _highlight) then {
	_bUpdated = true;
	_i = 0; while {_i < countWPPlayer} do {
		_pos = wpPlayer select _i;
		_text = "";
		if ((_pos select 0) != -1) then {_text = format["%1 %2", _pos call funcCalcMapPos, _pos call funcCalcTownDirDistFromPos]};
		lbAdd [_idcList, format["wp%1: %2", _i, _text]];
		_i = _i + 1;
	};
};
if (not _bUpdated && "PlayerTarget" == _highlight) then {
	_bUpdated = true;
	_i = 0; while {_i < countTargetMarkers} do {
		_pos = getMarkerPos format ["TargetP_%1", _i];
		_text = "";
		if ((_pos select 0) > -1) then {_text = format["%1 %2", _pos call funcCalcMapPos, _pos call funcCalcTownDirDistFromPos]};
		lbAdd [_idcList, format["TargetP%1: %2", _i, _text]];
		_i = _i + 1;
	};
};
if (not _bUpdated && "ServerTarget" == _highlight) then {
	if (not _co && not _Superior) then {
		format ["<_co || _Superior> is false in Player\Dialog\Wp\UpdateList.sqf"] call fDebugLog;
	};
	_bUpdated = true;
	_i = 0; while {_i < countTargetMarkers} do {
		_pos = getMarkerPos format ["TargetS_%1", _i];
		_text = "";
		if ((_pos select 0) > -1) then {_text = format["%1 %2", _pos call funcCalcMapPos, _pos call funcCalcTownDirDistFromPos]};
		lbAdd [_idcList, format["TargetS%1: %2", _i, _text]];
		_i = _i + 1;
	};
};
// update current selected item index
if (indexWayPointSelected select _mode != -1) then {
	lbSetCurSel [_idcList, indexWayPointSelected select _mode];
};