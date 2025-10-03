class SimpleConfirmDlg: Menu
{
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {ScdBg};
	objects[] = { };
	controls[] = {Scd_Title, Scd_BUTTON_OK, Scd_BUTTON_EXIT};

	class ScdBg: BackgroundWindow {
		x = 0.35;
		y = 0.36;
		w = 0.30;
		h = 0.28;
		text = ;
		colorBackground[] = {0.247, 0.247, 0.247, 0.75};
	};

	class Scd_Title_Base: Title {
		idc = IDC + 16 * 0;
		style = ST_CENTER;
		x = 0.37;
		y = 0.42;
		w = 0.26;
		h = 0.03;
		colorBackground[] = {0.247, 0.247, 0.247, 0.75};
		text = "Confirm Start Position";
	};

	class Scd_Title: Scd_Title_Base {};

	class Scd_BUTTON_OK: Button {
		idc = IDC + 16 * 1;
		x = 0.3975;
		y = 0.52;
		w = 0.1;
		h = 0.04;
		text = "Confirm"
		action = "btnValue00 = true"
		default = false
	};

	class Scd_BUTTON_EXIT: Button {
		idc = IDC + 16 * 2;
		x = 0.5025;
		y = 0.52;
		w = 0.1;
		h = 0.04;
		text = "Exit"
		action = "btnValue01 = true"
		default = false
	};
};

class ImportantSimpleConfirmDlg: SimpleConfirmDlg
{
	// To avoid touch by mistake, the default button shouldn't be "OK"
	controls[] = {Scd_Title, Scd_BUTTON_EXIT, Scd_BUTTON_OK};

	class Scd_Title: Scd_Title_Base {
		colorText[] = {0.9, 0.2, 0.2, 0.9};
	};
};

class TzkRtsSubMenuOneListBox: Menu {
	controlsBackground[] = {OneListBg};
	class OneListBg: BackgroundWindow {
		x = 0.35;
		y = 0.10;
		w = 0.3;
		h = 0.6;
	};

	controls[] = {
		TRSM_LIST_TITLE, BTN_OK, BTN_EXIT, 
		LISTBOX0, LISTTEXT0,
		CustomShortkey,
	};

	DefCustomKeyClass

	class TRSM_LIST_TITLE: Title {
		idc = IDC + 0;
		style = ST_CENTER;
		x = 0.42;
		y = 0.12;
		w = 0.16;
		h = 0.03;
		colorBackground[] = {0.247, 0.247, 0.247, 0.75};
		text = "";
	};

	class BTN_EXIT: Button {
		x = 0.60;
		y = 0.10;
		w = 0.05;
		h = 0.04;
		text = "Exit";
		action = "btnValue00 = true";
	};
	class BTN_OK: Button {
		x = 0.45;
		y = 0.65;
		w = 0.10;
		h = 0.04;
		text = "OK";
		action = "btnValue01 = true";
	};

	class LISTTEXT0: Label {
		idc = IDC + 16 * 3 + 1;
		style = ST_CENTER;
		x = 0.40;
		y = 0.17;
		w = 0.20;
		text = "UNDEFINED";
	};
	class LISTBOX0: TZK_ListBox {
		idc = IDC + 16 * 3 + 0;
		x = 0.40;
		y = 0.20;
		w = 0.20;
		h = 0.42;
	};
};

class TzkRtsSubMenuOneListTiny: TzkRtsSubMenuOneListBox {
	class OneListBg: BackgroundWindow {
		x = 0.35;
		y = 0.30;
		w = 0.3;
		h = 0.4;
	};

	class TRSM_LIST_TITLE: Title {
		idc = IDC + 0;
		style = ST_CENTER;
		x = 0.42;
		y = 0.32;
		w = 0.16;
		h = 0.03;
		colorBackground[] = {0.247, 0.247, 0.247, 0.75};
		text = "";
	};

	class BTN_EXIT: Button {
		x = 0.60;
		y = 0.30;
		w = 0.05;
		h = 0.04;
		text = "Exit";
		action = "btnValue00 = true";
	};

	class LISTTEXT0: Label {
		idc = IDC + 16 * 3 + 1;
		style = ST_CENTER;
		x = 0.40;
		y = 0.37;
		w = 0.20;
		text = "UNDEFINED";
	};
	class LISTBOX0: TZK_ListBox {
		idc = IDC + 16 * 3 + 0;
		x = 0.40;
		y = 0.40;
		w = 0.20;
		h = 0.20;
	};
};

