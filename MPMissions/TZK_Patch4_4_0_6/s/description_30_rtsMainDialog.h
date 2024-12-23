class TzkCmdMapDlgArea: TzkCmdMapDlgVariableBase {
	controlsBackground[] = {
		MapBg, 
		LeftBg, 
		DownAreaHighlight, 
		RightDownAreaHighlight, 
		LeftDownAreaHighlight, 
		Bg4Group, 
	};
	controls[] = {
		TextAzimut, ValueAzimut, SliderAzimut, 
		ShownGroup, 
		Frame1, 
		LeftBtn0, LeftBtn1, LeftBtn2, LeftBtn3, LeftBtn4, LeftBtn5, LeftBtn6, 
		LeftBtn7, LeftBtn8, 
		LeftBtn10,
		DownBtn0, DownBtn1, DownBtn2, 
		DownBtn3, DownBtn4, DownBtn5, 
		DownBtn8, 
		RightDownBg0, RightDownBg1, RightDownBg2, RightDownBg3, RightDownBg4, 
		RightDownBg5, RightDownBg6, RightDownBg7, RightDownBg8, 
		RightDownBtn0, RightDownBtn1, RightDownBtn2, RightDownBtn3, RightDownBtn4, 
		RightDownBtn5, RightDownBtn6, RightDownBtn7, RightDownBtn8, 
		RtsSelectTypeBtn0, RtsSelectTypeBtn1, RtsSelectTypeBtn2, RtsSelectTypeBtn3, 
		Exit
	};
	class Frame1: TZK_Frame_1 {
		colorText[] = {0.4, 0, 0, 0.9};
		sizeEx = 0.021;
		text = "Clear Markers";
		x = 0.01;
		y = 0.02;
		w = 0.28;
		h = 0.275;
	};
	class LeftBtn0: Button {	// for AREA "clear all markers" button
		idc = IDC + 16 * 2 + 0;
		x = 0.15;
		y = 0.05 * 1;
		w = 0.13;
		text = "";
		action = "btnValue00 = 0";
	};
	class LeftBtn1: Button {	// for AREA "clear CO" button
		idc = IDC + 16 * 2 + 1;
		x = 0.02;
		y = 0.05 * 1;
		w = 0.05;
		text = "";
		action = "btnValue00 = 1";
	};
	class LeftBtn2: Button {	// for AREA "clear WP" button
		idc = IDC + 16 * 2 + 2;
		x = 0.08;
		y = 0.05 * 1;
		w = 0.05;
		text = "";
		action = "btnValue00 = 2";
	};
	class LeftBtn3: Button {	// for AREA "clear Svr Art Area" button
		idc = IDC + 16 * 2 + 3;
		x = 0.02;
		y = 0.05 * 2;
		w = 0.12;
		text = "";
		action = "btnValue00 = 3";
	};
	class LeftBtn4: LeftBtn3 {	// for AREA "clear Ppl Art Area" button
		idc = IDC + 16 * 2 + 4;
		x = 0.15 + 0.01;
		y = 0.05 * 2;
		w = 0.12;
		action = "btnValue00 = 4";
	};
	class LeftBtn5: LeftBtn3 {	// for AREA "clear Svr Mine Area" button
		idc = IDC + 16 * 2 + 5;
		x = 0.02;
		y = 0.05 * 3;
		w = 0.12;
		action = "btnValue00 = 5";
	};
	class LeftBtn6: LeftBtn3 {	// for AREA "clear Svr Mine Area" button
		idc = IDC + 16 * 2 + 6;
		x = 0.15 + 0.01;
		y = 0.05 * 3;
		w = 0.12;
		action = "btnValue00 = 6";
	};
	class LeftBtn7: LeftBtn3 {	// for AREA "Destruction" button
		idc = IDC + 16 * 2 + 7;
		y = 0.05 * 6;
		action = "btnValue00 = 7";
	};
	class LeftBtn8: LeftBtn7 {	// for AREA "Build Bridge" button
		idc = IDC + 16 * 2 + 8;
		x = 0.15 + 0.01;
		action = "btnValue00 = 8";
	};
	class LeftBtn10: LeftBtn8 { // for AREA "Remove Bridge" button
		idc = IDC + 16 * 2 + 10;
		y = 0.05 * 7;
		action = "btnValue00 = 10";
		sizeEx = 0.022;
	};
};

