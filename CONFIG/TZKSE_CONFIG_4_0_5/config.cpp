#define TEast 			0
#define TWest 			1
#define TGuerrila 		2
#define TCivilian 		3
#define TSideUnknown 		4
#define TEnemy 			5
#define TFriendly 		6
#define TLogic 			7

#define true 			1
#define false 			0

#define private 		0
#define protected		1
#define public 			2

#define WeaponNoSlot 		    0	// dummy weapons
#define WeaponSlotPrimary 	    1	// primary weapons
#define WeaponSlotSecondary 	   16	// secondary weapons
#define WeaponSlotItem 		  256	// items
#define WeaponSlotBinocular 	 4096	// binocular
#define WeaponHardMounted	65536

#define CanSeeRadar 		 1
#define CanSeeEye 		 2
#define CanSeeOptics 		 4
#define CanSeeEar 		 8
#define CanSeeCompass 		16
#define CanSeeRadarC 		CanSeeRadar+CanSeeCompass
#define CanSeeAll 		31

class CfgPatches {
	class TZKSE_CONFIG_405 {
		name = "TZKSE_CONFIG_405";
		author = "IF";
		units[] = {};
		requiredAddons[] = { // IMPORTANT! Definition here tells OFP the order when creating master CONFIG.
			"TZK_Objects_400_3","TZK_CONFIG_404", 
			"2s9_nona", // Sound parameter adjust.
			"CoCHWK_2S19", // 2S19 addon require. Its config has CfgPatches only thus this line is not critical but recommended. 
			"FLK_Guerrico", // FLK_Guer_100mm68A_shell redefine.
			"ICP_Tanks", // ICP_T72B redefine.
			"Evgeni_mod", // ka52 redefinel
			"M109A6", // M109 inherit and MG50 edit.
		};
		requiredVersion = 1.99;
	};
};

class CfgModels {
	class Default {};
	class Vehicle: Default {};
	class Tank: Vehicle {};
	class T72: Tank {};
	class 2s19: T72 {
		sectionsInherit="T72";
		sections[]= {
			"cislo",
			"grupa",
			"side",
			"sektor",
			"clan",
			"podsvit pristroju",
			"poskozeni",
			"L svetlo",
			"P svetlo",
			"zasleh",
			"numberfl",
			"numberll",
			"numberlr",
			"numberfr",
			"cammo"
		};
	};
};

class CfgMarkers {
	class CoC_mark_2S19 {
		name="CoC 2S19";
		icon="\CoCHWK_2S19\Markers\arty152mm.paa";
		color[]={0.000000,0.000000,0.000000,0.800000};
		size=64;
	};
};

class ECP_EventHandlers {};

class CfgAmmo {
	class Default {};
	class Shell:Default {};
	class FLK_Guer_100mm68A_shell: Shell { hit = 500; indirectHit = 200; };
	
	class Heat125: Default {}; 
	class DKMM_HEAT155: Heat125 { 
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};
};
class CfgWeapons {
    class Default {};
    class MGun: Default {};
    class MachineGun7_6: MGun {}; 
    class MachineGun12_7: MachineGun7_6 {}; 
    class MG50: MachineGun12_7 { // Defined in coc_arty and managed by CfgPatches class member "M109A6".
        displayName = "MG";
    };
};


class CfgVehicles {
	class All {};
	class AllVehicles:All{};
		
	class Air: AllVehicles {};
	class Helicopter: Air {};
	class Plane: Air {};
	class UH60: Helicopter {};
	class UH60MG: UH60 {};
	class Cobra: Helicopter {};
	class AH64: Helicopter {};
	class Mi17: Helicopter {};
	class Mi24: Helicopter {};
	class Kamov: Mi24 {};
	class A10: Plane {};
	class Su25: Plane {};
	
	class Land:AllVehicles{};
	class LandVehicle: Land {};
	class Tank: LandVehicle {};
	
	class APC: Tank {};
	class BMP: APC {};
	class 2s9: BMP {
		soundEngine[]={\2S9Nona\Engine_21.wss,db-30,1};
		soundGear[]={"\2S9Nona\tank_gear.wss",db-30,1};
	};
	