class TzkRtsSubMenuOneListWide: TzkRtsSubMenuOneListBox {
	controlsBackground[] = {OneListWideBg};
	class OneListWideBg: OneListBg {
		x = 0.30;
		w = 0.40;
	};

	controls[] = {
		TRSM_LIST_TITLE, BTN_SET, BTN_CLEAR, BTN_EXIT, BTN_SET_DIAGONAL, 
		LISTBOX0, LISTTEXT0
	};
	class TRSM_LIST_TITLE: Title {
		idc = IDC + 0;
		style = ST_CENTER;
		x = 0.38;
		y = 0.12;
		w = 0.24;
		h = 0.03;
		colorBackground[] = {0.247, 0.247, 0.247, 0.75};
		text = "";
	};
	class LISTTEXT0: Label {
		idc = IDC + 16 * 3 + 1;
		style = ST_CENTER;
		x = 0.35;
		y = 0.17;
		w = 0.30;
		text = "UNDEFINED";
	};
	class LISTBOX0: TZK_ListBox {
		idc = IDC + 16 * 3 + 0;
		x = 0.35;
		y = 0.20;
		w = 0.30;
		h = 0.42;
	};
	class BTN_EXIT: Button {
		x = 0.65;
		y = 0.10;
		w = 0.05;
		h = 0.04;
		text = "Exit";
		action = "btnValue00 = true";
	};
	class BTN_SET: Button {
		idc = IDC + 1;
		x = 0.32;
		y = 0.65;
		w = 0.10;
		h = 0.04;
		text = "Set";
		action = "btnValue01 = true";
	};
	class BTN_CLEAR: Button {
		idc = IDC + 2;
		x = 0.58;
		y = 0.65;
		w = 0.10;
		h = 0.04;
		text = "Clear";
		action = "btnValue02 = true";
	};
	class BTN_SET_DIAGONAL: Button {
		idc = IDC + 3;
		x = 0.45;
		y = 0.65;
		w = 0.10;
		h = 0.04;
		text = "Set Line";
		action = "btnValue03 = true";
	};
};

class TzkRtsSubMenuOneListLarge: TzkRtsSubMenuOneListBox {
	controlsBackground[] = {OneListLargeBg};
	class OneListLargeBg: OneListBg {
		x = 0.25;
		w = 0.5;
	};

	controls[] = {
		TRSM_LIST_TITLE, BTN_SET, BTN_CLEAR, BTN_EXIT, 
		LISTBOX0, LISTTEXT0
	};
	class TRSM_LIST_TITLE: Title {
		idc = IDC + 0;
		style = ST_CENTER;
		x = 0.32;
		y = 0.12;
		w = 0.36;
		h = 0.03;
		colorBackground[] = {0.247, 0.247, 0.247, 0.75};
		text = "";
	};
	class LISTTEXT0: Label {
		idc = IDC + 16 * 3 + 1;
		style = ST_CENTER;
		x = 0.30;
		y = 0.17;
		w = 0.40;
		text = "UNDEFINED";
	};
	class LISTBOX0: TZK_ListBox {
		idc = IDC + 16 * 3 + 0;
		x = 0.30;
		y = 0.20;
		w = 0.40;
		h = 0.42;
	};
	class BTN_EXIT: Button {
		x = 0.70;
		y = 0.10;
		w = 0.05;
		h = 0.04;
		text = "Exit";
		action = "btnValue00 = true";
	};
	class BTN_SET: Button {
		idc = IDC + 1;
		x = 0.35;
		y = 0.65;
		w = 0.10;
		h = 0.04;
		text = "Set";
		action = "btnValue01 = true";
	};
	class BTN_CLEAR: Button {
		x = 0.55;
		y = 0.65;
		w = 0.10;
		h = 0.04;
		text = "Clear";
		action = "btnValue02 = true";
	};
};

class TzkRtsSubMenuTwoListBox: TzkRtsSubMenuOneListBox {
	controlsBackground[] = {TowListBg};
	class TowListBg: OneListBg {
		x = 0.25;
		w = 0.5;
	};

	controls[] = {
		TRSM_LIST_TITLE, BTN_OK, BTN_UNDO, BTN_EXIT, 
		LISTBOX0, LISTTEXT0, LISTBOX1, LISTTEXT1,
		CustomShortkey,
	};