class TzkCmdMapDlgPoint: TzkCmdMapDlgVariableBase {
	controlsBackground[] = {
		MapBg, 
		LeftBg, 
		DownAreaHighlight, 
		RightDownAreaHighlight, 
		LeftDownAreaHighlight, 
		Bg4Group, 
	};
	controls[] = {
		FirstCtrl, 
		ShownGroup, 
		LeftBtn0, LeftBtn1, 
		LeftBtn2,
		LeftBtn3,
		LeftBtn4,
		LeftBtn5,
		DownBtn0, DownBtn1, DownBtn2, DownBtn3, DownBtn8, DownBtn9, 
		RightDownBg0, RightDownBg1, RightDownBg2, RightDownBg3, RightDownBg4, 
		RightDownBg5, RightDownBg6, RightDownBg7, RightDownBg8, 
		RightDownBtn0, RightDownBtn1, RightDownBtn2, RightDownBtn3, RightDownBtn4, 
		RightDownBtn5, RightDownBtn6, RightDownBtn7, RightDownBtn8, 
		Exit
	};
	
	class LeftBtn0: Button {			// Wall MHQ
		idc = IDC + 16 * 2 + 0;			// Remain 32-95 idc for left buttons
		x = 0.025 + 0.13;
		y = 0.10;
		w = 0.12;
		text = "";
		action = "btnValue00 = 0";
	};
	class LeftBtn1: LeftBtn0 { 			// for "Surrender" button
		idc = IDC + 16 * 2 + 1;
		x = 0.025;
		y = 0.10 + 0.15 + 0.05 * 7;
		w = 0.25;
		text = "UNDEFINED";
		action = "btnValue00 = 1";
		colorText[] = {0.8, 0.2, 0.1, 0.9};
	};
	class LeftBtn2: LeftBtn0 {
		idc = IDC + 16 * 2 + 2;			// Base mortar
		x = 0.025 + 0.09;
		y = 0.10 + 0.05 * 2;
		w = 0.16;
		text = "";
		action = "btnValue00 = 2";
	};
	class LeftBtn3: LeftBtn0 { 			// Repair MHQ
		idc = IDC + 16 * 2 + 3;
		x = 0.025 + 0.13;
		y = 0.10 + 0.15 + 0.05 * 8;
		w = 0.12;
		text = "";
		action = "btnValue00 = 3";
	};
	class LeftBtn4: LeftBtn0 { 			// ba gua zhen
		idc = IDC + 16 * 2 + 4;
		x = 0.025;
		w = 0.12;
		text = "";
		action = "btnValue00 = 4";
	};
	class LeftBtn5: LeftBtn0 { 			// "destroy enemy struct"
		idc = IDC + 16 * 2 + 5;
		x = 0.025;
		y = 0.10 + 0.15 + 0.05 * 5;
		w = 0.25;
		text = "UNDEFINED";
		action = "btnValue00 = 5";
	};

	class FirstCtrl: TzkRtsFirstCtrlBase {};
};

