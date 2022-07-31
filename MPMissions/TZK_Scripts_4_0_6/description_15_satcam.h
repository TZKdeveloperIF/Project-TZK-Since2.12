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