	class BTN_EXIT: Button {
		x = 0.70;
		y = 0.10;
		w = 0.05;
		h = 0.04;
		text = "Exit";
		action = "btnValue00 = true";
	};
	class BTN_UNDO: Button {
		idc = IDC + 16 * 1 + 0;
		x = 0.69;
		y = 0.65;
		w = 0.05;
		h = 0.04;
		text = "UNDO";
		action = "btnValue02 = true";
	};

	class LISTTEXT0: Label {
		idc = IDC + 16 * 3 + 1;
		style = ST_CENTER;
		x = 0.27;
		y = 0.17;
		w = 0.20;
		text = "UNDEFINED";
	};
	class LISTBOX0: TZK_ListBox {
		idc = IDC + 16 * 3 + 0;
		x = 0.27;
		y = 0.20;
		w = 0.20;
		h = 0.42;
	};
	class LISTTEXT1: LISTTEXT0 {
		idc = IDC + 16 * 3 + 3;
		x = 0.52;
	};
	class LISTBOX1: LISTBOX0 {
		idc = IDC + 16 * 3 + 2;
		x = 0.52;
	};
};

class TzkRtsBuildStructSubMenu: TzkRtsSubMenuTwoListBox {
	controlsBackground[] = {TowListBg};
	class TowListBg: OneListBg {
		x = 0.15;
		w = 0.7;
		h = 0.6;
	};
	controls[] = {
		TRSM_LIST_TITLE, BTN_OK, BTN_UNDO, BTN_EXIT, 
		LISTBOX0, LISTTEXT0, LISTBOX1, LISTTEXT1, 
		LISTBOX2, LISTTEXT2, 
		
		BTN_BG_0_0, BTN_BG_0_1, BTN_BG_0_2, BTN_BG_0_3, BTN_BG_0_4, BTN_BG_0_5, 
		BTN_0_0, BTN_0_1, BTN_0_2, BTN_0_3, BTN_0_4, BTN_0_5, 
		CustomShortkey,
	};
	DefCustomKeyClass
	class BTN_BG_0_0: SelectedBG {
		idc = IDC + 16 * 6 + 0;
		x = 0.20 + 0.10 * 0 + 0.005;
		y = 0.20;
		w = 0.09;
		h = 0.04;
	};
	class BTN_0_0: Button {
		idc = IDC + 16 * 5 + 0;
		x = 0.20 + 0.10 * 0 + 0.005;
		y = 0.20;
		w = 0.09;
		h = 0.04;
		action = "btnValue02 = 0";
	};
	class BTN_BG_0_1: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 1;
		x = 0.20 + 0.10 * 1 + 0.005;
	};
	class BTN_BG_0_2: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 2;
		x = 0.20 + 0.10 * 2 + 0.005;
	};
	class BTN_BG_0_3: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 3;
		x = 0.20 + 0.10 * 3 + 0.005;
	};
	class BTN_BG_0_4: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 4;
		x = 0.20 + 0.10 * 4 + 0.005;
	};
	class BTN_BG_0_5: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 5;
		x = 0.20 + 0.10 * 5 + 0.005;
	};
	class BTN_0_1: BTN_0_0 {
		idc = IDC + 16 * 5 + 1;
		x = 0.20 + 0.10 * 1 + 0.005;
		action = "btnValue02 = 1";
	};
	class BTN_0_2: BTN_0_0 {
		idc = IDC + 16 * 5 + 2;
		x = 0.20 + 0.10 * 2 + 0.005;
		action = "btnValue02 = 2";
	};
	class BTN_0_3: BTN_0_0 {
		idc = IDC + 16 * 5 + 3;
		x = 0.20 + 0.10 * 3 + 0.005;
		action = "btnValue02 = 3";
	};
	class BTN_0_4: BTN_0_0 {
		idc = IDC + 16 * 5 + 4;
		x = 0.20 + 0.10 * 4 + 0.005;
		action = "btnValue02 = 4";
	};
	class BTN_0_5: BTN_0_0 {
		idc = IDC + 16 * 5 + 5;
		x = 0.20 + 0.10 * 5 + 0.005;
		action = "btnValue02 = 5";
	};

	class BTN_EXIT: Button {
		x = 0.77;
		y = 0.10;
		w = 0.08;
		h = 0.04;
		text = "Exit";
		action = "btnValue00 = 0";
	};
	class BTN_OK: Button {
		x = 0.45;
		y = 0.65;
		w = 0.10;
		h = 0.04;
		text = "OK";
		action = "btnValue00 = 1";
	};
	class BTN_UNDO: Button {
		x = 0.77;
		y = 0.65;
		w = 0.08;
		h = 0.04;
		text = "UNDO";
		action = "btnValue00 = 2";
	};

	class LISTTEXT0: Label {
		idc = IDC + 16 * 3 + 1;
		style = ST_CENTER;
		x = 0.27;
		y = 0.26;
		w = 0.20;
		text = "UNDEFINED";
	};
	class LISTBOX0: TZK_ListBox {
		idc = IDC + 16 * 3 + 0;
		x = 0.21;
		y = 0.30;
		w = 0.28;
		h = 0.32;
	};
	class LISTTEXT1: LISTTEXT0 {
		idc = IDC + 16 * 3 + 3;
		x = 0.51;
		w = 0.13;
	};
	class LISTBOX1: LISTBOX0 {
		idc = IDC + 16 * 3 + 2;
		x = 0.51;
		w = 0.13;
	};
	class LISTTEXT2: LISTTEXT1 {
		idc = IDC + 16 * 3 + 5;
		x = 0.66;
		w = 0.13;
	};
	class LISTBOX2: LISTBOX1 {
		idc = IDC + 16 * 3 + 4;
		x = 0.66;
		w = 0.13;
	};
};

