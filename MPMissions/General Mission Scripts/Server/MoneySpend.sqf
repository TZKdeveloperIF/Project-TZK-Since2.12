// args: [si, gi, amount]
// return: none

if ( (_this select 2) != 0 ) then
{
  (groupMoneyMatrix select (_this select 0)) set [_this select 1, -(_this select 2) + ((groupMoneyMatrix select (_this select 0)) select (_this select 1))];
  [_this select 0, _this select 1, 0] exec "Server\SendMoneyStatus.sqs";
  moneySpent set [_this select 0, (_this select 2) + (moneySpent select (_this select 0))];
};
mutexEditMoneyMatrix = false;