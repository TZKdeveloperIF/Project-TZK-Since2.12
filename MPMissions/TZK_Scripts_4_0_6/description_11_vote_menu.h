class VoteMenu: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {Sub_BG_Dark, Sub_BG_Light};
	objects[] = { };
	class Sub_BG_Dark: Dark_BG_Window {
		x = 0.10;
		y = 0.075;
		h = 0.61;
		w = 0.80;
	};
	class Sub_BG_Light: Light_BG_Window {
		x = 0.10;
		y = 0.075;
		h = 0.61;
		w = 0.80;
	};
	
	controls[] = {
		MenuTitle, ExitMenu, AdminBtn, NextPageBtn, 
		ItemsLabel, ResultLabel, SelectionsLabel, ConfirmLabel, 
		Items00, Result00, Selections00, ConfirmBtn00, Items01, Result01, Selections01, ConfirmBtn01, Items02, Result02, Selections02, ConfirmBtn02, Items03, Result03, Selections03, ConfirmBtn03, Items04, Result04, Selections04, ConfirmBtn04, Items05, Result05, Selections05, ConfirmBtn05, Items06, Result06, Selections06, ConfirmBtn06, Items07, Result07, Selections07, ConfirmBtn07, Items08, Result08, Selections08, ConfirmBtn08, 
	};
	class MenuTitle: GuiLargeText {
		style = ST_CENTER;
		x = 0.3625;
		y = 0.07;
		w = 0.25;
		h = 0.05;
		text = "Vote Menu";
	};
	
	class ItemsBase: Text {
		x = 0.11;
		h = 0.04;
		w = 0.3;
		sizeEx = 0.022;
		text = "";
		colorText[] = {0.75,0.75,0.75,1};
	};
	class ResultBase: Text {
		style = ST_RIGHT;
		x = 0.375;
		h = 0.04;
		w = 0.125;
		sizeEx = 0.022;
		text = "";
		colorText[] = {0.75,0.75,0.75,1};
	};
	class SelectionsBase: ComboBox {
		x = 0.645;
		h = 0.035;
		w = 0.1;
		text = "";
		colorText[] = {0.75,0.75,0.75,1};
		// colortext[] = {0.22,0.2,0.3,1};
		colorBackground[] = {0,0,0,0.75}; // BackGround of Combo List. The Item itself with the highLighted selected option is controlled by "Select".
		// colorBackground won't appear on not-activated combo.
		// colorBackground[] = COLOR_CLICKABLE_BG;
		
		SizeEx = 0.021;
		colorSelect[] = {1,0.2,0.2,1}; // Since "select background" unavailable, the only one to highlight selected item is the color of text. Using red.
		// colorSelectBackground[] = {0.2,0.2,0.8,0}; // Useless for comboBox of OFP. OFP using the "ivverse" of  colorBackground[]  as "select background".

		// colorActive[] = {0,0,1,1}; // useless for comboBox of OFP.
		// colorDisabled[] = {0,1,0,1}; // useless for comboBox of OFP.
	};
	class ConfirmBase: Button {
		x = 0.785+0.01;
		h = 0.035;
		w = 0.06;
		text = "Vote";
		colorText[] = {0.75,0.75,0.75,1};
		colorBackground[] = {0,0,0,0};
	};
	class ItemsLabel:ItemsBase {
		y = 0.12;
		sizeEx = 0.025;
		text = "Options";
	};
	class ResultLabel: ResultBase {
		y = 0.12;
		x = 0.365;
		h = 0.04;
		w = 0.135;
		sizeEx = 0.025;
		text = "Result";
	};
	class SelectionsLabel: Text {
		x = 0.645;
		y = 0.12;
		h = 0.04;
		w = 0.1;
		text = "Your Vote";
		colorText[] = {0.75,0.75,0.75,1};
	};
	class ConfirmLabel: Text {
		x = 0.785;
		y = 0.12;
		h = 0.04;
		w = 0.1;
		text = "Confirm";
		colorText[] = {0.75,0.75,0.75,1};
	};

	class Items00: ItemsBase {
		idc = IDC + 100+0;
		y = 0.16 + 0.04*0;
	};
	class Result00: ResultBase {
		idc = IDC + 300+0;
		y = 0.16 + 0.04*0;
	};
	class Selections00: SelectionsBase {
		idc = IDC + 200+0;
		y = 0.1625 + 0.04*0;
	};
	class ConfirmBtn00: ConfirmBase {
		action = "btnValue00 = 2^0";
		idc = IDC + 400+0;
		y = 0.1625 + 0.04*0;
	};
	class Items01: ItemsBase {
		idc = IDC + 100+1;
		y = 0.16 + 0.04*1;
	};
	class Result01: ResultBase {
		idc = IDC + 300+1;
		y = 0.16 + 0.04*1;
	};
	class Selections01: SelectionsBase {
		idc = IDC + 200+1;
		y = 0.1625 + 0.04*1;
	};
	class ConfirmBtn01: ConfirmBase {
		action = "btnValue00 = 2^1";
		idc = IDC + 400+1;
		y = 0.1625 + 0.04*1;
	};
	class Items02: ItemsBase {
		idc = IDC + 100+2;
		y = 0.16 + 0.04*2;
	};
	class Result02: ResultBase {
		idc = IDC + 300+2;
		y = 0.16 + 0.04*2;
	};
	class Selections02: SelectionsBase {
		idc = IDC + 200+2;
		y = 0.1625 + 0.04*2;
	};
	class ConfirmBtn02: ConfirmBase {
		action = "btnValue00 = 2^2";
		idc = IDC + 400+2;
		y = 0.1625 + 0.04*2;
	};
	class Items03: ItemsBase {
		idc = IDC + 100+3;
		y = 0.16 + 0.04*3;
	};
	class Result03: ResultBase {
		idc = IDC + 300+3;
		y = 0.16 + 0.04*3;
	};
	class Selections03: SelectionsBase {
		idc = IDC + 200+3;
		y = 0.1625 + 0.04*3;
	};
	class ConfirmBtn03: ConfirmBase {
		action = "btnValue00 = 2^3";
		idc = IDC + 400+3;
		y = 0.1625 + 0.04*3;
	};
	class Items04: ItemsBase {
		idc = IDC + 100+4;
		y = 0.16 + 0.04*4;
	};
	class Result04: ResultBase {
		idc = IDC + 300+4;
		y = 0.16 + 0.04*4;
	};
	class Selections04: SelectionsBase {
		idc = IDC + 200+4;
		y = 0.1625 + 0.04*4;
	};
	class ConfirmBtn04: ConfirmBase {
		action = "btnValue00 = 2^4";
		idc = IDC + 400+4;
		y = 0.1625 + 0.04*4;
	};
	class Items05: ItemsBase {
		idc = IDC + 100+5;
		y = 0.16 + 0.04*5;
	};
	class Result05: ResultBase {
		idc = IDC + 300+5;
		y = 0.16 + 0.04*5;
	};
	class Selections05: SelectionsBase {
		idc = IDC + 200+5;
		y = 0.1625 + 0.04*5;
	};
	class ConfirmBtn05: ConfirmBase {
		action = "btnValue00 = 2^5";
		idc = IDC + 400+5;
		y = 0.1625 + 0.04*5;
	};
	class Items06: ItemsBase {
		idc = IDC + 100+6;
		y = 0.16 + 0.04*6;
	};
	class Result06: ResultBase {
		idc = IDC + 300+6;
		y = 0.16 + 0.04*6;
	};
	class Selections06: SelectionsBase {
		idc = IDC + 200+6;
		y = 0.1625 + 0.04*6;
	};
	class ConfirmBtn06: ConfirmBase {
		action = "btnValue00 = 2^6";
		idc = IDC + 400+6;
		y = 0.1625 + 0.04*6;
	};
	class Items07: ItemsBase {
		idc = IDC + 100+7;
		y = 0.16 + 0.04*7;
	};
	class Result07: ResultBase {
		idc = IDC + 300+7;
		y = 0.16 + 0.04*7;
	};
	class Selections07: SelectionsBase {
		idc = IDC + 200+7;
		y = 0.1625 + 0.04*7;
	};
	class ConfirmBtn07: ConfirmBase {
		action = "btnValue00 = 2^7";
		idc = IDC + 400+7;
		y = 0.1625 + 0.04*7;
	};
	class Items08: ItemsBase {
		idc = IDC + 100+8;
		y = 0.16 + 0.04*8;
	};
	class Result08: ResultBase {
		idc = IDC + 300+8;
		y = 0.16 + 0.04*8;
	};
	class Selections08: SelectionsBase {
		idc = IDC + 200+8;
		y = 0.1625 + 0.04*8;
	};
	class ConfirmBtn08: ConfirmBase {
		action = "btnValue00 = 2^8";
		idc = IDC + 400+8;
		y = 0.1625 + 0.04*8;
	};
	// regular expression: 0([;:,])

	//Exit menu button.
	class ExitMenu: Button {
		x = 0.4;
		y = 0.62;
		h = 0.04;
		w = 0.2;
		text = "Exit";
		action = "closeDialog 0";
		colorText[] = {0.75,0.75,0.75,1};
		colorBackground[] = {0,0,0,0};
	};
	class AdminBtn: ExitMenu {
		idc = IDC + 0;
		x = 0.4+0.2;
		text = "";
		action = "pvVoteAdmin = !pvVoteAdmin, publicVariable {pvVoteAdmin}, hint ([{Admin OFF}, {Admin ON}] select pvVoteAdmin)";
	};
	class NextPageBtn: ExitMenu {
		idc = IDC + 1;
		x = 0.4-0.2;
		text = "Next Page";
		action = "btnValue01 = 2^0";
	};
};