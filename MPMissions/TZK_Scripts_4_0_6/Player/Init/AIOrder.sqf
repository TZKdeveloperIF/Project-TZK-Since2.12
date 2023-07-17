comment {
	AI ORDERS;
	aiOrders format: [name, [param 0, param 1, ...], subdlg or units exec only 1 but not each script, script, description];
	aiOrders param# format: [nameParam, countParams, funcToText, default]
};

playerOrderID = []; _i = 0; while {_i < 13} do {playerOrderID set [_i, 0]; _i = _i + 1};
orderCheck = {_id < playerOrderID select _uid}; mutexUnitOrder = false;

comment { Use 2 matrixes since TZK_4.0.0.0 };
aiOrders1 = []; aiOrders2 = []; lastOrder1 = -1; lastOrder2 = -1; lastOrderList = -1;

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


BuyFactoryDefs = ["Barrack", "Light", "Ship", "Heavy", "Air"];
_param0 = ["Factory Type", count BuyFactoryDefs, "BuyFactoryDefs select _this", 0];
aiOrders2 set [count aiOrders2, [
	"Buy Units", [_param0], false, "Player\Order\BuyUnits.sqs",
	"Ask your group member get close to the factory out of CC range and help buy units."
]];

_param0 = ["Structure Type", count structDefs, {format[{%1}, structDefs select _this select sdName]}, 0];
_param1 = [
	"Angle",
	24,
	{format [{%1%2}, 15*(_this), [
		[" (N)", " (NE)", " (E)", " (SE)", " (S)", " (SW)", " (W)", " (NW)"] select ((_this - (_this mod 3))/3), 
		""
	] select (_this mod 3 != 0)]}, 
	0
];
aiOrders2 set [count aiOrders2, [
	"Build Struct", [_param0, _param1], false, "\TZK_Scripts_4_0_4\Player\Order\BuildStructure.sqs",
	"Ask your group member get close to the destination and help build structure (the position must close enough to 
	MHQ\MCV\Support Vehicle)."
]];

_param0 = ["Workers Num", 10, {format[{%1}, 1+_this]}, 0];
aiOrders2 set [count aiOrders2, [
	"Buy Workers", [_param0], false, "\TZK_Scripts_4_0_4\Player\Order\BuyWorkers.sqs",
	"Ask your group member get close to MHQ (MCV not support yet) to buy workers. Each members will buy workers 
	independently if you send order to multiple units."
]];

_param0 = ["Target", 20, {format[{Target%2_%1}, _this%10, [{P},{S}] select (_this > 9)]}, 0];
_param1 = ["Set", 2, "[{Set},{Clear}] select _this", 0];
aiOrders2 set [count aiOrders2, [
	"Set Target", [_param0, _param1], true, "\TZK_Scripts_4_0_4\Player\Order\SetTarget.sqs",
	"Set target at clicking position. To clear a target, select 'Clear' item in second parameter listbox.\n\n
	Only Commander is allowed to adjust ""TargetS"" markers, which are for AI groups' order."
]];

_param0 = ["Target", 10, {format[{Target_%1}, _this]}, 0];
_param1 = ["Dispersion", 20, {format [{%1m}, 10*_this]}, 0];
_param2 = ["Big Angle", 2, {format [{%1}, [{false}, {true}] select _this]}, 0];
aiOrders2 set [count aiOrders2, [
	"Shoot Target", [_param0, _param1, _param2], false, "Player\Order\ShootTarget.sqs",
	"Ask your group member to shoot at selected target. Order is valid to tank, howitzer vehicle, mortar structure and 
	howitzer structure.\n\nThere exists ""minimum"" disperation radius for different kinds of shooting vehicle. 0 m for 
	tanks, 10 m for M119 105mm Howitzer, 30 m for D30A 122mm Howitzer, 40m for 155mm M109/PLZ05 Howitzer and M270 MLRS, 
	60 m for Mortar and T.O.S-1. If less disperation selected, the minimum value will replace it as actual value."
]];
PlayerShootingUnits = [];

_param0 = ["Seat", 3, {["Driver", "Gunner", "Cargo"] select _this}, 0];
aiOrders2 set [count aiOrders2, [
	"Switch Seat", [_param0], false, "\TZK_Scripts_4_0_4\Player\Order\SwitchSeat.sqs",
	"Ask your group member switch the driver/gunner/cargo seat. The vehicle and sitting crew must local to your client."
]];
mutexSwitchSeat = false;

_param0 = ["InitSpeed", count ArtilleryMagazineSpeedList, {format [{%1 m/s}, ArtilleryMagazineSpeedList select _this]}, 0];
_param1 = ["Curved", 2, {["False", "True"] select _this}, 1];
_script = localize {TZK_ORDER_PLAYER_SWITCH_MAG};
if bool_TZK_SEMod_Mode then {_script = "Extra\SwitchMag_Player.sqs"};
aiOrders2 set [count aiOrders2, [
	"Switch Magazine", [_param0, _param1], false, _script,
	"Switch the magazine of artillery vehicle. For mortar structure, you should assign whether use curved magazine or not.\n
	Using curved magazine can make AI shoot curved trajectory, but AI won't shoot it directly when enemy insight. AI will 
	shoot non-curved magazine to spotted enemy, but the trajectory won't be so curved."
]];

_param0 = ["Vector", 3, {["Upright", "Sloped"] select _this}, 0];
aiOrders2 set [count aiOrders2, [
	"Adjust VectorUp", [_param0], false, "\TZK_Scripts_4_0_4\Player\Order\ResetUp.sqs",
	"Change the VectorUp (normal vector, or say the down-up direction) of defending structure. Not available for 1.99 version."
]];

_param0 = ["Equipment", 10, {format [{cs%1}, _this]}, 0];
_param1 = ["Overwrite RearmData", 2, {format [{%1}, [{false}, {true}] select _this]}, 0];
aiOrders2 set [count aiOrders2, [
	"Buy Equipment", [_param0, _param1], false, "Player\Order\BuyEquipment.sqs",
	"Ask your member go to buy custom equipment.\n\nThe template will be loaded from your Custom Soldier records.\n\n
	If the soldier is not a saboteur, extra $50 is charged."
]];

if bool_TZK_SEMod_Mode then {
	aiOrders2 set [count aiOrders2, [
		"Entrench Tank", [], false, "\TZK_Scripts_4_0_4\Player\Order\EntrenchTank.sqs",
		"Ask your member build tank trench on his position. Vehicle must stop for about 30 seconds to wait trench 
		built. $1000 is charged."
	]];
};

_param0 = ["Group", count callsigns, {format[{%1}, callsigns select _this]}, -1];
aiOrders2 set [count aiOrders2, [
	"Join", [_param0], true, "\TZK_Scripts_4_0_4\Player\Order\Join.sqs",
	"Force selected units to join other group. Custom soldiers may perform abnormal when they go rearm after having 
	jointed other groups."
]];

call loadFile "impl\AI_Order_Player.sqf";