class TzkRtsArtSubMenu: Menu {
	controlsBackground[] = {Bg};
	class Bg: BackgroundWindow {
		x = 0.20;
		y = 0.10;
		w = 0.60;
		h = 0.60;
	};

	controls[] = {
		TRSM_LIST_TITLE, BTN_SHOOT_AREA, BTN_DESTROY_OBSTRUCTION, 
		BTN_EXIT, 
		BTN_0_TITLE, BTN_1_TITLE, 
		BTN_BG_0_0, BTN_BG_0_1, BTN_BG_0_2, BTN_BG_0_3, BTN_BG_0_4, 
		BTN_0_0, BTN_0_1, BTN_0_2, BTN_0_3, BTN_0_4, 
		BTN_BG_1_0, BTN_BG_1_1, BTN_BG_1_2, BTN_BG_1_3, 
		BTN_1_0, BTN_1_1, BTN_1_2, BTN_1_3, 
		// for MLRS shooting counts
		MLRS_CNT_TITLE, MLRS_CNT_TEXT,
		LISTBOX0, LISTTEXT0, 
		LISTBOX1, LISTTEXT1,
		CustomShortkey,
	};

	DefCustomKeyClass
	class MLRS_CNT_TITLE: RscMulti {
		// style = ST_MULTI + ST_NO_RECT;
		x = 0.20 + 0.15 * 1 + 0.025;
		y = 0.25 + 0.05 * 5;
		w = 0.10;
		h = 0.04;
		text = "MLRS fire\ncount";
	};
	class MLRS_CNT_TEXT: RscEdit {
		idc = IDC + 16 * 3 + 7;
		x = 0.20 + 0.15 * 1 + 0.025;
		y = 0.25 + 0.05 * 6;
		w = 0.10;
		h = 0.04;
		text = "";
	};

	class TRSM_LIST_TITLE: Title {
		idc = IDC + 16 * 3 + 0;
		style = ST_CENTER;
		x = 0.40;
		y = 0.12;
		w = 0.20;
		h = 0.03;
		colorBackground[] = {0.247, 0.247, 0.247, 0.75};
		text = "";
	};

	class BTN_EXIT: Button {
		x = 0.75;
		y = 0.10;
		w = 0.05;
		h = 0.04;
		text = "Exit";
		action = "btnValue00 = true";
	};
	class BTN_SHOOT_AREA: Button {
		idc = IDC + 16 * 3 + 8;
		x = 0.25;
		y = 0.65;
		w = 0.20;
		h = 0.04;
		text = "";
		action = "btnValue01 = 1";
	};
	class BTN_DESTROY_OBSTRUCTION: BTN_SHOOT_AREA {
		idc = IDC + 16 * 3 + 9;
		x = 0.55;
		text = "";
		action = "btnValue01 = 2";
	};

	class BTN_0_TITLE: Label {
		idc = IDC + 16 * 3 + 5;
		style = ST_CENTER;
		x = 0.20 + 0.15 * 0 + 0.025;
		y = 0.17;
		w = 0.12;
		text = "UNDEFINED";
	};
	class BTN_1_TITLE: BTN_0_TITLE {
		idc = IDC + 16 * 3 + 6;
		style = ST_CENTER;
		x = 0.20 + 0.15 * 1 + 0.025;
	};

