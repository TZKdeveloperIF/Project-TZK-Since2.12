if bool_TZK_SEMod_Mode Then {
	orderTempDefs select orderTempSwitchMagazine set [2, "Extra\SwitchMag_Server.sqs"];
	orderTempDefs select orderTempSwitchMagazine select 1 set [2, [ "Unit Type", "count ([{SE TD}] + ArtilleryTypeDefs)", "([{SE TD}] + ArtilleryTypeDefs) select _this" ] ];
	ArtilleryMagazineSpeedList set [count ArtilleryMagazineSpeedList, "Recover TD"];
};

_type = count orderTempDefs;
orderTempShootBigAngle = _type;
_param0 = [ "Attack Pos", "count (wpCO select siPlayer)", "_posRelTown = ((wpCO select siPlayer) select _this) call funcCalcTownDirDistFromPos; format[""co%1 %2"", _this, [_posRelTown, """"] select ((((wpCO select siPlayer) select _this) select 0) == -1)]" ];
_param1 = [ "Radius", "20", "format [""%1m"", 5*(_this+1)]" ];
_param2 = [ "Unit Type", "count ([{Soldier}, {Light Tank}, {Heavy Tank}] + ArtilleryTypeDefs)", "([{Soldier}, {Light Tank}, {Heavy Tank}] + ArtilleryTypeDefs) select _this" ];
_param3 = [ "Target", "countTargetMarkers", "format [""%1"", _this ]" ];
_param4 = [ "Dispersion", "20", "format [""%1m"", 10*_this]" ];
orderTempDefs set [_type, ["Shoot Big Angle", [_param0, _param1, _param2, _param3, _param4], "Server\OrderTemp\ShootBiggerAngle.sqs"] ];
_type = _type + 1;

TempOrderNum = count orderTempDefs;