class RespawnMenu: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {Sub_BG, Sub_BG_Light};
	objects[] = { };
	controls[] = { RespawnTitle, Exit, RespawnList };

	class Sub_BG: BackgroundWindow {
		x = 0.2;
		y = 0.0;
		w = 0.6;
		h = 0.66;
	};
	class Sub_BG_Light: Light_BG_Window {
		x = 0.2;
		y = 0.0;
		w = 0.6;
		h = 0.66;
	};
	
	class RespawnTitle: Title {
		idc = IDC_TITLE
		x = 0.2
		y = 0.0
		w = 0.6
		style = ST_CENTER
		text = ""
	};

	class Exit: Button {
		x = 0.95
		y = 0.0
		w = 0.05
		text = "Exit"
		action = "closeDialog 0"
	};

	class RespawnList: ListBox {
		idc = IDC+0
		x = 0.2
		y = 0.04
		w = 0.6
		h = 0.62
	};
}