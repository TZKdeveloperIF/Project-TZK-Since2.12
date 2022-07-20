class TZK_CustomAircraftWeaponDialog: TZK_Setting_Dialog {
	controlsBackground[] = {
		Sub_BG_Light, BackGround_0_Base, BackGround_2_Left, BackGround_2_Mid, BackGround_2_Right, 
		Frame_0_Base, Frame_1_Left , Frame_1_Mid, Frame_1_Right
	};
	class Frame_0_Base: TZK_Frame_0 {
		idc = IDC + 10;
		colorText[] = {1, 1, 1, 0.7};
		text = "Custom Aircraft Weapons";
		x = 0.1;
		y = 0.082;	//0.018 less for sizeEx 0.030
		w = 0.85;
		h = 0.768;
	};
	class Frame_1_Left: TZK_Frame_1 {
		idc = IDC + 11;
		colorText[] = {0, 0, 0, 0.6};
		text = "Magazines";
		x = 0.12;
		y = 0.13;	// 0.01 less for sizeEx 0.020
		w = 0.25;
		h = 0.71;
	};
	class Frame_1_Mid: Frame_1_Left {
		idc = IDC + 12;
		text = "Equipped";
		x = 0.40;
	};
	class Frame_1_Right: Frame_1_Left {
		idc = IDC + 13;
		text = " Cost ";
		x = 0.68;
	};
	class BackGround_2_Left: BackGround_1_Left {
		colorBackground[] = {0.3, 0.3, 0.8, 0.2};
	};
	class BackGround_2_Mid: BackGround_1_Mid {
		colorBackground[] = {0.3, 0.3, 0.8, 0.2};
	};
	class BackGround_2_Right: BackGround_1_Right {
		colorBackground[] = {0.3, 0.3, 0.8, 0.2};
	};

	objects[] = {};
	controls[] = {
		MagazinesList, EquippedList,
		MagAdd, MagRem, MagClear, Exit, Buy, 
		SlotLabel, SlotText, YourMoneyLabel, YourMoneyText, MagPriceLabel, MagPriceText,
		UpgradeLeabel, UpgradeText, TimeLabel, TimeText,
	};
	class SlotLabel: Label {
		style = ST_LEFT;
		x = 0.70;
		y = 0.15;
		w = 0.2;
		text = "Slots left:";
		sizeEx = 0.022;
	};
	class YourMoneyLabel: SlotLabel {
		y = 0.35;
		text = "Your Money:";
	};
	class MagPriceLabel: YourMoneyLabel {
		y = 0.45;
		text = "Equipment cost:";
	};
	class UpgradeLeabel: YourMoneyLabel {
		y = 0.55;
		text = "Extra Vehicle Upgrade: ";
	};
	class TimeLabel: YourMoneyLabel {
		y = 0.25;
		text = "Rearm Time: ";
	};
	class SlotText: Text {
		idc = IDC + 30;
		style = ST_LEFT;
		x = 0.80;
		y = 0.20;
		w = 0.1;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0};
		sizeEx = 0.022;
	};
	class YourMoneyText: SlotText {
		idc = IDC + 31;
		y = 0.40;
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
		colorText[] = {1.0, 0.0, 0.0, 1.0};
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
		colorText[] = {0.9,0.7,0.5,1.0};
	};
	class Buy: Exit {
		x = 0.72;
		text = "Buy"
		action = "btnValue00 = 2^3"
	};
};