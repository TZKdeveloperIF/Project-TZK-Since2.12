#define col1 0
#define col2 0.35
#define col3 0.65
class FactoryMenu: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {FactoryBackgroundWindow};
	objects[] = { };
	controls[] = {FactoryName, FactoryStatus, Money, ShowLabel, ShowInfBG, ShowInf, ShowVehBG, ShowVeh, ShowBothBG, ShowBoth, GroupListLabel, GroupListBG, GroupList, FactoryListLabel, FactoryListBG, FactoryList, BuyBG, Buy, Buy4BG, Buy4, BuyFullBG, BuyFull, Buy3BG, Buy3, Buy5BG, Buy5, DriverSelected, Driver, GunnerSelected, Gunner, CommanderSelected, Commander, BuyMannedBG, BuyManned, UnitListBG, UnitList, QueueBG, QueueLabel, QueueCancel, QueueClear, QueueListBG, QueueList, Exit };

	class FactoryBackgroundWindow: BackgroundWindow {
		x = col2;
		y = 0.0;
		w = 1 - col2;
		h = 0.65;
	};
	class GroupListLabel: Label {
		idc = IDC_TEXT+1;
		x = col1;
		y = 0.21;
		w = col2 - col1;
		h = 0.04;
		colorBackground[] = COLOR_MENU_BG;
		text = "Leader Group Size Money";
	};
	class GroupListBG: ListBoxBG {
		idc = IDC_BG+1;
		x = col1;
		y = 0.25;
		w = col2;
		h = 0.40;
	};
	class GroupList: ListBox {
		idc = IDC_LB+1;
		x = col1;
		y = 0.25;
		w = col2;
		h = 0.40;
	};
	class FactoryName: Title {
		idc = IDC_TITLE;
		x = col2 + 0.025;
		y = 0.0;
	};

	class Exit: Button {
		x = col3 - 0.05;
		y = 0.0;
		w = 0.05;
		text = "Exit";
		action = "closeDialog 0";
	};

	class FactoryStatus: Label {
		idc = IDC_TEXT+2;
		x = col2 + 0.025;
		y = 0.05;
		colorText[] = {1,0.1,0.1,1};
		text = "";
	};
	class Money: DataText {
		idc = IDC_TEXT+3;
		style = ST_RIGHT;
		x = col2 + 0.15;
		y = 0.05;
		w = 0.15 - 0.025;
	};

	class ShowLabel: Label {
		idc = IDC_TEXT+4;
		x = col2 + 0.025;
		y = 0.10;
		text = "Show";
	};

	class ShowInfBG: SelectedBG {
		idc = IDC_BG+2;
		x = col2 + 0.025;
		y = 0.14;
		w = 0.09
		text = "";
	};
	class ShowInf: Button {
		idc = IDC_BTN+1;
		x = col2 + 0.025;
		y = 0.14;
		w = 0.09
		text = "Infantry";
		action = "nShow = 0";
	};

	class ShowVehBG: SelectedBG {
		idc = IDC_BG+3;
		x = col2 + 0.025 + 0.09;
		y = 0.14;
		w = 0.09
		text = "";
	};
	class ShowVeh: Button {
		idc = IDC_BTN+2;
		x = col2 + 0.025 + 0.09;
		y = 0.14;
		w = 0.09
		text = "Vehicles";
		action = "nShow = 1";
	};

	class ShowBothBG: SelectedBG {
		idc = IDC_BG+4;
		x = col2 + 0.025 + 2*0.09;
		y = 0.14;
		w = 0.07
		text = "";
	};
	class ShowBoth: Button {
		idc = IDC_BTN+3;
		x = col2 + 0.025 + 2*0.09;
		y = 0.14;
		w = 0.07
		text = "Both";
		action = "nShow = 2";
	};

	class BuyBG: ButtonBG {
		idc = IDC_BG+6;
		x = col2 + 0.025;
		y = 0.25;
	};
	class Buy: Button {
		idc = IDC_BTN+5;
		x = col2 + 0.025;
		y = 0.25;
		text = "Buy";
		action = "bFactoryBuy = true";
	};
	class Buy4BG: ButtonBG {
		idc = IDC_BG+12;
		x = col2 + 0.11;
		y = 0.31;
		w = 0.08;
	};
	class Buy4: Button {
		idc = IDC_BTN+11;
		x = col2 + 0.11;
		y = 0.31;
		w = 0.08;
		text = "Buy 4";
		action = "bFactoryBuy = true; bFactoryBuy4 = true";
	};
	class BuyFullBG: ButtonBG {
		idc = IDC_BG+13;
		x = col2 + 0.025;
		y = 0.37;
	};
	class BuyFull: Button {
		idc = IDC_BTN+12;
		x = col2 + 0.025;
		y = 0.37;
		text = "Buy Full";
		action = "bFactoryBuy = true; bFactoryBuyFull = true";
	};
	class Buy3BG: ButtonBG {
		idc = IDC_BG+14;
		x = col2 + 0.025;
		y = 0.31;
		w = 0.08;
	};
	class Buy3: Button {
		idc = IDC_BTN+13;
		x = col2 + 0.025;
		y = 0.31;
		w = 0.08;
		text = "Buy 3";
		action = "bFactoryBuy = true; bFactoryBuy3 = true";
	};
	class Buy5BG: ButtonBG {
		idc = IDC_BG+15;
		x = col2 + 0.195;
		y = 0.31;
		w = 0.08;
	};
	class Buy5: Button {
		idc = IDC_BTN+14;
		x = col2 + 0.195;
		y = 0.31;
		w = 0.08;
		text = "Buy 5";
		action = "bFactoryBuy = true; bFactoryBuy5 = true";
	};

	class DriverSelected: SelectedBG {
		idc = IDC_BG+7;
		x = col2 + 0.025;
		y = 0.31;
		w = 0.08
		text = "";
	};
	class Driver: Button {
		idc = IDC_BTN+6;
		x = col2 + 0.025;
		y = 0.31;
		w = 0.08
		text = "Driver";
		action = "bMannedDriver = !bMannedDriver";
	};
	class GunnerSelected: SelectedBG {
		idc = IDC_BG+8;
		x = col2 + 0.025 + 1*0.08;
		y = 0.31;
		w = 0.08
		text = "";
	};
	class Gunner: Button {
		idc = IDC_BTN+7;
		x = col2 + 0.025 + 1*0.08;
		y = 0.31;
		w = 0.08
		text = "Gunner";
		action = "bMannedGunner = !bMannedGunner";
	};
	class CommanderSelected: SelectedBG {
		idc = IDC_BG+9;
		x = col2 + 0.025 + 2*0.08;
		y = 0.31;
		w = 0.09
		text = "";
	};
	class Commander: Button {
		idc = IDC_BTN+8;
		x = col2 + 0.025 + 2*0.08;
		y = 0.31;
		w = 0.09
		text = "Commander";
		action = "bMannedCommander = !bMannedCommander";
	};
	class BuyMannedBG: ButtonBG {
		idc = IDC_BG+10;
		x = col2 + 0.025;
		y = 0.35;
	};
	class BuyManned: Button {
		idc = IDC_BTN+9;
		x = col2 + 0.025;
		y = 0.35;
		text = "Buy Manned";
		action = "bFactoryBuyManned = true";
	};
	class FactoryListLabel: Label {
		idc = IDC_TEXT+5;
		x = col2;
		y = 0.41;
		w = 0.3;
		text = "";
	};
	class FactoryListBG: ListBoxBG {
		idc = IDC_BG+11;
		x = col2;
		y = 0.45;
		w = 0.3;
		h = 0.2;
	};
	class FactoryList: ListBox {
		idc = IDC_LB+10;
		x = col2;
		y = 0.45;
		w = 0.3;
		h = 0.2;
	};

	class UnitListBG: ListBoxBG {
		x = col3;
		y = 0.0;
		w = 1 - col3;
		h = 0.65;
	};
	class UnitList: ListBox {
		idc = IDC_LB+2;
		x = col3;
		y = 0.0;
		w = 1 - col3;
		h = 0.65;
	};

  #define qx 0.75
  #define qy 0.65
	class QueueBG: BackgroundWindow {
		x = qx;
		y = qy;
		w = 1-qx;
		h = 1-qy;
	};
	class QueueLabel: Label {
		x = qx;
		y = qy;
		w = 0.1;
		text = "Queue";
	};
	class QueueCancel: Button {
		idc = IDC_BTN+10;
		x = 1-0.08;
		y = qy;
		w = 0.08
		text = "Cancel";
		action = "bCancel = true";
	};
	class QueueClear: Button {
		idc = IDC_BTN+10;
		x = 1-0.16;
		y = qy;
		w = 0.08
		text = "Clear";
		action = "bClear = true";
	};
	class QueueListBG: ListBoxBG {
		x = qx;
		y = qy + 0.04;
		w = 1 - qx;
		h = 1 - (qy+0.04);
	};
	class QueueList: ListBox {
		idc = IDC_LB+3;
		x = qx;
		y = qy + 0.04;
		w = 1 - qx;
		h = 1 - (qy+0.04);
	};
};