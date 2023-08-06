// args: none

_pvVar = -1;

_coGrp0 = groupCommander select si0; _coGrp1 = groupCommander select si1;
if (_coGrp0 in (groupAiMatrix select si0) || _coGrp1 in (groupAiMatrix select si1)) then {
	// has AICO
	_bWestHasPlayer = count (groupMatrix select si0) != count (groupAiMatrix select si0);
	_bEastHasPlayer = count (groupMatrix select si1) != count (groupAiMatrix select si1);
	if (_bWestHasPlayer && !_bEastHasPlayer || !_bWestHasPlayer && _bEastHasPlayer) then {
		// only 1 side has player
		_si = [si0, si1] select _bEastHasPlayer;
		_gi = (groupMatrix select _si) find ( ((groupMatrix select _si) - (groupAiMatrix select _si)) select 0);

		_pvVar = 1; _coef = 2;
		_pvVar = _pvVar + _si * _coef; _coef = _coef * count sides;
		_pvVar = _pvVar + _gi * _coef;
		player globalChat format [
			"%1, %2, %3, pvCustomPveStatus: %4", _si, _gi, ((groupMatrix select _si) - (groupAiMatrix select _si)), _pvVar],
	};
};
if (-1 == _pvVar) then {_pvVar = 0};

pvCustomPveStatus = _pvVar; publicVariable {pvCustomPveStatus};
if (0 == _pvVar) then {pvCustomPveFinished = true};