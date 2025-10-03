class DisbandGroupDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {DisbandGroupDialog_BackgroundWindow};
	objects[] = { };
	controls[] = {DisbandGroupDialog_Title, DisbandGroupDialog_BUTTON_OK, DisbandGroupDialog_BUTTON_EXIT, DisbandGroupDialog_BUTTON_Leader, DisbandGroupDialog_BUTTON_Infantry, DisbandGroupDialog_BUTTON_Gunner};

		class DisbandGroupDialog_BackgroundWindow: BackgroundWindow {
			 x = 0.35;
			 y = 0.31;
			 w = 0.30;
			 h = 0.38;
			 text = ;
			 colorBackground[] = {0.247, 0.247, 0.247, 0.75};
		};

		class DisbandGroupDialog_Title: Title {
			style = ST_CENTER;
			x = 0.37;
			y = 0.35;
			w = 0.26;
			h = 0.03;
			colorBackground[] = {0.247, 0.247, 0.247, 0.75};
			text = "Confirm Disband Group";
		};

 		class DisbandGroupDialog_BUTTON_OK: Button {
  			x = 0.3975;
  			y = 0.39;
  			w = 0.1;
  			h = 0.04;
  			text = "Confirm"
  			action = "btnDisbandGroupOK = true"
  			default = false
		};

 		class DisbandGroupDialog_BUTTON_EXIT: Button {
  			x = 0.5025;
  			y = 0.39;
  			w = 0.1;
  			h = 0.04;
  			text = "Exit"
  			action = "btnDisbandGroupExit = true"
  			default = false
		};

		class DisbandGroupDialog_BUTTON_Leader: Button {
			idc = IDC + 16 * 0 + 0;

			x = 0.3975;
			y = 0.47;
			w = 0.205;
			h = 0.04;
			text = "Disband leader too"
			action = "btnDisbandGroupLeader = true"
			default = false
		};

 		class DisbandGroupDialog_BUTTON_Infantry: Button {
  			x = 0.3975;
  			y = 0.55;
  			w = 0.205;
  			h = 0.04;
  			text = "Disband infantry"
  			action = "btnDisbandGroupInf = true"
  			default = false
		};

 		class DisbandGroupDialog_BUTTON_Gunner: Button {
  			x = 0.3975;
  			y = 0.63;
  			w = 0.205;
  			h = 0.04;
  			text = "Disband non-gunner"
  			action = "btnDisbandGroupGunner = true"
  			default = false
		};

};