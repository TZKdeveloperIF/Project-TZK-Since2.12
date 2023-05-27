///////////////////////////////////////////////////////////
//			 	 MPIV_AH-64 Addon Version 1.2		     //
//             (C) 2005 by Marco-Polo-IV				 //
//                                                       //   
//				URL: HTTP://www.Tactical-Squad.de		 //
//	           Mail: Marco@Tactical-Squad.de             //
///////////////////////////////////////////////////////////

// some basic defines
#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

// type scope
#define private 0
#define protected 1
#define public 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16 
#define CanSeeRadarC CanSeeRadar+CanSeeCompass
#define CanSeeAll 31

#define WeaponNoSlot		0// dummy weapons
#define WeaponSlotPrimary	1// primary weapons
#define WeaponSlotSecondary	16// secondary weapons
#define WeaponSlotItem		256// items
#define WeaponSlotBinocular	4096// binocular
#define WeaponHardMounted	65536
//=====================================================================
// Anfang Patchinhalt
class CfgPatches
{
	class MPIV_AH64
	{
		units[] = {
			MPIV_AH64,MPIV_AH64_AT,MPIV_AH64_Ground,MPIV_AH64_Combat,MPIV_AH64_Ground_S,MPIV_AH64_Stinger,MPIV_AH64_AIM9,

			MPIV_AH64_BLK,MPIV_AH64_AT_BLK,MPIV_AH64_Ground_BLK,MPIV_AH64_Combat_BLK,MPIV_AH64_Ground_S_BLK,MPIV_AH64_Stinger_BLK,MPIV_AH64_AIM9_BLK,
			MPIV_AH64_DES,MPIV_AH64_AT_DES,MPIV_AH64_Ground_DES,MPIV_AH64_Combat_DES,MPIV_AH64_Ground_S_DES,MPIV_AH64_Stinger_DES,MPIV_AH64_AIM9_DES};
		weapons[] = {};
		requiredAddons[] = {"pm_lsr_pilots","LSR_uswp","MPIV_Weapons_Aircraft","BIS_Resistance"};
		requiredVersion = 1.91;
	};
};
// Ende Patchinhalt
//=====================================================================
// Anfang Modelldeklaration
class CfgModels
{
	class Default {};
	class Air : Default {};
	class Helicopter : Air {};