class TzkCmdMapDlgRts: TzkCmdMapDlgVariableBase {
	controlsBackground[] = {
		MapBg, 
		LeftBg, 
		DownAreaHighlight, 
		RightDownAreaHighlight, 
		LeftDownAreaHighlight, 
		Bg4Group, 
	};
	controls[] = {
		FirstCtrl, 
		Unselect, ShownGroup, 
		LeftBtn0, LeftBtn1, LeftBtn2, LeftBtn3, 
		LeftBtn4, LeftBtn5, LeftBtn6, LeftBtn7, 
		LeftBtn8, LeftBtn9, 
		LeftBtn10, LeftBtn11, 
		LeftBtn12, // RTS "cross bridge". For RTS but not player group
		LeftBtn13, // for RTS "stop"
		LeftBtn14, LeftBtn15, 					// RTS move land/ship

		DownBtn0, DownBtn1, DownBtn2, 
		DownBtn3, DownBtn4, DownBtn5, 
		DownBtn6, DownBtn7, DownBtn8, 
		DownBtn9, DownBtn10, DownBtn11, 
		DownBtn12, DownBtn13, DownBtn14, 
		RightDownBg0, RightDownBg1, RightDownBg2, RightDownBg3, RightDownBg4, 
		RightDownBg5, RightDownBg6, RightDownBg7, RightDownBg8, 
		RightDownBtn0, RightDownBtn1, RightDownBtn2, RightDownBtn3, RightDownBtn4, 
		RightDownBtn5, RightDownBtn6, RightDownBtn7, RightDownBtn8, 
		LeftDownBtn0, LeftDownBtn1, LeftDownBtn2, LeftDownBtn3, LeftDownBtn4, 
		LeftDownBtn5, LeftDownBtn6, LeftDownBtn7, LeftDownBtn8, 
		RtsSelectTypeBtn0, RtsSelectTypeBtn1, RtsSelectTypeBtn2, RtsSelectTypeBtn3, 
		Exit
	};
	class LeftBtn1: LeftBtn0 { // for "RTS order clear" button
		idc = IDC + 16 * 2 + 1;
		x = 0.025;
		y = 0.04;
		w = 0.25;
		text = "UNDEFINED";
		action = "btnValue00 = 1";
		colorText[] = {0, 0.7, 0.9, 1.0};
	};
	class LeftBtn2: LeftBtn0 { // for RTS shoot order
		idc = IDC + 16 * 2 + 2;
		x = 0.025 + 0.09;
		y = 0.10 + 0.05;
		w = 0.16;
		text = "UNDEFINED";
		action = "btnValue00 = 2";
	};
	class LeftBtn3: LeftBtn0 {
		idc = IDC + 16 * 2 + 3;
		x = 0.025 + 0.09;
		y = 0.10 + 0.10;
		w = 0.16;
		text = "UNDEFINED";
		action = "btnValue00 = 3";
	};
	class LeftBtn4: LeftBtn0 { // for RTS board
		idc = IDC + 16 * 2 + 4;
		x = 0.025;
		y = 0.10 + 0.15;
		w = 0.08;
		text = "UNDEFINED";
		action = "btnValue00 = 4";
	};
	class LeftBtn5: LeftBtn4 { // for RTS occupy
		idc = IDC + 16 * 2 + 5;
		y = 0.10 + 0.15 + 0.05 * 1;
		action = "btnValue00 = 5";
	};
	class LeftBtn6: LeftBtn5 { // for RTS land
		idc = IDC + 16 * 2 + 6;
		y = 0.10 + 0.15 + 0.05 * 3;
		action = "btnValue00 = 6";
	};
	class LeftBtn7: LeftBtn5 { // for RTS reclaim
		idc = IDC + 16 * 2 + 7;
		y = 0.10 + 0.15 + 0.05 * 2;
		action = "btnValue00 = 7";
	};

	class LeftBtn8: LeftBtn5 { // for RTS mine area
		idc = IDC + 16 * 2 + 8;
		x = 0.025 + 0.09;
		y = 0.10 + 0.15 + 0.05 * 2;
		w = 0.16;
		action = "btnValue00 = 8";
	};
	class LeftBtn9: LeftBtn8 { // for RTS disable mine 
		idc = IDC + 16 * 2 + 9;
		x = 0.025 + 0.09;
		y = 0.10 + 0.15 + 0.05 * 1;
		w = 0.16;
		action = "btnValue00 = 9";
	};

