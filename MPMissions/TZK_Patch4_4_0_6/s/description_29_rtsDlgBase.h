// ======================================= IDC rule =======================================
// IDC + 16 * 0, ICD + 16 * 1: remained. Old style controls prpbably uses these values
// IDC + 16 * 2 ~ IDC + 16 * 5: remained for RTS left buttons
// IDC + 16 * 6 ~ IDC + 16 * 9: reserved
// IDC + 16 * 3 ~ IDC + 16 * 4: for general controls like listbox and labels. Don't use them in RTS style dialogs
// IDC + 16 * 5 ~ IDC + 16 * 9: buttons and their background (highlight). Don't use them in RTS style dialogs
// IDC + 16 * 10: RTS right down buttons
// IDC + 16 * 11: RTS right down highlights
// IDC + 16 * 12: RTS left down buttons
// IDC + 16 * 13: RTS big left buttons
// IDC + 16 * 14: RTS middle buttons
// IDC + 16 * 15: RTS middle pictures (for CHN lang)
// IDC + 16 * 16: RTS left pictures (for CHN lang)
// IDC + 16 * 17: RTS down buttons
// IDC + 16 * 18: RTS down highlights
// IDC + 16 * 19: RTS right extend select classification switch buttons

// IDC + 16 * 32: RTS dlg ctrls
// ======================================= IDC rule =======================================

// Radio channel occupys y value 0.7-0.8.
class TzkCmdMapDlgBase: Menu {
	idd = -1;
	movingEnable = true;
	// controlsBackground[] = {
	// 	MapBg, LeftBg, 
	// 	DownAreaHighlight, RightDownAreaHighlight, LeftDownAreaHighlight, 
	// 	Bg4Group, 
	// };
	objects[] = {};
	controls[] = {
		LeftBtn0, 
		DownBtn0, 
		RightDownBg0, RightDownBg1, RightDownBg2, RightDownBg3, RightDownBg4, 
		RightDownBg5, RightDownBg6, RightDownBg7, RightDownBg8, 
		RightDownBtn0, RightDownBtn1, RightDownBtn2, RightDownBtn3, RightDownBtn4, 
		RightDownBtn5, RightDownBtn6, RightDownBtn7, RightDownBtn8, 
		TextAzimut, ValueAzimut, SliderAzimut, 
		Exit
	};

	class TextAzimut: RscText {
		x = RtsMapLeftWidth + 0.01;
		y = 0.70 - 0.05;
		w = 0.04;
		h = 0.04;
		text = "Azimut";
	};
	class ValueAzimut: RscEdit {
		idc = IDC + 16 * 32 + 1;
		x = RtsMapLeftWidth + 0.06;
		y = 0.70 - 0.05;
		w = 0.05;
		h = 0.04;
		text = "";
	};
	class SliderAzimut: RscSliderV {
		color[] = {1.0, 1.0, 1.0, 1.0};
		sizeEx = 0.04;

		idc = IDC + 16 * 32 + 0;
		x = RtsMapLeftWidth + 0.04;
		y = 0.02;
		w = 0.04;
		h = 0.61;
		text = "";
	};

	// colorBackground[] = {0.0, 0.6, 0.9, 0.90};
	class MapBg: Light_BG_Window {
		x = RtsMapLeftWidth;
		y = 0.0;
		w = 1.0 - RtsMapLeftWidth;
		h = RtsMapBottom;
		colorBackground[] = {0.1, 0.1, 0.1, 1.0};
	};
	class LeftBg: BackgroundWindow {
		x = 0.0;
		y = 0.0;
		w = RtsMapLeftWidth;
		h = RtsMapBottom;
	};
	class DownAreaHighlight: BackgroundWindow {
		x = RtsMapLeftWidth;
		y = RtsMapBottom;
		w = RtsMapMidWidth;
		h = RtsDlgBottom - RtsMapBottom;
		colorBackground[] = {0.6, 0.5, 0.4, 0.75};
	};
	class DownAreaBg: DownAreaHighlight { colorBackground[] = COLOR_MENU_BG; };
	class RightDownAreaHighlight: DownAreaHighlight {
		x = RtsMapLeftWidth + RtsMapMidWidth;
		w = 1.0 - (RtsMapLeftWidth + RtsMapMidWidth);
		colorBackground[] = {0.4, 0.5, 0.6, 0.75};
	};
	class RightDownAreaBg: RightDownAreaHighlight { colorBackground[] = COLOR_MENU_BG; };
	class LeftDownAreaHighlight: DownAreaHighlight {
		x = 0.0;
		w = RtsMapLeftWidth;
		colorBackground[] = {0.4, 0.6, 0.5, 0.75};
	};
	class LeftDownAreaBg: LeftDownAreaHighlight { colorBackground[] = COLOR_MENU_BG; };
	class Bg4Group: DownAreaHighlight {
		x = 0.0;
		y = RtsDlgBottom;
		w = 1.0;
		h = 1.0 - RtsDlgBottom;
		colorBackground[] = {0.0, 0.2, 0.9, 0.05};
	};
	
