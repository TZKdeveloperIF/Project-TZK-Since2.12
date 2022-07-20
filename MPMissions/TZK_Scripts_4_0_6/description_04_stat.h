class StatsDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {StatsBackgroundWindow};
	objects[] = { };
	controls[] = {StatsTitle, WestLabel, MoneyWestLabel, MoneyWest, StructsWestLabel, StructsWest, UnitsWestLabel, UnitsWest, EastLabel, MoneyEastLabel, MoneyEast, StructsEastLabel, StructsEast, UnitsEastLabel, UnitsEast, Exit};

	class StatsBackgroundWindow: BackgroundWindow {
		x = 0.1;
		y = 0.0;
		w = 0.8;
		h = 0.66;
	};

	class StatsTitle: Title {
		style = ST_CENTER;
		x = 0.1;
		y = 0.0;
		w = 0.8;
		text = "Statistics";
	};

	class WestLabel: Label {
		style = ST_CENTER;
		x = 0.11;
		y = 0.03;
		w = 0.38;
		h = 0.03;
	colorText[] = {0,0,1,1};
	colorBackground[] = {0.6,0.6,0.6,1};
	text = "WEST";
	};

	class MoneyWestLabel: Label {
		x = 0.11;
		y = 0.07;
		w = 0.38;
		h = 0.03;
		text = "$ Total/Spent (at last town income)";
	};
	class MoneyWest: Text {
		idc = IDC_TEXT_MONEYWEST;
		x = 0.11;
		y = 0.1;
		w = 0.38;
		colorBackground[] = COLOR_DATA_BG;
	};

	class StructsWestLabel: Label {
		x = 0.11;
		y = 0.14;
		w = 0.38;
		text = "Structures Built";
	};
	class StructsWest: ListBox {
		idc = IDC_LB_STRUCTSWEST;
		x = 0.11;
		y = 0.17;
		w = 0.19;
		h = 0.48;
		colorText[] = {0.2,0.2,0.2,1};
		font = FontM;
		sizeEx = 0.02;
		rowHeight = 0.025;
	};
	class UnitsWestLabel: Label {
		x = 0.30;
		y = 0.14;
		w = 0.38;
		text = "Units Built";
	};
	class UnitsWest: ListBox {
		idc = IDC_LB_UNITSWEST;
		x = 0.30;
		y = 0.17;
		w = 0.19;
		h = 0.48;
		colorText[] = {0.2,0.2,0.2,1};
		font = FontM;
		sizeEx = 0.02;
		rowHeight = 0.025;
	};
	class EastLabel: Label {
		style = ST_CENTER;
		x = 0.51;
		y = 0.03;
		w = 0.38;
		h = 0.03;
		colorText[] = {1,0,0,1};
		colorBackground[] = {0.6,0.6,0.6,1};
		text = "EAST";
	};

	class MoneyEastLabel: Label {
		x = 0.51;
		y = 0.07;
		w = 0.38;
		h = 0.03;
		text = "$ Total/Spent (at last town income)";
	};
	class MoneyEast: Text {
		idc = IDC_TEXT_MONEYEAST;
		x = 0.51;
		y = 0.1;
		w = 0.38;
		colorBackground[] = COLOR_DATA_BG;
	};

	class StructsEastLabel: Label {
		x = 0.51;
		y = 0.14;
		w = 0.38;
		text = "Structures Built";
	};
	class StructsEast: ListBox {
		idc = IDC_LB_STRUCTSEAST;
		x = 0.51;
		y = 0.17;
		w = 0.19;
		h = 0.48;
		colorText[] = {0.2,0.2,0.2,1};
		font = FontM;
		sizeEx = 0.02;
		rowHeight = 0.025;
	};
	class UnitsEastLabel: Label {
		x = 0.70;
		y = 0.14;
		w = 0.38;
		text = "Units Built";
	};
	class UnitsEast: ListBox {
		idc = IDC_LB_UNITSEAST;
		x = 0.70;
		y = 0.17;
		w = 0.19;
		h = 0.48;
		colorText[] = {0.2,0.2,0.2,1};
		font = FontM;
		sizeEx = 0.02;
		rowHeight = 0.025;
	};

	class Exit: Button {
		x = 0.8;
		y = 0.0;
		w = 0.1;
		h = 0.03;
		text = "Exit";
		action = "closeDialog 0";
	};
};