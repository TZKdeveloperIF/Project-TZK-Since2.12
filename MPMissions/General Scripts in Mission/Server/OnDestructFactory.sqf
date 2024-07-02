// args: [_si, _type, _factory]
// cancel the current order on destructing factory

private [{_si}, {_type}, {_factory}];
_si = _this select 0; _type = _this select 1; _factory = _this select 2;

if (_type in structsFactory) then {
	private [{_queues}, {_qi}, {_c}, {_found}, {_orders}, {_entry}];

	_queues = factoryQueues select _si;
	_qi = 0; _c = count _queues; _found = false; while {_qi < _c && !_found} do {
		if (_factory == (_queues select _qi select 0)) then {
			_found = true;
		} else {
			_qi = _qi + 1;
		};
	};

	if _found then {
		_currentOrderId = _queues select _qi select 3;
		if (_currentOrderId >= 0) then {
			[_currentOrderId, _si, 0] exec "Server\BuyUnit\sQueueRem.sqs";
			[_si, _currentOrderId, false] exec "Server\BuyUnit\SubmitOrderCancelled.sqs";
		};
	};
};