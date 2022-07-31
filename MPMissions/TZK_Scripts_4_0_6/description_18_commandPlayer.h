class CommandPlayerDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {CommandPlayerDialogBackgroundWindow, Sub_BG_Light};
	objects[] = { };
	controls[] = { CommandPlayerTitle, GroupOrdersLabel, GroupOrders, SendOrder, OrderLabel, Order, Param0Label, Param0, Param1Label, Param1, Exit };

	class CommandPlayerDialogBackgroundWindow: BackgroundWindow {
		x = 0.39;
		y = 0.0;
		w = 0.61;
		h = 0.68;
	};
	class Sub_BG_Light: Light_BG_Window {
		x = 0.39;
		y = 0.0;
		w = 0.61;
		h = 0.68;
	};

	class GroupOrdersLabel: Label {
		x = 0.4;
		y = 0.02;
		text = "Group, Current Order";
	};
	class GroupOrders: ListBox {
		idc = IDC_PLAYER_ORDER_CURRENT;
		x = 0.4;
		y = 0.05;
		w = 0.6;
		h = 0.30
	};

	class OrderLabel: Label {
		idc = IDC_PLAYER_ORDER_ORDERLABEL;
		x = 0.4;
		y = 0.38;
		w = 0.1;
		text = "Order";
	};

	class SendOrder: Button {
		idc = IDC_PLAYER_ORDER_SENDORDER
		x = 0.5
		y = 0.33
		w = 0.1
		h = 0.03
		text = "Send"
		action = "btnSendOrder = true"
	};

	class Order: ListBox {
		idc = IDC_PLAYER_ORDER_ORDER
		x = 0.4;
		y = 0.41;
		w = 0.2;
		h = 10*0.03;
	};

	class Param0Label: Label {
		idc = IDC_PLAYER_ORDER_PAR0LABEL
		x = 0.6;
		y = 0.38;
		w = 0.2;
		text = "Param0";
	};
	class Param0: ListBox {
		idc = IDC_PLAYER_ORDER_PAR0
		x = 0.6;
		y = 0.41;
		w = 0.2;
		h = 10*0.03;
	};
	class Param1Label: Label {
		idc = IDC_PLAYER_ORDER_PAR1LABEL
		x = 0.8;
		y = 0.38;
		w = 0.2;
		text = "Param1";
	};
	class Param1: ListBox {
		idc = IDC_PLAYER_ORDER_PAR1
		x = 0.8;
		y = 0.41;
		w = 0.2;
		h = 10*0.03;
	};

	class Exit: Button {
		x = 0.95
		y = 0.0
		w = 0.05
		h = 0.03
		text = "Exit"
		action = "closeDialog 0"
	};

};