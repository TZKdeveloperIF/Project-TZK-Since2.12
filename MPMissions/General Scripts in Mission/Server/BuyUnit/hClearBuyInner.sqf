// args: [si, gi], gi can be both giJoin and giBuyer

private [{_si}, {_gi}, {_orders}, {_i}, {_c}, {_entry}, {_qid}];

_si = _this select 0;
_gi = _this select 1;

// todo: this script will be called concurrently with factory building. Solve this problem.
{
	_orders = _x select 2;
	_i = 0, _c = _orders call preprocessFile "Algo\CirBuf\size.sqf";; while {_i < _c} do {
		_entry = [_orders, _i] call preprocessFile "Algo\CirBuf\at.sqf";
		if (_gi == _entry select 4 || _gi == _entry select 5) then {
			_qid = _entry select 6;
			[_qid, _si, 0] exec "Server\BuyUnit\sQueueRem.sqs";
			[_qid, _si] exec "\TZK_Scripts_4_0_4\Server\QIDCancelAdd.sqs";
		};
		_i = _i + 1;
	};
} forEach (factoryQueues select _si);