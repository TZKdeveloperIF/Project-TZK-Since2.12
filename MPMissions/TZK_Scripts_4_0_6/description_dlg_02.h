#define X_INV 0.5
// #define Y_INV 0.05
#define Y_INV 0.04
#define W_SLOT 0.048
#define H_SLOT 0.06
// #define W_SLOT 0.06
// #define H_SLOT 0.075

class EquipmentMenu: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {Sub_BG, Sub_BG_Light};
	objects[] = { };
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
	};

	class Sub_BG: BackgroundWindow {
		x = 0.0;
		y = 0.0;
		w = 1.0;
		h = 0.65;
	};
	class Sub_BG_Light: Light_BG_Window {
		x = 0.0;
		y = 0.0;
		w = 1.0;
		h = 0.65;
	};

	class Equipment_MoneyStatus: Label {
		idc = -1;
		x = 0.5015
		y = 0.0035;
		w = 0.0865
		h = 0.03
		text = "Cash:";
		colorBackground[] = COLOR_DATA_TEXT;
		colorText[] = {0.686, 0.686, 0.686, 0.775};
	};
	class Equipment_Money: DataText {
		idc = IDC_TEXT_PLAYER_MONEY_EQUIPMENT;
		x = 0.565
		y = 0.0035;
		w = 0.075
		h = 0.03
		colorBackground[] = COLOR_DATA_TEXT;
		colorText[] = {0.686, 0.686, 0.686, 0.775};
  	};
  	class Equipment_CostStatus: Label {
		idc = -1;
		x = 0.358
		y = 0.0035;
		w = 0.1
		h = 0.03
		text = "Cost:";
		colorBackground[] = COLOR_DATA_TEXT;
		colorText[] = {0.686, 0.686, 0.686, 0.775};
	};
	class Equipment_Cost: DataText {
		idc = IDC_TEXT_PLAYER_COST_EQUIPMENT;
		x = 0.426
		y = 0.0035;
		w = 0.075
		h = 0.03
		colorBackground[] = COLOR_DATA_TEXT;
		colorText[] = {0.686, 0.686, 0.686, 0.775};
  	};

	class PrimaryLabel: Label {
		x = 0.00;
		y = 0.02;
		w = 0.25;
		h = 0.03;
		text = "Primary Weapons";
	};
	class Primary: ListBox {
		idc = IDC_LB_PRIM;
		x = 0.00;
		y = 0.05;
		w = 0.25;
		h = 0.3;
	};
	class PrimaryAmmo: ListBox {
		idc = IDC_LB_PRIM_AMMO;
		x = 0.0;
		y = 0.35;
		w = 0.25;
		h = 0.09;
	};
	class AddPrimaryAmmo: Button {
		x = 0.25;
		y = 0.35;
		w = 0.04;
		h = 0.04;
		text = "+";
		action = "btnAddPrim = true";
	};
	class RemovePrimaryAmmo: Button {
		x = 0.25;
		y = 0.39;
		w = 0.04;
		h = 0.04;
		text = "-";
		action = "btnRemPrim = true";
	};
	class HandgunLabel: Label {
		x = 0.0;
		y = 0.45;
		w = 0.25;
		h = 0.03;
		text = "Handguns";
	};
	class Handgun: ListBox {
		idc = IDC_LB_HG;
		x = 0.0;
		y = 0.48;
		w = 0.25;
		h = 0.06;
	};
	class HandgunAmmo: ListBox {
		idc = IDC_LB_HG_AMMO;
		x = 0.0;
		y = 0.54;
		w = 0.25;
		h = 0.09;
	};
	class AddHandgunAmmo: Button {
		x = 0.25;
		y = 0.54;
		w = 0.04;
		h = 0.04;
		text = "+";
		action = "btnAddHandgun = true";
	};
	class RemoveHandgunAmmo: Button {
		x = 0.25;
		y = 0.58;
		w = 0.04;
		h = 0.04;
		text = "-";
		action = "btnRemHandgun = true";
	};
	class SecondaryLabel: Label {
		x = 0.75;
		y = 0.02;
		w = 0.25;
		h = 0.03;
		text = "Secondary Weapons";
	};
	class Secondary: ListBox {
		idc = IDC_LB_SEC;
		x = 0.75;
		y = 0.05;
		w = 0.25;
		h = 0.15;
	};
	class SecondaryAmmo: ListBox {
		idc = IDC_LB_SEC_AMMO;
		x = 0.75;
		y = 0.2;
		w = 0.25;
		h = 0.09;
	};
	class AddSecondaryAmmo: Button {
		x = 0.71;
		y = 0.2;
		w = 0.04;
		h = 0.04;
		text = "+";
		action = "btnAddSec = true";
	};
	class RemoveSecondaryAmmo: Button {
		x = 0.71;
		y = 0.24;
		w = 0.04;
		h = 0.04;
		text = "-";
		action = "btnRemSec = true";
	};
	class AddOptics: Button {
		x = 0.71;
		y = 0.33;
		w = 0.04;
		h = 0.04;
		text = "+";
		action = "btnAddOptics = true";
	};
	class RemoveOptics: Button {
		x = 0.71;
		y = 0.37;
		w = 0.04;
		h = 0.04;
		text = "-";
		action = "btnRemOptics = true";
	};
	class OpticsList: ListBox {
		idc = IDC_LB_Opt;
		x = 0.75;
		y = 0.33;
		w = 0.25;
		h = 0.09;
	};

	class EquipmentLabel: Label {
		x = 0.75;
		y = 0.30;
		w = 0.25;
		h = 0.03;
		text = "Equipment";
	};
	class Equipment: ListBox {
		idc = IDC_LB_EQ;
		x = 0.75;
		y = 0.42;
		w = 0.25;
		h = 0.21;
	};
	class AddEquipment: Button {
		x = 0.71;
		y = 0.42;
		w = 0.04;
		h = 0.04;
		text = "+";
		action = "btnAddEq = true";
	};
	class RemoveEquipment: Button {
		x = 0.71;
		y = 0.46;
		w = 0.04;
		h = 0.04;
		text = "-";
		action = "btnRemEq = true";
	};
	class TemplatesLabel: Label {
		idc = IDC+0;
		x = 0.35;
		y = 0.43;
		w = 0.3;
		text = "UNDEFINED";
	};
	class TemplateList: ListBox {
		idc = IDC_LB_TEMPLATES;
		x = 0.35;
		y = 0.47;
		w = 0.3;
		h = 0.16;
	};

	class SaveTemplate: Button {
		x = 0.65;
		y = 0.47;
		w = 0.05;
		text = "Save";
		action = "btnSaveTempl = true";
	};
	class LoadTemplate: Button {
		x = 0.65;
		y = 0.51;
		w = 0.05;
		text = "Load";
		action = "btnLoadTempl = true";
	};
	class BuyTemplate: Button {
		idc = IDC+1;
		x = 0.65;
		y = 0.59;
		w = 0.05;
		text = "Buy";
		action = "btnBuyTempl = true";
	};

	class Buy: Button {
		idc = IDC+2;
		x = X_INV+3*W_SLOT;
		y = Y_INV;
		w = 0.05;
		text = "Buy";
		action = "btnBuy = true";
	};
	class Clear: Button {
		x = X_INV-3*W_SLOT-0.05;
		y = Y_INV;
		w = 0.05;
		text = "Clear";
		action = "btnClear = true";
	};

	class Exit: Button {
		x = 0.95;
		y = 0.0;
		w = 0.05;
		text = "Exit";
		action = "closeDialog 0";
	};

	class PrimaryImage: Image {
		idc = IDC_PIC_PRIM;
		x = X_INV-3*W_SLOT;
		y = Y_INV;
		w = 3*W_SLOT;
		h = 1.5*H_SLOT;
	};
	class PrimaryOnlyImage: Image {
		idc = IDC_PIC_PRIM_ONLY;
		x = X_INV-1.5*W_SLOT;
		y = Y_INV;
		w = 3*W_SLOT;
		h = 1.5*H_SLOT;
	};

	class SecondaryImage: Image {
		idc = IDC_PIC_SEC;
		x = X_INV;
		y = Y_INV;
		w = 3*W_SLOT;
		h = 1.5*H_SLOT;
	};

	class GeneralImage_0_1: Image {
		idc = 0 + IDC_PIC_GEN_1;
		x = X_INV-2*W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_0_2: Image {
		idc = 0 + IDC_PIC_GEN_2;
		x = X_INV-2*W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_0_3: Image {
		idc = 0 + IDC_PIC_GEN_3;
		x = X_INV-2*W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = 3*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_0_4: Image {
		idc = 0 + IDC_PIC_GEN_4;
		x = X_INV-2*W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = 4*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_0_5: Image {
		idc = 0 + IDC_PIC_GEN_5;
		x = X_INV-2*W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = 5*W_SLOT;
		h = H_SLOT;
	};


	class GeneralImage_1_1: Image {
		idc = 1 + IDC_PIC_GEN_1;
		x = X_INV-1*W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_1_2: Image {
		idc = 1 + IDC_PIC_GEN_2;
		x = X_INV-W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_1_3: Image {
		idc = 1 + IDC_PIC_GEN_3;
		x = X_INV-W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = 3*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_1_4: Image {
		idc = 1 + IDC_PIC_GEN_4;
		x = X_INV-W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = 4*W_SLOT;
		h = H_SLOT;
	};


	class GeneralImage_2_1: Image {
		idc = 2 + IDC_PIC_GEN_1;
		x = X_INV;
		y = Y_INV+1.6*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_2_2: Image {
		idc = 2 + IDC_PIC_GEN_2;
		x = X_INV;
		y = Y_INV+1.6*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_2_3: Image {
		idc = 2 + IDC_PIC_GEN_3;
		x = X_INV;
		y = Y_INV+1.6*H_SLOT;
		w = 3*W_SLOT;
		h = H_SLOT;
	};

	class GeneralImage_3_1: Image {
		idc = 3 + IDC_PIC_GEN_1;
		x = X_INV+W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_3_2: Image {
		idc = 3 + IDC_PIC_GEN_2;
		x = X_INV+W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_10_1: Image {
		idc = 10 + IDC_PIC_GEN_1;
		x = X_INV+2*W_SLOT;
		y = Y_INV+1.6*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};

	class GeneralImage_4_1: Image {
		idc = 4 + IDC_PIC_GEN_1;
		x = X_INV-3*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_4_2: Image {
		idc = 4 + IDC_PIC_GEN_2;
		x = X_INV-3*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_4_3: Image {
		idc = 4 + IDC_PIC_GEN_3;
		x = X_INV-3*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 3*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_4_4: Image {
		idc = 4 + IDC_PIC_GEN_4;
		x = X_INV-3*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 4*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_4_6: Image {
		idc = IDC_PIC_GEN_6;
		x = X_INV-3*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 6*W_SLOT;
		h = H_SLOT;
	};

	class GeneralImage_5_1: Image {
		idc = 5 + IDC_PIC_GEN_1;
		x = X_INV-2*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_5_2: Image {
		idc = 5 + IDC_PIC_GEN_2;
		x = X_INV-2*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_5_3: Image {
		idc = 5 + IDC_PIC_GEN_3;
		x = X_INV-2*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 3*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_5_4: Image {
		idc = 5 + IDC_PIC_GEN_4;
		x = X_INV-2*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 4*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_5_5: Image {
		idc = 5 + IDC_PIC_GEN_5;
		x = X_INV-2*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 5*W_SLOT;
		h = H_SLOT;
	};

	class GeneralImage_6_1: Image {
		idc = 6 + IDC_PIC_GEN_1;
		x = X_INV-1*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_6_2: Image {
		idc = 6 + IDC_PIC_GEN_2;
		x = X_INV-1*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_6_3: Image {
		idc = 6 + IDC_PIC_GEN_3;
		x = X_INV-1*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 3*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_6_4: Image {
		idc = 6 + IDC_PIC_GEN_4;
		x = X_INV-1*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 4*W_SLOT;
		h = H_SLOT;
	};

	class GeneralImage_7_1: Image {
		idc = 7 + IDC_PIC_GEN_1;
		x = X_INV-0*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_7_2: Image {
		idc = 7 + IDC_PIC_GEN_2;
		x = X_INV-0*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_7_3: Image {
		idc = 7 + IDC_PIC_GEN_3;
		x = X_INV-0*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 3*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_8_1: Image {
		idc = 8 + IDC_PIC_GEN_1;
		x = X_INV+1*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_8_2: Image {
		idc = 8 + IDC_PIC_GEN_2;
		x = X_INV+1*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class GeneralImage_9_1: Image {
		idc = 9 + IDC_PIC_GEN_1;
		x = X_INV+2*W_SLOT;
		y = Y_INV+2.7*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};

	class HandgunImage: Image {
		idc = IDC_PIC_HG;
		x = X_INV-3*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class HandgunImage_0_1: Image {
		idc = 0 + IDC_PIC_HG_1;
		x = X_INV-1*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class HandgunImage_0_2: Image {
		idc = 0 + IDC_PIC_HG_2;
		x = X_INV-1*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class HandgunImage_0_3: Image {
		idc = 0 + IDC_PIC_HG_3;
		x = X_INV-1*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = 3*W_SLOT;
		h = H_SLOT;
	};
	class HandgunImage_0_4: Image {
		idc = IDC_PIC_HG_4;
		x = X_INV-1*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = 4*W_SLOT;
		h = H_SLOT;
	};
	class HandgunImage_1_1: Image {
		idc = 1 + IDC_PIC_HG_1;
		x = X_INV-0*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class HandgunImage_1_2: Image {
		idc = 1 + IDC_PIC_HG_2;
		x = X_INV-0*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class HandgunImage_1_3: Image {
		idc = 1 + IDC_PIC_HG_3;
		x = X_INV-0*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = 3*W_SLOT;
		h = H_SLOT;
	};
	class HandgunImage_2_1: Image {
		idc = 2 + IDC_PIC_HG_1;
		x = X_INV+1*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class HandgunImage_2_2: Image {
		idc = 2 + IDC_PIC_HG_2;
		x = X_INV+1*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = 2*W_SLOT;
		h = H_SLOT;
	};
	class HandgunImage_3_1: Image {
		idc = 3 + IDC_PIC_HG_1;
		x = X_INV+2*W_SLOT;
		y = Y_INV+3.8*H_SLOT;
		w = W_SLOT;
		h = H_SLOT;
	};
	class OpticsFirstImage: Image {
		idc = IDC_PIC_OPT + 0;
		x = X_INV-3*W_SLOT;
		y = Y_INV+4.9*H_SLOT;
		w = 3*W_SLOT;
		h = 1.5*H_SLOT;
	};
	class OpticsSecondImage: Image {
		idc = IDC_PIC_OPT + 1;
		x = X_INV+0*W_SLOT;
		y = Y_INV+4.9*H_SLOT;
		w = 3*W_SLOT;
		h = 1.5*H_SLOT;
	};
};

// EOF
