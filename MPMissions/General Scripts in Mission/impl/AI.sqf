comment "Adjust path of orderTemp scripts.";
{_script = _x select 2, _x set [2, "\TZK_Scripts_4_0_4\Server\" + _script ] } forEach orderTempDefs;
orderTempDefs select orderTempShootTarget set [2, "Server\OrderTemp\ShootTarget.sqs"];
orderTempDefs select orderTempShootTarget select 1 set [2, [ "Unit Type", "count ([{Soldier}, {Light Tank}, {Heavy Tank}] + ArtilleryTypeDefs)", "([{Soldier}, {Light Tank}, {Heavy Tank}] + ArtilleryTypeDefs) select _this" ] ];

comment "Adjust path of order scripts.";
{_script = _x select 2, _x set [2, "\TZK_Scripts_4_0_4\Server\Order\" + _script ] } forEach orderDefs;
