class TZK_CustomAircraftWeaponDialog2: TZK_CustomAircraftWeaponDialog {
	controls[] = {
		MagazinesList, EquippedList,
		MagAdd, MagRem, MagClear, Exit, Buy, MagFull, MagNone,
		SlotLabel, SlotLabelW0, SlotLabelW1, SlotText0, SlotText1, 
		YourMoneyLabel, YourMoneyText, MagPriceLabel, MagPriceText,
		UpgradeLeabel, UpgradeText, TimeLabel, TimeText,
	};
	class SlotLabelW0: SlotLabel {
		idc = IDC + 40;
		x = 0.70;
		y = 0.20;
		w = 0.05;
		text = "AT:";
		sizeEx = 0.022;
	};
	class SlotLabelW1: SlotLabelW0 {
		idc = IDC + 41;
		x = 0.785;
		w = 0.07;
		text = "Rocket:";
	};
	class SlotText0: SlotText {
		idc = IDC + 42;
		x = 0.75;
		w = 0.03;
	};
	class SlotText1: SlotText {
		idc = IDC + 43;
		x = 0.865;
		w = 0.05;
	};
	class MagAdd: RscButton1 {
		x = 0.32;
		y = 0.30;
		w = 0.03;
		h = 0.03;
		colorText[] = {0.9,0.7,0.5,1.0};
		text = "+";
		action = "btnValue00 = 2^0"
	};
	class MagRem: MagAdd {
		y = 0.35;
		text = "-";
		action = "btnValue00 = 2^1"
	};
	class MagFull: MagAdd {
		y = 0.25;
		w = 0.04;
		text = "Full";
		action = "btnValue00 = 2^4"
	};
	class MagClear: MagAdd {
		y = 0.45;
		w = 0.04;
		text = "Clear";
		action = "btnValue00 = 2^2"
	};
	class MagNone: MagAdd {
		y = 0.40;
		w = 0.04;
		text = "None";
		action = "btnValue00 = 2^5"
	};
};

class ConsoleDialog: Menu {
	controlsBackground[] = {Bg};
	class Bg: BackgroundWindow {
		colorBackground[] = {0, 0, 0, 1};
		x = 0.20;
		y = 0.10;
		w = 0.60;
		h = 0.60;
	};

	controls[] = {
		TEXT_INPUT,
		BTN_OK,
		BTN_EXIT, 
		LISTBOX_HISTORY,
		TRSM_LIST_TITLE,
	};
	class TRSM_LIST_TITLE: Title {
		idc = IDC + 0;
		style = ST_CENTER;
		x = 0.40;
		y = 0.12;
		w = 0.20;
		h = 0.03;
		colorBackground[] = {0, 0.9, 0.3, 0.75};
		text = "Console";
	};
	class BTN_EXIT: Button {
		x = 0.75;
		y = 0.10;
		w = 0.05;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0};
		text = "Exit";
		action = "btnValue00 = 0";
	};
	class BTN_OK: Button {
		x = 0.75;
		y = 0.65;
		w = 0.05;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0};
		text = "OK";
		action = "btnValue00 = 1";
	};
	class LISTBOX_HISTORY: TZK_ListBox {
		idc = IDC + 16 * 3 + 0;
		x = 0.20 + 0.025;
		y = 0.20;
		w = 0.55;
		h = 0.42;
		colorText[] = {1,1,1,1};
		colorSelect[] = {1,0.6,0,1};
		colorSelectBackGround[] = {0.5,0.5,0.5,1};
	};
	class TEXT_INPUT: RscEdit {
		idc = IDC + 16 * 3 + 1;
		x = 0.20 + 0.025;
		y = 0.65;
		w = 0.50;
		h = 0.04;
		text = "";
		colorText[] = {1, 1, 1, 1};
	};
};

class TzkShownGroupMenu: Menu {
	controlsBackground[] = {Bg};
	class Bg: BackgroundWindow {
		x = 0.20;
		y = 0.30;
		w = 0.60;
		h = 0.40;
	};

