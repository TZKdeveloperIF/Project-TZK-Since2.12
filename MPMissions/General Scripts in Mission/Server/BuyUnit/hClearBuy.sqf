// args: [si, gi], gi can be both giJoin and giBuyer

_si = _this select 0;
_gi = _this select 1;

_this call preprocessFile "Server\BuyUnit\hClearBuyInner.sqf";
comment {
_queues = factoryQueues select _si

{ _queue = (_x select 2); _queue = _queue - (_queue select 0); { if (_gi in [_x select 4, _x select 5]) then {_qid = _x select 6; [_qid, _si, 0] exec "\TZK_Scripts_4_0_4\Server\SendQueueRem.sqs"; [_qid, _si] exec "\TZK_Scripts_4_0_4\Server\QIDCancelAdd.sqs" } } forEach _queue } forEach _queues
};