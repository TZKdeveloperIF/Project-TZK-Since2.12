// require stringify defined
#define Item(idx) \
	class Function_##idx: FuncBase { \
		idc = IDC + 16 * (2 + 8 * 0) + idx; \
		x = 0.05 + 0.05 + 0.20 * (idx % 4); \
		y = 0.25 + 0.04 * ((idx / 4) - (idx / 4) % 1); \
	}; \
	class KeyBtn_##idx: KeyBase { \
		idc = IDC + 16 * (2 + 8 * 1) + idx; \
		x = 0.05 + 0.05 + 0.13 + 0.20 * (idx % 4); \
		y = 0.25 + 0.04 * ((idx / 4) - (idx / 4) % 1); \
		action = stringify(btnValue00 = idx); \
	};

class TzkCustomShortkey {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {
		Sub_BG_Dark, 
		Frame_0_Base, 
		Frame_Hint, BackGround_Hint,
	};
	class Sub_BG_Dark: TZK_BackGround_0 {
		idc = IDC_DialogBG_Dark;
		style = ST_HUD_BACKGROUND;
		colorText[] = {0.85, 0.85, 0.85, 1};
		colorBackground[] = {0.1,0.1,0.1,1.0};
		x = 0.05;
		y = 0.05;
		w = 0.9;
		h = 0.7;
	};
	class Frame_0_Base: TZK_Frame_0 {
		idc = IDC + 16 * 0 + 0;
		colorText[] = {1, 1, 1, 0.7};
		text = "  Query";
		x = 0.05;
		y = 0.05 - 0.018; //0.018 for sizeEx 0.030
		w = 0.9;
		h = 0.7 + 0.018;
	};
	class BackGround_Hint: TZK_BackGround_1 {
		colorBackground[] = COLOR_TZK_MENU_BG_2;
		text = "";
		x = 0.05 + 0.02;
		y = 0.05 + 0.04;
		w = 0.9 - 0.02 * 2;
		h = 0.14;
	};
	class Frame_Hint: TZK_Frame_1 {
		idc = IDC + 16 * 0 + 1;
		colorText[] = {0, 0, 0, 0.9};
		text = "  Hint";
		x = 0.05 + 0.02;
		y = 0.05 + 0.04 - 0.01;
		w = 0.9 - 0.02 * 2;
		h = 0.14 + 0.01;
	};

	controls[] = {
		Exit,
		Hint,
		Function_00, Function_01, Function_02, Function_03, Function_04, 
		Function_05, Function_06, Function_07, Function_08, Function_09, 
		Function_10, Function_11, Function_12, Function_13, Function_14, 
		Function_15, Function_16, Function_17, Function_18, Function_19, 
		Function_20, Function_21, Function_22, Function_23, Function_24, 
		Function_25, Function_26, Function_27, Function_28, Function_29, 
		KeyBtn_00, KeyBtn_01, KeyBtn_02, KeyBtn_03, KeyBtn_04, 
		KeyBtn_05, KeyBtn_06, KeyBtn_07, KeyBtn_08, KeyBtn_09, 
		KeyBtn_10, KeyBtn_11, KeyBtn_12, KeyBtn_13, KeyBtn_14, 
		KeyBtn_15, KeyBtn_16, KeyBtn_17, KeyBtn_18, KeyBtn_19, 
		KeyBtn_20, KeyBtn_21, KeyBtn_22, KeyBtn_23, KeyBtn_24, 
		KeyBtn_25, KeyBtn_26, KeyBtn_27, KeyBtn_28, KeyBtn_29, 
	};
	class Exit: RscButton1 {
		x = 0.90;
		y = 0.05;
		w = 0.05;
		h = 0.03;
		colorText[] = {0.9,0.7,0.5,1.0};
		text = "Exit";
		action = "closeDialog 0";
	};
	class Hint: TextField {
		idc = IDC + 16 * 0 + 2;
		// style = ST_LEFT+ST_MULTI;
		x = 0.05 + 0.02 + 0.02;
		y = 0.05 + 0.04 + 0.02;
		w = 0.9 - 0.02 * 2 - 0.02 * 2;
		h = 0.14 - 0.02;
		colorText[] = {1, 1, 1, 1};
		colorBackground[] = {0, 0, 0, 0};
		sizeEx = 0.025;
	};

	class FuncBase: Text {
		x = 0.05 + 0.05 + 0.20 * 0;
		y = 0.25 + 0.04 * 0;
		w = 0.12;
		h = 0.04;
		sizeEx = 0.021;
		colorText[] = {0.9, 0.9, 0.9, 0.9};
		colorBackground[] = {0, 0, 0, 0};
	};
	class KeyBase: RscButton1 {
		x = 0.05 + 0.05 + 0.13 + 0.20 * 0;
		y = 0.25 + 0.04 * 0;
		w = 0.06;
		h = 0.04;
		colorText[] = {0.8, 0.8, 0.8, 0.98;
		colorBackground[] = {0, 0, 0, 0};
		text = "";
		action = "";
	};

	Item(00) Item(01) Item(02) Item(03) Item(04) Item(05) Item(06) Item(07) Item(08) Item(09)
	Item(10) Item(11) Item(12) Item(13) Item(14) Item(15) Item(16) Item(17) Item(18) Item(19)
	Item(20) Item(21) Item(22) Item(23) Item(24) Item(25) Item(26) Item(27) Item(28) Item(29)

};

#undef Item