if bool_TZK_SEMod_Mode Then {
	orderTempDefs select orderTempSwitchMagazine set [2, "Extra\SwitchMag_Server.sqs"];
	orderTempDefs select orderTempSwitchMagazine select 1 set [2, [ "Unit Type", "count ([{SE TD}] + ArtilleryTypeDefs)", "([{SE TD}] + ArtilleryTypeDefs) select _this" ] ];
	ArtilleryMagazineSpeedList set [count ArtilleryMagazineSpeedList, "Recover TD"];
};

if bool_TZK_DEV_FPS Then {
comment {
	orderDefs select orderPatrolArea set [2, "Extra\Order\PatrolArea.sqs"];
};
	orderDefs select orderPatrolArea set [2, ""];
};
orderTempDefs select orderTempReclaim set [2, "Server\OrderTemp\Reclaim.sqs"];
orderTempDefs select orderTempDisengageType set [2, "Server\OrderTemp\DisengageType.sqs"];

_param0 = [ "Unit type", "count DisengageTypeDefs", "format [""%1"", DisengageTypeDefs select _this ]" ];
orderTempDefs select orderTempDisengageType set [1, [_param0, _param0, _param0]];


orderTempDefs select orderTempReclaim select 1 set [4, [ "Duration", "20", "format [""%1min"", 1.5*(_this+1)]" ]];
orderTempDefs select orderTempOccupy select 1 set [3, [ "Duration", "20", "format [""%1min"", 1.5*(_this+1)]" ]];

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

_order = orderDefs select orderTransportDuty;
_order select 1 set [2, [ "Eject Distance", "10", "format [""%1m"", 100*(_this+1)]" ]];
_order set [2, "Server\Order\TransportDuty.sqs"];


comment {
	; initStatusMatrix structure: array[]. Index = _si * GroupsNum + _gi.
	; element of array above: array[]. Index = type of concurrent order.
	; element of array above: [option item on/off, param 0, param 1, ...]
};
initStatusMatrix = [];
{
	_si = _x; _gi = 0;
	{
		_matrix = []; _i = 0; _c = count orderTempDefs;
		while "_i < _c" do {
			_params = [];  _params set [0, 0]; _j = 0; while "_j < count(orderTempDefs select _i select 1)" do "_params set [_j + 1, -1]; _j = _j + 1";
			_matrix set [_i, _params];
			_i = _i + 1;
		};
		initStatusMatrix set [_si * GroupsNum + _gi, _matrix];
		_gi = _gi + 1
	} foreach (groupMatrix select _x)
} forEach [si0, si1];