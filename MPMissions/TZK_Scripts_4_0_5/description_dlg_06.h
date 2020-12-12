class SetFlightAltitudeDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {SetFlightAltitudeDialogBackgroundWindow};
	objects[] = { };
	controls[] = { SetFlightAltitudeTitle, Action, Exit, Altitudes };

	class SetFlightAltitudeDialogBackgroundWindow: BackgroundWindow {
		x = 0.2;
		y = 0.0;
		w = 0.6;
		h = 0.65;
	};

	class SetFlightAltitudeTitle: Title {
		style = ST_CENTER;
		x = 0.2;
		y = 0.0;
		w = 0.3;
		text = "Set Flight Altitude";
	};

	class Action: Button {
		x = 0.225;
		y = 0.1;
		text = "Set Flight Altitude";
		action = "btnAction = true";
	};

	class Exit: Button {
		x = 0.225;
		y = 0.6;
		text = "Exit";
		action = "closeDialog 0";
	};

	class Altitudes: ListBox {
		idc = IDC_LB_ALTITUDES;
		x = 0.5;
		y = 0.0;
		w = 0.3;
		h = 0.65;
	};

};
class DisbandGroupDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {DisbandGroupDialog_BackgroundWindow};
	objects[] = { };
	controls[] = {DisbandGroupDialog_Title, DisbandGroupDialog_BUTTON_OK, DisbandGroupDialog_BUTTON_EXIT, DisbandGroupDialog_BUTTON_Leader, DisbandGroupDialog_BUTTON_Infantry, DisbandGroupDialog_BUTTON_Gunner};

		class DisbandGroupDialog_BackgroundWindow: BackgroundWindow {
			 x = 0.35;
			 y = 0.31;
			 w = 0.30;
			 h = 0.38;
			 text = ;
			 colorBackground[] = {0.247, 0.247, 0.247, 0.75};
		};

		class DisbandGroupDialog_Title: Title {
			style = ST_CENTER;
			x = 0.37;
			y = 0.35;
			w = 0.26;
			h = 0.03;
			colorBackground[] = {0.247, 0.247, 0.247, 0.75};
			text = "Confirm Disband Group";
		};

 		class DisbandGroupDialog_BUTTON_OK: Button {
  			x = 0.3975;
  			y = 0.39;
  			w = 0.1;
  			h = 0.04;
  			text = "Confirm"
  			action = "btnDisbandGroupOK = true"
  			default = false
		};

 		class DisbandGroupDialog_BUTTON_EXIT: Button {
  			x = 0.5025;
  			y = 0.39;
  			w = 0.1;
  			h = 0.04;
  			text = "Exit"
  			action = "btnDisbandGroupExit = true"
  			default = false
		};

 		class DisbandGroupDialog_BUTTON_Leader: Button {
  			x = 0.3975;
  			y = 0.47;
  			w = 0.205;
  			h = 0.04;
  			text = "Disband leader too"
  			action = "btnDisbandGroupLeader = true"
  			default = false
		};

 		class DisbandGroupDialog_BUTTON_Infantry: Button {
  			x = 0.3975;
  			y = 0.55;
  			w = 0.205;
  			h = 0.04;
  			text = "Disband infantry"
  			action = "btnDisbandGroupInf = true"
  			default = false
		};

 		class DisbandGroupDialog_BUTTON_Gunner: Button {
  			x = 0.3975;
  			y = 0.63;
  			w = 0.205;
  			h = 0.04;
  			text = "Disband non-gunner"
  			action = "btnDisbandGroupGunner = true"
  			default = false
		};

};
class UCJoinDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {UCJoinDialog_BackgroundWindow};
	objects[] = { };
	controls[] = {UCJoinDialog_Title, UCJoinDialog_List, UCJoinDialog_BUTTON_OK, UCJoinDialog_BUTTON_EXIT};

  	class UCJoinDialog_BackgroundWindow: BackgroundWindow {
		 x = 0.55;
		 y = 0.07;
		 w = 0.30;
		 h = 0.66;
  	};

  	class UCJoinDialog_Title: Title {
			style = ST_CENTER;
			x = 0.55;
			y = 0.08;
			w = 0.30;
			h = 0.03;
			colorBackground[] = {0.247, 0.247, 0.247, 0.75};
			text = "Select Group to Join";
	};
  	class UCJoinDialog_List: ListBox {
			idc = IDC + 1;
			x = 0.55;
			y = 0.12;
			w = 0.30;
			h = 0.54;
	};
	class UCJoinDialog_BUTTON_OK: Button {
		x = 0.5975;
		y = 0.69;
		w = 0.1;
		h = 0.04;
		text = "Confirm"
		action = "btnUCJoinOK = true"
		default = false
};

	class UCJoinDialog_BUTTON_EXIT: Button {
		x = 0.7025;
		y = 0.69;
		w = 0.1;
		h = 0.04;
		text = "Exit"
		action = "btnUCJoinExit = true"
		default = false
};

};
class CleanMapDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {CleanMapDialog_BackgroundWindow};
	objects[] = { };
	controls[] = {CleanMapDialog_Title, CleanMapDialog_BUTTON_OK, CleanMapDialog_BUTTON_EXIT};

  	class CleanMapDialog_BackgroundWindow: BackgroundWindow {
			 x = 0.39;
			 y = 0.41;
			 w = 0.22;
			 h = 0.13;
			 text = ;
			 colorBackground[] = {0.247, 0.247, 0.247, 0.75};
  	};

  	class CleanMapDialog_Title: Title {
			style = ST_CENTER;
			x = 0.41;
			y = 0.43;
			w = 0.18;
			h = 0.03;
			colorBackground[] = {0.247, 0.247, 0.247, 0.75};
			text = "Confirm Clean Map";
	};

	class CleanMapDialog_BUTTON_OK: Button {
		x = 0.3975;
		y = 0.48;
		w = 0.1;
		h = 0.04;
		text = "Confirm"
		action = "btnCleanMapOK = true"
		default = false
	};

	class CleanMapDialog_BUTTON_EXIT: Button {
		x = 0.5025;
		y = 0.48;
		w = 0.1;
		h = 0.04;
		text = "Exit"
		action = "btnCleanMapExit = true"
		default = false
	};

};

