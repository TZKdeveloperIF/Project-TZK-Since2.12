class RscText {
	type = CT_STATIC;
	idc = -1;
	style = ST_CENTER;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1, 1, 1, 1};
	font = FontM;
	sizeEx = 0.02;
};
class RscMulti {
	type = CT_STATIC;
	idc = -1;
	style = ST_MULTI;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {0, 0, 0, 1};
	font = FontHTML;
	sizeEx = 0.02;
	lineSpacing = 1;
	text = "";
};
class RscButton1 {
	type = CT_BUTTON;
	idc = -1;
	style = ST_CENTER;
	colorText[] = {0, 0, 0, 1};
	font = FontHTML;
	sizeEx = 0.018;
	soundPush[] = {, 0.2, 1};
	soundClick[] = {"ui\ui_ok", 0.2, 1};
	soundEscape[] = {"ui\ui_cc", 0.2, 1};
	default = false;
};
class RscCombo {
	style = ST_CENTER;
	idc = -1;
	colorSelect[] = {1.0, 1.0, 0.2, 1.0};
	colorSelectBackground[] = {1.0, 1.0, 0.0, 1.0};
	colorText[] = {0.12,0.10,0.20,1.0};
	colorBackground[] = {1, 1, 1, 0.5};
	font = FontHTML;
	sizeEx = 0.019;
	rowHeight = 0.06;
	type = CT_COMBO;
	wholeHeight = 0.3;
};

class TZK_BackGround_0: RscText {
	colorBackground[] = COLOR_TZK_MENU_BG_1;
	text = "";
	x = 0.1;
	y = 0.1;
	w = 0.85;
	h = 0.75;
};
class TZK_BackGround_1: RscText {
	colorBackground[] = COLOR_TZK_MENU_BG_2;
	text = "";
	x = 0.12;
	y = 0.14;
	w = 0.25;	// w = 0.245; 0.05 less
	h = 0.70;	// h = 0.682; 0.08 less
};
class TZK_Frame_0: RscText {
	style = ST_FRAME;
	colorText[] = {1, 1, 1, 0.7};
	text = "  TZK Mission Setting";
	font = FontHTML;
	sizeEx = 0.030;
	x = 0.1;
	y = 0.082;	//0.018 less for sizeEx 0.030
	w = 0.85;
	h = 0.768;
};
class TZK_Frame_1: RscText {
	style = ST_FRAME;
	colorText[] = {0, 0, 0, 0.7};
	text = "  Effects";
	font = FontHTML;
	sizeEx = 0.020;
	x = 0.12;
	y = 0.13;	// 0.01 less for sizeEx 0.020
	w = 0.25;
	h = 0.71;
};

class Picture_BLG {
	type = CT_STATIC;
	idc = -1;
	style = ST_PICTURE
	colorText[] = {1, 1, 1, 1};
	colorBackground[] = {0, 0, 0, 0};
	font = "TahomaB36"
	SizeEX = 0.04
	text =;
};
class Text {
	type = CT_STATIC;
	idc = IDC_UNDEFINED;
	style = ST_LEFT;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	font = DEFAULTFONT;
	sizeEx = 0.025;
	text =;

	//Default button dimensions.
	w = 0.25;
	h = 0.04;
};
class GuiLargeText: Text {
	colorText[] = {0.75,0.75,0.75,1};
	colorBackground[] = {0,0,0,0};
	
	font = DEFAULTFONT;
	sizeEx = 0.029;

	//Default button dimensions.	
	w = 0.275;
	h = 0.1;
};
class ActiveText {
	idc = IDC_UNDEFINED;
	type = CT_ACTIVETEXT;
	style = ST_LEFT;
	color[] = {0,0,0,1};
	colorActive[] = {1,1,1,1};
	font = DEFAULTFONT;
	sizeEx = 0.025;
	soundEnter[] = {"ui\ui_over",0.2,1};
	soundPush[] = {"",0.2,1};
	soundClick[] = {"ui\ui_ok",0.2,1};
	soundEscape[] = {"ui\ui_cc",0.2,1};
	default = 0;
};
class TextField: Text {
	type = CT_STATIC;
	idc = IDC_UNDEFINED;
	style = ST_LEFT+ST_MULTI;
	colorText[] = {0,0,0,1};
	colorBackground[] = {0,0,0,0};
	font = DEFAULTFONT;
	sizeEx = 0.025;
	text = "HEJ";
	lineSpacing = 1;

	//Default button dimensions.
	w = 0.25;
	h = 0.04;
};

class ComboBoxBG: Text {
	colorText[] = COLOR_DATA_TEXT;
	colorBackground[] = COLOR_CLICKABLE_BG;

	//Default dimensions.
	w = 0.25;
	h = 0.04;
};
class ComboBox {
	type = CT_COMBO;
	wholeHeight = 0.4;
	style = ST_LEFT;
	idc = IDC_UNDEFINED;
	colorSelect[] = COLOR_SELECTED_TEXT;
	//colorSelectBackground[] = {1, 1, 0, 1};
	colorText[] = COLOR_LB_TEXT;
	colorBackground[] = COLOR_CLICKABLE_BG;
	font = DEFAULTFONT;
	sizeEx = 0.025;
	rowHeight = 0.03;

