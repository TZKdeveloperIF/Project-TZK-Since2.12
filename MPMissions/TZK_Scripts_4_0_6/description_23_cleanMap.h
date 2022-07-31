class CleanMapDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {CleanMapDialog_BackgroundWindow};
	objects[] = { };
	controls[] = {CleanMapDialog_Title, CleanMapDialog_BUTTON_OK, CleanMapDialog_BUTTON_EXIT};

  	class CleanMapDialog_BackgroundWindow: BackgroundWindow {
			 x = 0.39;
			 y = 0.41;
			 w = 0.22;
			 h = 0.13;
			 text = ;
			 colorBackground[] = {0.247, 0.247, 0.247, 0.75};
  	};

  	class CleanMapDialog_Title: Title {
			style = ST_CENTER;
			x = 0.41;
			y = 0.43;
			w = 0.18;
			h = 0.03;
			colorBackground[] = {0.247, 0.247, 0.247, 0.75};
			text = "Confirm Clean Map";
	};

	class CleanMapDialog_BUTTON_OK: Button {
		x = 0.3975;
		y = 0.48;
		w = 0.1;
		h = 0.04;
		text = "Confirm"
		action = "btnCleanMapOK = true"
		default = false
	};

	class CleanMapDialog_BUTTON_EXIT: Button {
		x = 0.5025;
		y = 0.48;
		w = 0.1;
		h = 0.04;
		text = "Exit"
		action = "btnCleanMapExit = true"
		default = false
	};

};