	class LeftBtn0: Button {
		idc = IDC + 16 * 2 + 0;			// Remain 32-95 idc for left buttons
		x = 0.025 + 0.13;
		y = 0.10;
		w = 0.12;
		text = "UNDEFINED";
		action = "btnValue00 = 0";
	};

	// IDC: 16 * 13
	// Big buttons on the left
	class BigLeftBtn0: Button {
		idc = IDC + 16 * 13 + 0;
		x = 0.025;
		y = 0.10;
		text = "";
		action = "btnBigLeft = 0";
	};
	class BigLeftBtn1: BigLeftBtn0 {
		idc = IDC + 16 * 13 + 1;
		y = 0.10 + 0.10 * 1;
		action = "btnBigLeft = 1";
	};
	class BigLeftBtn2: BigLeftBtn0 {
		idc = IDC + 16 * 13 + 2;
		y = 0.10 + 0.10 * 2;
		action = "btnBigLeft = 2";
	};
	class BigLeftBtn3: BigLeftBtn0 {
		idc = IDC + 16 * 13 + 3;
		y = 0.10 + 0.10 * 3;
		action = "btnBigLeft = 3";
	};
	class BigLeftBtn4: BigLeftBtn0 {
		idc = IDC + 16 * 13 + 4;
		y = 0.10 + 0.10 * 4;
		action = "btnBigLeft = 4";
	};
	class BigLeftBtn5: BigLeftBtn0 {
		idc = IDC + 16 * 13 + 5;
		y = 0.10 + 0.10 * 5;
		action = "btnBigLeft = 5";
	};

	// IDC: 16 * 17
	class DownBtn0: Button {
		idc = IDC + 16 * 17 + 0;
		x = 0.380 + 0.080 * 0;
		y = BottomBtnInitY + 0.00;
		w = 0.080;
		sizeEx = 0.023;
		text = "UNDEFINED";
		action = "btnValue01 = 2^0";
	};
	class DownBtn1: DownBtn0 {
		idc = IDC + 16 * 17 + 1;
		x = 0.380 + 0.080 * 1;
		action = "btnValue01 = 2^1";
	};
	class DownBtn2: DownBtn0 {
		idc = IDC + 16 * 17 + 2;
		x = 0.380 + 0.080 * 2;
		action = "btnValue01 = 2^2";
	};
	class DownBtn3: DownBtn0 {
		idc = IDC + 16 * 17 + 3;
		y = BottomBtnInitY + 0.04;
		action = "btnValue01 = 2^3";
	};
	class DownBtn4: DownBtn3 {
		idc = IDC + 16 * 17 + 4;
		x = 0.380 + 0.080 * 1;
		action = "btnValue01 = 2^4";
	};
	class DownBtn5: DownBtn3 {
		idc = IDC + 16 * 17 + 5;
		x = 0.380 + 0.080 * 2;
		action = "btnValue01 = 2^5";
	};
	class DownBtn6: DownBtn0 {
		idc = IDC + 16 * 17 + 6;
		y = BottomBtnInitY + 0.08;
		action = "btnValue01 = 2^6";
	};
	class DownBtn7: DownBtn6 {
		idc = IDC + 16 * 17 + 7;
		x = 0.380 + 0.080 * 1;
		action = "btnValue01 = 2^7";
	};
	class DownBtn8: DownBtn6 {
		idc = IDC + 16 * 17 + 8;
		x = 0.380 + 0.080 * 2;
		action = "btnValue01 = 2^8";
	};
	class DownBtn9: DownBtn0 {
		idc = IDC + 16 * 17 + 9;
		x = 0.380 + 0.080 * -1;
		action = "btnValue01 = 2^9";
	};
	class DownBtn10: DownBtn9 {
		idc = IDC + 16 * 17 + 10;
		y = BottomBtnInitY + 0.04;
		action = "btnValue01 = 2^10";
	};
	class DownBtn11: DownBtn9 {
		idc = IDC + 16 * 17 + 11;
		y = BottomBtnInitY + 0.08;
		action = "btnValue01 = 2^11";
	};
	class DownBtn12: DownBtn0 {
		idc = IDC + 16 * 17 + 12;
		x = 0.380 + 0.080 * 3;
		action = "btnValue01 = 2^12";
	};
	class DownBtn13: DownBtn9 {
		idc = IDC + 16 * 17 + 13;
		y = BottomBtnInitY + 0.04;
		action = "btnValue01 = 2^13";
	};
	class DownBtn14: DownBtn9 {
		idc = IDC + 16 * 17 + 14;
		y = BottomBtnInitY + 0.08;
		action = "btnValue01 = 2^14";
	};
	// IDC: 16 * 18
	class DownBtnBg0: SelectedBG {
		idc = IDC + 16 * 18 + 0;
		x = 0.380 + 0.080 * 0;
		y = BottomBtnInitY + 0.0;
		w = 0.080;
	};
	class DownBtnBg1: DownBtnBg0 {
		idc = IDC + 16 * 18 + 1;
		x = 0.380 + 0.080 * 1;
	};
	class DownBtnBg3: DownBtnBg0 {
		idc = IDC + 16 * 18 + 3;
		y = BottomBtnInitY + 0.04;
	};