	class BTN_BG_0_0: SelectedBG {
		idc = IDC + 16 * 6 + 0;
		x = 0.20 + 0.15 * 0 + 0.025;
		y = 0.25 + 0.05 * 0;
		w = 0.10;
		h = 0.04;
	};
	class BTN_0_0: Button {
		idc = IDC + 16 * 5 + 0;
		x = 0.20 + 0.15 * 0 + 0.025;
		y = 0.25 + 0.05 * 0;
		w = 0.10;
		h = 0.04;
		action = "btnValue02 set [0, not(btnValue02 select 0)]";
	};
	class BTN_BG_0_1: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 1;
		y = 0.25 + 0.05 * 1;
	};
	class BTN_BG_0_2: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 2;
		y = 0.25 + 0.05 * 2;
	};
	class BTN_BG_0_3: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 3;
		y = 0.25 + 0.05 * 3;
	};
	class BTN_BG_0_4: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 4;
		y = 0.25 + 0.05 * 4;
	};
	class BTN_0_1: BTN_0_0 {
		idc = IDC + 16 * 5 + 1;
		y = 0.25 + 0.05 * 1;
		action = "btnValue02 set [1, not(btnValue02 select 1)]";
	};
	class BTN_0_2: BTN_0_0 {
		idc = IDC + 16 * 5 + 2;
		y = 0.25 + 0.05 * 2;
		action = "btnValue02 set [2, not(btnValue02 select 2)]";
	};
	class BTN_0_3: BTN_0_0 {
		idc = IDC + 16 * 5 + 3;
		y = 0.25 + 0.05 * 3;
		action = "btnValue02 set [3, not(btnValue02 select 3)]";
	};
	class BTN_0_4: BTN_0_0 {
		idc = IDC + 16 * 5 + 4;
		y = 0.25 + 0.05 * 4;
		action = "btnValue02 set [4, not(btnValue02 select 4)]";
	};
	
	class BTN_BG_1_0: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 8 + 0;
		x = 0.20 + 0.15 * 1 + 0.025;
	};
	class BTN_BG_1_1: BTN_BG_1_0 {
		idc = IDC + 16 * 6 + 8 + 1;
		y = 0.25 + 0.05 * 1;
	};
	class BTN_BG_1_2: BTN_BG_1_0 {
		idc = IDC + 16 * 6 + 8 + 2;
		y = 0.25 + 0.05 * 2;
	};
	class BTN_BG_1_3: BTN_BG_1_0 {
		idc = IDC + 16 * 6 + 8 + 3;
		y = 0.25 + 0.05 * 3;
	};
	class BTN_1_0: BTN_0_0 {
		idc = IDC + 16 * 5 + 8 + 0;
		x = 0.20 + 0.15 * 1 + 0.025;
		action = "btnValue03 set [0, not(btnValue03 select 0)]";
	};
	class BTN_1_1: BTN_1_0 {
		idc = IDC + 16 * 5 + 8 + 1;
		y = 0.25 + 0.05 * 1;
		action = "btnValue03 set [1, not(btnValue03 select 1)]";
	};
	class BTN_1_2: BTN_1_0 {
		idc = IDC + 16 * 5 + 8 + 2;
		y = 0.25 + 0.05 * 2;
		action = "btnValue03 set [2, not(btnValue03 select 2)]";
	};
	class BTN_1_3: BTN_1_0 {
		idc = IDC + 16 * 5 + 8 + 3;
		y = 0.25 + 0.05 * 3;
		action = "btnValue03 set [3, not(btnValue03 select 3)]";
	};
	
	class LISTTEXT0: Label {
		idc = IDC + 16 * 3 + 1;
		style = ST_CENTER;
		x = 0.50;
		y = 0.17;
		w = 0.12;
		text = "UNDEFINED";
	};
	class LISTBOX0: TZK_ListBox {
		idc = IDC + 16 * 3 + 2;
		x = 0.50;
		y = 0.20;
		w = 0.12;
		h = 0.42;
	};
	class LISTTEXT1: Label {
		idc = IDC + 16 * 3 + 3;
		style = ST_CENTER;
		x = 0.65;
		y = 0.17;
		w = 0.12;
		text = "UNDEFINED";
	};
	class LISTBOX1: TZK_ListBox {
		idc = IDC + 16 * 3 + 4;
		x = 0.65;
		y = 0.20;
		w = 0.12;
		h = 0.42;
	};
};