	class LeftBtn10: LeftBtn6 { // for RTS repair
		idc = IDC + 16 * 2 + 10;
		y = 0.10 + 0.15 + 0.05 * 5;
		action = "btnValue00 = 10";
	};
	class LeftBtn11: LeftBtn10 { // for RTS rearm
		idc = IDC + 16 * 2 + 11;
		y = 0.10 + 0.15 + 0.05 * 6;
		action = "btnValue00 = 11";
	};
	class LeftBtn12: LeftBtn0 { // for RTS cross bridge
		idc = IDC + 16 * 2 + 12;
		x = 0.025;
		y = 0.10 + 0.15 + 0.05 * 4;
		w = 0.12;
		action = "btnValue00 = 12";
	};
	class LeftBtn13: LeftBtn0 { // for RTS stop
		idc = IDC + 16 * 2 + 13;
		x = 0.025;
		y = 0.10;
		w = 0.12;
		text = "UNDEFINED";
		action = "btnValue00 = 13";
	};
	class LeftBtn14: LeftBtn0 { // for RTS move land
		idc = IDC + 16 * 2 + 14;
		y = 0.10 + 0.15 + 0.05 * 7;
		w = 0.12;
		text = "UNDEFINED";
		action = "btnValue00 = 14";
	};
	class LeftBtn15: LeftBtn0 { // for RTS move ship
		idc = IDC + 16 * 2 + 15;
		y = 0.10 + 0.15 + 0.05 * 8;
		w = 0.12;
		text = "UNDEFINED";
		action = "btnValue00 = 15";
	};

	class FirstCtrl: TzkRtsFirstCtrlBase {};
	class Unselect: Button {
		x = RtsMapLeftWidth;
		y = 0.0;
		w = 0.10;
		h = 0.04;
		text = "Unselect";
		action = "btnFunction = 2";
	};
};

class TzkCmdMapDlgWpCo: TzkCmdMapDlgVariableBase {
	controlsBackground[] = {
		MapBg, 
		LeftBg, 
		DownAreaHighlight, 
		RightDownAreaHighlight, 
		LeftDownAreaHighlight, 
		Bg4Group, 
	};
	controls[] = {
		FirstCtrl, 
		ShownGroup, 
		BigLeftBtn0, BigLeftBtn1, BigLeftBtn2, BigLeftBtn3, BigLeftBtn4, 
		DownBtnBg0, DownBtnBg1,  DownBtnBg3, 
		DownBtn0, DownBtn1,  DownBtn3, 
		RightDownBg0, RightDownBg1, RightDownBg2, RightDownBg3, RightDownBg4, 
		RightDownBg5, RightDownBg6, RightDownBg7, RightDownBg8, 
		RightDownBtn0, RightDownBtn1, RightDownBtn2, RightDownBtn3, RightDownBtn4, 
		RightDownBtn5, RightDownBtn6, RightDownBtn7, RightDownBtn8, 
		ListBg, List, 
		DevidedList0, DevidedList1, 
		Exit
	};

	class ListBg: BackgroundWindow {
		x = 0.5;
		y = 0.04;
		w = 0.5;
		h = 0.60;
	};
	class List: ListBox {
		idc = IDC + 16 * 4 + 0
		x = 0.5;
		y = 0.04;
		w = 0.5;
		h = 0.60;
	};
	class DevidedList0: List {
		idc = IDC + 16 * 4 + 1
		h = 0.30;
	};
	class DevidedList1: List {
		idc = IDC + 16 * 4 + 2
		y = 0.34;
		h = 0.30;
	};

	class FirstCtrl: TzkRtsFirstCtrlBase {};
};