	class Logic: All {};
	class CoCHWK_2S19: Logic {
		scope = private;
	};

	class RussianTank: Tank {};
	class T72: RussianTank {};
	class CoC_2S19: T72 {
		scope=public;
		side=TEast;
		
		vehicleClass = "CoC Unified Artillery";
		displayName="2S19 MSTA-S";
		
		picture = "\CoCHWK_2S19\2S19\2s19.paa";
		icon    = "\CoCHWK_2S19\2S19\2s19ico.paa";
		model   = "\TZKSE_CONFIG_4_0_5\Model\2s19.p3d";
		
		irTarget=true;
		soundGear[]    = {"\CoCHWK_2S19\sounds\shift.wss",1,1};
		soundEnviron[] = {"\CoCHWK_2S19\sounds\T80treads.wss",0.5,1};
		soundEngine[]  = {Vehicles\OldIdle1,db-10,1};
		extCameraPosition[] = {0,2.5,-12};
		
		threat[]={0.9,0.95,0.3};
		camuflage=7;
		maxSpeed=60;
		fuelCapacity=475;
		type=1;
		audible=6;
		laserScanner = true;
		irScanGround=true;
		preferRoads=false;
		nightVision=true;
		minFireTime=160;
		typicalCargo[]={};
		transportSoldier=2;
		class TransportMagazines {};
		
		commanderCanSee = CanSeeAll;
		commanderOpticsModel = "optika_tankw_auxiliary";
		commanderAction = "ManActT72CommanderOut";
		commanderInAction="ManActT72Commander";
		forceHideCommander = 0;
		
		driverCanSee = CanseeCompass+CanSeeRadar+CanSeeEye+CanSeeEar;
		driverAction="ManActT72DriverOut";
		driverInAction="ManActT72Driver";
		forceHideDriver = 0;
		
		gunnerCanSee = CanSeeAll;
		gunnerOpticsModel="\CoCHWK_2S19\2S19\optika_2s19";
		gunnerAction = "ManActT72GunnerOut";
		gunnerInAction="ManActT72Gunner";
		forceHideGunner = 0;
		
		outGunnerMayFire = true;
		hasCommander=1;
		hasdriver=1;
		hasgunner=1;
		unloadInCombat=1;
		
		hiddenSelections[]={"numberfl","numberfr","cammo"};		
		
		armor=150;
		
		armorStructural=2.0;
		
		class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
		
		class HitHull   {armor=1.0;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=0.5;material=51;name=turet;passThrough=1;};
		class HitGun    {armor=0.8;material=52;name=gun;passThrough=1;};
		class HitLTrack {armor=0.7;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.7;material=54;name=pasP;passThrough=1;};

		weapons[]   = {};
		magazines[] =
		{

		};
		