	controls[] = {
		BTN_SELECT_ALL, BTN_UNSELECT_ALL, 
		Exit, 
		TRSM_LIST_TITLE, 
		BTN_BG_0_00, BTN_BG_0_01, BTN_BG_0_02, BTN_BG_0_03, 
		BTN_BG_0_04, BTN_BG_0_05, BTN_BG_0_06, BTN_BG_0_07, 
		BTN_BG_0_08, BTN_BG_0_09, BTN_BG_0_0A, BTN_BG_0_0B, 
		BTN_BG_0_0C, BTN_BG_0_0D, BTN_BG_0_0E, BTN_BG_0_0F, 
		BTN_BG_0_10, BTN_BG_0_11, BTN_BG_0_12, BTN_BG_0_13, 
		BTN_0_00, BTN_0_01, BTN_0_02, BTN_0_03, 
		BTN_0_04, BTN_0_05, BTN_0_06, BTN_0_07, 
		BTN_0_08, BTN_0_09, BTN_0_0A, BTN_0_0B, 
		BTN_0_0C, BTN_0_0D, BTN_0_0E, BTN_0_0F, 
		BTN_0_10, BTN_0_11, BTN_0_12, BTN_0_13, 
	};

	class BTN_SELECT_ALL: Button {
		x = 0.25;
		y = 0.65;
		w = 0.20;
		h = 0.04;
		text = "Select All";
		action = "btnValue00 = 1";
	};
	class BTN_UNSELECT_ALL: Button {
		x = 0.55;
		y = 0.65;
		w = 0.20;
		h = 0.04;
		text = "Unselect All";
		action = "btnValue00 = 2";
	};

	class TRSM_LIST_TITLE: Title {
		idc = IDC + 0;
		style = ST_CENTER;
		x = 0.40;
		y = 0.32;
		w = 0.20;
		h = 0.03;
		colorBackground[] = {0.247, 0.247, 0.247, 0.75};
		text = "";
	};
	class Exit: Button {
		x = 0.75;
		y = 0.30;
		w = 0.05;
		h = 0.04;
		text = "Exit";
		action = "closeDialog 0";
	};

	class BTN_0_00: Button {
		idc = IDC + 16 * 5 + 00;
		x = 0.225 + 0.11 * 0;
		y = 0.40 + 0.05 * 0;
		w = 0.10;
		h = 0.04;
		sizeEx = 0.022;
		
