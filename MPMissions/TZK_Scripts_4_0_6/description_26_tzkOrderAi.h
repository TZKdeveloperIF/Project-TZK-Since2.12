class TZK_ListBox: ListBox {
//	colorText[] = {0.9, 0.3, 0.0, 1};
};
class TZK_OrderAIDialog: Menu {
	idd = -1;
	movingEnable = true;
	objects[] = {};

	controlsBackground[] = { TZK_OrderAIDialog_BackGround_0, TZK_OrderAIDialog_BackGround_1, Sub_BG_Light
		, TZK_OrderAIDialog_Frame_1_MiddleLeft, TZK_OrderAIDialog_Frame_0, 
	};
	class TZK_OrderAIDialog_BackGround_0: TZK_BackGround_0 {
		x = 0.001;
		y = 0.03;
		w = 1 - 2*0.001;
		h = 0.671 - 0.03;
	};
	class Sub_BG_Light: Light_BG_Window {
		x = 0.001;
		y = 0.03;
		w = 1 - 2*0.001;
		h = 0.671 - 0.03;
	};
	class TZK_OrderAIDialog_Frame_0: TZK_Frame_0 {
		text = "  Order Selected AI";
		colorText[] = {0,0,0,1};
		x = 0.001;
		y = 0.015;
		w = 1 - 2*0.001;
		h = 0.671 - 0.015;
	};
	class TZK_OrderAIDialog_BackGround_1: TZK_BackGround_1 {
		colorBackground[] = COLOR_TZK_MENU_BG_3;
		x = 0.00;
		y = 0.1;
		w = 1.00-0.00;
		h = 0.671 - 0.1;
	};
	class TZK_OrderAIDialog_Frame_1_MiddleLeft: TZK_Frame_1 {
		text = "  Order Description";
		x = 0.20;
		y = 0.1 - 0.01;
		w = 0.40-0.20;
		h = 0.671 - (0.1 - 0.01);
	};
	

	controls[] = {SendOrderBG1, SendOrderBG2, OrderDesc, OrdersLabel, SendOrder1, Orders, Param0Label, Param0, Param1Label, Param1, Exit, Param2Label, Param2, OrdersLabel2, SendOrder2, Orders2 };
	class OrderDesc: RscMulti {
		style = ST_MULTI + ST_NO_RECT;
		colorText[] = {0.9, 0.1, 0.2, 1};
		idc = IDC+5;
		x = 0.20 + 0.005;
		y = 0.1 + 0.01;
		w = 0.40-0.20 - 2*0.005;
		h = 0.671 - (0.1 + 0.01);
	};
	
	class OrdersLabel: Label {
		style = ST_LEFT;
		x = 0.40;
		y = 0.06;
		w = 0.1;
		text = "Order";
	};
	class Orders: TZK_ListBox {
		idc = IDC+0;
		x = 0.40;
		y = 0.1;
		w = 0.2;
		h = 0.57;
	};
	class Param0Label: Label {
		idc = IDC+1;
		style = ST_CENTER;
		x = 0.60;
		y = 0.06;
		w = 0.20;
		text = "UNDEFINED";
	};
	class Param0: TZK_ListBox {
		idc = IDC+2;
		x = 0.60;
		y = 0.1;
		w = 0.20;
		h = 0.57;
	};
	class Param1Label: Label {
		idc = IDC+3;
		style = ST_CENTER;
		x = 0.80;
		y = 0.06;
		w = 0.20;
		text = "UNDEFINED";
	};
	class Param1: TZK_ListBox {
		idc = IDC+4;
		x = 0.80;
		y = 0.1;
		w = 0.20;
		h = 0.30;
	};
	class Param2Label: Label {
		idc = IDC+7;
		style = ST_CENTER;
		x = 0.80;
		y = 0.42;
		w = 0.20;
		text = "UNDEFINED";
	};
	class Param2: TZK_ListBox {
		idc = IDC+8;
		x = 0.80;
		y = 0.46;
		w = 0.20;
		h = 0.21;
	};
	class Exit: RscButton1 {
		x = 0.95;
		y = 0.03;
		w = 0.05;
		h = 0.03;
		text = "Exit"
		action = "closeDialog 0"
	};

	class SendOrder1: Button {
		idc = IDC+11;
		x = 0.40+0.06+0.07;
		y = 0.06;
		w = 0.07;
		text = "Issue";
		action = "btnSendOrder = true";
	};
	class OrdersLabel2: Label {
		style = ST_LEFT;
		x = 0.0;
		y = 0.06;
		w = 0.2;
		text = "Extend Order";
	};
	class SendOrder2: Button {
		idc = IDC+12;
		x = 0.40+0.06;
		y = 0.06;
		w = 0.07;
		text = "Issue";
		action = "btnSendOrder2 = true";
	};
	class Orders2: TZK_ListBox {
		idc = IDC+6;
		x = 0.0;
		y = 0.1;
		w = 0.2;
		h = 0.57;
	};
	class SendOrderBG1: ButtonBG {
		colorBackground[] = COLOR_SELECTED_TEXT;
		idc = IDC+9;
		x = 0.40+0.06+0.07;
		y = 0.06;
		w = 0.07;
	};
	class SendOrderBG2: ButtonBG {
		colorBackground[] = COLOR_SELECTED_TEXT;
		idc = IDC+10;
		x = 0.40+0.06;
		y = 0.06;
		w = 0.07;
	};
};