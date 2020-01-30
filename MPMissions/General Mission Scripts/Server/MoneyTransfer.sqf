// args: [si, giFrom, giTo, amount]
// return: none

if (( ((_this select 3) <= (groupMoneyMatrix select (_this select 0)) select (_this select 1)) && ((_this select 3) > 0) ) || ( (-(_this select 3) <= (groupMoneyMatrix select (_this select 0)) select (_this select 2)) && ((_this select 3) < 0) )) then
{
	(groupMoneyMatrix select (_this select 0)) set [_this select 1, -(_this select 3) + ((groupMoneyMatrix select (_this select 0)) select (_this select 1))];
	(groupMoneyMatrix select (_this select 0)) set [_this select 2,  (_this select 3) + ((groupMoneyMatrix select (_this select 0)) select (_this select 2))];
	if ((_this select 3) != 0) then { [_this select 0, _this select 1, 0] exec "Server\SendMoneyStatus.sqs"; [_this select 0, _this select 2, 0] exec "Server\SendMoneyStatus.sqs";};

	[_this select 0, _this select 1, _this select 2, _this select 3] exec "Server\SendMoneyTransferred.sqs";
};
mutexEditMoneyMatrix = false;