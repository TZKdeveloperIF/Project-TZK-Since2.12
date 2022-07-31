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
		action = "btnMarker = !btnMarker; if !btnMarker then {call loadFile localize {TZK_FUNC_MARKER_HIDE_SPEC}} else {[boole_Mark_Player_Name] exec localize {TZK_MARKER_SPEC}} ";
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