		class Animations
		{
			// Support
			class podpora
			{
				type="rotation";
				animPeriod=2;
				selection="podpora";
				axis="ospodpora";
				angle0=0;
				angle1=-1.8;
			};
			class lufaodrzurt
			{
				type="rotation";
				animPeriod=0.3;
				selection="lufa";
				axis="os lufa";
				angle0=0;
				angle1=-0.01046;
			};
			class set_a
			{
				type="rotation";
				animPeriod=0.01;
				selection="set_a";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class set_b
			{
				type="rotation";
				animPeriod=0.01;
				selection="set_b";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class set_c
			{
				type="rotation";
				animPeriod=0.01;
				selection="set_c";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class set_d
			{
				type="rotation";
				animPeriod=0.01;
				selection="set_d";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class target_a
			{
				type="rotation";
				animPeriod=0.01;
				selection="target_a";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class target_b
			{
				type="rotation";
				animPeriod=0.01;
				selection="target_b";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class target_c
			{
				type="rotation";
				animPeriod=0.01;
				selection="target_c";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class target_d
			{
				type="rotation";
				animPeriod=0.01;
				selection="target_d";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class target_lock
			{
				type="rotation";
				animPeriod=0.01;
				selection="target_lock";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class corector
			{
				type="rotation";
				animPeriod=0.01;
				selection="corector";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class corectorh
			{
				type="rotation";
				animPeriod=0.01;
				selection="corectorh";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class fireon
			{
				type="rotation";
				animPeriod=0.01;
				selection="fire";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class magazine
			{
				type="rotation";
				animPeriod=0.01;
				selection="magazine";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class cammo_switch
			{
				type="rotation";
				animPeriod=0.01;
				selection="cammo_switch";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			
			class suspension
			{
				type="rotation";
				animperiod=.5;
				selection="suspension";
				axis="osa_suspension";
				angle0= 0.052;
				angle1= -0.052;
			};
		};
		//lights
		class Reflectors
		{
			class Left
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.7;
			};
			class Right
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.7;
			};
			class szperacz
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "szperacz";
				direction = "konec szperacz";
				hitpoint = "szperacz";
				selection = "szperacz";
				size = 0.5;
				brightness = 0.7;
			};
		};
		class HatchDriver
		{
			selection="poklop_driver";
			axis="osa_poklop_driver";
			angle=-160;
		};
		class HatchCommander
		{
			selection="poklop_commander";
			axis="osa_poklop_commander";
			angle=90;
		};
		class HatchGunner
		{
			selection="poklop_gunner";
			axis="osa_poklop_gunner";
			angle=90;
		};
		class IndicatorSpeed
		{
			selection="ukaz_rychlo";
			axis="osa_rychlo"; 
			angle=-320;
			min=0;
			max="60 / 3.6";
		};
		class IndicatorRPM
		{
			selection="ukaz_rpm";
			axis="osa_rpm";
			angle=-230;
			min=0;
			max="100/3.6";
		};
		
		class IndicatorTurret
		{
			selection = "ukazsmer";
			axis = "osa_ukazsmer";
			angle = 360;
			min = 0;
			max = 1;
		};
		
		class TurretBase
		{
			soundServo[]={"\CoCHWK_2S19\sounds\elevate.wss",0.05,1};
			gunAxis="osa hlavne";
			turretAxis="osa veze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-3;
			maxElev=68;
			minTurn=-360;
			maxTurn=360;
			body="otocvez";
			gun="otochlaven";
		};
		class Turret: TurretBase {};
		class ComTurret
		{
			turretAxis="osa velitele";
			gunAxis="osa hlavnevelitele";
			gunBeg="usti hlavne";
		  	gunEnd="konec hlavne";
			minElev=-20;
			maxElev=45;
			minTurn=-360;
			maxTurn=360;
			body="otocvelitele";
			gun="otochlavenvelitele";
			soundServo[]={"\CoCHWK_2S19\sounds\servo.wss",0.1,1.2};
		};
		
		
		class EventHandlers: ECP_EventHandlers
		{
			//init   = "_this exec""\CoCHWK_2S19\ua\2S19start.sqs"";_this exec""\CoCHWK_2S19\2S19\2S19init.sqs""";
			//engine = "_v=_this select 0,[_v,isEngineOn _v]exec""\COCHWK_2S19\2S19\engine.sqs"";_this call COC2S19_engine";
			//fired  = "if(""CoC_Howi152""==_this select 1)then{[_this select 0,nearestObject[_this select 0,_this select 4],_this]exec""\CoCHWK_2S19\ua\eh_Fired_2S19.sqs"";_this exec""\CoCHWK_2S19\UA\fx_2S19recoil.sqs""};_this call CoC2S19_fired";
			//killed = "_this call CoC2S19_killed";
		};

	};

	/*
	 * 2S19 M1 - variant with a NATO 155 mm gun
	 */
	class CoC_2S19M1: CoC_2S19 {
		scope=public;
		displayName="2S19M1 MSTA-S";

        	armor=250; 

		weapons[]={"Gun155", "MG50"}; 						
		magazines[]={"DKMM_Gun155AP";"DKMM_Gun155HE";"MG50";"MG50";"MG50";"MG50";"MG50";"MG50";"MG50";"MG50";"MG50";"MG50"};

		armorHull=1;
		armorTurret=0.9;
		armorGun=0.8; // hitpoints (relative to overall armor)
		armorEngine=0.8;
		armorLights=0.2;
		armorTracks=0.6;
		
		commanderCanSee = CanSeeAll;
		gunnerCanSee = CanSeeAll;
		drivercansee = CanSeeAll;

	class eventhandlers
		{
			init = "_this exec ""\coc_arty\init_tracer.sqs"" ";
			fired = "if ((_this select 4) in [""DKMM_AP155"",""DKMM_HE155""]) then {_this call loadFile ""\mfm_cit_sprut\scripts\stvol.sqf""}; _this exec ""\coc_arty\TracerMG.sqs"" "; 
		};	


	};
	// TZK-defined alternative 2S19 classes (first made in TZK_2. Edited in TZK_4 style.)
	class Tank_xj400: Tank {};
	class RussianTank_xj400: Tank_xj400 {};
	class T72_Base_xj400: RussianTank_xj400 {};
	class 2S19_CoC_Base_xj400: T72_Base_xj400 {
		scope = private; vehicleClass = "TZK_Units_400";
		weapons[] = {"Gun120","MachineGun7_6_xj400"}; // For AI recognize in "accuracy" system. Don't remove this.
		magazines[]={"Heat120","Shell120","MachineGun7_6_xj400"}; // For AI recognize in "accuracy" system. Don't remove this.
	
		side = 0;
		displayName = "2S19 MSTA-S"; 
		nameSound = "tank";
		accuracy = 0.5;
		armor = 400;
		cost = 1000000;
		type = 1;
		threat[] = {0.9,0.8,0.2};
		
		// irScanRangeMin = 500
		// irScanRangeMax = 6000
		// irScanToEyeFactor = 0.616
		// irScanGround = true;
		
		irTarget=true;
		soundGear[]	= {"\CoCHWK_2S19\sounds\shift.wss",1,1};
		soundEnviron[] = {"\CoCHWK_2S19\sounds\T80treads.wss",0.5,1};
		soundEngine[]  = {Vehicles\OldIdle1,db-10,1};
		extCameraPosition[] = {0,2.5,-12};
		
		camuflage=7;
		maxSpeed=60;
		fuelCapacity=475;
		audible=6;
		laserScanner = true;
		preferRoads = false;
		nightVision = true;
		minFireTime=160;
		typicalCargo[]={};
		transportSoldier=2;
		class TransportMagazines {};
		
		commanderCanSee = CanSeeAll;
		commanderOpticsModel = "optika_tankw_auxiliary";
		commanderAction = "ManActT72CommanderOut";
		commanderInAction="ManActT72Commander";
		forceHideCommander = 0;
		
		driverCanSee = CanseeCompass+CanSeeRadar+CanSeeEye+CanSeeEar;
		driverAction="ManActT72DriverOut";
		driverInAction="ManActT72Driver";
		forceHideDriver = 0;
		
		gunnerCanSee = CanSeeAll;
		gunnerOpticsModel="\CoCHWK_2S19\2S19\optika_2s19";
		gunnerAction = "ManActT72GunnerOut";
		gunnerInAction="ManActT72Gunner";
		forceHideGunner = 0;
		
	//	outGunnerMayFire = true;
		hasCommander=1;
		hasdriver=1;
		hasgunner=1;
		unloadInCombat=1;
		
		class HitEngine {armor=0.8;material=60;name=engine;passThrough=1;};
		class HitHull   {armor=1.0;material=50;name=hull;passThrough=1;};
		class HitTurret {armor=0.5;material=51;name=turet;passThrough=1;};
		class HitGun	{armor=0.8;material=52;name=gun;passThrough=1;};
		class HitLTrack {armor=0.7;material=53;name=pasL;passThrough=1;};
		class HitRTrack {armor=0.7;material=54;name=pasP;passThrough=1;};

		class Reflectors {
			class Left
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.7;
			};
			class Right
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 0.7;
			};
			class szperacz
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "szperacz";
				direction = "konec szperacz";
				hitpoint = "szperacz";
				selection = "szperacz";
				size = 0.5;
				brightness = 0.7;
			};
		};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle=-160;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle=90;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle=90;
		};
		// class IndicatorSpeed {
			// selection = "ukaz_rychlo";
			// axis = "osa_rychlo";
			// angle=-320;
			// min=0;
			// max="60 / 3.6";
		// };
		// class IndicatorRPM {
			// selection = "ukaz_rpm";
			// axis = "osa_rpm";
			// angle=-230;
			// min=0;
			// max="100/3.6";
		// };
		class IndicatorTurret {
			selection = "ukazsmer";
			axis = "osa_ukazsmer";
			angle = 360;
			min = 0;
			max = 1;
		};
		class TurretBase {
			soundServo[]={"\CoCHWK_2S19\sounds\elevate.wss",0.05,1};
			gunaxis = "osahlavne";
			turretaxis = "osaveze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=-3;
			maxElev=68;
			minTurn=-360;
			maxTurn=360;
			body="otocvez";
			gun="otochlaven";
		};
		class Turret: TurretBase {};
		class ComTurret {
			turretaxis = "osavelitele";
			gunaxis = "osahlavnevelitele";
			gunBeg="usti hlavne";
		  	gunEnd="konec hlavne";
			minElev=-4;
			maxElev=45;
			minTurn=-360;
			maxTurn=360;
			body="otocvelitele";
			gun="otochlavenvelitele";
			soundServo[]={"\CoCHWK_2S19\sounds\servo.wss",0.1,1.2};
		};
	};
	class 2S19M1_CoC_xj400: 2S19_CoC_Base_xj400 {
		scope = public; accuracy = 0.7;
		displayName = "2S19 MSTA-S"; 
		picture = "\CoCHWK_2S19\2S19\2s19.paa";
		icon    = "\CoCHWK_2S19\2S19\2s19ico.paa";
		model   = "\TZKSE_CONFIG_4_0_5\Model\2s19_CoCHWK.p3d";
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d"; // TZK_4 Artillery Module OpticsModel.
		hiddenSelections[]={"numberfl","numberfr","cammo", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"};
		
        	armor=250; 
			
		weapons[]={"Gun155", "MG50"}; 						
		magazines[]={"DKMM_Gun155AP";"DKMM_Gun155HE";"MG50";"MG50";"MG50";"MG50";"MG50";"MG50";"MG50";"MG50";"MG50";"MG50"};
		class Animations {
			// Support
			class podpora
			{
				type="rotation";
				animperiod=2;
				selection="podpora";
				axis="ospodpora";
				angle0=0;
				angle1=-1.8;
			};
			class lufaodrzurt
			{
				type="rotation";
				animperiod=0.3;
				selection="lufa";
				axis="os lufa";
				angle0=0;
				angle1=-0.01046;
			};
			class set_a
			{
				type="rotation";
				animperiod=0.01;
				selection="set_a";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class set_b
			{
				type="rotation";
				animperiod=0.01;
				selection="set_b";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class set_c
			{
				type="rotation";
				animperiod=0.01;
				selection="set_c";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class set_d
			{
				type="rotation";
				animperiod=0.01;
				selection="set_d";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class target_a
			{
				type="rotation";
				animperiod=0.01;
				selection="target_a";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class target_b
			{
				type="rotation";
				animperiod=0.01;
				selection="target_b";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class target_c
			{
				type="rotation";
				animperiod=0.01;
				selection="target_c";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class target_d
			{
				type="rotation";
				animperiod=0.01;
				selection="target_d";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class target_lock
			{
				type="rotation";
				animperiod=0.01;
				selection="target_lock";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class corector
			{
				type="rotation";
				animperiod=0.01;
				selection="corector";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class corectorh
			{
				type="rotation";
				animperiod=0.01;
				selection="corectorh";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class fireon
			{
				type="rotation";
				animperiod=0.01;
				selection="fire";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class magazine
			{
				type="rotation";
				animperiod=0.01;
				selection="magazine";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			class cammo_switch
			{
				type="rotation";
				animperiod=0.01;
				selection="cammo_switch";
				axis="osset";
				angle0=0;
				angle1=0.01;
			};
			
			class suspension
			{
				type="rotation";
				animperiod=.5;
				selection="suspension";
				axis="osa_suspension";
				angle0= 0.052;
				angle1= -0.052;
			};
		};
		
	class eventhandlers
		{
			init = "_this exec ""\coc_arty\init_tracer.sqs""; (_this select 0) animate [{suspension},0.5] ";
			fired = "if ((_this select 4) in [""DKMM_AP155"",""DKMM_HE155""]) then {_this call loadFile ""\mfm_cit_sprut\scripts\stvol.sqf""}; _this exec ""\coc_arty\TracerMG.sqs"" "; 
		};	
	};
	class 2S19M1_CoC_Art_xj200: 2S19M1_CoC_xj400 {
		displayName = "2S19 MSTA-S Art"; accuracy = 1000; // Unrecognizeable on appearance.
		irScanToEyeFactor = 1; // Allow Art Vehicles scan far.
		hiddenSelections[]={"numberfl","numberfr","cammo"};	// Remain graduations.
	};
	// M109 alternative classes.
	class M1Abrams: tank {}
	class M109_paladin: M1Abrams {}; // Inherit from SE M109 defined in "coc_arty".
	class M109_CoC_paladin_xj400: M109_paladin {
		scope = public; vehicleClass = "TZK_Units_400";
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d"; // TZK_4 Artillery Module OpticsModel.
		hiddenSelections[]={"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"};
		model = "\TZKSE_CONFIG_4_0_5\Model\M109A6_CoC.p3d";
		class UserActions {}; // Use none UA.
		class Animations {
			class gunrec {
				type = "rotation";
				animperiod = 0.3;
				selection = "gunrec";
				axis = "osa_rec";
				angle0 = 0;
				angle1 = -0.010;
			};
		};
	};
	class M109_CoC_Art_xj400: M109_CoC_paladin_xj400 {
		displayName = "M109 Art"; accuracy = 1000; // Unrecognizeable on appearance.
		irScanToEyeFactor = 1; // Allow Art Vehicles scan far.
		hiddenSelections[]={};	// Remain graduations.
	};
	
	class ICP_T72B: T72 {
		weapons[]={"T90Gun","T90_50calx"};
		magazines[]={"T90Sabot","T90Heat","T90_50calx","T90_50calx","T90_50calx","T90_50calx","T90_50calx","T90_50calx","T90_50calx","T90_50calx","T90_50calx","T90_50calx","T90_50calx","T90_50calx",		"T90_50calx","T90_50calx","T90_50calx"};
	};

	class ka52: Helicopter {
		armor=250;
	};
};

/*
** Radio messages. Currently, they use the core UA sound files, meaning
** that messages will be in english. It would be great to get samples
** of the corresponding artillery phrases in russian.
*/
class CfgRadio
{
	class CoC2S19CallFire
	{
		name = "";
		sound[] = {\CoC_Arty\radio\CallFire.ogg, db-10, 1.0};
		//title = "REQUEST FIRE MISSION";
		title = $STR_2S19_RM_REQ_FIRE;
	};
	
	class CoC2S19MTO
	{
		name = "";
		sound[] = {\CoC_Arty\radio\MTO.ogg, db-10, 1.0};
		//title = "MIKE TANGO OSCAR";
		title = $STR_2S19_RM_MTO;
	};
	
	class CoC2S19Ready
	{
		name = "";
		sound[] = {\CoC_Arty\radio\Ready.ogg, db-10, 1.0};
		//title = "FIRE MISSION READY";
		title = $STR_2S19_RM_FM_READY;
	};
	
	class CoC2S19FireSpot
	{
		name = "";
		sound[] = {\CoC_Arty\radio\FireSpot.ogg, db-10, 1.0};
		//title = "FIRE MARKER";
		title = $STR_2S19_RM_REQ_MARKER;
	};
	
	class CoC2S19FiredSpot
	{
		name = "";
		sound[] = {\CoC_Arty\radio\FiredSpot.ogg, db-10, 1.0};
		//title = "MARKER ON WAY";
		title = $STR_2S19_RM_CONFIRM_MARKER;
	};
	
	class CoC2S19FireEffect
	{
		name = "";
		sound[] = {\CoC_Arty\radio\FireEffect.ogg, db-10, 1.0};
		//title = "FIRE FOR EFFECT";
		title = $STR_2S19_RM_REQ_FFE;
	};
	
	class CoC2S19FiredEffect
	{
		name = "";
		sound[] = {\CoC_Arty\radio\FiredEffect.ogg, db-10, 1.0};
		//title = "SHOT";
		title = $STR_2S19_RM_CONFIRM_FFE;
	};
	
	class CoC2S19Splash
	{
		name = "";
		sound[] = {\CoC_Arty\radio\Splash.ogg, db-10, 1.0};
		//title = "SPLASH";
		title = $STR_2S19_RM_SPLASH;
	};
	
	class CoC2S19Adjust
	{
		name = "";
		sound[] = {\CoC_Arty\radio\Adjust.ogg, db-10, 1.0};
		//title = "ADJUST FIRE";
		title = $STR_2S19_RM_ADJUST;
	};
	
	class CoC2S19Unable
	{
		name = "";
		sound[] = {\CoC_Arty\radio\Unable.ogg, db-10, 1.0};
		//title = "UNABLE TO COMPLY";
		title = $STR_2S19_RM_UNABLE;
	};
	
	class CoC2S19Move
	{
		name = "";
		sound[] = {\CoC_Arty\radio\Move.ogg, db-10, 1.0};
		//title = "GO MOBILE";
		title = $STR_2S19_RM_REQ_MOBILE;
	};
	
	class CoC2S19Mobile
	{
		name = "";
		sound[] = {\CoC_Arty\radio\Mobile.ogg, db-10, 1.0};
		//title = "UNDERWAY";
		title = $STR_2S19_RM_CONFIRM_MOBILE;
	};
	
	class CoC2S19CeaseLoading
	{
		name = "";
		sound[] = {\CoC_Arty\radio\CeaseLoading.ogg, db-10, 1.0};
		//title = "CEASE LOADING";
		title = $STR_2S19_RM_CEASE_LOADING;
	};
	
	class CoC2S19RoundsComplete
	{
		name = "";
		sound[] = {\CoC_Arty\radio\RoundsComplete.ogg, db-10, 1.0};
		//title = "ROUNDS COMPLETE";
		title = $STR_2S19_RM_ROUNDS_COMPLETE;
	};
	
	class CoC2S19MissionComplete
	{
		name = "";
		sound[] = {\CoC_Arty\radio\MissionComplete.ogg, db-10, 1.0};
		//title = "MISSION COMPLETE";
		title = $STR_2S19_RM_MISSION_COMPLETE;
	};
	
	class CoC2S19LaserOn
	{
		name = "";
		sound[] = {\CoC_Arty\radio\laseron.ogg, db-10, 1.0};
		//title = "LASER ON";
		title = $STR_2S19_RM_LASER_ON;
	};
};


class CfgGroups
{
	class East
	{
		name="$STR_EAST";
		class CoC_UnifiedArtillery
		{
			name="CoC Unified Artillery";
			class CoC_2S19_Platoon
			{
				//name="CoC-HWK 2S19 Howitzer Platoon";
				name="$STR_2S19_GRP_2S19PLATOON";
				class Unit0
				{
					side=TEast;
					vehicle="CoC_2S19";
					rank="Lieutnant";
					position[]={0,0,0};
				};
				class Unit1
				{
					side=TEast;
					vehicle="CoC_2S19";
					rank="Sergeant";
					position[]={-30,0,0};
				};
				class Unit2
				{
					side=TEast;
					vehicle="CoC_2S19";
					rank="Sergeant";
					position[]={30,0,0};
				};
				class Unit3
				{
					side=TEast;
					vehicle="CoC_2S19";
					rank="Corporal";
					position[]={60,0,0};
				};
			};
			class CoC_2S19M1_Platoon
			{
				//name="CoC-HWK 2S19M1 (155mm NATO) Howitzer Platoon";
				name="$STR_2S19_GRP_2S19M1PLATOON";
				class Unit0
				{
					side=TEast;
					vehicle="CoC_2S19M1";
					rank="Lieutnant";
					position[]={0,0,0};
				};
				class Unit1
				{
					side=TEast;
					vehicle="CoC_2S19M1";
					rank="Sergeant";
					position[]={-30,0,0};
				};
				class Unit2
				{
					side=TEast;
					vehicle="CoC_2S19M1";
					rank="Sergeant";
					position[]={30,0,0};
				};
				class Unit3
				{
					side=TEast;
					vehicle="CoC_2S19M1";
					rank="Corporal";
					position[]={60,0,0};
				};
			};
		};
	};
};

// EOF