class TzkCmdMapDlgPplOrder: TzkCmdMapDlgVariableBase {
	controlsBackground[] = {
		// MapBg, 		// Hide to compatible with old style
		LeftBg, 
		DownAreaHighlight, 
		RightDownAreaHighlight, 
		LeftDownAreaHighlight, 
		Bg4Group, 
		OldOrderBg0, OldOrderBg1, OldOrderBg2, 	// Compatible with old style
	};
	class OldOrderBg0: TZK_BackGround_0 {
		x = 0.40 - 0.01;
		y = 0.03;
		w = 0.60 + 0.01;
		h = 0.671 - 0.03;
	};
	class OldOrderBg1: TZK_BackGround_1 {
		colorBackground[] = COLOR_TZK_MENU_BG_3;
		x = 0.40 - 0.01;
		y = 0.03;
		w = 0.60 + 0.01;
		h = 0.671 - 0.03;
	};
	class OldOrderBg2: Light_BG_Window {
		x = 0.40 - 0.01;
		y = 0.03;
		w = 0.60 + 0.01;
		h = 0.671 - 0.03;
	};
	controls[] = {
		MidPic0, MidPic1, MidPic2, 
		MidPic4, MidPic5, 
		MidBtn0, MidBtn1, MidBtn2, 
		MidBtn4, MidBtn5, 

		// Compatible with old style
		// Listbox should be placed UNDER middle buttons
		SendOrderBG, SendOrderBtn,
		OrdersLabel, OrdersList, 
		Param0Label, Param0, Param1Label, Param1, Param2Label, Param2, 

		// LeftDownBtn0, LeftDownBtn2, LeftDownBtn3, 

		DownBtn0, DownBtn1, DownBtn2, 
		DownBtn3, DownBtn4, DownBtn5, 
		DownBtn6, DownBtn7, DownBtn8, 
		DownBtn9, DownBtn10, DownBtn11, 
		DownBtn12, DownBtn13, DownBtn14, 

		LeftPic2, LeftPic4, LeftPic5, LeftPic6, LeftPic7, 

		// LeftBtn0 same as default. Use it as "move" order
		LeftBtn0, LeftBtn1, LeftBtn2, 		// Move, Clear order and shoot
		LeftBtn4, LeftBtn5, LeftBtn6, LeftBtn7, 

		LeftBtn8, LeftBtn9, LeftBtn10, 
		LeftBtn11, LeftBtn12, 
		LeftBtn13, // for RTS "stop"

		RightDownBg0, RightDownBg1, RightDownBg2, RightDownBg3, RightDownBg4, 
		RightDownBg5, RightDownBg6, RightDownBg7, RightDownBg8, 
		RightDownBtn0, RightDownBtn1, RightDownBtn2, RightDownBtn3, RightDownBtn4, 
		RightDownBtn5, RightDownBtn6, RightDownBtn7, RightDownBtn8, 
		Exit
	};
	class SendOrderBG: ButtonBG {
		colorBackground[] = COLOR_SELECTED_TEXT;
		x = 0.53;
		y = 0.06;
		w = 0.07;
	};
	class SendOrderBtn: Button {
		x = 0.53;
		y = 0.06;
		w = 0.07;
		text = "Issue";
		action = "btnSendOrder = true";
	};
	class OrdersLabel: Label {
		style = ST_LEFT;
		x = 0.40;
		y = 0.06;
		w = 0.1;
		text = "Order";
	};
	class OrdersList: TZK_ListBox {
		idc = IDC + 16 * 3 + 0;
		x = 0.40;
		y = 0.1 + 0.03 * 4;
		w = 0.2;
		h = 0.57 - 0.03 * 4 - 0.03 * 2;
	};
	class Param0Label: Label {
		idc = IDC + 16 * 3 + 1;
		style = ST_CENTER;
		x = 0.60;
		y = 0.06;
		w = 0.20;
		text = "";
	};
	class Param0: TZK_ListBox {
		idc = IDC + 16 * 3 + 2;
		x = 0.60;
		y = 0.1;
		w = 0.20;
		h = 0.57;
	};
	class Param1Label: Label {
		idc = IDC + 16 * 3 + 3;
		style = ST_CENTER;
		x = 0.80;
		y = 0.06;
		w = 0.20;
		text = "";
	};
	class Param1: TZK_ListBox {
		idc = IDC + 16 * 3 + 4;
		x = 0.80;
		y = 0.1;
		w = 0.20;
		h = 0.30;
	};
	class Param2Label: Label {
		idc = IDC + 16 * 3 + 5;
		style = ST_CENTER;
		x = 0.80;
		y = 0.42;
		w = 0.20;
		text = "";
	};
	class Param2: TZK_ListBox {
		idc = IDC + 16 * 3 + 6;
		x = 0.80;
		y = 0.46;
		w = 0.20;
		h = 0.21;
	};

