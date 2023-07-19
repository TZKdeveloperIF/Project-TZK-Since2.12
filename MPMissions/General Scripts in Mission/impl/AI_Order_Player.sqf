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

_type = 0, _c = count aiOrders2; _found = false; while {_type < _c && not _found} do {
	if (aiOrders2 select _type select 0 == "Buy Units") then {
		_found = true;
		aiOrders2 select _type set [0, "Invalid"];
		aiOrders2 select _type select 1 resize 0;
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders2; _found = false; while {_type < _c && not _found} do {
	if (aiOrders2 select _type select 0 == "Build Struct") then {
		_found = true;
		aiOrders2 select _type set [0, "Invalid"];
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders2; _found = false; while {_type < _c && not _found} do {
	if (aiOrders2 select _type select 0 == "Set Target") then {
		_found = true;
		aiOrders2 select _type set [0, "Invalid"];
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders2; _found = false; while {_type < _c && not _found} do {
	if (aiOrders2 select _type select 0 == "Buy Workers") then {
		_found = true;
		aiOrders2 select _type set [0, "Invalid"];
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders2; _found = false; while {_type < _c && not _found} do {
	if (aiOrders2 select _type select 0 == "Join") then {
		_found = true;
		aiOrders2 select _type set [0, "Invalid"];
		aiOrders2 select _type select 1 resize 0;
	};
	_type = _type + 1;
};

comment "Redefine shoot target order param.";
	_type = 0, _c = count aiOrders2; _found = false; while {_type < _c && not _found} do {
		if (aiOrders2 select _type select 0 == "Shoot Target") then {
			_found = true;
			aiOrders2 select _type select 1 resize 0;
			aiOrders2 select _type set [2, true];
			aiOrders2 select _type set [3, "Player\Order\PreShootArea.sqs"];
		};
		_type = _type + 1;
	};

comment "Don't add new orders here. Add player units order via button now.";

comment "Post execute. Fix CHN images' indexes.";
	aiOrdersChnIngore2 = [];
	comment "Remove invalid item";
	comment "Don't forget to modify CHN Language setting as well";
	_type = 0, _c = count aiOrders2; _j = 0; while {_type < _c} do {
		if (aiOrders2 select _type select 0 != "Invalid") then {
			if (_j != _type) then {
				aiOrders2 set [_j, aiOrders2 select _type];
			};
			_j = _j + 1;
		} else {
			aiOrdersChnIngore2 set [count aiOrdersChnIngore2, _type];
		};
		_type = _type + 1;
	};
	aiOrders2 resize _j;