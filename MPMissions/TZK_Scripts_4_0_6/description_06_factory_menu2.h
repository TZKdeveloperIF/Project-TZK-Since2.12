class FactoryMenu2: FactoryMenu {
	controls[] = {
		FactoryName, FactoryStatus, Money
		, ShowLabel, ShowInfBG, ShowInf, ShowVehBG, ShowVeh, ShowBothBG, ShowBoth
		, GroupListLabel, GroupListBG, GroupList, FactoryListLabel, FactoryListBG, FactoryList
		, BuyBG, Buy, Buy4BG, Buy4, BuyFullBG, BuyFull, Buy3BG, Buy3, Buy5BG, Buy5
		, DriverSelected, Driver, GunnerSelected, Gunner, CommanderSelected, Commander, BuyMannedBG, BuyManned
		, UnitListBG, UnitList, QueueBG, QueueLabel, QueueCancel, QueueClear, QueueListBG, QueueList, Exit
		, EquipBg, EquipLabel, EquipListBG, EquipList
	};

	class EquipBg: BackgroundWindow {
		idc = IDC_BG + 16;
		x = 0.50;
		y = 0.65;
		w = qx - 0.50;
		h = 1 - 0.65;
	};
	class EquipLabel: Label {
		idc = IDC_TEXT + 6;
		x = 0.50;
		y = 0.65;
		w = 0.1;
		text = "Equipment";
	};
	class EquipListBG: ListBoxBG {
		idc = IDC_BG + 17;
		x = 0.50;
		y = 0.65 + 0.04;
		w = qx - 0.50;
		h = 1 - (0.65 + 0.04);
	};
	class EquipList: ListBox {
		idc = IDC_LB + 4;
		x = 0.50;
		y = 0.65 + 0.04;
		w = qx - 0.50;
		h = 1 - (0.65 + 0.04);
	};
};