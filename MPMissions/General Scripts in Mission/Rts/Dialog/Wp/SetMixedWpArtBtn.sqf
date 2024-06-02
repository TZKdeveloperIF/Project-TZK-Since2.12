// args: bool (set or clear)
private [{_curWpIdx}, {_curArtIdx}, {_coor}, {_ret}];

_ret = false;
_coor = (if _this then {_pos} else {[-1, -1]});

_curWpIdx = lbCurSel _idcDevidedList0;
// new wp selected
if (not _ret && _curWpIdx != -1) then {
	_ret = true;

	indexWayPointSelected set [_mode, _curWpIdx];

	[_curWpIdx, _coor] exec "Player\SetWaypoint.sqs";
};

_curArtIdx = lbCurSel _idcDevidedList1;
// new art selected
if (not _ret && _curArtIdx != -1) then {
	_ret = true;

	// create a 50x50 art area
	[
		(if _this then {100} else {0}) + _curArtIdx, "Art", false, "RtsAreaArtPplIdx"
		, [_coor, [25, 25], 0]
	] call preprocessFile "Rts\Marker\GenArea.sqf"
};

_ret