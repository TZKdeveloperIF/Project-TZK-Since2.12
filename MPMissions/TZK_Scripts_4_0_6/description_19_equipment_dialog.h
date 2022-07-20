class EquipmentDialog
{
	idd = -1;
	movingEnable = true;
	controlsBackground[] = { BACKGROUND, haupt_FRAME, Waffen_FRAME };

	class BACKGROUND: RscText {
		colorBackground[] = {0.5,0.5,0.5,1};
		text = ;
		x = 0.3;
		y = 0.025;
		w = 0.4;
		h = 0.925;
	};
	class haupt_FRAME: RscText {
		idc = 103;
		style = ST_FRAME;
		colorText[] = {0, 0, 0, 1};
		text = ;
		font = FontHTML;
		sizeEx = 0.025;
		x = 0.3;
		y = 0.025;
		w = 0.4;
		h = 0.925;
	};
	class Waffen_FRAME: RscText {
		idc = 103;
		style = ST_FRAME;
		colorText[] = {0, 0, 0, 1};
		text = "Slots/Weapons";
		font = FontHTML;
		sizeEx = 0.025;
		x = 0.3;
		y = 0.2;
		w = 0.4;
		h = 0.2;
	};
	objects[] = { };
	controls[] = {
		gun1_b0, gun1_b1, gun1_b2, gun1_b3, gun2_b0, gun2_b1, gun2_b2, gun2_b3, gun3_b0, gun3_b1, gun3_b2, gun3_b3, gun4_b0, gun4_b1, gun4_b2, gun4_b3,
		gun5_b0, gun5_b1, gun5_b2, gun5_b3, gun6_b0, gun6_b1, gun6_b2, gun6_b3, knopf, bild, slot0
	};

	class gun1_b0: RscText {
		idc = 801;
		style = ST_LEFT;
		x = 0.32;
		y = 0.225;
		w = 0.3;
		h = 0.025;
		text = "__";
	};
	class gun1_b1: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.56;
		y = 0.225;
		w = 0.025;
		h = 0.025;
		text = "<";
		action = "gun1=-1";
	};
	class gun1_b2: RscText {
		idc = 401;
		style = ST_CENTER;
		x = 0.585;
		y = 0.225;
		w = 0.05;
		h = 0.025;
		text = "0";
	};
	class gun1_b3: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.635;
		y = 0.225;
		w = 0.025;
		h = 0.025;
		text = ">";
		action = "gun1=1";
	};
	class gun2_b0: RscText {
		idc = 802;
		style = ST_LEFT;
		x = 0.32;
		y = 0.25;
		w = 0.3;
		h = 0.025;
		text = "__";
	};
	class gun2_b1: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.56;
		y = 0.25;
		w = 0.025;
		h = 0.025;
		text = "<";
		action = "gun2=-1";
	};
	class gun2_b2: RscText {
		idc = 402;
		style = ST_CENTER;
		x = 0.585;
		y = 0.25;
		w = 0.05;
		h = 0.025;
		text = "0";
	};
	class gun2_b3: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.635;
		y = 0.25;
		w = 0.025;
		h = 0.025;
		text = ">";
		action = "gun2=1";
	};
	class gun3_b0: RscText {
		idc = 803;
	style = ST_LEFT;
		x = 0.32;
		y = 0.275;
		w = 0.3;
		h = 0.025;
		text = "__";
	};
	class gun3_b1: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.56;
		y = 0.275;
		w = 0.025;
		h = 0.025;
		text = "<";
		action = "gun3=-1";
	};
	class gun3_b2: RscText {
		idc = 403;
		style = ST_CENTER;
		x = 0.585;
		y = 0.275;
		w = 0.05;
		h = 0.025;
		text = "0";
	};
	class gun3_b3: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.635;
		y = 0.275;
		w = 0.025;
		h = 0.025;
		text = ">";
		action = "gun3=1";
	};
	class gun4_b0: RscText {
		idc = 804;
		style = ST_LEFT;
		x = 0.32;
		y = 0.3;
		w = 0.3;
		h = 0.025;
		text = "__";
	};
	class gun4_b1: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.56;
		y = 0.3;
		w = 0.025;
		h = 0.025;
		text = "<";
		action = "gun4=-1";
	};
	class gun4_b2: RscText {
		idc = 404;
		style = ST_CENTER;
		x = 0.585;
		y = 0.3;
		w = 0.05;
		h = 0.025;
		text = "0";
	};
	class gun4_b3: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.635;
		y = 0.3;
		w = 0.025;
		h = 0.025;
		text = ">";
		action = "gun4=1";
	};
	class gun5_b0: RscText {
		idc = 805;
		style = ST_LEFT;
		x = 0.32;
		y = 0.325;
		w = 0.3;
		h = 0.025;
		text = "__";
	};
	class gun5_b1: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.56;
		y = 0.325;
		w = 0.025;
		h = 0.025;
		text = "<";
		action = "gun5=-1";
	};
	class gun5_b2: RscText {
		idc = 405;
		style = ST_CENTER;
		x = 0.585;
		y = 0.325;
		w = 0.05;
		h = 0.025;
		text = "0";
	};
	class gun5_b3: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.635;
		y = 0.325;
		w = 0.025;
		h = 0.025;
		text = ">";
		action = "gun5=1";
	};
	class gun6_b0: RscText {
		idc = 806;
		style = ST_LEFT;
		x = 0.32;
		y = 0.35;
		w = 0.3;
		h = 0.025;
		text = "__";
	};
	class gun6_b1: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.56;
		y = 0.35;
		w = 0.025;
		h = 0.025;
		text = "<";
		action = "gun6=-1";
	};
	class gun6_b2: RscText {
		idc = 406;
		style = ST_CENTER;
		x = 0.585;
		y = 0.35;
		w = 0.05;
		h = 0.025;
		text = "0";
	};
	class gun6_b3: RscButton1 {
		idc = 101;
		style = ST_CENTER;
		x = 0.635;
		y = 0.35;
		w = 0.025;
		h = 0.025;
		text = ">";
		action = "gun6=1";
	};
	class knopf: ActiveText {
		idc = 101;
		style = ST_CENTER;
		x = 0.40;
		y = 0.1;
		w = 0.2;
		h = 0.05;
		text = "> build your plane! <";
		action = "BuyOK=true";
	};
	class bild: RscText {
		idc = 101010;
		style=48; 
		text="plane0.jpg";
		x = 0.3;
		y = 0.45;
		w = 0.4;
		h = 0.4;
	};
	class slot0: bild {
		text="plane1.jpg";
		x = 0.4;
		y = 0.5;
		w = 0.05;
		h = 0.1;
	};
};