class TzkRtsBoardSubMenu: Menu {
	controlsBackground[] = {Bg};
	class Bg: BackgroundWindow {
		x = 0.30;
		y = 0.10;
		w = 0.40;
		h = 0.60;
	};

	controls[] = {
		TRSM_LIST_TITLE, BTN_OK, BTN_EXIT, 
		BTN_0_TITLE, 
		BTN_BG_0_0, BTN_BG_0_1, BTN_BG_0_2, BTN_BG_0_3, BTN_BG_0_4, 
		BTN_BG_0_5, BTN_BG_0_6, BTN_BG_0_7, 
		BTN_0_0, BTN_0_1, BTN_0_2, BTN_0_3, BTN_0_4, 
		BTN_0_5, BTN_0_6, BTN_0_7, 
	};

	class TRSM_LIST_TITLE: Title {
		idc = IDC + 0;
		style = ST_CENTER;
		x = 0.40;
		y = 0.12;
		w = 0.20;
		h = 0.03;
		colorBackground[] = {0.247, 0.247, 0.247, 0.75};
		text = "";
	};

	class BTN_EXIT: Button {
		x = 0.65;
		y = 0.10;
		w = 0.05;
		h = 0.04;
		text = "Exit";
		action = "btnValue00 = true";
	};
	class BTN_OK: Button {
		x = 0.45;
		y = 0.65;
		w = 0.10;
		h = 0.04;
		text = "OK";
		action = "btnValue01 = true";
	};

	class BTN_0_TITLE: Label {
		idc = IDC + 16 * 3 + 0;
		style = ST_CENTER;
		x = 0.44;
		y = 0.15;
		w = 0.12;
		text = "UNDEFINED";
	};

	class BTN_BG_0_0: SelectedBG {
		idc = IDC + 16 * 6 + 0;
		x = 0.40;
		y = 0.20 + 0.05 * 0;
		w = 0.20;
		h = 0.04;
	};
	class BTN_0_0: Button {
		idc = IDC + 16 * 5 + 0;
		x = 0.40;
		y = 0.20 + 0.05 * 0;
		w = 0.20;
		h = 0.04;
		action = "btnValue02 set [0, not(btnValue02 select 0)]";
	};
	class BTN_BG_0_1: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 1;
		y = 0.20 + 0.05 * 1;
	};
	class BTN_BG_0_2: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 2;
		y = 0.20 + 0.05 * 2;
	};
	class BTN_BG_0_3: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 3;
		y = 0.20 + 0.05 * 3;
	};
	class BTN_BG_0_4: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 4;
		y = 0.20 + 0.05 * 4;
	};
	class BTN_BG_0_5: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 5;
		y = 0.20 + 0.05 * 5;
	};
	class BTN_BG_0_6: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 6;
		y = 0.20 + 0.05 * 6;
	};
	class BTN_BG_0_7: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 7;
		y = 0.20 + 0.05 * 7;
	};
	class BTN_0_1: BTN_0_0 {
		idc = IDC + 16 * 5 + 1;
		y = 0.20 + 0.05 * 1;
		action = "btnValue02 set [1, not(btnValue02 select 1)]";
	};
	class BTN_0_2: BTN_0_0 {
		idc = IDC + 16 * 5 + 2;
		y = 0.20 + 0.05 * 2;
		action = "btnValue02 set [2, not(btnValue02 select 2)]";
	};
	class BTN_0_3: BTN_0_0 {
		idc = IDC + 16 * 5 + 3;
		y = 0.20 + 0.05 * 3;
		action = "btnValue02 set [3, not(btnValue02 select 3)]";
	};
	class BTN_0_4: BTN_0_0 {
		idc = IDC + 16 * 5 + 4;
		y = 0.20 + 0.05 * 4;
		action = "btnValue02 set [4, not(btnValue02 select 4)]";
	};
	class BTN_0_5: BTN_0_0 {
		idc = IDC + 16 * 5 + 5;
		y = 0.20 + 0.05 * 5;
		action = "btnValue02 set [5, not(btnValue02 select 5)]";
	};
	class BTN_0_6: BTN_0_0 {
		idc = IDC + 16 * 5 + 6;
		y = 0.20 + 0.05 * 6;
		action = "btnValue02 set [6, not(btnValue02 select 6)]";
	};
	class BTN_0_7: BTN_0_0 {
		idc = IDC + 16 * 5 + 7;
		y = 0.20 + 0.05 * 7;
		action = "btnValue02 set [7, not(btnValue02 select 7)]";
	};
};

