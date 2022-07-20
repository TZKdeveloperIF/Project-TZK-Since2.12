class TZK_Custom_Init_Attribute: TZK_Setting_Dialog {
	controlsBackground[] = {
		Sub_BG_Light, BackGround_0_Base, BackGround_1_Left, BackGround_1_Mid, BackGround_1_Right, 
		Frame_0_Base, Frame_1_Left , Frame_1_Mid, Frame_1_Right
	};
	class BackGround_1_Right: BackGround_1_Left {
		x = 0.68;	// 0.03 more
		colorBackground[] = COLOR_TZK_MENU_BG_3;
	};
	class Frame_0_Base: TZK_Frame_0 {
		idc = IDC + 10;
		colorText[] = {0, 0, 0, 0.7};
		text = "Custom Initial Attributes";
		x = 0.1;
		y = 0.082;	//0.018 less for sizeEx 0.030
		w = 0.85;
		h = 0.768;
	};
	class Frame_1_Left: TZK_Frame_1 {
		idc = IDC + 11;
		colorText[] = {0, 0, 0, 0.6};
		text = "";
		x = 0.12;
		y = 0.13;	// 0.01 less for sizeEx 0.020
		w = 0.25;
		h = 0.71;
	};
	class Frame_1_Mid: Frame_1_Left {
		idc = IDC + 12;
		text = "";
		x = 0.40;
	};
	class Frame_1_Right: Frame_1_Left {
		idc = IDC + 13;
		text = "";
		x = 0.68;
	};

	objects[] = {};
	controls[] = {
		Exit, Confirm, 
		PlayerMoneyLabel, SlotText, AIMoneyLabel, YourMoneyText, 
	};
	class PlayerMoneyLabel: RscMulti {
		style = ST_MULTI + ST_NO_RECT;
		// style = ST_LEFT;
		x = 0.70;
		y = 0.15;
		w = 0.2;
		h = 0.1;
		text = "Your Side Money:\n$40,000 by default, $0 at least and $999,999 at most.";
		sizeEx = 0.020;
	};
	class AIMoneyLabel: PlayerMoneyLabel {
		y = 0.35;
		text = "AICO Money:\n$400,000 by default, $60,000 at least and $999,999 at most.";
	};
	class MagPriceLabel: AIMoneyLabel {
		y = 0.45;
		text = "Equipment cost:";
	};
	class UpgradeLeabel: AIMoneyLabel {
		y = 0.55;
		text = "Extra Vehicle Upgrade: ";
	};
	class TimeLabel: AIMoneyLabel {
		y = 0.25;
		text = "Rearm Time: ";
	};
	class SlotText: RscEdit {
		idc = IDC + 30;
		style = ST_LEFT;
		x = 0.80;
		y = 0.25;
		w = 0.1;
		h = 0.04;
		colorText[] = {0.1,0.1,0.1,1};
		// colorText[] = {0.08,0.08,0.12,0.75};

		// useless color params
		// colorBackground[] = {0.9,0.4,0.1,0.5};
		// colorSelection[] = {0,0,0,0.6};
		sizeEx = 0.022;
	};
	class YourMoneyText: SlotText {
		idc = IDC + 31;
		y = 0.45;
	};
	class MagPriceText: YourMoneyText {
		idc = IDC + 32;
		y = 0.50;
	};
	class UpgradeText: YourMoneyText {
		idc = IDC + 33;
		y = 0.60;
	};
	class TimeText: YourMoneyText {
		idc = IDC + 34;
		y = 0.30;
	};
	class MagazinesList: TZK_ListBox {
		idc = IDC + 20;
		x = 0.14;
		y = 0.15;
		w = 0.17;
		h = 0.67;
	};
	class EquippedList: MagazinesList {
		idc = IDC + 21;
		x = 0.42;
		w = 0.21;
		y = 0.25;
		h = 0.47;
		sizeEX = 0.024;
		colorText[] = {0.9, 0.6, 0.3, 1.0};
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
	class MagClear: MagAdd {
		y = 0.40;
		w = 0.05;
		text = "Clear";
		action = "btnValue00 = 2^2"
	};
	class Exit: Button {
		x = 0.82;
		y = 0.70;
		w = 0.06;
		h = 0.05;
		text = "Exit";
		action = "closeDialog 0";
		colorText[] = {0.2,0.1,0.0,1.0};
	};
	class Confirm: Exit {
		x = 0.70;
		w = 0.10;
		text = "Confirm"
		action = "btnValue00 = 2^0"
	};
};