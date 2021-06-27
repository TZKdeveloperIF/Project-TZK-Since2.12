if bool_TZK_SEMod_Mode Then {
	_found = false; _i = 0; _c = count aiOrders2; while "_i < _c && !_found" do {
		if (aiOrders2 select _i select 0 == "Switch Magazine") Then "_found = true" Else "_i = _i + 1";
	};
	aiOrders2 select _i set [3, "Extra\SwitchMag_Player.sqs"];
};

_found = false; _i = 0; _c = count aiOrders2; while "_i < _c && !_found" do {
	if (aiOrders2 select _i select 0 == "Shoot Target") Then "_found = true" Else "_i = _i + 1";
};
aiOrders2 select _i set [1, [ ["Target", 10, "format[""Target_%1"", _this]", 0], ["Dispersion", 20, "format [""%1m"", 10*_this]", 0], ["Big Angle", 2, "format [""%1"", [{false}, {true}] select _this]", 0] ] ];

_found = false; _i = 0; _c = count aiOrders2; while "_i < _c && !_found" do {
	if (aiOrders2 select _i select 0 == "Buy Equipment") Then "_found = true" Else "_i = _i + 1";
};
aiOrders2 select _i set [1, [ ["Equipment", 10, "format [""cs%1"", _this]", 0], ["Overwrite RearmData", 2, "format [""%1"", [{false}, {true}] select _this]", 0] ] ];
aiOrders2 select _i set [3, "Player\Order\BuyEquipment.sqs"];