	class Exit: Button {
		x = 0.95;
		y = 0.0;
		w = 0.05;
		h = 0.04;
		text = "Exit";
		action = "closeDialog 0";
	};
	// IDC: 16 * 10
	// right down part. switch to another dialog
	class RightDownBtn0: DownBtn0 {
		idc = IDC + 16 * 10 + 0;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 0;
		y = BottomBtnInitY + 0.00;
		w = 0.09;
		text = "";
		action = "btnValue03 = 2^0";
	};
	class RightDownBtn1: RightDownBtn0 {
		idc = IDC + 16 * 10 + 1;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 1;
		action = "btnValue03 = 2^1";
	};
	class RightDownBtn2: RightDownBtn0 {
		idc = IDC + 16 * 10 + 2;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 2;
		action = "btnValue03 = 2^2";
	};
	class RightDownBtn3: RightDownBtn0 {
		idc = IDC + 16 * 10 + 3;
		y = BottomBtnInitY + 0.04;
		action = "btnValue03 = 2^3";
	};
	class RightDownBtn4: RightDownBtn3 {
		idc = IDC + 16 * 10 + 4;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 1;
		action = "btnValue03 = 2^4";
	};
	class RightDownBtn5: RightDownBtn3 {
		idc = IDC + 16 * 10 + 5;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 2;
		action = "btnValue03 = 2^5";
	};
	class RightDownBtn6: RightDownBtn0 {
		idc = IDC + 16 * 10 + 6;
		y = BottomBtnInitY + 0.08;
		action = "btnValue03 = 2^6";
	};
	class RightDownBtn7: RightDownBtn6 {
		idc = IDC + 16 * 10 + 7;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 1;
		action = "btnValue03 = 2^7";
	};
	class RightDownBtn8: RightDownBtn6 {
		idc = IDC + 16 * 10 + 8;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 2;
		action = "btnValue03 = 2^8";
	};

