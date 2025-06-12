// args: none

format ["Player param: %1", "Mine" GetAmmoParam "activationMass"] exec "Log\Debuglog.sqs";

(giPlayer * GroupsNum + siPlayer) exec "Query\respondMineMaram.sqs";
publicExec format [{%1 exec "Query\respondMineMaram.sqs"}, (giPlayer * GroupsNum + siPlayer)];