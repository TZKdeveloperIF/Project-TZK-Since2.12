// args: none

format ["Player param: %1, %2, %3", "Mine" GetAmmoParam "activationMass", "Mine" GetAmmoParam "activationDistance", "Mine" GetAmmoParam "activationTime"] exec "Log\Debuglog.sqs";

(giPlayer * GroupsNum + siPlayer) exec "Query\respondMineMaram.sqs";
publicExec format [{%1 exec "Query\respondMineMaram.sqs"}, (giPlayer * GroupsNum + siPlayer)];