	class MPIV_Heli : Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"pic_usarmy",
			"pic_nation",
			"pic_nation2",
			"pic_nl",
			"mfd_pil_1",
			"mfd_pil_2",
			"mfd_pil_kl",
			"mfd_gun_1",
			"mfd_gun_2",
			"mfd_gun_kl",
			"mfd_gun_mid"
		};	
	};
	// AH-64 Varianten Standart Camo
	class MPIV_ah64 : MPIV_Heli {};
	class MPIV_ah64at : MPIV_Heli {};
	class MPIV_ah64gr : MPIV_Heli {};
	class MPIV_ah64co : MPIV_Heli {};
	class MPIV_ah64gr_s : MPIV_Heli {};
	class MPIV_ah64_aim9 : MPIV_Heli {};
	class MPIV_ah64stinger : MPIV_Heli {};

	class MPIV_ah64d : MPIV_Heli {};
	class MPIV_ah64d_at : MPIV_Heli {};
	class MPIV_ah64d_gr : MPIV_Heli {};
	class MPIV_ah64d_co : MPIV_Heli {};
	class MPIV_ah64d_aim9 : MPIV_Heli {};
	class MPIV_ah64d_gr_s : MPIV_Heli {};
	class MPIV_ah64d_stinger : MPIV_Heli {};

	class MPIV_ah64d_lb : MPIV_Heli {};
	class MPIV_ah64d_at_lb : MPIV_Heli {};
	class MPIV_ah64d_gr_lb : MPIV_Heli {};
	class MPIV_ah64d_co_lb : MPIV_Heli {};
	class MPIV_ah64d_aim9_lb : MPIV_Heli {};
	class MPIV_ah64d_gr_s_lb : MPIV_Heli {};
	class MPIV_ah64d_stinger_lb : MPIV_Heli {};

	// AH-64 Varianten Black Camo
	class MPIV_ah64_blk : MPIV_Heli {};
	class MPIV_ah64at_blk : MPIV_Heli {};
	class MPIV_ah64gr_blk : MPIV_Heli {};
	class MPIV_ah64co_blk : MPIV_Heli {};
	class MPIV_ah64gr_s_blk : MPIV_Heli {};
	class MPIV_ah64_aim9_blk : MPIV_Heli {};
	class MPIV_ah64stinger_blk : MPIV_Heli {};

	class MPIV_ah64d_blk : MPIV_Heli {};
	class MPIV_ah64d_at_blk : MPIV_Heli {};
	class MPIV_ah64d_gr_blk: MPIV_Heli {};
	class MPIV_ah64d_co_blk : MPIV_Heli {};
	class MPIV_ah64d_aim9_blk : MPIV_Heli {};
	class MPIV_ah64d_gr_s_blk : MPIV_Heli {};
	class MPIV_ah64d_stinger_blk : MPIV_Heli {};

	class MPIV_ah64d_lb_blk : MPIV_Heli {};
	class MPIV_ah64d_at_lb_blk : MPIV_Heli {};
	class MPIV_ah64d_gr_lb_blk : MPIV_Heli {};
	class MPIV_ah64d_co_lb_blk : MPIV_Heli {};
	class MPIV_ah64d_aim9_lb_blk : MPIV_Heli {};
	class MPIV_ah64d_gr_s_lb_blk : MPIV_Heli {};
	class MPIV_ah64d_stinger_lb_blk : MPIV_Heli {};

	// AH-64 Varianten Desert Camo
	class MPIV_ah64_des : MPIV_Heli {};
	class MPIV_ah64at_des : MPIV_Heli {};
	class MPIV_ah64gr_des : MPIV_Heli {};
	class MPIV_ah64co_des : MPIV_Heli {};
	class MPIV_ah64gr_s_des : MPIV_Heli {};
	class MPIV_ah64_aim9_des : MPIV_Heli {};
	class MPIV_ah64stinger_des : MPIV_Heli {};

	class MPIV_ah64d_des : MPIV_Heli {};
	class MPIV_ah64d_at_des : MPIV_Heli {};
	class MPIV_ah64d_gr_des: MPIV_Heli {};
	class MPIV_ah64d_co_des : MPIV_Heli {};
	class MPIV_ah64d_aim9_des : MPIV_Heli {};
	class MPIV_ah64d_gr_s_des : MPIV_Heli {};
	class MPIV_ah64d_stinger_des : MPIV_Heli {};

	class MPIV_ah64d_lb_des : MPIV_Heli {};
	class MPIV_ah64d_at_lb_des : MPIV_Heli {};
	class MPIV_ah64d_gr_lb_des : MPIV_Heli {};
	class MPIV_ah64d_co_lb_des : MPIV_Heli {};
	class MPIV_ah64d_aim9_lb_des : MPIV_Heli {};
	class MPIV_ah64d_gr_s_lb_des : MPIV_Heli {};
	class MPIV_ah64d_stinger_lb_des : MPIV_Heli {};

};

// Ende Modelldeklaration
//=====================================================================
// Anfang Vehiclesdeklaration

class CfgVehicles
{
	class All {};
	class AllVehicles : All {};
	class Air : AllVehicles {};
	class Helicopter : Air {};

	class AH64: Helicopter{};

	// AH-64 Varianten green Camo
	class MPIV_AH64Base : AH64
	{
		scope = 1;
		vehicleClass = "RCWC Air Army";
		model = "";
		crew="pm_lsr_ah64_pilot";
		soundEngine[] = {"\MPIV_AH64\sounds\AH64.ogg",1,1.05};
		insideSoundCoef = 0.005;
		soundLandCrash[] = {"\MPIV_AH64\sounds\aircraftcrash.ogg",db+50,1};
		soundWaterCrash[] = {Explosions\intowater,db-10,1};
		soundDammage[] = {"\MPIV_AH64\sounds\alert.ogg",db+20,1};

