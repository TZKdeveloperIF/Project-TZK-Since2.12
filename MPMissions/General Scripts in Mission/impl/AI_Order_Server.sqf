comment "Insert 'Shoot Town' order in orderDefs.";
comment "Dont add this order first.";
if false then {
	_type = orderHalt;
	orderShootTown = _type;
	_param0 = [ "Town", "count towns", "(towns select _this) select 1" ];
	_param1 = [ "Attack Pos", "count (wpCO select siPlayer)", "_posRelTown = ((wpCO select siPlayer) select _this) call funcCalcTownDirDistFromPos; format[""co%1 %2"", _this, [_posRelTown, """"] select ((((wpCO select siPlayer) select _this) select 0) == -1)]" ];
	_param2 = [ "Unit Type", "count ([{Soldier}, {Light Tank}, {Heavy Tank}] + ArtilleryTypeDefs)", "([{Soldier}, {Light Tank}, {Heavy Tank}] + ArtilleryTypeDefs) select _this" ];
	orderDefs set [_type, ["Shoot Town", [_param0, _param1, _param2], "Server\Order\ShootTown.sqs"] ];
	_type = _type + 1;

	orderHalt = _type;
	orderDefs set [_type, ["Halt", [], "\TZK_Scripts_4_0_5\Server\Order\Halt.sqs"] ];
	_type = _type + 1;
};

orderTempDefs select orderTempRearm set [2, "Server\OrderTemp\Rearm.sqs"];
comment {
	orderTempDefs select orderTempMoveUnit set [2, "Server\OrderTemp\MoveUnit.sqs"];
};