class TzkRtsOccupySubMenu: TzkRtsBoardSubMenu {};

class TzkRtsReclaimSubMenu: TzkRtsBoardSubMenu {
	class Bg: BackgroundWindow {
		x = 0.20;
		y = 0.10;
		w = 0.60;
		h = 0.60;
	};

	controls[] = {
		BTN_BG_0_0, BTN_BG_0_1, BTN_BG_0_2, BTN_BG_0_3, 
		BTN_BG_0_4, BTN_BG_0_5, BTN_BG_0_6, BTN_BG_0_7, 
		BTN_BG_0_8, BTN_BG_0_9, BTN_BG_0_10, BTN_BG_0_11, 
		BTN_BG_0_12, BTN_BG_0_13, BTN_BG_0_14, BTN_BG_0_15, 
		BTN_0_0, BTN_0_1, BTN_0_2, BTN_0_3, 
		BTN_0_4, BTN_0_5, BTN_0_6, BTN_0_7, 
		BTN_0_8, BTN_0_9, BTN_0_10, BTN_0_11, 
		BTN_0_12, BTN_0_13, BTN_0_14, BTN_0_15, 
		TRSM_LIST_TITLE, 
		BTN_0_TITLE, 
		BTN_BATTLE, BTN_DRIVER, BTN_GUNNER,
		BTN_EXIT, 
	};

	class BTN_EXIT: Button {
		x = 0.75;
		y = 0.10;
		w = 0.05;
		h = 0.04;
		text = "Exit";
		action = "btnValue00 = 0";
	};
	class BTN_BATTLE: Button {
		x = 0.22;
		y = 0.65;
		w = 0.16;
		h = 0.04;
		text = "Battle";
		action = "btnValue00 = 1";
	};
	class BTN_DRIVER: BTN_BATTLE {
		x = 0.42;
		text = "Driver Only";
		action = "btnValue00 = 2";
	};
	class BTN_GUNNER: BTN_BATTLE {
		x = 0.62;
		text = "Gunner Only";
		action = "btnValue00 = 3";
	};