		minFireTime = 5; // minimal time spent firing on single target

		gunnerOpticsModel = "\MPIV_AH64\optika_ah64";

		laserScanner = 1;
		rotorBig = "apach_vrtule";
		rotorBigBlend = "apach_vrtule";
		rotorSmall = "apach_vrtulka";
		rotorSmallBlend = "apach_vrtule2";

		formationX=25;
		formationZ=40;

		armor = 80;

		armorStructural = 2.0; // structural dammage
		armorHull = 0.8;
		armorEngine = 1.2;
		armorAvionics = 1.4;
		armorVRotor = 0.8;
		armorHRotor = 0.7;
		armorMissiles = 1.6;
		armorGlass = 0.5;
		weapons[] = {};
		magazines[] = {};
		
		maxSpeed = 330;

		hiddenSelections[] = {"pic_usarmy","pic_nation","pic_nation2","pic_nl","mfd_pil_1","mfd_pil_2","mfd_pil_kl","mfd_gun_1","mfd_gun_2","mfd_gun_kl","mfd_gun_mid"};

		class ViewOpticsBase {};
		class ViewOptics: ViewOpticsBase
		{
			initAngleX=0; minAngleX=-90; maxAngleX=+90;
			initAngleY=0; minAngleY=-80; maxAngleY=+60;
			initFov=0.7; minFov=0.03; maxFov=0.75;
		};
		
		class Turret
		{
			gunAxis="osahlavne";
			turretAxis="osaveze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={};
			minElev= -45;
			maxElev= +5;
			minTurn= -120;
			maxTurn= 120;
			body="OtocVez";
			gun="OtocHlaven";
		};

		animated = 1;
		class Animations
		{
			class tail1
			{
				type = "rotation";
				animPeriod = 1.5;
				selection = "mpiv_tail";
				axis = "axistail";
				angle0 = 0.785;
				angle1 =  0;
			};
		};
	};
	// AH-64A US OD Camo
	class MPIV_AH64 : MPIV_AH64Base
	{
		scope = 2;
		model = "\MPIV_AH64\mpiv_ah64.p3d";

		vehicleClass = "RCWC Air Army";
		
		displayName = $STR_MPIV_AH64;

		weapons[] = {"MPIV_M230_1200","MPIV_Hellfire_Launcher8","MPIV_FFAR_38","MPIV_Laser"};
		magazines[] = {"MPIV_M230_1200","MPIV_Hellfire_Launcher8","MPIV_FFAR_38","MPIV_Laser"};
		class EventHandlers
		{
			Init = "[_this select 0, 1]; [_this select 0, {US}] exec {\MPIV_AH64\scripte\mpiv_nations.sqs}; [_this select 0, 1] exec {\MPIV_AH64\scripte\initmfd.sqs};_this call localize {fn_reg_chopper}";
			Engine = " if (_this select 1) then {[_this select 0] exec ""\MPIV_AH64\scripte\MPIV_global.sqs""};";
			killed = "_this exec {\MPIV_AH64\scripte\fire.sqs};[_this select 0, 1] exec {\MPIV_AH64\scripte\ersetzen.sqs}";
			incomingMissile = "[_this] exec ""\MPIV_AH64\scripte\incoming.sqs"" ";
			getin = "[_this select 0, 1] exec {\MPIV_AH64\scripte\gunner_mfd.sqs}";
		};
	};

	class MPIV_AH64_AT : MPIV_AH64
	{
		model = "\MPIV_AH64\mpiv_ah64at.p3d";

		displayName = $STR_MPIV_AH64AT;

