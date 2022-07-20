class TemporaryAIOrderDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {Sub_BG, Sub_BG_Light};
	objects[] = {};
	controls[] = {
		CommandAITitle, GroupOrdersLabel, GroupOrders, SendOrder, OrderLabel, TemporaryOrder, Param0Label, Param0, Param1Label, Param1, Param2Label, Param2, Param3Label, Param3, Param4Label, Param4, Exit, ReturnToAIOrder
		,  StatusLabel0, StatusLabel1, StatusLabel2, StatusLabel3, StatusLabel4, StatusLabel5, StatusParam0, StatusParam1, StatusParam2, StatusParam3, StatusParam4, StatusParam5
		,  StatusLevelLabel, StatusItemLabel, StatusLevel, StatusItem, btnStatusSet, btnStatusClear
	};
	
	class Sub_BG: BackgroundWindow {
		x = 0.0;
		y = 0.0;
		w = 1.0;
		h = 0.71;
		colorBackground[] = {0.42,0.4,0.4,0.7}; // 4_0_6_Update
	};
	class Sub_BG_Light: Light_BG_Window {
		x = 0.0;
		y = 0.0;
		w = 1.0;
		h = 0.71;
		colorBackground[] = {0.15,0.1,0.05,1.0}; // 4_0_6_Update
	};

	class CommandAITitle: Title {
		style = ST_CENTER;
		x = 0.0;
		y = 0.0;
		w = 1.0;
		text = "Concurrent AI Orders";
	};
	class GroupOrdersLabel: Label {
		x = 0.0;
		y = 0.02;
		w = 0.4;
		text = "Group, Last Concurrent Order";
	};
	class GroupOrders: ListBox {
		idc = IDC+0;
		x = 0.0;
		y = 0.05;
	//	w = 1.0; // 4_0_6_Update
		w = 0.4;
		h = 0.30
		SizeEx = 0.018; // 4_0_6_Update
	};
	class OrderLabel: Label {
		SizeEx = 0.021;
		idc = IDC+1;
		x = 0.0;
		y = 0.38;
		w = 0.1;
		text = "Order";
	};
	class SendOrder: Button {
		idc = IDC+2
		x = 0.1
		y = 0.38
		w = 0.1
		h = 0.03
		text = "Send"
		action = "btnSendOrder = true"
	};
	class TemporaryOrder: ListBox {
		SizeEx = 0.021;
		idc = IDC+3
		x = 0.0;
		y = 0.41;
		w = 0.2;
		h = 10*0.03;
	};

	class Param0Label: Label {
		SizeEx = 0.021;
		idc = IDC + 10;
		x = 0.2 + 0.16 * 0;
		y = 0.38;
		w = 0.16;
		text = "Param0";
	};
	class Param0: ListBox {
		SizeEx = 0.021;
		idc = IDC + 20;
		x = 0.2 + 0.16 * 0;
		y = 0.41;
		w = 0.16;
		h = 10*0.03;
	};
	class Param1Label: Param0Label {
		idc = IDC + 11;
		x = 0.2 + 0.16 * 1;
		text = "Param1";
	};
	class Param1: Param0 {
		idc = IDC + 21;
		x = 0.2 + 0.16 * 1;
	};
	class Param2Label: Param0Label {
		SizeEx = 0.021;
		idc = IDC + 12;
		x = 0.2 + 0.16 * 2;
		text = "Param2";
	};
	class Param2: Param0 {
		idc = IDC + 22;
		x = 0.2 + 0.16 * 2;
	};
	class Param3Label: Param0Label {
		idc = IDC + 13;
		x = 0.2 + 0.16 * 3;
		text = "Param3";
	};
	class Param3: Param0 {
		idc = IDC + 23;
		x = 0.2 + 0.16 * 3;
	};
	class Param4Label: Param0Label {
		idc = IDC + 14;
		x = 0.2 + 0.16 * 4;
		text = "Param4";
	};
	class Param4: Param0 {
		idc = IDC + 24;
		x = 0.2 + 0.16 * 4;
	};

	class Exit: Button {
		x = 0.95
		y = 0.0
		w = 0.05
		h = 0.03
		text = "Exit"
		action = "closeDialog 0"
	};
	class ReturnToAIOrder: Button {
		x = 0.65
		y = 0.0
		w = 0.3
		h = 0.03
		text = "Return To AI Groups Order"
		action = "btnReturn = true"
	};

	class StatusLabel0: Label {
		SizeEx = 0.021;
		idc = IDC + 900 + 0 + 10 * 0;
		x = 0.6 + 0.2 * 0;
		y = 0.05;
		w = 0.2;
		h = 0.03;
		text = "Label";
	};
	class StatusLabel1: StatusLabel0 {
		idc = IDC + 900 + 1 + 10 * 0;
		x = 0.6 + 0.2 * 1;
	};
	class StatusLabel2: StatusLabel0 {
		idc = IDC + 900 + 2 + 10 * 0;
		x = 0.6 + 0.2 * 0;
		y = 0.05 + 0.06 * 1;
	};
	class StatusLabel3: StatusLabel0 {
		idc = IDC + 900 + 3 + 10 * 0;
		x = 0.6 + 0.2 * 1;
		y = 0.05 + 0.06 * 1;
	};
	class StatusLabel4: StatusLabel0 {
		idc = IDC + 900 + 4 + 10 * 0;
		x = 0.6 + 0.2 * 0;
		y = 0.05 + 0.06 * 2;
	};
	class StatusLabel5: StatusLabel0 {
		idc = IDC + 900 + 5 + 10 * 0;
		x = 0.6 + 0.2 * 1;
		y = 0.05 + 0.06 * 2;
	};
	class StatusParam0: ComboBox {
		colortext[] = {0.22,0.2,0.3,1};
		idc = IDC + 1000 + 0;
		SizeEx = 0.021;
		x = 0.6 + 0.2 * 0;
		y = 0.05 + 0.03;
		w = 0.2;
		h = 0.03;
	};
	class StatusParam1: StatusParam0 {
		idc = IDC + 1000 + 1;
		x = 0.6 + 0.2 * 1;
	};
	class StatusParam2: StatusParam0 {
		idc = IDC + 1000 + 2;
		x = 0.6 + 0.2 * 0;
		y = 0.05 + 0.03 + 0.06 * 1;
	};
	class StatusParam3: StatusParam0 {
		idc = IDC + 1000 + 3;
		x = 0.6 + 0.2 * 1;
		y = 0.05 + 0.03 + 0.06 * 1;
	};
	class StatusParam4: StatusParam0 {
		idc = IDC + 1000 + 4;
		x = 0.6 + 0.2 * 0;
		y = 0.05 + 0.03 + 0.06 * 2;
	};
	class StatusParam5: StatusParam0 {
		idc = IDC + 1000 + 5;
		x = 0.6 + 0.2 * 1;
		y = 0.05 + 0.03 + 0.06 * 2;
	};
	
	class StatusLevelLabel: Label {
		SizeEx = 0.021;
		idc = IDC + 800 + 0 + 10 * 0;
		x = 0.4;
		y = 0.05 + 0.00 + 0.06 * 0;
		w = 0.2;
		h = 0.03;
		text = "Status Level";
	};
	class StatusItemLabel: StatusLevelLabel {
		idc = IDC + 800 + 1 + 10 * 0;
		y = 0.05 + 0.00 + 0.06 * 1;
		text = "Status Item";
	};
	class StatusLevel: ComboBox {
		colortext[] = {0.22,0.2,0.3,1};
		idc = IDC + 800 + 0 + 10 * 1;
		SizeEx = 0.021;
		x = 0.4;
		y = 0.05 + 0.03 + 0.06 * 0;
		w = 0.2;
		h = 0.03;
	};
	class StatusItem: StatusLevel {
		idc = IDC + 800 + 1 + 10 * 1;
		y = 0.05 + 0.03 + 0.06 * 1;
	};
	class btnStatusSet: Button {
		action = "btnValue00 = 2^0";
		idc = IDC + 800 + 0 + 10 * 2;
		x = 0.4;
		y = 0.05 + 0.03 + 0.06 * 2;
		w = 0.1;
		h = 0.03;
		text = "Set";
		sizeEX = 0.022;
		colorText[] = {0.75,0.75,0.75,1};
		colorBackground[] = {0,0,0,0};
	};
	class btnStatusClear: btnStatusSet {
		action = "btnValue00 = 2^1";
		idc = IDC + 800 + 1 + 10 * 2;
		x = 0.4 + 0.1;
		text = "Clear";
	};
};