	class BTN_BG_0_0: SelectedBG {
		idc = IDC + 16 * 6 + 0;
		x = 0.25;
		y = 0.20 + 0.05 * 0;
		w = 0.20;
		h = 0.04;
	};
	class BTN_0_0: Button {
		idc = IDC + 16 * 5 + 0;
		x = 0.25;
		y = 0.20 + 0.05 * 0;
		w = 0.20;
		h = 0.04;
		action = "btnValue01 set [0, not(btnValue01 select 0)]";
	};
	class BTN_BG_0_1: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 1;
		y = 0.20 + 0.05 * 1;
	};
	class BTN_BG_0_2: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 2;
		y = 0.20 + 0.05 * 2;
	};
	class BTN_BG_0_3: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 3;
		y = 0.20 + 0.05 * 3;
	};
	class BTN_BG_0_4: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 4;
		y = 0.20 + 0.05 * 4;
	};
	class BTN_BG_0_5: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 5;
		y = 0.20 + 0.05 * 5;
	};
	class BTN_BG_0_6: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 6;
		y = 0.20 + 0.05 * 6;
	};
	class BTN_BG_0_7: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 7;
		y = 0.20 + 0.05 * 7;
	};
	
	class BTN_BG_0_8: BTN_BG_0_0 {
		idc = IDC + 16 * 6 + 8;
		x = 0.55;
		y = 0.20 + 0.05 * 0;
	};
	class BTN_BG_0_9: BTN_BG_0_8 {
		idc = IDC + 16 * 6 + 1 + 8;
		y = 0.20 + 0.05 * 1;
	};
	class BTN_BG_0_10: BTN_BG_0_8 {
		idc = IDC + 16 * 6 + 2 + 8;
		y = 0.20 + 0.05 * 2;
	};
	class BTN_BG_0_11: BTN_BG_0_8 {
		idc = IDC + 16 * 6 + 3 + 8;
		y = 0.20 + 0.05 * 3;
	};
	class BTN_BG_0_12: BTN_BG_0_8 {
		idc = IDC + 16 * 6 + 4 + 8;
		y = 0.20 + 0.05 * 4;
	};
	class BTN_BG_0_13: BTN_BG_0_8 {
		idc = IDC + 16 * 6 + 5 + 8;
		y = 0.20 + 0.05 * 5;
	};
	class BTN_BG_0_14: BTN_BG_0_8 {
		idc = IDC + 16 * 6 + 6 + 8;
		y = 0.20 + 0.05 * 6;
	};
	class BTN_BG_0_15: BTN_BG_0_8 {
		idc = IDC + 16 * 6 + 7 + 8;
		y = 0.20 + 0.05 * 7;
	};

	class BTN_0_1: BTN_0_0 {
		idc = IDC + 16 * 5 + 1;
		y = 0.20 + 0.05 * 1;
		action = "btnValue01 set [1, not(btnValue01 select 1)]";
	};
	class BTN_0_2: BTN_0_0 {
		idc = IDC + 16 * 5 + 2;
		y = 0.20 + 0.05 * 2;
		action = "btnValue01 set [2, not(btnValue01 select 2)]";
	};
	class BTN_0_3: BTN_0_0 {
		idc = IDC + 16 * 5 + 3;
		y = 0.20 + 0.05 * 3;
		action = "btnValue01 set [3, not(btnValue01 select 3)]";
	};
	class BTN_0_4: BTN_0_0 {
		idc = IDC + 16 * 5 + 4;
		y = 0.20 + 0.05 * 4;
		action = "btnValue01 set [4, not(btnValue01 select 4)]";
	};
	class BTN_0_5: BTN_0_0 {
		idc = IDC + 16 * 5 + 5;
		y = 0.20 + 0.05 * 5;
		action = "btnValue01 set [5, not(btnValue01 select 5)]";
	};
	class BTN_0_6: BTN_0_0 {
		idc = IDC + 16 * 5 + 6;
		y = 0.20 + 0.05 * 6;
		action = "btnValue01 set [6, not(btnValue01 select 6)]";
	};
	class BTN_0_7: BTN_0_0 {
		idc = IDC + 16 * 5 + 7;
		y = 0.20 + 0.05 * 7;
		action = "btnValue01 set [7, not(btnValue01 select 7)]";
	};
	
	class BTN_0_8: BTN_0_0 {
		idc = IDC + 16 * 5 + 0 + 8;
		x = 0.55;
		action = "btnValue01 set [8 + 0, not(btnValue01 select 8 + 0)]";
	};
	class BTN_0_9: BTN_0_8 {
		idc = IDC + 16 * 5 + 1 + 8;
		y = 0.20 + 0.05 * 1;
		action = "btnValue01 set [8 + 1, not(btnValue01 select 8 + 1)]";
	};
	class BTN_0_10: BTN_0_8 {
		idc = IDC + 16 * 5 + 2 + 8;
		y = 0.20 + 0.05 * 2;
		action = "btnValue01 set [8 + 2, not(btnValue01 select 8 + 2)]";
	};
	class BTN_0_11: BTN_0_8 {
		idc = IDC + 16 * 5 + 3 + 8;
		y = 0.20 + 0.05 * 3;
		action = "btnValue01 set [8 + 3, not(btnValue01 select 8 + 3)]";
	};
	class BTN_0_12: BTN_0_8 {
		idc = IDC + 16 * 5 + 4 + 8;
		y = 0.20 + 0.05 * 4;
		action = "btnValue01 set [8 + 4, not(btnValue01 select 8 + 4)]";
	};
	class BTN_0_13: BTN_0_8 {
		idc = IDC + 16 * 5 + 5 + 8;
		y = 0.20 + 0.05 * 5;
		action = "btnValue01 set [8 + 5, not(btnValue01 select 8 + 5)]";
	};
	class BTN_0_14: BTN_0_8 {
		idc = IDC + 16 * 5 + 6 + 8;
		y = 0.20 + 0.05 * 6;
		action = "btnValue01 set [8 + 6, not(btnValue01 select 8 + 6)]";
	};
	class BTN_0_15: BTN_0_8 {
		idc = IDC + 16 * 5 + 7 + 8;
		y = 0.20 + 0.05 * 7;
		action = "btnValue01 set [8 + 7, not(btnValue01 select 8 + 7)]";
	};
};

class TzkRtsMineSubMenu: TzkRtsSubMenuOneListWide {
	controls[] = {
		TRSM_LIST_TITLE, BTN_SET, BTN_CLEAR, BTN_EXIT, BTN_SET_DIAGONAL, 
		LISTBOX0, LISTTEXT0,
		CustomShortkey,
	};
	class BTN_SET: Button {
		x = 0.45;
		y = 0.65;
		w = 0.10;
		h = 0.04;
		text = "Set";
		action = "btnValue01 = true";
	};
};