	// IDC: 16 * 11
	// highlight for right down btns
	class RightDownBg0: SelectedBG {
		idc = IDC + 16 * 11 + 0;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 0;
		y = BottomBtnInitY + 0.00;
		w = 0.09;
	};
	class RightDownBg1: RightDownBg0 {
		idc = IDC + 16 * 11 + 1;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 1;
	};
	class RightDownBg2: RightDownBg0 {
		idc = IDC + 16 * 11 + 2;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 2;
	};
	class RightDownBg3: RightDownBg0 {
		idc = IDC + 16 * 11 + 3;
		y = BottomBtnInitY + 0.04;
	};
	class RightDownBg4: RightDownBg3 {
		idc = IDC + 16 * 11 + 4;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 1;
	};
	class RightDownBg5: RightDownBg3 {
		idc = IDC + 16 * 11 + 5;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 2;
	};
	class RightDownBg6: RightDownBg0 {
		idc = IDC + 16 * 11 + 6;
		y = BottomBtnInitY + 0.08;
	};
	class RightDownBg7: RightDownBg6 {
		idc = IDC + 16 * 11 + 7;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 1;
	};
	class RightDownBg8: RightDownBg6 {
		idc = IDC + 16 * 11 + 8;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 2;
	};

	// IDC: 16 * 12
	// left down part. select specific type
	class LeftDownBtn0: RightDownBtn0 {
		idc = IDC + 16 * 12 + 0;
		x = 0.015 + 0.09 * 0;
		y = BottomBtnInitY + 0.00;
		w = 0.09;
		text = "UNDEFINED";
		action = "btnValue02 = 2^0";
	};
	class LeftDownBtn1: LeftDownBtn0 {
		idc = IDC + 16 * 12 + 1;
		x = 0.015 + 0.09 * 1;
		action = "btnValue02 = 2^1";
	};
	class LeftDownBtn2: LeftDownBtn0 {
		idc = IDC + 16 * 12 + 2;
		x = 0.015 + 0.09 * 2;
		action = "btnValue02 = 2^2";
	};
	class LeftDownBtn3: LeftDownBtn0 {
		idc = IDC + 16 * 12 + 3;
		y = BottomBtnInitY + 0.04;
		action = "btnValue02 = 2^3";
	};
	class LeftDownBtn4: LeftDownBtn3 {
		idc = IDC + 16 * 12 + 4;
		x = 0.015 + 0.09 * 1;
		action = "btnValue02 = 2^4";
	};
	class LeftDownBtn5: LeftDownBtn3 {
		idc = IDC + 16 * 12 + 5;
		x = 0.015 + 0.09 * 2;
		action = "btnValue02 = 2^5";
	};
	class LeftDownBtn6: LeftDownBtn0 {
		idc = IDC + 16 * 12 + 6;
		y = BottomBtnInitY + 0.08;
		action = "btnValue02 = 2^6";
	};
	class LeftDownBtn7: LeftDownBtn6 {
		idc = IDC + 16 * 12 + 7;
		x = 0.015 + 0.09 * 1;
		action = "btnValue02 = 2^7";
	};
	class LeftDownBtn8: LeftDownBtn6 {
		idc = IDC + 16 * 12 + 8;
		x = 0.015 + 0.09 * 2;
		action = "btnValue02 = 2^8";
		text = "return";
	};

	class ShownGroup: Button {
		x = RtsMapLeftWidth;
		y = RtsMapBottom - 0.05;
		w = 0.15;
		h = 0.04;
		text = "Shown Groups";
		action = "btnFunction = 1";
	};

	// IDC: 16 * 19
	// right part. switch to specific classification
	class RtsSelectTypeBtn0: RightDownBtn0 {
		idc = IDC + 16 * 19 + 0;
		x = RtsMapLeftWidth + RtsMapMidWidth + 0.01 + 0.09 * 1;
		y = RtsMapBottom - 0.20 + 0.05 * 0;
		w = 0.19;
		text = "UNDEFINED";
		action = "btnValue05 = 0";
	};
	class RtsSelectTypeBtn1: RtsSelectTypeBtn0 {
		idc = IDC + 16 * 19 + 1;
		y = RtsMapBottom - 0.20 + 0.05 * 1;
		action = "btnValue05 = 1";
	};
	class RtsSelectTypeBtn2: RtsSelectTypeBtn0 {
		idc = IDC + 16 * 19 + 2;
		y = RtsMapBottom - 0.20 + 0.05 * 2;
		action = "btnValue05 = 2";
	};
	class RtsSelectTypeBtn3: RtsSelectTypeBtn0 {
		idc = IDC + 16 * 19 + 3;
		y = RtsMapBottom - 0.20 + 0.05 * 3;
		action = "btnValue05 = 3";
	};
};