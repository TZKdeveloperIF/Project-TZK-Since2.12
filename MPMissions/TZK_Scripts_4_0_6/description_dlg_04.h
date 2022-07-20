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

class GameOverDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {};
	objects[] = { };
	controls[] = {Leaderboard, Stats};

	class Leaderboard: Button {
		x = 0.0;
		y = 0.0;
		w = 0.2;
		text = "Leaderboard";
		action = "btnLeaderboard = true";
	};

	class Stats: Button {
		x = 0.8;
		y = 0.0;
		w = 0.2;
		text = "Statistics";
		action = "btnShowStats = true";
	};
};
class SpecDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {LogBg, GroupsBg};
	objects[] = { };
	controls[] = {Tracking, TrackingBottom, ShowLog, ShowInfo, GameTime, GameTimeBottom, Log, Info, Leaderboard, Stats, ShowMap, ShowGroups, GroupLeaders, GroupMembers, AngleVert, Distance, AngleHorz, Front, Left, Top, Right, Near, Rear, Far, LockDir, North, West, East, South, ShowAll, UseNVG, Quit, MarkerBG, Marker};

	class Tracking: Text {
		idc = IDC_TEXT_TRACKING;
		style = ST_CENTER;
		x = 0.3;
		y = 0.0;
		w = 0.4;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.5};
	};

	class TrackingBottom: Text {
		idc = IDC_TEXT_TRACKINGBOTTOM;
		style = ST_CENTER;
		x = 0.3;
		y = 0.96;
		w = 0.4;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.5};
	};

	class ShowLog: Button {
		idc = IDC_BTN_SHOWLOG;
		x = 0.0;
		y = 0.0;
		w = 0.1;
		text = "";
		action = "bShowLog = !bShowLog; if (bShowLog) then { bShowInfo = false }";
	};

	class ShowInfo: Button {
		idc = IDC_BTN_SHOWINFO;
		x = 0.1;
		y = 0.0;
		w = 0.1;
		text = ""
		action = "bShowInfo = !bShowInfo; if (bShowInfo) then { bShowLog = false }";
	};


	class GameTime: Text {
		idc = IDC_TEXT_GAMETIME;
		style = ST_CENTER;
		x = 0.2;
		y = 0.0;
		w = 0.1;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.5};
	};

	class GameTimeBottom: Text {
		idc = IDC_TEXT_GAMETIMEBOTTOM;
		style = ST_CENTER;
		x = 0.2;
		y = 0.96;
		w = 0.1;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.5};
	};

	class Log: ListBox {
		idc = IDC_LB_LOG;
		style = ST_LEFT;
		x = 0.0;
		y = 0.04;
		w = 0.3;
		h = 0.92;
		font = FontM;
		sizeEx = 0.02;
		rowHeight = 0.025;
		colorText[] = {1,1,1,0.8};
		colorSelect[] = {0,0,0,0.8};
	};

	class LogBg: Text {
		idc = IDC_BG_LOG;
		x = 0.0;
		y = 0.04;
		w = 0.3;
		h = 0.92;
		colorbackground[] = {0,0,0,0.5};
	};

	class Info: TextField {
		idc = IDC_INFO;
		x = 0.0;
		y = 0.04;
		w = 0.3;
		h = 0.6;
  	text = ""
  	colorText[] = {1,1,1,1};
		colorbackground[] = {0,0,0,0.5};
	};

	class Leaderboard: Button {
		idc = IDC_BTN_LEADERBOARD;
		x = 0.0;
		y = 0.96;
		w = 0.15;
		text = "Leaderboard";
		action = "btnLeaderboard = true";
	};

	class Stats: Button {
		idc = IDC_BTN_STATS;
		x = 0.15;
		y = 0.96;
		w = 0.15;
		text = "Statistics";
		action = "btnShowStats = true";
	};

	class ShowMap: Button {
		idc = IDC_BTN_SHOWMAP;
		x = 0.3;
		y = 0.96;
		w = 0.1;
		text = "";
		action = "bShowMap = !bShowMap; btnShowMap = true";
	};
	class UseNVG: Button {
		idc = IDC_BTN_UseNVG;
		x = 0.3;
		y = 0.92;
		w = 0.1;
		text = "NVG";
		action = "btnUseNVG = true";
	};
	class Quit: Button {
		idc = IDC_BTN_QUIT;
		x = 0.3;
		y = 0.88;
		w = 0.1;
		text = "Quit";
		action = "btnQuit = true";
	};
	class Marker: Quit {
		idc = IDC_BTN_MARK;
		y = 0.84;
		text = "Marker";
		action = "btnMarker = !btnMarker; if !btnMarker then {call preprocessFile localize {TZK_FUNC_MARKER_HIDE_SPEC}} else {[boole_Mark_Player_Name] exec ""\TZK_Scripts_4_0_4\Player\Marker\SpectatorMarker.sqs""} ";
	};
	class MarkerBG: SelectedBG {
		idc = IDC_BTN_MARK + 1;
		x = 0.3;
		y = 0.84;
		w = 0.1;
	};

	class ShowGroups: Button {
		idc = IDC_BTN_SHOWGROUPS;
		x = 0.86;
		y = 0.0;
		w = 0.14;
		text = "";
		action = "bShowGroups = !bShowGroups";
	};

	class GroupLeaders: ListBox {
		idc = IDC_LB_GROUPLEADERS;
		x = 0.86;
		y = 0.04;
		w = 0.14;
		h = 0.45;
		colorText[] = {0.2,0.2,0.2,1};
		font = FontM;
		sizeEx = 0.02;
		rowHeight = 0.025;
	};

	class GroupMembers: ListBox {
		idc = IDC_LB_GROUPMEMBERS;
		x = 0.86;
		y = 0.49;
		w = 0.14;
		h = 0.30;
		colorText[] = {0.2,0.2,0.2,1};
		font = FontM;
		sizeEx = 0.02;
		rowHeight = 0.025;
	};

	class GroupsBg: Text {
		idc = IDC_BG_GROUPS;
		x = 0.86;
		y = 0.04;
		w = 0.14;
		h = 0.75;
		colorbackground[] = {0,0,0,0.5};
	};

	class AngleHorz: SliderHorz {
		idc = IDC_SL_ANGLEHORZ;
		x = 0.45;
		y = 0.95;
	};

	class AngleVert: SliderVert {
		idc = IDC_SL_ANGLEVERT;
		x = 0.67;
		y = 0.8;
	};

	class Distance: SliderVert {
		idc = IDC_SL_DISTANCE;
		x = 0.72;
		y = 0.8;
	};

	class Front: Button {
		idc = IDC_BTN_FRONT;
		x = 0.86;
		y = 0.80;
		w = 0.08;
		text = "Front";
		action = "btnFront = true";
	};

	class Left: Button {
		idc = IDC_BTN_LEFT;
		x = 0.8;
		y = 0.84;
		w = 0.07;
		text = "Left";
		action = "btnLeft = true";
	};

	class Top: Button {
		idc = IDC_BTN_TOP;
		x = 0.87;
		y = 0.84;
		w = 0.06;
		text = "Top";
		action = "btnTop = true";
	};

	class Right: Button {
		idc = IDC_BTN_RIGHT;
		x = 0.93;
		y = 0.84;
		w = 0.07;
		text = "Right";
		action = "btnRight = true";
	};

	class Near: Button {
		idc = IDC_BTN_NEAR;
		x = 0.8;
		y = 0.88;
		w = 0.06;
		text = "Near";
		action = "btnNear = true";
	};

	class Rear: Button {
		idc = IDC_BTN_REAR;
		x = 0.86;
		y = 0.88;
		w = 0.08;
		text = "Rear";
		action = "btnRear = true";
	};

	class Far: Button {
		idc = IDC_BTN_FAR;
		x = 0.94;
		y = 0.88;
		w = 0.06;
		text = "Far";
		action = "btnFar = true";
	};

	class LockDir: Button {
		idc = IDC_BTN_LOCKDIR;
		x = 0.8;
		y = 0.92;
		w = 0.2;
		text = "";
		action = "bLockDir = !bLockDir";
	};

	class North: Button {
		idc = IDC_BTN_NORTH;
		x = 0.88;
		y = 0.88;
		w = 0.08;
		text = "North";
		action = "btnNorth = true";
	};

	class South: Button {
		idc = IDC_BTN_SOUTH;
		x = 0.88;
		y = 0.96;
		w = 0.08;
		text = "South";
		action = "btnSouth = true";
	};

	class West: Button {
		idc = IDC_BTN_WEST;
		x = 0.84;
		y = 0.92;
		w = 0.08;
		text = "West";
		action = "btnWest = true";
	};

	class East: Button {
		idc = IDC_BTN_EAST;
		x = 0.92;
		y = 0.92;
		w = 0.08;
		text = "East";
		action = "btnEast = true";
	};

	class ShowAll: Button {
		idc = IDC_BTN_SHOWALL;
		x = 0.8;
		y = 0.96;
		w = 0.2;
		text = "";
		action = "bShowAll = !bShowAll";
	};
};
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
class SatCamDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {GroupsBg};
	objects[] = { };
	controls[] = {Tracking, MapPos, ShowMap, ShowGroups, GroupLeaders, GroupMembers, Distance, North, West, East, South, Exit, UnitCam, SpyPos};

	class Tracking: Text {
		idc = IDC_TEXT_TRACKING;
		style = ST_CENTER;
		x = 0.3;
		y = 0.0;
		w = 0.4;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.5};
	};

	class MapPos: Text {
		idc = IDC_TEXT_MAPPOS;
		style = ST_LEFT;
		x = 0.1;
		y = 0.96;
		w = 0.3;
		h = 0.04;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.5};
	};

	class ShowMap: Button {
		idc = IDC_BTN_SHOWMAP;
		x = 0.0;
		y = 0.96;
		w = 0.1;
		text = "";
		action = "bShowMap = !bShowMap";
	};

	class ShowGroups: Button {
		idc = IDC_BTN_SHOWGROUPS;
		x = 0.86;
		y = 0.0;
		w = 0.14;
		text = "";
		action = "bShowGroups = !bShowGroups";
	};

	class Distance: SliderVert {
		idc = IDC_SL_DISTANCE;
		x = 0.94;
		y = 0.55;
	};

	class GroupLeaders: ListBox {
		idc = IDC_LB_GROUPLEADERS;
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
		idc = IDC_LB_GROUPMEMBERS;
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
		idc = IDC_BG_GROUPS;
		x = 0.86;
		y = 0.04;
		w = 0.14;
		h = 0.525;
		colorbackground[] = {0,0,0,0.5};
	};

	class North: Button {
		idc = IDC_BTN_FRONT;
		x = 0.86;
		y = 0.84;
		w = 0.08;
		text = "North";
		action = "btnNorth = true";
	};

	class West: Button {
		idc = IDC_BTN_LEFT;
		x = 0.82;
		y = 0.88;
		w = 0.08;
		text = "West";
		action = "btnWest = true";
	};

	class East: Button {
		idc = IDC_BTN_RIGHT;
		x = 0.90;
		y = 0.88;
		w = 0.08;
		text = "East";
		action = "btnEast = true";
	};

	class South: Button {
		idc = IDC_BTN_REAR;
		x = 0.86;
		y = 0.92;
		w = 0.08;
		text = "South";
		action = "btnSouth = true";
	};

	class Exit: Button {
		x = 0.9;
		y = 0.96;
		w = 0.1;
		text = "Exit";
		action = "closeDialog 0";
	};

	class UnitCam: Button {
		idc = IDC_UNIT;
		x = 0.5;
		y = 0.96;
		w = 0.1;
		text = "Unit Cam";
		action = "btnUnit = true";
	};

	class SpyPos: Button {
		x = 0.5;
		y = 0.92;
		w = 0.1;
		text = "Spy Pos";
		action = "btnSpy = true";
	};
};

// EOF