	// left part
	class LeftBtn1: LeftBtn0 { 	// "order clear" button like RTS
		idc = IDC + 16 * 2 + 1;
		x = 0.025;
		y = 0.04;
		w = 0.25;
		text = "";
		action = "btnValue00 = 1";
		colorText[] = {0, 0.7, 0.9, 1.0};
	};
	class LeftBtn2: LeftBtn0 {	// Shoot Area
		idc = IDC + 16 * 2 + 2;
		x = 0.025 + 0.09;
		y = 0.10 + 0.05;
		w = 0.16;
		text = "";
		action = "btnValue00 = 2";
	};
	class LeftBtn3: LeftBtn0 {
		idc = IDC + 16 * 2 + 3;
		x = 0.025;
		y = 0.10 + 0.03 * 3;
		action = "btnValue00 = 3";
	};
	class LeftBtn4: LeftBtn0 {
		idc = IDC + 16 * 2 + 4;
		x = 0.025 + 0.09;
		y = 0.10 + 0.15 + 0.05 * 0;
		w = 0.16;
		text = "";
		action = "btnValue00 = 4";
	};
	class LeftBtn5: LeftBtn4 {
		idc = IDC + 16 * 2 + 5;
		y = 0.10 + 0.15 + 0.05 * 1;
		action = "btnValue00 = 5";
	};
	class LeftBtn6: LeftBtn5 {
		idc = IDC + 16 * 2 + 6;
		y = 0.10 + 0.15 + 0.05 * 2;
		action = "btnValue00 = 6";
	};
	class LeftBtn7: LeftBtn5 {	// Join. Big button
		idc = IDC + 16 * 2 + 7;
		x = 0.025;
		y = 0.10 + 0.15 + 0.05 * 3;
		w = 0.25;
		action = "btnValue00 = 7";
	};
	// IDC: 16 * 16
	class LeftPic0: Label {	// unused. Used ones should cover the button
		idc = IDC + 16 * 16 + 0;
		style = ST_PICTURE;
		text = "";
		x = 0.00;
		y = 0.10 + 0.03 * 0;
		w = 0.266; // texture will fully fill the control. They're designed for 0.2 x 0.03
		h = 0.04; // button height
	};
	class LeftPic1: LeftPic0 {
		idc = IDC + 16 * 16 + 1;
		y = 0.10 + 0.03 * 1;
	};
	class LeftPic2: LeftPic0 {
		idc = IDC + 16 * 16 + 2;
		x = 0.025 + 0.09;
		y = 0.10 + 0.05;
	};
	class LeftPic3: LeftPic0 {
		idc = IDC + 16 * 16 + 3;
		y = 0.10 + 0.03 * 3;
	};
	class LeftPic4: LeftPic0 {
		idc = IDC + 16 * 16 + 4;
		x = 0.025 + 0.09;
		y = 0.10 + 0.15 + 0.05 * 0;
	};
	class LeftPic5: LeftPic4 {
		idc = IDC + 16 * 16 + 5;
		y = 0.10 + 0.15 + 0.05 * 1;
	};
	class LeftPic6: LeftPic4 {
		idc = IDC + 16 * 16 + 6;
		y = 0.10 + 0.15 + 0.05 * 2;
	};
	class LeftPic7: LeftPic4 {
		idc = IDC + 16 * 16 + 7;
		x = 0.025;
		y = 0.10 + 0.15 + 0.05 * 3;
	};