		action = "btnValue01 = true; btnValue02 set [00, not(btnValue02 select 00)]";
	};
	class BTN_0_01: BTN_0_00 {
		idc = IDC + 16 * 5 + 01;
		y = 0.40 + 0.05 * 1;
		action = "btnValue01 = true; btnValue02 set [01, not(btnValue02 select 01)]";
	};
	class BTN_0_02: BTN_0_00 {
		idc = IDC + 16 * 5 + 02;
		y = 0.40 + 0.05 * 2;
		action = "btnValue01 = true; btnValue02 set [02, not(btnValue02 select 02)]";
	};
	class BTN_0_03: BTN_0_00 {
		idc = IDC + 16 * 5 + 03;
		y = 0.40 + 0.05 * 3;
		action = "btnValue01 = true; btnValue02 set [03, not(btnValue02 select 03)]";
	};
	class BTN_0_04: BTN_0_00 {
		idc = IDC + 16 * 5 + 04;
		x = 0.225 + 0.11 * 1;
		action = "btnValue01 = true; btnValue02 set [04, not(btnValue02 select 04)]";
	};
	class BTN_0_05: BTN_0_04 {
		idc = IDC + 16 * 5 + 05;
		y = 0.40 + 0.05 * 1;
		action = "btnValue01 = true; btnValue02 set [05, not(btnValue02 select 05)]";
	};
	class BTN_0_06: BTN_0_04 {
		idc = IDC + 16 * 5 + 06;
		y = 0.40 + 0.05 * 2;
		action = "btnValue01 = true; btnValue02 set [06, not(btnValue02 select 06)]";
	};
	class BTN_0_07: BTN_0_04 {
		idc = IDC + 16 * 5 + 07;
		y = 0.40 + 0.05 * 3;
		action = "btnValue01 = true; btnValue02 set [07, not(btnValue02 select 07)]";
	};
	class BTN_0_08: BTN_0_00 {
		idc = IDC + 16 * 5 + 08;
		x = 0.225 + 0.11 * 2;
		action = "btnValue01 = true; btnValue02 set [08, not(btnValue02 select 08)]";
	};
	class BTN_0_09: BTN_0_08 {
		idc = IDC + 16 * 5 + 09;
		y = 0.40 + 0.05 * 1;
		action = "btnValue01 = true; btnValue02 set [09, not(btnValue02 select 09)]";
	};
	class BTN_0_0A: BTN_0_08 {
		idc = IDC + 16 * 5 + 10;
		y = 0.40 + 0.05 * 2;
		action = "btnValue01 = true; btnValue02 set [10, not(btnValue02 select 10)]";
	};
	class BTN_0_0B: BTN_0_08 {
		idc = IDC + 16 * 5 + 11;
		y = 0.40 + 0.05 * 3;
		action = "btnValue01 = true; btnValue02 set [11, not(btnValue02 select 11)]";
	};
	class BTN_0_0C: BTN_0_00 {
		idc = IDC + 16 * 5 + 12;
		x = 0.225 + 0.11 * 3;
		action = "btnValue01 = true; btnValue02 set [12, not(btnValue02 select 12)]";
	};
	class BTN_0_0D: BTN_0_0C {
		idc = IDC + 16 * 5 + 13;
		y = 0.40 + 0.05 * 1;
		action = "btnValue01 = true; btnValue02 set [13, not(btnValue02 select 13)]";
	};
	class BTN_0_0E: BTN_0_0C {
		idc = IDC + 16 * 5 + 14;
		y = 0.40 + 0.05 * 2;
		action = "btnValue01 = true; btnValue02 set [14, not(btnValue02 select 14)]";
	};
	class BTN_0_0F: BTN_0_0C {
		idc = IDC + 16 * 5 + 15;
		y = 0.40 + 0.05 * 3;
		action = "btnValue01 = true; btnValue02 set [15, not(btnValue02 select 15)]";
	};
	class BTN_0_10: BTN_0_00 {
		idc = IDC + 16 * 5 + 16;
		x = 0.225 + 0.11 * 4;
		action = "btnValue01 = true; btnValue02 set [16, not(btnValue02 select 16)]";
	};
	class BTN_0_11: BTN_0_10 {
		idc = IDC + 16 * 5 + 17;
		y = 0.40 + 0.05 * 1;
		action = "btnValue01 = true; btnValue02 set [17, not(btnValue02 select 17)]";
	};
	class BTN_0_12: BTN_0_10 {
		idc = IDC + 16 * 5 + 18;
		y = 0.40 + 0.05 * 2;
		action = "btnValue01 = true; btnValue02 set [18, not(btnValue02 select 18)]";
	};
	class BTN_0_13: BTN_0_10 {
		idc = IDC + 16 * 5 + 19;
		y = 0.40 + 0.05 * 3;
		action = "btnValue01 = true; btnValue02 set [19, not(btnValue02 select 19)]";
	};


	class BTN_BG_0_00: BTN_0_00 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 00;
	};
	class BTN_BG_0_01: BTN_0_01 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 01;
	};
	class BTN_BG_0_02: BTN_0_02 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 02;
	};
	class BTN_BG_0_03: BTN_0_03 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 03;
	};
	class BTN_BG_0_04: BTN_0_04 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 04;
	};
	class BTN_BG_0_05: BTN_0_05 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 05;
	};
	class BTN_BG_0_06: BTN_0_06 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 06;
	};
	class BTN_BG_0_07: BTN_0_07 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 07;
	};
	class BTN_BG_0_08: BTN_0_08 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 08;
	};
	class BTN_BG_0_09: BTN_0_09 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 09;
	};
	class BTN_BG_0_0A: BTN_0_0A {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 10;
	};
	class BTN_BG_0_0B: BTN_0_0B {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 11;
	};
	class BTN_BG_0_0C: BTN_0_0C {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 12;
	};
	class BTN_BG_0_0D: BTN_0_0D {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 13;
	};
	class BTN_BG_0_0E: BTN_0_0E {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 14;
	};
	class BTN_BG_0_0F: BTN_0_0F {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 15;
	};
	class BTN_BG_0_10: BTN_0_10 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 16;
	};
	class BTN_BG_0_11: BTN_0_11 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 17;
	};
	class BTN_BG_0_12: BTN_0_12 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 18;
	};
	class BTN_BG_0_13: BTN_0_13 {
		type = CT_STATIC;
		style = ST_LEFT;
		colorText[] = {0,0,0,0};
		colorBackground[] = COLOR_SELECTED_TEXT;

		idc = IDC + 16 * 7 + 19;
	};
};

