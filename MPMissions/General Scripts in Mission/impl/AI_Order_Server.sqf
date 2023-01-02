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

comment "Adjust all group order scripts' path.";
_oldPrefix = "\TZK_Scripts_4_0_5\Server\Order\"; _len = sizeofstr _oldPrefix;
{
	_oldPath = _x select 2;
	if (sizeofstr _oldPath >= _len) then {
		if (_oldPrefix == substr [_oldPath, 0, _len]) then {
			_newPath = substr [_oldPath, sizeofstr "\TZK_Scripts_4_0_5\", sizeofstr _oldPath];
			_x set [2, _newPath];
		};
	};
} forEach orderDefs;

orderTempDefs select orderTempRearm set [2, "Server\OrderTemp\Rearm.sqs"];
orderTempDefs select orderTempChangeAmmo set [2, "Server\OrderTemp\ChangeAmmo.sqs"];
comment {
	orderTempDefs select orderTempMoveUnit set [2, "Server\OrderTemp\MoveUnit.sqs"];
};