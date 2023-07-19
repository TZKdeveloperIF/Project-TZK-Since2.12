comment "Invalidate repair, rearm, board, move, clear order, disband.";
{
	_entry = aiOrders1 select _x;
	_entry set [0, ""];
	_entry set [2, true];
	_entry set [3, "empty.sqs"];
	_entry set [4, ""];
} forEach [0,1,2,3, 17,18];

comment "Invalidate global variable 'BuyFactoryDefs'";
BuyFactoryDefs resize 0; BuyFactoryDefs = _nil;

comment "Invalidate globalVariable 'lastOrder2'";
lastOrder2 = _nil;

comment "Completely release 'aiOrders2'";
{
	_entry = _x;
	_x set [0, 0];
	_x select 1 resize 0;
	_x set [3, 0];
	_x set [4, 0];
} forEach aiOrders2;
aiOrders2 resize 0;
aiOrders2 = _nil;


comment "Redirect order scripts.";

_type = 0, _c = count aiOrders1; _found = false; while {_type < _c && not _found} do {
	if (aiOrders1 select _type select 0 == "Mine Town Flag") then {
		_found = true;
		aiOrders1 select _type set [3, "Player\Order\MineFlag.sqs"];
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders1; _found = false; while {_type < _c && not _found} do {
	if (aiOrders1 select _type select 0 == "Mine Pos") then {
		_found = true;
		aiOrders1 select _type set [3, "Player\Order\MinePos.sqs"];
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders1; _found = false; while {_type < _c && not _found} do {
	if (aiOrders1 select _type select 0 == "Mine WP") then {
		_found = true;
		aiOrders1 select _type set [3, "Player\Order\MineWP.sqs"];
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders1; _found = false; while {_type < _c && not _found} do {
	if (aiOrders1 select _type select 0 == "Mine WP-WP") then {
		_found = true;
		aiOrders1 select _type set [3, "Player\Order\MineWPtoWP.sqs"];
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders1; _found = false; while {_type < _c && not _found} do {
	if (aiOrders1 select _type select 0 == "Satchel Pos") then {
		_found = true;
		aiOrders1 select _type set [3, "Player\Order\SatchelPos.sqs"];
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders1; _found = false; while {_type < _c && not _found} do {
	if (aiOrders1 select _type select 0 == "Satchel Wp") then {
		_found = true;
		aiOrders1 select _type set [3, "Player\Order\SatchelWP.sqs"];
	};
	_type = _type + 1;
};