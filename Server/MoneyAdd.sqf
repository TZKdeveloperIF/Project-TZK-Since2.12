// args: [si, gi, amount, sendRepeats]
// return: none

(groupMoneyMatrix select (_this select 0)) set [_this select 1, (_this select 2) + ((groupMoneyMatrix select (_this select 0)) select (_this select 1))];
if ((_this select 2) != 0) then { [_this select 0, _this select 1, _this select 3] exec "Server\SendMoneyStatus.sqs"; };
mutexEditMoneyMatrix = false;