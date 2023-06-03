// args: [si, gi, orderType, params]
// should be a sqf file for local synchronization

private [{_args}, {_gi}];

// prepare another array to pass parameters
_args = + _this;

_gi = _args select 1;
// gi >= GroupsNum means "send to all"
_args set [4, _gi >= GroupsNum];
if (_gi >= GroupsNum) then {_args set [1, _gi - GroupsNum]};

_args exec "Common\Msg\hAiGrpOrder.sqs";
publicExec format [{%1 exec "Common\Msg\hAiGrpOrder.sqs"}, _args];