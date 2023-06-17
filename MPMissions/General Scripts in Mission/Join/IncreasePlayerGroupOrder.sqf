// args: none
// load variables from caller

private [{_i}, {_c}, {_unit}, {_uid}];
_i = 0, _c = count _uids; while {_i < _c} do {
	_unit = _units select _i;
	// increase the order index of those joined units to invalidate their player-group-order script (if exists)
	if (group _unit != groupPlayer) then {
		_uid = _uids select _i;
		_id = (playerOrderID select _uid) + 1;
		[_uid, _id] exec "\TZK_Scripts_4_0_4\Player\Order\New.sqs";
	};
	_i = _i + 1;
};