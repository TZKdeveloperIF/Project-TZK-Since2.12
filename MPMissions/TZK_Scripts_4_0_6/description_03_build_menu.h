class BuildMenu: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {BuildBackgroundWindow};
	objects[] = { };
	controls[] = {FactoryName, MoneyLabel, Money, AutoAlignWalls, BuildBG, Build, PlaceBuildBG, PlaceBuild, UndoBG, Undo, BuyWorkerBG, BuyWorker, Exit, StructListBG, StructList};

	class BuildBackgroundWindow: BackgroundWindow {
		x = 0.2;
		y = 0.0;
		w = 0.6;
		h = 0.7;
	};
	class FactoryName: Title {
		idc = IDC_TEXT_MENU_NAME;
		x = 0.225;
		y = 0.0;
	};
	class MoneyLabel: Label {
		x = 0.225;
		y = 0.07;
		idc = -1;
		w = 0.1;
		text = "Cash:";
	};
	class Money: DataText {
		idc = IDC_TEXT_PLAYER_MONEY;
		x = 0.325;
		y = 0.07;
		w = 0.15;
	};
	class AutoAlignWalls: Button {
		idc = IDC_BTN_ALIGN;
		x = 0.225;
		y = 0.12;
		text = "Align Walls";
		action = "alignWalls = !alignWalls";
	};
	class BuildBG: ButtonBG {
		idc = IDC_BTN_BUILD_BG;
		x = 0.225;
		y = 0.17;
	};
	class Build: Button {
		idc = IDC_BTN_BUILD;
		x = 0.225;
		y = 0.17;
		text = "Build";
		action = "buttonPressedBuild = true";
	};
	class PlaceBuildBG: ButtonBG {
		idc = IDC_BTN_BUILD_BG;
		x = 0.225;
		y = 0.22;
	};
	class PlaceBuild: Button {
		idc = IDC_BTN_BUILD;
		x = 0.225;
		y = 0.22;
		text = "Place & Build";
		action = "buttonPressedPlaceBuild = true";
	};
	class UndoBG: ButtonBG {
		idc = IDC_BTN_UNDO_BG;
		x = 0.225;
		y = 0.27;
	};
	class Undo: Button {
		idc = IDC_BTN_UNDO;
		x = 0.225;
		y = 0.27;
		text = "Undo";
		action = "0 exec localize {TZK_FUNC_PLAYER_UNDO_BUILD}";
	};
	class BuyWorkerBG: ButtonBG {
		idc = IDC_BTN_BUY_BG;
		x = 0.225;
		y = 0.32;
	};
	class BuyWorker: Button {
		idc = IDC_BTN_BUY;
		x = 0.225;
		y = 0.32;
		text = "Buy Worker";
		action = "buttonPressedBuy = true";
	};
	class Exit: Button {
		idc = -1;
		x = 0.225;
		y = 0.65;
		text = "Exit";
		action = "closeDialog 0";
	};
	class StructListBG: ListBoxBG {
		x = 0.5;
		y = 0.0;
		w = 0.35;
		h = 0.7;
	};
	class StructList: ListBox {
		idc = IDC_LB_1;
		x = 0.5;
		y = 0.0;
		w = 0.35;
		h = 0.7;
	};
};