	class LeftBtn8: LeftBtn4 {
		idc = IDC + 16 * 2 + 8;
		x = 0.025;
		y = 0.10 + 0.15 + 0.05 * 4;
		w = 0.12;
		action = "btnValue00 = 8";
	};
	class LeftBtn9: LeftBtn0 {
		idc = IDC + 16 * 2 + 9;
		y = 0.10 + 0.15 + 0.05 * 7;
		w = 0.12;
		action = "btnValue00 = 9";
	};
	class LeftBtn10: LeftBtn0 {
		idc = IDC + 16 * 2 + 10;
		y = 0.10 + 0.15 + 0.05 * 8;
		w = 0.12;
		action = "btnValue00 = 10";
	};
	class LeftBtn11: LeftBtn4 {
		idc = IDC + 16 * 2 + 11;
		x = 0.025 + 0.13;
		y = 0.10 + 0.15 + 0.05 * 4;
		w = 0.12;
		action = "btnValue00 = 11";
	};
	class LeftBtn12: LeftBtn4 {
		idc = IDC + 16 * 2 + 12;
		x = 0.025 + 0.13;
		y = 0.10 + 0.15 + 0.05 * 5;
		w = 0.12;
		action = "btnValue00 = 12";
	};

	class LeftBtn13: LeftBtn0 { // for "RTS order clear" button
		idc = IDC + 16 * 2 + 13;
		x = 0.025;
		y = 0.10;
		w = 0.12;
		text = "UNDEFINED";
		action = "btnValue00 = 13";
	};

	// IDC: 16 * 14
	// mid part
	class MidBtn0: Button {
		idc = IDC + 16 * 14 + 0;
		x = 0.40;
		y = 0.10 + 0.03 * 0;
		w = 0.20; // fully cover list box
		h = 0.03; // fully cover list box

		colorText[] = {0, 0, 0, 1};
		sizeEx = 0.022;
		text = "";
		action = "btnValue04 = 0";
	};
	class MidBtn1: MidBtn0 {
		idc = IDC + 16 * 14 + 1;
		y = 0.10 + 0.03 * 1;
		action = "btnValue04 = 1";
	};
	class MidBtn2: MidBtn0 {
		idc = IDC + 16 * 14 + 2;
		y = 0.10 + 0.03 * 2;
		action = "btnValue04 = 2";
	};
	class MidBtn3: MidBtn0 {
		idc = IDC + 16 * 14 + 3;
		y = 0.10 + 0.03 * 3;
		action = "btnValue04 = 3";
	};

	class MidBtn4: MidBtn0 {
		idc = IDC + 16 * 14 + 4;
		y = 0.10 + 0.03 * 17;
		action = "btnValue04 = 4";
	};
	class MidBtn5: MidBtn0 {
		idc = IDC + 16 * 14 + 5;
		y = 0.10 + 0.03 * 18;
		action = "btnValue04 = 5";
	};
	// IDC: 16 * 15
	class MidPic0: Label {
		idc = IDC + 16 * 15 + 0;
		style = ST_PICTURE;
		text = "";
		x = 0.40;
		y = 0.10 + 0.03 * 0;
		w = 0.20; // fully cover list box
		h = 0.03; // fully cover list box
	};
	class MidPic1: MidPic0 {
		idc = IDC + 16 * 15 + 1;
		y = 0.10 + 0.03 * 1;
	};
	class MidPic2: MidPic0 {
		idc = IDC + 16 * 15 + 2;
		y = 0.10 + 0.03 * 2;
	};
	class MidPic3: MidPic0 {
		idc = IDC + 16 * 15 + 3;
		y = 0.10 + 0.03 * 3;
	};
	class MidPic4: MidPic0 {
		idc = IDC + 16 * 15 + 4;
		y = 0.10 + 0.03 * 17;
	};
	class MidPic5: MidPic0 {
		idc = IDC + 16 * 15 + 5;
		y = 0.10 + 0.03 * 18;
	};
};