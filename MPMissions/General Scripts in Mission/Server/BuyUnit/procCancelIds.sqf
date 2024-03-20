// args: none
// this is a process but not a function. script read/write local variables directly

_currentOrderCancelled = _qid in _cancelledQids;

private [{_cancelledOrders}, {_stat}, {_i}, {_c}, {_id}];
_cancelledOrders = [];
_stat = 0;
_i = 0; _c = _orders call _getSize; while {_i < _c} do {
	_entry = [_orders, _i] call preprocessFile "Algo\CirBuf\at.sqf";
	// process not-cancelled-yet orders
	if not (_entry select 8) then {
		_id = _entry select 6;
		if (_id in _cancelledQids) then {
			// create a replication of current order. This should be done before any edition of order
			_cancelledOrders set [_stat, + _entry]; _stat = _stat + 1;
			_entry set [8, true];
		};
	};
	_i = _i + 1;
};

// release cancelled orders building count
// mutex required thus execute another SQS script
[_cancelledOrders, _si] exec "Server\BuyUnit\CancelOrders.sqs";