		weapons[] = {"MPIV_M230_1200","MPIV_Hellfire_Launcher16","MPIV_Laser"};
		magazines[] = {"MPIV_M230_1200","MPIV_Hellfire_Launcher16","MPIV_Laser"};
	};

	class MPIV_AH64_Ground : MPIV_AH64
	{
		model = "\MPIV_AH64\mpiv_ah64gr.p3d";

		displayName = $STR_MPIV_AH64GR;

		weapons[] = {"MPIV_M230_1200","MPIV_FFAR_76","MPIV_AIM9Launcher","MPIV_Laser"};
		magazines[] = {"MPIV_M230_1200","MPIV_FFAR_76","MPIV_AIM9Launcher","MPIV_Laser"};
	};
	
	class MPIV_AH64_Ground_S : MPIV_AH64
	{
		model = "\MPIV_AH64\mpiv_ah64gr_s.p3d";

		displayName = $STR_MPIV_AH64GR_S;

		weapons[] = {"MPIV_M230_1200","MPIV_FFAR_76","MPIV_FIM92Launcher","MPIV_Laser"};
		magazines[] = {"MPIV_M230_1200","MPIV_FFAR_76","MPIV_FIM92Launcher","MPIV_Laser"};
	};	

	class MPIV_AH64_Combat : MPIV_AH64
	{
		model = "\MPIV_AH64\mpiv_ah64co.p3d";

		displayName = $STR_MPIV_AH64CO;

		weapons[] = {"MPIV_M230_320","MPIV_Hellfire_Launcher8","MPIV_Laser"};
		magazines[] = {"MPIV_M230_320","MPIV_Hellfire_Launcher8","MPIV_Laser"};
	};
	
	class MPIV_AH64_AIM9 : MPIV_AH64
	{
		model = "\MPIV_AH64\mpiv_ah64_aim9.p3d";

		displayName = $STR_MPIV_AH64_AIM9;
		weapons[] = {"MPIV_M230_1200","MPIV_AIM9_6","MPIV_Laser"};
		magazines[] = {"MPIV_M230_1200","MPIV_AIM9_6","MPIV_Laser"};
	};

	class MPIV_AH64_Stinger: MPIV_AH64
	{
		model = "\MPIV_AH64\mpiv_ah64stinger.p3d";

		displayName = $STR_MPIV_AH64_Sting;
		weapons[] = {"MPIV_M230_1200","MPIV_FIM92_12","MPIV_Laser"};
		magazines[] = {"MPIV_M230_1200","MPIV_FIM92_12","MPIV_Laser"};
	};

	class MPIV_AH64_BLK : MPIV_AH64
	{
		model = "\MPIV_AH64\mpiv_ah64_blk.p3d";
		displayName = $STR_MPIV_AH64_BLK;
	};
	
	class MPIV_AH64_AT_BLK : MPIV_AH64_AT
	{
		model = "\MPIV_AH64\mpiv_ah64at_blk.p3d";
		displayName = $STR_MPIV_AH64AT_BLK;
	};
	
	class MPIV_AH64_Ground_BLK : MPIV_AH64_Ground
	{
		model = "\MPIV_AH64\mpiv_ah64gr_blk.p3d";
		displayName = $STR_MPIV_AH64GR_BLK;
	};
	
	class MPIV_AH64_Combat_BLK : MPIV_AH64_Combat
	{
		model = "\MPIV_AH64\mpiv_ah64co_blk.p3d";
		displayName = $STR_MPIV_AH64CO_BLK;
	};
	
	class MPIV_AH64_Ground_S_BLK : MPIV_AH64_Ground
	{
		model = "\MPIV_AH64\mpiv_ah64gr_s_blk.p3d";
		displayName = $STR_MPIV_AH64GR_S_BLK;
	};
	
	class MPIV_AH64_AIM9_BLK : MPIV_AH64_AIM9
	{
		model = "\MPIV_AH64\mpiv_ah64_aim9_blk.p3d";
		displayName = $STR_MPIV_AH64_AIM9_BLK;	
	};
	
