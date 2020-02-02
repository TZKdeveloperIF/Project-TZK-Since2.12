// args: string
// return: none
// sending stuff through createUnit is expensive both on cpu and bw
// only use this function for rare/important stuff like broadcast of debug info

private [ "_group", "_init" ];

// _group = groupTemp0;
// groupTemp0 isn't initialized locally since TZK_3.00 thus use leaderTemp0 instead.
_group = group leaderTemp0;
_init = format["player globalchat ""%1""; unitMsg=this", _this];
"Civilian" createUnit [getPos leader _group, _group, _init];
deleteVehicle unitMsg