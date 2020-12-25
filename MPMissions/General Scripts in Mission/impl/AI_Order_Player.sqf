if bool_TZK_SEMod_Mode Then {
	_found = false; _i = 0; _c = count aiOrders2; while "_i < _c && !_found" do {
		if (aiOrders2 select _i select 0 == "Switch Magazine") Then "_found = true" Else "_i = _i + 1";
	};
	aiOrders2 select _i set [3, "Extra\SwitchMag_Player.sqs"];
};
