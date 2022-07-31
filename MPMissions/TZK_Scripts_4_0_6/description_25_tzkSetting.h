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