class RscEdit {
	type = CT_EDIT;
	idc = -1;
	style = ST_LEFT;
	font = FontHTML;
	sizeEx = 0.02;
	colorText[] = {0, 0, 0, 1};
	colorSelection[] = {0.5, 0.5, 0.5, 1};
	autocomplete = true;text = ;
};
class RscTextSmall	 {
	type = CT_STATIC;
	idc = -1;
	style = ST_LEFT;
	h = 0.04;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {.08, .08, .12, .75};
	font = FontS;
	size = 0.7;
};
class RscSlider {
	type = CT_SLIDER;
	idc = -1;
	style = ST_HPOS;
	selection ="display";
	Zoom =0.1;
	//text =0.5;
	color[] = {0, 0, 0, 0.8};
	colorBackground[] = {1, 1, 1, 0.75};
	colorText[] = {0.08, 0.08, 0.12, .75};
	size = 0.8;
	angle = 0;
	font = FontS;
};
class TrackBull {
	idd = -1;
	movingEnable = 1;
	controlsBackground[] = {};
	objects[] = {};
	controls[] =  {DistanceText, dot, SpeedText, vel, zview_Bull, UpDownText};
	class UpDownText: RscTextSmall {
		x = 0.76 ; y = 0.36; w = 0.22; h = 0.03; sizeEx = 0.02;text = "Up Down camera"; action = "";
	};
	class zview_Bull: RscSlider {
		idc = IDC_SL_ZVIEW;
		x = 0.76 ; y = 0.39; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class RotationText: RscTextSmall {
		x = 0.76 ; y = 0.43; w = 0.22; h = 0.03; sizeEx = 0.02;text = "Rotation camera"; action = "";
	};
	class rotation_bull: RscSlider {
		idc = IDC_SL_ROTATION;
		x = 0.76 ; y = 0.46; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class ZoomText: RscTextSmall {
		x = 0.76 ; y = 0.50; w = 0.22; h = 0.03; sizeEx = 0.02;text = "Zoom"; action = "";
	};
	class zoom: RscSlider {
		idc = IDC_SL_ZOOM;
		x = 0.76 ; y = 0.53; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class AccelerateTime: RscSlider {
		idc = IDC_SL_ACCELERATE;
		x = 0.76 ; y = 0.81; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class DistanceText: RscEdit {
		idc = 101;
		style = ST_MULTI + ST_NO_RECT;
		x = 0.76 ; y = 0.74; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class SpeedText: RscEdit {
		idc = 102;
		style = ST_MULTI + ST_NO_RECT;
		x = 0.76 ; y = 0.67; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class Vel: RscEdit {
		idc = 103;
		style = ST_MULTI + ST_NO_RECT;
		x = 0.76 ; y = 0.60; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class Dot: RscTextSmall {
		x = 0.5 ; y = 0.5; w = 0.01; h = 0.01; sizeEx = 0.02; text = "+";
	};
};
class TZK_Setting_Dialog {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = { Sub_BG_Light, BackGround_0_Base, BackGround_1_Left, BackGround_1_Mid, BackGround_1_Right, Frame_1_Left , Frame_1_Mid, Frame_0_Base, Frame_1_Right };
	class Sub_BG_Light: TZK_BackGround_0 {
		idc = IDC_DialogBG_Light;
		style = ST_HUD_BACKGROUND;
		colorText[] = {0.75,0.75,0.75,1};
		colorBackground[] = {0.4,0.4,0.4,1.0};
		x = 0.1;
		y = 0.1;
		w = 0.85;
		h = 0.75;
	};
	class BackGround_0_Base: TZK_BackGround_0 {
		idc = IDC_DialogBG_CR;
		colorBackground[] = COLOR_TZK_MENU_BG_1;
		text = "";
		x = 0.1;
		y = 0.1;
		w = 0.85;
		h = 0.75;
	};
	class BackGround_1_Left: TZK_BackGround_1 {
		colorBackground[] = COLOR_TZK_MENU_BG_2;
		text = "";
		x = 0.12;
		y = 0.14;
		w = 0.25;	// w = 0.245; 0.05 less
		h = 0.70;	// h = 0.682; 0.08 less
	};
	class BackGround_1_Mid: BackGround_1_Left {
		x = 0.40;	// 0.03 more
	};
	class BackGround_1_Right: BackGround_1_Left {
		x = 0.68;	// 0.03 more
	};
	class Frame_0_Base: TZK_Frame_0 {
		idc = IDC + 10;
		colorText[] = {1, 1, 1, 0.7};
		text = "  TZK Mission Setting 1";
		x = 0.1;
		y = 0.082;	//0.018 less for sizeEx 0.030
		w = 0.85;
		h = 0.768;
	};
	class Frame_1_Left: TZK_Frame_1 {
		idc = IDC + 11;
		colorText[] = {0, 0, 0, 0.6};
		text = "  Effects";
		x = 0.12;
		y = 0.13;	// 0.01 less for sizeEx 0.020
		w = 0.25;
		h = 0.71;
	};
	class Frame_1_Mid: Frame_1_Left {
		idc = IDC + 12;
		text = "  Functions";
		x = 0.40;
	};
	class Frame_1_Right: Frame_1_Left {
		idc = IDC + 13;
		text = "  Actions";
		x = 0.68;
	};
	objects[] = {};
	controls[] = { Exit, AnotherDialog, Text1, Text2, Text3,
	Combo_L_00, Combo_L_01, Combo_L_02, Combo_L_03, Combo_L_04, Combo_L_05, Combo_L_06, Combo_L_07, Combo_L_08, Combo_L_09, Combo_L_10, Combo_L_11,
	Combo_M_00, Combo_M_01, Combo_M_02, Combo_M_03, Combo_M_04, Combo_M_05, Combo_M_06, Combo_M_07, Combo_M_08, Combo_M_09, Combo_M_10, Combo_M_11,
	Combo_R_00, Combo_R_01, Combo_R_02, Combo_R_03, Combo_R_04, Combo_R_05, Combo_R_06, Combo_R_07, Combo_R_08, Combo_R_09, Combo_R_10, Combo_R_11, };
	class Exit: RscButton1 {
		x = 0.90;
		y = 0.1;
		w = 0.05;
		h = 0.03;
		colorText[] = {0.9,0.7,0.5,1.0};
		text = "Exit";
		action = "closeDialog 0";
	};
	class AnotherDialog: Exit {
		x = 0.75; w = 0.15;
		text = "Next Setting Dialog";
		action = "btnAction0 = true";
	};
	class Text1: Text {
		idc = IDC + 1;
		style = ST_LEFT;
		x = 0.14;
		y = 0.77;
		w = 0.2;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.5};
	};
	class Text2: Text1 {
		idc = IDC + 2;
		x = 0.42;
	};
	class Text3: Text1 {
		idc = IDC + 3;
		x = 0.70;
	};

	class Combo_L_00: RscCombo {
		idc = IDC + 100;
		x = 0.14;
		y = 0.17;
		w = 0.2;
		h = 0.04;
	};
	class Combo_L_01: Combo_L_00 {
		idc = IDC + 101;
		y = 0.22;
	};
	class Combo_L_02: Combo_L_00 {
		idc = IDC + 102;
		y = 0.27;
	};
	class Combo_L_03: Combo_L_00 {
		idc = IDC + 103;
		y = 0.32;
	};
	class Combo_L_04: Combo_L_00 {
		idc = IDC + 104;
		y = 0.37;
	};
	class Combo_L_05: Combo_L_00 {
		idc = IDC + 105;
		y = 0.42;
	};
	class Combo_L_06: Combo_L_00 {
		idc = IDC + 106;
		y = 0.47;
	};
	class Combo_L_07: Combo_L_00 {
		idc = IDC + 107;
		y = 0.52;
	};
	class Combo_L_08: Combo_L_00 {
		idc = IDC + 108;
		y = 0.57;
	};
	class Combo_L_09: Combo_L_00 {
		idc = IDC + 109;
		y = 0.62;
	};
	class Combo_L_10: Combo_L_00 {
		idc = IDC + 110;
		y = 0.67;
	};
	class Combo_L_11: Combo_L_00 {
		idc = IDC + 111;
		y = 0.72;
	};
	
	class Combo_M_00: RscCombo {
		idc = IDC + 200;
		x = 0.42;
		y = 0.17;
		w = 0.2;
		h = 0.04;
	};
	class Combo_M_01: Combo_M_00 {
		idc = IDC + 201;
		y = 0.22;
	};
	class Combo_M_02: Combo_M_00 {
		idc = IDC + 202;
		y = 0.27;
	};
	class Combo_M_03: Combo_M_00 {
		idc = IDC + 203;
		y = 0.32;
	};
	class Combo_M_04: Combo_M_00 {
		idc = IDC + 204;
		y = 0.37;
	};
	class Combo_M_05: Combo_M_00 {
		idc = IDC + 205;
		y = 0.42;
	};
	class Combo_M_06: Combo_M_00 {
		idc = IDC + 206;
		y = 0.47;
	};
	class Combo_M_07: Combo_M_00 {
		idc = IDC + 207;
		y = 0.52;
	};
	class Combo_M_08: Combo_M_00 {
		idc = IDC + 208;
		y = 0.57;
	};
	class Combo_M_09: Combo_M_00 {
		idc = IDC + 209;
		y = 0.62;
	};
	class Combo_M_10: Combo_M_00 {
		idc = IDC + 210;
		y = 0.67;
	};
	class Combo_M_11: Combo_M_00 {
		idc = IDC + 211;
		y = 0.72;
	};
	
	class Combo_R_00: RscCombo {
		idc = IDC + 300;
		x = 0.70;
		y = 0.17;
		w = 0.2;
		h = 0.04;
	};
	class Combo_R_01: Combo_R_00 {
		idc = IDC + 301;
		y = 0.22;
	};
	class Combo_R_02: Combo_R_00 {
		idc = IDC + 302;
		y = 0.27;
	};
	class Combo_R_03: Combo_R_00 {
		idc = IDC + 303;
		y = 0.32;
	};
	class Combo_R_04: Combo_R_00 {
		idc = IDC + 304;
		y = 0.37;
	};
	class Combo_R_05: Combo_R_00 {
		idc = IDC + 305;
		y = 0.42;
	};
	class Combo_R_06: Combo_R_00 {
		idc = IDC + 306;
		y = 0.47;
	};
	class Combo_R_07: Combo_R_00 {
		idc = IDC + 307;
		y = 0.52;
	};
	class Combo_R_08: Combo_R_00 {
		idc = IDC + 308;
		y = 0.57;
	};
	class Combo_R_09: Combo_R_00 {
		idc = IDC + 309;
		y = 0.62;
	};
	class Combo_R_10: Combo_R_00 {
		idc = IDC + 310;
		y = 0.67;
	};
	class Combo_R_11: Combo_R_00 {
		idc = IDC + 311;
		y = 0.72;
	};
};


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

// EOF