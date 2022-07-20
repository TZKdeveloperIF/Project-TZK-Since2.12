class LeaderboardDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {Sub_BG, Sub_BG_Light};
	objects[] = { };
	controls[] = {LeaderboardTitle, GroupLabel, Group, Side, InfantryLabel, Infantry, InfantrySide, VehicleLabel, Vehicle, VehicleSide, MHQLabel, MHQ, MHQSide, StructLabel, Struct, StructSide, TownLabel, Town, TownSide, TotalLabel, Total, TotalSide, Exit};

	class Sub_BG: BackgroundWindow {
		x = 0.1;
		y = 0.0;
		w = 0.8;
		h = 0.66;
	};
	class Sub_BG_Light: Light_BG_Window {
		x = 0.1;
		y = 0.0;
		w = 0.8;
		h = 0.66;
	};


	class LeaderboardTitle: Title {
		style = ST_CENTER;
		x = 0.1;
		y = 0.0;
		w = 0.8;
		text = "Leaderboard";
 };
	class GroupLabel: Label {
		x = 0.1;
		y = 0.03;
		w = 0.2;
		text = "Group";
 };
	class Group: ListBox {
		idc = IDC_LB_GROUP;
		x = 0.1;
		y = 0.06;
		w = 0.2;
		h = 0.54;
	};
	class Side: ListBox {
		idc = IDC_LB_SIDE;
		x = 0.1;
		y = 0.60;
		w = 0.2;
		h = 0.06;
	};
	class InfantryLabel: Label {
		x = 0.3;
		y = 0.03;
		w = 0.1;
		text = "Inf";
	};
	class Infantry: ListBox {
		idc = IDC_LB_INFANTRY;
		x = 0.3;
		y = 0.06;
		w = 0.1;
		h = 0.54;
	};
	class InfantrySide: ListBox {
		idc = IDC_LB_INFANTRYSIDE;
		x = 0.3;
		y = 0.60;
		w = 0.1;
		h = 0.06;
	};
	class VehicleLabel: Label {
		x = 0.4;
		y = 0.03;
		w = 0.1;
		text = "Vehicle";
	};
	class Vehicle: ListBox {
		idc = IDC_LB_VEHICLE;
		x = 0.4;
		y = 0.06;
		w = 0.1;
		h = 0.54;
	};
	class VehicleSide: ListBox {
		idc = IDC_LB_VEHICLESIDE;
		x = 0.4;
		y = 0.60;
		w = 0.1;
		h = 0.06;
	};
	class MHQLabel: Label {
		x = 0.5;
		y = 0.03;
		w = 0.1;
		text = "MHQ";
	};
	class MHQ: ListBox {
		idc = IDC_LB_MHQ;
		x = 0.5;
		y = 0.06;
		w = 0.1;
		h = 0.54;
	};
	class MHQSide: ListBox {
		idc = IDC_LB_MHQSIDE;
		x = 0.5;
		y = 0.60;
		w = 0.1;
		h = 0.06;
	};
	class StructLabel: Label {
		x = 0.6;
		y = 0.03;
		w = 0.1;
		text = "Struct";
	};
	class Struct: ListBox {
		idc = IDC_LB_STRUCT;
		x = 0.6;
		y = 0.06;
		w = 0.1;
		h = 0.54;
	};
	class StructSide: ListBox {
		idc = IDC_LB_STRUCTSIDE;
		x = 0.6;
		y = 0.60;
		w = 0.1;
		h = 0.06;
	};
	class TownLabel: Label {
		x = 0.7;
		y = 0.03;
		w = 0.1;
		text = "Town";
	};
	class Town: ListBox {
		idc = IDC_LB_TOWN;
		x = 0.7;
		y = 0.06;
		w = 0.1;
		h = 0.54;
	};
	class TownSide: ListBox {
		idc = IDC_LB_TOWNSIDE;
		x = 0.7;
		y = 0.60;
		w = 0.1;
		h = 0.06;
	};
	class TotalLabel: Label {
		x = 0.8;
		y = 0.03;
		w = 0.1;
		text = "Total";
	};
	class Total: ListBox {
		idc = IDC_LB_TOTAL;
		x = 0.8;
		y = 0.06;
		w = 0.1;
		h = 0.54;
	};
	class TotalSide: ListBox {
		idc = IDC_LB_TOTALSIDE;
		x = 0.8;
		y = 0.60;
		w = 0.1;
		h = 0.06;
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