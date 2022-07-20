class SetFlightAltitudeDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {SetFlightAltitudeDialogBackgroundWindow};
	objects[] = { };
	controls[] = { SetFlightAltitudeTitle, Action, Exit, Altitudes };

	class SetFlightAltitudeDialogBackgroundWindow: BackgroundWindow {
		x = 0.2;
		y = 0.0;
		w = 0.6;
		h = 0.65;
	};

	class SetFlightAltitudeTitle: Title {
		style = ST_CENTER;
		x = 0.2;
		y = 0.0;
		w = 0.3;
		text = "Set Flight Altitude";
	};

	class Action: Button {
		x = 0.225;
		y = 0.1;
		text = "Set Flight Altitude";
		action = "btnAction = true";
	};

	class Exit: Button {
		x = 0.225;
		y = 0.6;
		text = "Exit";
		action = "closeDialog 0";
	};

	class Altitudes: ListBox {
		idc = IDC_LB_ALTITUDES;
		x = 0.5;
		y = 0.0;
		w = 0.3;
		h = 0.65;
	};

};