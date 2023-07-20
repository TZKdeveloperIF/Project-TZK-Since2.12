comment {
	AI ORDERS;
	aiOrders format: [name, [param 0, param 1, ...], subdlg or units exec only 1 but not each script, script, description];
	aiOrders param# format: [nameParam, countParams, funcToText, default]
};

playerOrderID = []; _i = 0; while {_i < 13} do {playerOrderID set [_i, 0]; _i = _i + 1};
orderCheck = {_id < playerOrderID select _uid}; mutexUnitOrder = false;

comment { Use 2 matrixes since TZK_4.0.0.0 };
aiOrders1 = [];
// todo: move this file into new addon to remove global var definitions

// aiOrders1 set [count aiOrders1, [
// 	"Heal & (Rearm)", ...
// ]];

// aiOrders1 set [count aiOrders1, [
// 	"Rearm & Heal", ...
// ]];

// aiOrders1 set [count aiOrders1, [
// 	"Board...", ...
// ]];

// aiOrders1 set [count aiOrders1, [
// 	"Move", ...
// ]];

_param0 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 0];
aiOrders1 set [count aiOrders1, [
	"Move WP", [_param0], false, "\TZK_Scripts_4_0_4\Player\Order\MoveWP.sqs",
	"Units will move to the specified waypoint. \nOrders using waypoint(s) will follow the position change of 
	waypoint(s). If wish to have fixed position, use map-click-position commands."
]];

_param0 = ["Radius", 10, {format[{%1m}, 50*(_this+1)]}, 1];
aiOrders1 set [count aiOrders1, [
	"Patrol", [_param0], false, "\TZK_Scripts_4_0_4\Player\Order\PatrolPos.sqs",
	"Units will patrol the position clicked using <Radius> as the patrol range."
]];

_param0 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["Radius", 10, {format[{%1m}, 50*(_this+1)]}, 1];
aiOrders1 set [count aiOrders1, [
	"Patrol WP", [_param0,_param1], false, "\TZK_Scripts_4_0_4\Player\Order\PatrolWP.sqs",
	"Units will patrol the selected WP and using <Radius> as the patrol range. \nOrders using waypoint(s) will 
	follow the position change of waypoint(s). If wish to have fixed position, use map-click-position commands."
]];

_param0 = ["FIRST", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["END", countWPPlayer, {format[{wp%1}, _this]}, 1];
aiOrders1 set [count aiOrders1, [
	"Patrol WPs", [_param0, _param1], false, "\TZK_Scripts_4_0_4\Player\Order\PatrolWPs.sqs",
	"Units will patrol from START wp to the END wp.\nThey will do a circular patrol if the END wp is placed 
	closer to START one than to the previous, otherwise they'll turn back to previous ones. \nOrders using 
	waypoint(s) will follow the position change of waypoint(s). If wish to have fixed position, use 
	map-click-position commands."
]];

_param0 = ["START", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["DESTINATION", countWPPlayer, {format[{wp%1}, _this]}, 1];
_param2 = ["Eject distance", 5, {format[{%1m}, 200*(_this+1)]}, 0];
aiOrders1 set [count aiOrders1, [
	"Transport Duty", [_param0, _param1, _param2], false, "\TZK_Scripts_4_0_6\Player\Order\TransportDuty.sqs",
	"Drivers of transport vehicles will pickup infantry at START wp and eject cargo at DESTINATION wp, passing 
	all intermediate defined waypoints."
]];

aiOrders1 set [count aiOrders1, [
	"Disable Mines", [], false, "\TZK_Scripts_4_0_4\Player\Order\DisableMines.sqs",
	"Miners will disarm mines near the position clicked."
]];

_param0 = ["Place Radius", 10, {format[{%1m}, 5*(_this)]}, 1];
aiOrders1 set [count aiOrders1, [
	"Mine Pos", [_param0], false, "\TZK_Scripts_4_0_5\Player\Order\MinePos.sqs",
	"Units with mines will place mines near the position clicked.\nMiners will rearm at a nearby support vehicle."
]];

_param0 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["Place Radius", 10, {format[{%1m}, 5*(_this)]}, 1];
aiOrders1 set [count aiOrders1, [
	"Mine WP", [_param0, _param1], false, "\TZK_Scripts_4_0_5\Player\Order\MineWP.sqs",
	"Units with mines will place mines around the selected WP.\nMiners will rearm at a nearby support vehicle. \n
	Orders using waypoint(s) will follow the position change of waypoint(s). If wish to have fixed position, use 
	map-click-position commands."
]];

_param0 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 1];
aiOrders1 set [count aiOrders1, [
	"Mine WP-WP", [_param0, _param1], false, "\TZK_Scripts_4_0_5\Player\Order\MineWPtoWP.sqs",
	"Units with mines will place mines between the waypoints, starting at the first waypoint.\nMiners will rearm 
	at a nearby support vehicle. \nOrders using waypoint(s) will follow the position change of waypoint(s). If 
	wish to have fixed position, use map-click-position commands."
]];

_param0 = ["Place Radius", 10, {format[{%1m}, 5*(_this)]}, 1];
aiOrders1 set [count aiOrders1, [
	"Satchel Pos", [_param0], false, "\TZK_Scripts_4_0_5\Player\Order\SatchelPos.sqs",
	"Specops with satchels will place satchel near the position clicked.\nThey will rearm at a nearby support vehicle."
]];

_param0 = ["Waypoint", countWPPlayer, {format[{wp%1}, _this]}, 0];
_param1 = ["Place Radius", 10, {format[{%1m}, 5*(_this)]}, 1];
aiOrders1 set [count aiOrders1, [
	"Satchel WP", [_param0, _param1], false, "\TZK_Scripts_4_0_5\Player\Order\SatchelWP.sqs",
	"Specops with satchels will place satchel around the selected WP.\nThey will rearm at a nearby support vehicle. \n
	Orders using waypoint(s) will follow the position change of waypoint(s). If wish to have fixed position, use 
	map-click-position commands."
]];

_param0 = ["Town", count towns, {format[{%1}, (towns select _this) select tdName]}, -1];
_param1 = ["Mine Radius", 10, {format[{%1m}, 5*(_this)]}, 6];
aiOrders1 set [count aiOrders1, [
	"Mine Town Flag", [_param0, _param1], false, "\TZK_Scripts_4_0_5\Player\Order\MineFlag.sqs",
	"Units with mines will place mines at flag."
]];

_param0 = ["Town", count towns, {format[{%1}, (towns select _this) select tdName]}, -1];
_param1 = ["Patrol Radius", 5, {format[{%1m}, 50*(_this+1)]}, 1];
aiOrders1 set [count aiOrders1, [
	"Hold Town", [_param0, _param1], false, "\TZK_Scripts_4_0_4\Player\Order\HoldTown.sqs",
	"Units will patrol town and take town back if it is lost."
]];

// aiOrders1 set [count aiOrders1, [
// 	"Clear Order", ...
// ]];

// aiOrders1 set [count aiOrders1, [
// 	"Disband", ...
// ]];


PlayerShootingUnits = [];
mutexSwitchSeat = false;

// "Entrench Tank", [], false, "\TZK_Scripts_4_0_4\Player\Order\EntrenchTank.sqs",
// "Ask your member build tank trench on his position. Vehicle must stop for about 30 seconds to wait trench 
// built. $1000 is charged."

call loadFile "impl\AI_Order_Player.sqf";
