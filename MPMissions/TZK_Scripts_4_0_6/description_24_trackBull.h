class RscEdit {
	type = CT_EDIT;
	idc = -1;
	style = ST_LEFT;
	font = FontHTML;
	sizeEx = 0.02;
	colorText[] = {0, 0, 0, 1};
	colorSelection[] = {0.5, 0.5, 0.5, 1};
	autocomplete = true;text = ;
};
class RscTextSmall	 {
	type = CT_STATIC;
	idc = -1;
	style = ST_LEFT;
	h = 0.04;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {.08, .08, .12, .75};
	font = FontS;
	size = 0.7;
};
class RscSlider {
	type = CT_SLIDER;
	idc = -1;
	style = ST_HPOS;
	selection ="display";
	Zoom =0.1;
	//text =0.5;
	color[] = {0, 0, 0, 0.8};
	colorBackground[] = {1, 1, 1, 0.75};
	colorText[] = {0.08, 0.08, 0.12, .75};
	size = 0.8;
	angle = 0;
	font = FontS;
};
class TrackBull {
	idd = -1;
	movingEnable = 1;
	controlsBackground[] = {};
	objects[] = {};
	controls[] =  {DistanceText, dot, SpeedText, vel, zview_Bull, UpDownText};
	class UpDownText: RscTextSmall {
		x = 0.76 ; y = 0.36; w = 0.22; h = 0.03; sizeEx = 0.02;text = "Up Down camera"; action = "";
	};
	class zview_Bull: RscSlider {
		idc = IDC_SL_ZVIEW;
		x = 0.76 ; y = 0.39; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class RotationText: RscTextSmall {
		x = 0.76 ; y = 0.43; w = 0.22; h = 0.03; sizeEx = 0.02;text = "Rotation camera"; action = "";
	};
	class rotation_bull: RscSlider {
		idc = IDC_SL_ROTATION;
		x = 0.76 ; y = 0.46; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class ZoomText: RscTextSmall {
		x = 0.76 ; y = 0.50; w = 0.22; h = 0.03; sizeEx = 0.02;text = "Zoom"; action = "";
	};
	class zoom: RscSlider {
		idc = IDC_SL_ZOOM;
		x = 0.76 ; y = 0.53; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class AccelerateTime: RscSlider {
		idc = IDC_SL_ACCELERATE;
		x = 0.76 ; y = 0.81; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class DistanceText: RscEdit {
		idc = 101;
		style = ST_MULTI + ST_NO_RECT;
		x = 0.76 ; y = 0.74; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class SpeedText: RscEdit {
		idc = 102;
		style = ST_MULTI + ST_NO_RECT;
		x = 0.76 ; y = 0.67; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class Vel: RscEdit {
		idc = 103;
		style = ST_MULTI + ST_NO_RECT;
		x = 0.76 ; y = 0.60; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
	};
	class Dot: RscTextSmall {
		x = 0.5 ; y = 0.5; w = 0.01; h = 0.01; sizeEx = 0.02; text = "+";
	};
};