	class MPIV_AH64_Stinger_BLK : MPIV_AH64_Stinger
	{
		model = "\MPIV_AH64\mpiv_ah64stinger_BLK.p3d";
		displayName = $STR_MPIV_AH64_Sting_BLK;	
	};

	class MPIV_AH64_DES : MPIV_AH64
	{
		crew="pm_lsr_ah64_pilot_des";
		model = "\MPIV_AH64\mpiv_ah64_des.p3d";
		displayName = $STR_MPIV_AH64_DES;
	};
	
	class MPIV_AH64_AT_DES : MPIV_AH64_AT
	{
		crew="pm_lsr_ah64_pilot_des";
		model = "\MPIV_AH64\mpiv_ah64at_des.p3d";
		displayName = $STR_MPIV_AH64AT_DES;
	};
	
	class MPIV_AH64_Ground_DES : MPIV_AH64_Ground
	{
		crew="pm_lsr_ah64_pilot_des";
		model = "\MPIV_AH64\mpiv_ah64gr_des.p3d";
		displayName = $STR_MPIV_AH64GR_DES;
	};
	
	class MPIV_AH64_Combat_DES : MPIV_AH64_Combat
	{
		crew="pm_lsr_ah64_pilot_des";
		model = "\MPIV_AH64\mpiv_ah64co_des.p3d";
		displayName = $STR_MPIV_AH64CO_DES;
	};
	
	class MPIV_AH64_Ground_S_DES : MPIV_AH64_Ground
	{
		crew="pm_lsr_ah64_pilot_des";
		model = "\MPIV_AH64\mpiv_ah64gr_s_DES.p3d";
		displayName = $STR_MPIV_AH64GR_S_DES;
	};
	
	class MPIV_AH64_AIM9_DES : MPIV_AH64_AIM9
	{
		crew="pm_lsr_ah64_pilot_des";
		model = "\MPIV_AH64\mpiv_ah64_aim9_DES.p3d";
		displayName = $STR_MPIV_AH64_AIM9_DES;	
	};
	
	class MPIV_AH64_Stinger_DES : MPIV_AH64_Stinger
	{
		crew="pm_lsr_ah64_pilot_des";
		model = "\MPIV_AH64\mpiv_ah64stinger_DES.p3d";
		displayName = $STR_MPIV_AH64_Sting_DES;	
	};

	//Static Objects	
	class Static: All{};
	class Camp : Static {};
	// AirTransport Varianten
	class MPIV_AH64_LT : Camp
	{
		scope = 2;
		vehicleClass = "RCWC Objects";
		model = "\MPIV_AH64\mpiv_ah64_lt.p3d";
		displayName = "MPIV AH-64 LT";
		accuracy = 0.3;
		transportFuel = 0;
		destrType = DestructEngine;
	};
	
