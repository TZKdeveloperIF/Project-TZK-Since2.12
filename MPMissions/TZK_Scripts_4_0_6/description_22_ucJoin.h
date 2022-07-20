class UCJoinDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {UCJoinDialog_BackgroundWindow};
	objects[] = { };
	controls[] = {UCJoinDialog_Title, UCJoinDialog_List, UCJoinDialog_BUTTON_OK, UCJoinDialog_BUTTON_EXIT};

  	class UCJoinDialog_BackgroundWindow: BackgroundWindow {
		 x = 0.55;
		 y = 0.07;
		 w = 0.30;
		 h = 0.66;
  	};

  	class UCJoinDialog_Title: Title {
			style = ST_CENTER;
			x = 0.55;
			y = 0.08;
			w = 0.30;
			h = 0.03;
			colorBackground[] = {0.247, 0.247, 0.247, 0.75};
			text = "Select Group to Join";
	};
  	class UCJoinDialog_List: ListBox {
			idc = IDC + 1;
			x = 0.55;
			y = 0.12;
			w = 0.30;
			h = 0.54;
	};
	class UCJoinDialog_BUTTON_OK: Button {
		x = 0.5975;
		y = 0.69;
		w = 0.1;
		h = 0.04;
		text = "Confirm"
		action = "btnUCJoinOK = true"
		default = false
	};

	class UCJoinDialog_BUTTON_EXIT: Button {
		x = 0.7025;
		y = 0.69;
		w = 0.1;
		h = 0.04;
		text = "Exit"
		action = "btnUCJoinExit = true"
		default = false
	};
};