class UnitCamDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {GroupsBg};
	objects[] = { };
	controls[] = {ShowInfo, Info, Tracking, DriverBG, Driver, GunnerBG, Gunner, CommanderBG, Commander, Disband, DisbandAll, ShowGroups, GroupLeaders, GroupMembers, SatCam, Sights, Internal, External, Front, Left, Right, Rear, Exit, ClearDeadCrew, Disembark, Join, VehicleJoin};

	class ShowInfo: Button {
		idc = IDC+0;
		x = 0.0;
		y = 0.0;
		w = 0.1;
		text = ""
		action = "bShowInfo = !bShowInfo";
	};

	class Info: TextField {
		idc = IDC+1;
		x = 0.0;
		y = 0.04;
		w = 0.3;
		h = 0.6;
  	text = ""
  	colorText[] = {1,1,1,1};
		colorbackground[] = {0,0,0,0.5};
	};

	class DriverBG: ButtonBG {
		idc = IDC+12
		x = 0
		y = 0.96
		w = 0.1
  }
	class Driver: Button {
		idc = IDC+13
		x = 0
		y = 0.96
		w = 0.1
		text = "Driver"
		action = "btnDriver = true"
  }

	class GunnerBG: ButtonBG {
		idc = IDC+14
		x = 0
		y = 0.92
		w = 0.1
  }
	class Gunner: Button {
		idc = IDC+15
		x = 0
		y = 0.92
		w = 0.1
		text = "Gunner"
		action = "btnGunner = true"
  }

	class CommanderBG: ButtonBG {
		idc = IDC+16
		x = 0
		y = 0.88
		w = 0.1
  }
	class Commander: Button {
		idc = IDC+17
		x = 0
		y = 0.88
		w = 0.1
		text = "Commander"
		action = "btnCommander = true"
  }

	class Disband: Button {
		idc = IDC+18
		x = 0.1
		y = 0.96
		w = 0.1
		text = "Disband"
		action = "btnDisband = true"
  }

	class DisbandAll: Button {
		idc = IDC+19
		x = 0.1
		y = 0.92
		w = 0.15
		text = "Disband Group"
		action = "btnDisbandAll = true"
  }

	class ClearDeadCrew: Button {
		idc = IDC+20
		x = 0.1
		y = 0.88
		w = 0.17
		text = "Clear Dead Crew"
		action = "btnClearDeadCrew = true"
  }

	class Disembark: Button {
		idc = IDC+21
		x = 0.2
		y = 0.96
		w = 0.1
		text = "Disembark"
		action = "btnDisembark = true"
  }
	class Join: Button {
		idc = IDC+22
		x = 0.3
		y = 0.96
		w = 0.1
		text = "Join"
		action = "btnJoin = true"
  }
	class VehicleJoin: Button {
		idc = IDC+23
		x = 0.25
		y = 0.92
		w = 0.15
		text = "Vehicle Join"
		action = "btnVehicleJoin = true"
  }



	class Tracking: Text {
		idc = IDC+2;
		style = ST_CENTER;
		x = 0.3;
		y = 0.0;
		w = 0.4;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.5};
	};

	class ShowGroups: Button {
		idc = IDC+3;
		x = 0.86;
		y = 0.0;
		w = 0.14;
		text = "";
		action = "bShowGroups = !bShowGroups";
	};

	class GroupLeaders: ListBox {
		idc = IDC+4;
		x = 0.86;
		y = 0.04;
		w = 0.14;
		h = 0.225;
		colorText[] = {0.5,0.5,0.5,1};
		font = FontM;
		sizeEx = 0.02;
		rowHeight = 0.025;
	};

	class GroupMembers: ListBox {
		idc = IDC+5;
		x = 0.86;
		y = 0.265;
		w = 0.14;
		h = 0.30;
		colorText[] = {0.5,0.5,0.5,1};
		font = FontM;
		sizeEx = 0.02;
		rowHeight = 0.025;
	};

	class GroupsBg: Text {
		idc = IDC+6;
		x = 0.86;
		y = 0.04;
		w = 0.14;
		h = 0.525;
		colorbackground[] = {0,0,0,0.5};
	};

	class Front: Button {
		idc = IDC+8;
		x = 0.86;
		y = 0.80;
		w = 0.08;
		text = "Front";
		action = "btnFront = true";
	};

	class Left: Button {
		idc = IDC+9;
		x = 0.82;
		y = 0.84;
		w = 0.08;
		text = "Left";
		action = "btnLeft = true";
	};

	class Right: Button {
		idc = IDC+10;
		x = 0.90;
		y = 0.84;
		w = 0.08;
		text = "Right";
		action = "btnRight = true";
	};

	class Rear: Button {
		idc = IDC+11;
		x = 0.86;
		y = 0.88;
		w = 0.08;
		text = "Rear";
		action = "btnRear = true";
	};

	class SatCam: Button {
		idc = IDC+7;
		x = 0.5;
		y = 0.96;
		w = 0.1;
		text = "Sat Cam";
		action = "btnFar = true";
	};

	class Sights: Button {
		x = 0.6;
		y = 0.96;
		w = 0.1;
		text = "Sights";
		action = "iView = 2";
	};

	class Internal: Button {
		x = 0.7;
		y = 0.96;
		w = 0.1;
		text = "1st person";
		action = "iView = 1";
	};

	class External: Button {
		x = 0.8;
		y = 0.96;
		w = 0.1;
		text = "External";
		action = "iView = 0";
	};

	class Exit: Button {
		x = 0.9;
		y = 0.96;
		w = 0.1;
		text = "Exit";
		action = "closeDialog 0";
	};
};

class UnitCamDialog2: UnitCamDialog {
	controls[] = {
		ShowInfo, Info, Tracking, DriverBG, Driver, GunnerBG, Gunner, CommanderBG, Commander, Disband, DisbandAll, 
		ShowGroups, GroupLeaders, GroupMembers, SatCam, Sights, Internal, External, Front, Left, Right, Rear, Exit,
		ClearDeadCrew, Disembark, Join, VehicleJoin, Repair, Rearm
	};
	class Repair: Button {
		x = 0.27
		y = 0.88
		w = 0.07
		text = "Repair"
		action = "btnValue00 = 2^0"
	}
	class Rearm: Button {
		x = 0.34
		y = 0.88
		w = 0.06
		text = "Rearm"
		action = "btnValue00 = 2^1"
	}
};