	class MPIV_AH64DN_LT : MPIV_AH64_LT
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_lt.p3d";
		displayName = "MPIV AH-64D LT";
	};
	
	class MPIV_AH64D_LT : MPIV_AH64_LT
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_lb_lt.p3d";
		displayName = "MPIV AH-64D Longbow LT";
	};

	class MPIV_AH64_LT_BLK : MPIV_AH64_LT
	{
		model = "\MPIV_AH64\mpiv_ah64_lt_blk.p3d";
		displayName = "MPIV AH-64 LT (Black)";
		
	};
	
	class MPIV_AH64DN_LT_BLK : MPIV_AH64_LT
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_lt_blk.p3d";
		displayName = "MPIV AH-64D LT (Black)";
	};
	
	class MPIV_AH64D_LT_BLK : MPIV_AH64_LT
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_lb_lt_blk.p3d";
		displayName = "MPIV AH-64D Longbow LT (Black)";
	};
	
	class MPIV_AH64_LT_DES : MPIV_AH64_LT
	{
		model = "\MPIV_AH64\mpiv_ah64_lt_des.p3d";
		displayName = "MPIV AH-64 LT (Desert)";
		
	};
	
	class MPIV_AH64DN_LT_DES : MPIV_AH64_LT
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_lt_des.p3d";
		displayName = "MPIV AH-64D LT (Desert)";
	};
	
	class MPIV_AH64D_LT_DES : MPIV_AH64_LT
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_lb_lt_des.p3d";
		displayName = "MPIV AH-64D Longbow LT (Desert)";
	};

	// Wracks
	class MPIV_AH64WrackG : MPIV_AH64_LT
	{
		scope = 2;
		vehicleClass = "RCWC Wrecked";
		armor = 1000000;
		model = "\MPIV_AH64\mpiv_ah64_wrack.p3d";
		displayName = "MPIV AH-64 Wrack (Green)";
	};
	
	class MPIV_AH64WrackB : MPIV_AH64WrackG
	{
		scope = 2;
		model = "\MPIV_AH64\mpiv_ah64_wrack_blk.p3d";
		displayName = "MPIV AH-64 Wrack (Black)";
	};
	
	class MPIV_AH64WrackD : MPIV_AH64WrackG
	{
		scope = 2;
		model = "\MPIV_AH64\mpiv_ah64_wrack_des.p3d";
		displayName = "MPIV AH-64 Wrack (Desert)";
	};
	
	class MPIV_AH64DNWrackG : MPIV_AH64WrackG
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_wrack.p3d";
		displayName = "MPIV AH-64D Wrack (Green)";
	};
	
	class MPIV_AH64DNWrackB : MPIV_AH64WrackG
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_wrack_blk.p3d";
		displayName = "MPIV AH-64D Wrack (Black)";
	};
	
	class MPIV_AH64DNWrackD : MPIV_AH64WrackG
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_wrack_des.p3d";
		displayName = "MPIV AH-64D Wrack (Desert)";
	};

	class MPIV_AH64DWrackG : MPIV_AH64WrackG
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_lb_wrack.p3d";
		displayName = "MPIV AH-64D Longbow Wrack (Green)";
	};
	
	class MPIV_AH64DWrackB : MPIV_AH64WrackG
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_lb_wrack_blk.p3d";
		displayName = "MPIV AH-64D Longbow Wrack (Black)";
	};
	
	class MPIV_AH64DWrackD : MPIV_AH64WrackG
	{
		scope = 0;
		model = "\MPIV_AH64\mpiv_ah64d_lb_wrack_des.p3d";
		displayName = "MPIV AH-64D Longbow Wrack (Desert)";
	};

	class MPIV_Empty: Static
	{
		scope=1;
		displayName="";
		nameSound="";
		icon="";
		model=""
	};
};

// Ende Vehiclesdeklaration
//=====================================================================
// Anfang NonAIdeklaration
class CfgNonAIVehicles
{
	class ProxyWeapon{};

	class ProxyCrew {};
	class ProxyGunner: ProxyCrew {};
	

};
// Ende NonAIdeklaration
//=====================================================================
class CfgSounds
{
	class MPIV_EngineOn
	{
		sound[] = {"\MPIV_AH64\sounds\powerup.ogg",db-20,1};
		name = "StartEngine";
		titles[]={};
	};
	class MPIV_Engine
	{
		sound[] = {"\MPIV_AH64\sounds\engine.ogg",db-20,1};
		name = "Engine";
		titles[]={};
	};
	
	class MPIV_EngineOff
	{
		sound[] = {"\MPIV_AH64\sounds\powerdown.ogg",db-20,1};
		name = "StopEngine";
		titles[]={};
	};
};

class CfgRadio
{
	class MPIV_Incoming
	{
		sound[] = {"\MPIV_AH64\sounds\warning.ogg",db+20,1};
		name = "Incoming Missle";
		title = " WARNING !!! ***** INCOMING MISSLE *****  WARNING !!!";
	};
};