class EquipmentMenu2: EquipmentMenu {
	controls[] = {
		Equipment_MoneyStatus, Equipment_Money, Equipment_CostStatus, Equipment_Cost, PrimaryLabel, Primary, PrimaryAmmo, AddPrimaryAmmo, RemovePrimaryAmmo, HandgunLabel, Handgun, HandgunAmmo, AddHandgunAmmo, RemoveHandgunAmmo, SecondaryLabel, Secondary, SecondaryAmmo, AddSecondaryAmmo, RemoveSecondaryAmmo, EquipmentLabel, Equipment, AddEquipment, RemoveEquipment, TemplatesLabel, TemplateList, SaveTemplate, LoadTemplate, BuyTemplate, Clear, Buy, Exit,
		PrimaryImage, SecondaryImage, PrimaryOnlyImage, OpticsFirstImage, OpticsSecondImage,
		GeneralImage_0_1, GeneralImage_1_1, GeneralImage_2_1, GeneralImage_3_1, GeneralImage_4_1, GeneralImage_5_1, GeneralImage_6_1, GeneralImage_7_1, GeneralImage_8_1,  GeneralImage_9_1, GeneralImage_10_1,
		GeneralImage_0_2, GeneralImage_1_2, GeneralImage_2_2, GeneralImage_3_2, GeneralImage_4_2, GeneralImage_5_2, GeneralImage_6_2, GeneralImage_7_2, GeneralImage_8_2,
		GeneralImage_0_3, GeneralImage_1_3, GeneralImage_2_3, GeneralImage_4_3, GeneralImage_5_3, GeneralImage_6_3, GeneralImage_7_3,
		GeneralImage_0_4, GeneralImage_1_4, GeneralImage_4_4, GeneralImage_5_4, GeneralImage_6_4,
		GeneralImage_0_5, GeneralImage_5_5, GeneralImage_4_6, 
		HandgunImage, HandgunImage_0_1, HandgunImage_0_2, HandgunImage_0_3, HandgunImage_0_4, HandgunImage_1_1, HandgunImage_1_2, HandgunImage_1_3, HandgunImage_2_1, HandgunImage_2_2, HandgunImage_3_1,
		AddOptics, RemoveOptics, OpticsList

		, ExtendBg, PresetBuyNoOverwrite, PresetBuyOverwrite, 
	};
	class PresetBuyNoOverwrite: Button {
		idc = IDC + 16 * 3 + 0;
		x = 0.29;
		y = 0.64;
		w = 0.20;
		text = "Buy (no overwrite)";
		action = "btnValue00 = 0";
	};
	class PresetBuyOverwrite: PresetBuyNoOverwrite {
		idc = IDC + 16 * 3 + 1;
		x = 0.51;
		text = "Buy and overwrite";
		action = "btnValue00 = 1";
	};
	class ExtendBg: Sub_BG {
		idc = IDC + 16 * 3 + 2;
		y = 0.65;
		h = 0.05;
	};
};

class TzkQueryDialog {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {
		Sub_BG_Light, 
		Frame_0_Base, 
		Frame_Introduction, BackGround_Introduction,
	};
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
	class Frame_0_Base: TZK_Frame_0 {
		idc = IDC + 10;
		colorText[] = {1, 1, 1, 0.7};
		text = "  Query";
		x = 0.1;
		y = 0.082;	//0.018 less for sizeEx 0.030
		w = 0.85;
		h = 0.768;
	};
	class BackGround_Introduction: TZK_BackGround_1 {
		colorBackground[] = COLOR_TZK_MENU_BG_2;
		text = "";
		x = 0.12;
		y = 0.14;
		w = 0.76;
		h = 0.14;
	};
	class Frame_Introduction: TZK_Frame_1 {
		idc = IDC + 11;
		colorText[] = {0, 0, 0, 0.9};
		text = "  Introduction";
		x = 0.12;
		y = 0.13;
		w = 0.76;
		h = 0.15;
	};

