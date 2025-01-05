comment {AI ORDERS;} ;
comment {aiOrders format: [name, [param 0, param 1, ...], subdlg or units exec only 1 but not each script, script, description];} ;
comment {aiOrders param# format: [nameParam, countParams, funcToText, default]} ;

playerOrderID = []; _i = 0; while {_i < 13} do {playerOrderID set [_i, 0]; _i = _i + 1};
orderCheck = {_id < playerOrderID select _uid}; mutexUnitOrder = false;

comment {There used to be aiOrders2 but now removed} ;
aiOrders1 = [];

_param0 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 0];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_MOVE_WP}, [_param0], false, (TzkScripts select 081)
]];

_param0 = ["Radius", 10, {format[{%1m}, 50*(_this+1)]}, 1];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_PATROL}, [_param0], false, (TzkScripts select 082)
]];

_param0 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["Radius", 10, {format[{%1m}, 50*(_this+1)]}, 1];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_PATROL_WP}, [_param0,_param1], false, (TzkScripts select 083)
]];

_param0 = ["FIRST", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["END", countWPPlayer, {format[{wp%1}, _this]}, 1];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_PATROL_WPS}, [_param0, _param1], false, (TzkScripts select 084)
]];

_param0 = ["START", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["DESTINATION", countWPPlayer, {format[{wp%1}, _this]}, 1];
_param2 = ["Eject distance", 5, {format[{%1m}, 200*(_this+1)]}, 0];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_TRANSPORTDUTY}, [_param0, _param1, _param2], false, (TzkScripts select 085)
]];

aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_DISABLE_MINES}, [], false, (TzkScripts select 086)
]];

_param0 = ["Place Radius", 10, {format[{%1m}, 5*(_this)]}, 1];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_MINE_POS}, [_param0], false, (TzkScripts select 087)
]];

_param0 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["Place Radius", 10, {format[{%1m}, 5*(_this)]}, 1];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_MINE_WP}, [_param0, _param1], false, (TzkScripts select 088)
]];

_param0 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 1];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_MINE_WP2WP}, [_param0, _param1], false, (TzkScripts select 089)
]];

_param0 = ["Place Radius", 10, {format[{%1m}, 5*(_this)]}, 1];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_SATCHEL_POS}, [_param0], false, (TzkScripts select 090)
]];

_param0 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["Place Radius", 10, {format[{%1m}, 5*(_this)]}, 1];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_SATCHEL_WP}, [_param0, _param1], false, (TzkScripts select 091)
]];

_param0 = ["Town", count towns, {format[{%1}, (towns select _this) select tdName]}, -1];
_param1 = ["Mine Radius", 10, {format[{%1m}, 5*(_this)]}, 6];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_MINE_FLAG}, [_param0, _param1], false, (TzkScripts select 092)
]];

_param0 = ["Town", count towns, {format[{%1}, (towns select _this) select tdName]}, -1];
_param1 = ["Patrol Radius", 5, {format[{%1m}, 50*(_this+1)]}, 1];
aiOrders1 set [count aiOrders1, [
	localize {TZK_LANG_PPL_HOLD_TOWN}, [_param0, _param1], false, (TzkScripts select 093)
]];


PlayerShootingUnits = [];
mutexSwitchSeat = false;

call preprocessFile "impl\AI_Order_Player.sqf";
