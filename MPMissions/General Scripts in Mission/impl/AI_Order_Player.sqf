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