	objects[] = {};
	controls[] = {
		Exit, 
		Introduction,
		Btn_L_00,
		Btn_L_01,
	};
	class Exit: RscButton1 {
		x = 0.90;
		y = 0.1;
		w = 0.05;
		h = 0.03;
		colorText[] = {0.9,0.7,0.5,1.0};
		text = "Exit";
		action = "closeDialog 0";
	};
	class Introduction: TextField {
		idc = IDC + 1;
		// style = ST_LEFT+ST_MULTI;
		x = 0.14;
		y = 0.16;
		w = 0.72;
		h = 0.12;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0};
		sizeEx = 0.022;
	};

	class Btn_L_00: RscButton1 {
		idc = IDC + 100;
		x = 0.14;
		y = 0.35 + 0.05 * 0;
		w = 0.2;
		h = 0.04;
		text = "";
		action = "btnValue00 = 0";
		sizeEx = 0.025;
	};
	class Btn_L_01: Btn_L_00 {
		idc = IDC + 101;
		y = 0.35 + 0.05 * 1;
		action = "btnValue00 = 1";
	};
};

class CmdRuleMenu: VoteMenu {
	class MenuTitle: GuiLargeText {
		idc = IDC + 500 + 0;
		style = ST_CENTER;
		x = 0.3625;
		y = 0.07;
		w = 0.25;
		h = 0.05;
		text = "Vote Menu";
	};
	class ItemsLabel:ItemsBase {
		idc = IDC + 500 + 1;
		y = 0.12;
		sizeEx = 0.025;
		text = "Options";
	};
	class ResultLabel: ResultBase {
		idc = IDC + 500 + 2;
		y = 0.12;
		x = 0.365;
		h = 0.04;
		w = 0.135;
		sizeEx = 0.025;
		text = "Result";
	};
	class SelectionsLabel: Text {
		idc = IDC + 500 + 3;
		x = 0.645;
		y = 0.12;
		h = 0.04;
		w = 0.1;
		text = "Your Vote";
		colorText[] = {0.75,0.75,0.75,1};
	};
	class ConfirmLabel: Text {
		idc = IDC + 500 + 4;
		x = 0.785;
		y = 0.12;
		h = 0.04;
		w = 0.1;
		text = "Confirm";
		colorText[] = {0.75,0.75,0.75,1};
	};
};

// this dialog is removed on developing RTS interaction in 4.0.6. Recover it here
class TemporaryAIOrderDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {Sub_BG_Light, Sub_BG};
	objects[] = {};
	controls[] = {
		CommandAITitle, GroupOrdersLabel, GroupOrders, SendOrder, OrderLabel, TemporaryOrder, 
		Exit, 
		ReturnToAIOrder,  
	};
	
	class Sub_BG: BackgroundWindow {
		x = 0.0;
		y = 0.0;
		w = 1.0;
		h = 0.71;
	};
	class Sub_BG_Light: Light_BG_Window {
		x = 0.0;
		y = 0.0;
		w = 1.0;
		h = 0.71;
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
		w = 0.6;
		h = 0.30
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
		idc = IDC+3
		x = 0.0;
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
	class ReturnToAIOrder: Button {
		x = 0.65
		y = 0.0
		w = 0.3
		h = 0.03
		text = "Return To AI Groups Order"
		action = "btnReturn = true"
	};
};

class DestructionDialog: GenericDialog {
	controls[] = {
		GenericTitle, ListHeader, List, Exit,
		InfoAction0, Action0, InfoAction1, Action1, InfoAction2, Action2, InfoAction3, Action3, InfoAction4, Action4, 
		// take care of the order of bg/btn
		StateBg0, 
		State0, 
	};

	class StateBg0: ButtonBG {
		idc = IDC + 16 * 5 + 0;
		colorBackground[] = COLOR_SELECTED_TEXT;
		x = 0.225;
		y = 0.50;
		w = 0.10;
	};
	class State0: Button {
		idc = IDC + 16 * 6 + 0;
		x = 0.225;
		y = 0.50;
		w = 0.10;
		text = "UNDEFINED";
		action = "btnValue00 = 0";
	};
};