// args: (gi + GroupsNum * si), gi can be both giJoin and giBuyer

if isServer then {
	private [{_si}, {_gi}, {_orders}, {_i}, {_c}, {_entry}, {_qid}, {_cancelIds}, {_stat}];

	_gi = _this % GroupsNum;
	_this = (_this - _gi) / GroupsNum;
	_si = _this;

	// todo: this script will be called concurrently with factory building. Solve this problem.
	_cancelIds = []; _stat = 0;
	{
		_orders = _x select 2;
		_i = 0, _c = _orders call preprocessFile "Algo\CirBuf\size.sqf";; while {_i < _c} do {
			_entry = [_orders, _i] call preprocessFile "Algo\CirBuf\at.sqf";
			if (_gi == _entry select 4 || _gi == _entry select 5) then {
				_qid = _entry select 6;
				[_qid, _si, 0] exec "Server\BuyUnit\sQueueRem.sqs";
				_cancelIds set [_stat, _qid]; _stat = _stat + 1;
			};
			_i = _i + 1;
		};
	} forEach (factoryQueues select _si);
	[_si, _cancelIds, true] exec "Server\BuyUnit\SubmitOrderCancelled.sqs";
};