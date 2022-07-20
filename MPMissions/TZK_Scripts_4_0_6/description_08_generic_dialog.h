class GenericDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {Sub_BG, Sub_BG_Light};
	objects[] = { };
	controls[] = { GenericTitle, InfoAction0, Action0, InfoAction1, Action1, InfoAction2, Action2, InfoAction3, Action3, InfoAction4, Action4, ListHeader, List, Exit };

	class Sub_BG: BackgroundWindow {
		x = 0.2;
		y = 0.0;
		w = 0.8;
		h = 0.65;
	};
	class Sub_BG_Light: Light_BG_Window {
		x = 0.2;
		y = 0.0;
		w = 0.8;
		h = 0.65;
	};

	class GenericTitle: Title {
		idc = IDC_TITLE;
		style = ST_CENTER;
		x = 0.2;
		y = 0.0;
		w = 0.3;
		text = "UNDEFINED";
	};
	class InfoAction0: Label {
		idc = IDC+0
		x = 0.225;
		y = 0.07;
		text = "UNDEFINED";
	};
	class Action0: Button {
		idc = IDC+1
		x = 0.225;
		y = 0.10;
		text = "UNDEFINED";
		action = "btnAction0 = true";
	};
	class InfoAction1: Label {
		idc = IDC+2
		x = 0.225;
		y = 0.17;
		text = "UNDEFINED";
	};
	class Action1: Button {
		idc = IDC+3
		x = 0.225;
		y = 0.20;
		text = "UNDEFINED";
		action = "btnAction1 = true";
	};
	class InfoAction2: Label {
		idc = IDC+4
		x = 0.225;
		y = 0.27;
		text = "UNDEFINED";
	};
	class Action2: Button {
		idc = IDC+5
		x = 0.225;
		y = 0.30;
		text = "UNDEFINED";
		action = "btnAction2 = true";
	};
	class InfoAction3: Label {
		idc = IDC+6
		x = 0.225;
		y = 0.36;
		text = "UNDEFINED";
	};
	class Action3: Button {
		idc = IDC+7
		x = 0.225;
		y = 0.40;
		text = "UNDEFINED";
		action = "btnAction3 = true";
	};
	class InfoAction4: Label {
		idc = IDC+8
		x = 0.225;
		y = 0.46;
		text = "UNDEFINED";
	};
	class Action4: Button {
		idc = IDC+9
		x = 0.225;
		y = 0.50;
		text = "UNDEFINED";
		action = "btnAction4 = true";
	};

	class ListHeader: Label {
		idc = IDC+10
		x = 0.5;
		y = 0.0;
		w = 0.5;
  // h = 0.65;
	};
	class List: ListBox {
		idc = IDC+11
		x = 0.5;
		y = 0.04;
		w = 0.5;
		h = 0.60;
	};

	class Exit: Button {
		x = 0.95;
		y = 0.0;
		w = 0.05;
		h = 0.04;
		text = "Exit";

	action = "closeDialog 0";
	};

};