	//Default dimensions.
	w = 0.25;
	h = 0.04;
};

class Frame: Text {
	idc = -1;
	style = ST_FRAME;
	colorText[] = COLOR_LABEL_TEXT;
	//colorBackground[] = COLOR_LABEL_TEXT;
	text =;
};
class ListBoxBG: Text {
	colorBackground[] = COLOR_CLICKABLE_BG;
};
class ListBox {
	type = CT_LISTBOX;
	style = ST_LEFT;
	idc = IDC_UNDEFINED;

	colorText[] = COLOR_LABEL_TEXT;
	colorSelect[] = COLOR_SELECTED_TEXT_L;
	colorSelectBackGround[] = COLOR_CLICKABLE_BG_L;

	font = DEFAULTFONT;
	sizeEx = 0.025;
	rowHeight = 0.03;
	w = 0.1
	h = 0.06
};
class Title: Text {
	font = DEFAULTFONT;
	colorText[] = COLOR_TITLE_TEXT;
};
class Label: Text {
	font = DEFAULTFONT;
	colorText[] = COLOR_DATA_TEXT;
};
class Image: Text {
	style = ST_PICTURE;
	font = DEFAULTFONT;
	colorText[] = {1, 1, 1, 1};
	colorBackground[] = {0.6, 0.6, 0.6, 1};
	SizeEX = 0.04
	text = "";
};
class DataText: Text {
	font = DEFAULTFONT;
	colorText[] = COLOR_DATA_TEXT;
	//colorBackground[] = COLOR_DATA_BG;
};
class ButtonBG: Text {
	colorText[] = COLOR_DATA_TEXT;
	colorBackground[] = COLOR_CLICKABLE_BG;

	//Default dimensions.
	w = 0.25;
	h = 0.04;
};
class SelectedBG: Text {
	colorText[] = {0,0,0,0};
	colorBackground[] = COLOR_SELECTED_TEXT;

	//Default dimensions.
	w = 0.25;
	h = 0.04;
};
class Button {
	type = CT_BUTTON;
	idc = IDC_UNDEFINED;
	style = ST_CENTER;
	colorText[] = COLOR_BTN_TEXT;
	colorBackground[] = COLOR_CLICKABLE_BG;
	font = DEFAULTFONT;
	sizeEx = 0.025;
	soundClick[] = {"ui\ui_ok",0.2,1};
	soundEscape[] = {"ui\ui_cc",0.2,1};
	soundPush[] = {,0.2,1};
	default = false;
	text = ""
	//Default button dimensions.
	w = 0.25;
	h = 0.04;
};
class Checkbox {
	type = CT_CHECKBOXES;
	idc = IDC_UNDEFINED;
	style = ST_LEFT;
	colorText[] = COLOR_BTN_TEXT;
	colorBackground[] = COLOR_BTN_BG;
	font = DEFAULTFONT;
	sizeEx = 0.025;
	soundClick[] = {"ui\ui_ok",0.2,1};
	soundEscape[] = {"ui\ui_cc",0.2,1};
	soundPush[] = {,0.2,1};
	default = false;

	//Default button dimensions.
	w = 0.25;
	h = 0.04;
};
class SliderVert {
	type = CT_SLIDER;
	idc = IDC_UNDEFINED;
	style = 0;
	color[] = {1,1,1,1};
	sizeEx = 0.025;

	//Default button dimensions.
	w = 0.04;
	h = 0.20;
};
class SliderHorz {
	type = CT_SLIDER;
	idc = IDC_UNDEFINED;
	style = ST_HPOS;
	color[] = {1,1,1,1};
	sizeEx = 0.025;

	//Default button dimensions.
	w = 0.20;
	h = 0.04;
};

class Menu {
	idd = IDC_UNDEFINED;
	movingEnable = true;
	controlsBackground[] = {BackgroundWindow};
	objects[] = {};

	class BackgroundWindow: Text {
		idc = IDC_DialogBG_CR;
		colorBackground[] = COLOR_MENU_BG;
		text = ;
		x = 0.2;
		y = 0.0;
		w = 0.6;
		h = 0.7;
	};
	class Light_BG_Window: BackgroundWindow {
		// refer to MFCTI 1.16 design. Main parts are style, colorText and colorBackground.
		idc = IDC_DialogBG_Light;
		style = ST_HUD_BACKGROUND;
		colorText[] = {0.75,0.75,0.75,1};
		colorBackground[] = {0.4,0.4,0.4,1.0};
	};
	class Dark_BG_Window: BackgroundWindow {
		idc = IDC_DialogBG_Dark;
		style = ST_HUD_BACKGROUND;
		colorText[] = {0.75,0.75,0.75,1};
		colorBackground[] = {0.1,0.1,0.1,1.0};
	};
};

// EOF
