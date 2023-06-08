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
_type = 0, _c = count aiOrders1; _found = false; while {_type < _c && not _found} do {
	if (aiOrders1 select _type select 0 == "Rearm & Heal") then {
		_found = true;
		aiOrders1 select _type set [3, "Player\Order\Support ForceRearm.sqs"];
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders1; _found = false; while {_type < _c && not _found} do {
	if (aiOrders1 select _type select 0 == "Clear Order") then {
		_found = true;
		aiOrders1 select _type set [3, "Player\Order\Clear.sqs"];
	};
	_type = _type + 1;
};
_type = 0, _c = count aiOrders1; _found = false; while {_type < _c && not _found} do {
	if (aiOrders1 select _type select 0 == "Disband") then {
		_found = true;
		aiOrders1 select _type set [3, "Player\Order\DisbandUnits.sqs"];
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
		aiOrders2 select _type set [3, "Player\Join\OrderJoin.sqs"];
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

comment "Add new orders";
	aiOrders2 set [count aiOrders2 - 1, [
		"Land Heli", [], false, "Player\Order\Land.sqs",
		"Ask helicopter drivers to land."
	]];
	comment "[Join] order should always be the last one";
	_param0 = ["Group", count callsigns, {format[{%1}, callsigns select _this]}, -1];
	aiOrders2 set [count aiOrders2, [
		"Join", [_param0], true, "\TZK_Scripts_4_0_4\Player\Order\Join.sqs",
		"Force selected units to join other group. Custom soldiers may perform abnormal when they go rearm after having 
		jointed other groups."
	]];


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