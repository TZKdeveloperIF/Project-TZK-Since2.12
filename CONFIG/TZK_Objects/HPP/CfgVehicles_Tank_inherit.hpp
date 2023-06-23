// Tanks
	// Abstract Tank Class in TZK. Overrided parameters are no modified comparing to original OFP (unless being annotated).
	class Tank_xj400: Tank {
		brakeDistance= 15; camouflage = 8; fuelCapacity = 700;
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 1; irScanGround = 1;
		armorStructural = 2;
		class HitEngine { armor = 0.8; material = 60; name = "engine"; passThrough = 1; };
		class HitHull { armor = 1.0; material = 50; name = "hull"; passThrough = 1; };
		class HitTurret { armor = 0.8; material = 51; name = "turet"; passThrough = 1; };
	//	class HitGun { armor = 0.6; material = 52; name = "gun"; passThrough = 1; };
		class HitGun { armor = 0.9; material = 52; name = "gun"; passThrough = 1; };  // Extended Gun Strengthen. Original 0.6 value too easy to be ruined.
		class HitLTrack { armor = 0.6; material = 53; name = "pasL"; passThrough = 1; };
		class HitRTrack { armor = 0.6; material = 54; name = "pasP"; passThrough = 1; };
		
		gunnerCanSee = "4+8+16 +1";
		driverCanSee = "2+8+16 +1"; // Extend Radar-can-see in TZK for gunner/driver seat.
	};
	class RussianTank_xj400: Tank_xj400 {
		accuracy = 0.35;
		side = 0;
		crew = "SoldierECrew";
		commanderOpticsModel = "optika_tanke_auxiliary";
		forceHideGunner = 0;
	};
	class ResistanceTank_xj400: Tank_xj400 {
		accuracy = 0.35;
		side = 2;
		crew = "SoldierGCrew";
		commanderOpticsModel = "optika_tanke_auxiliary";
		forceHideGunner = 0;
	};
	// Concrete Tank Class of OFP for inheriting. Due to the relationship among inheriting classes and the "accuracy", it's necessary to make the base class without modifying "accuracy" and those parameters related to recognizing, which mostly depends on the "accuracy".
	class M1Abrams_Base_xj400: Tank_xj400 {
		scope = 0;
		crew = "SoldierWCrew";
		picture = "iabrams";
	//	side = 1;
	//	displayName = "$STR_DN_M1A1";
	//	nameSound = "Abrams";
	//	accuracy = 0.4;
	//	armor = 900;
	//	cost = 4000000;
		maxSpeed = 72;
		soundEngine[] = {"Vehicles\ModernIdle1",0.0316228,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.01,1};
		model = "M1_abrams";
	//	weapons[] = {"Gun120","MachineGun12_7"};
	//	magazines[] = {"Heat120","Shell120","MachineGun12_7"};
		gunnerAction = "ManActM1A1Gunner";
		gunnerInAction = "ManActM1A1Gunner";
		driverAction = "ManActM1A1DriverOut";
		driverInAction = "ManActM1A1Driver";
		commanderAction = "ManActM1A1CommanderOut";
		commanderInAction = "ManActM1A1Commander";
	//	type = 1;
	//	threat[] = {1,1,0.3};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 95;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "80 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -270;
			min = 0;
			max = 1;
		};
	};
	class M60_Base_xj400: Tank_xj400 {
		scope = 0;
		crew = "SoldierWCrew";
		picture = "im60";
	//	side = 1;
	//	displayName = "$STR_DN_M60";
	//	nameSound = "M60";
	//	accuracy = 0.7;
	//	armor = 300;
	//	cost = 800000;
		maxSpeed = 54;
		gunnerAction = "ManActM60Gunner";
		gunnerInAction = "ManActM60Gunner";
		driverAction = "ManActM60DriverOut";
		driverInAction = "ManActM60Driver";
		commanderAction = "ManActM60CommanderOut";
		commanderInAction = "ManActM60Commander";
		model = "M60";
	//	weapons[] = {"Gun105","MachineGun7_6"};
	//	magazines[] = {"Heat105","Shell105","MachineGun7_6"};
	//	type = 1;
	//	threat[] = {1,0.6,0.2};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -95;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "60 / 3.6";
		};
		class IndicatorRPM { // angle should be positive 315 but not negative. This is OFP bug.
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = 315;
			min = 0;
			max = 1;
		};
	};
	class T55_Base_xj400: Tank_xj400 {
		scope = 0;
		picture = "it55";
	//	crew = "SoldierGCrew";
	//	side = 2;
	//	displayName = "$STR_DN_T55";
	//	nameSound = "t55";
	//	accuracy = 0.7;
	//	armor = 300;
	//	cost = 150000;
		maxSpeed = 50;
		driverAction = "ManActT55DriverOut";
		gunnerAction = "ManActT55GunnerOut";
		commanderAction = "ManActT55CommanderOut";
		driverInAction = "ManActT55Driver";
		gunnerInAction = "ManActT55Gunner";
		commanderInAction = "ManActT55Commander";
		model = "t55";
	//	weapons[] = {"Gun105","MachineGun7_6"};
	//	magazines[] = {"Heat105","Shell105","MachineGun7_6"};
	//	type = 1;
	//	threat[] = {1,1,0.2};
		soundEnviron[] = {"Vehicles\OldRolling_Treads1",0.0316228,0.7};
		soundEngine[] = {"Vehicles\T55Sound",0.0316228,1};
		commanderOpticsModel = "optika_tanke_auxiliary";
		class Reflectors {
			class Reflector {
				color[] = {0.9,0.8,0.8,1};
				ambient[] = {0.1,0.1,0.1,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -290;
			min = 0;
			max = 1;
		};
	};
	class T72_Base_xj400: RussianTank_xj400 {
		scope = 0;
		picture = "it72";
	//	side = 0;
	//	displayName = "$STR_DN_T72";
	//	nameSound = "t72";
	//	accuracy = 0.5;
		hiddenSelections[] = {"pruh"};
	//	armor = 400;
	//	cost = 1000000;
		maxSpeed = 60;
		driverAction = "ManActT72DriverOut";
		gunnerAction = "ManActT72GunnerOut";
		commanderAction = "ManActT72CommanderOut";
		driverInAction = "ManActT72Driver";
		gunnerInAction = "ManActT72Gunner";
		commanderInAction = "ManActT72Commander";
		model = "t72";
	//	weapons[] = {"Gun120","MachineGun7_6"};
	//	magazines[] = {"Heat120","Shell120","MachineGun7_6"};
	//	type = 1;
	//	threat[] = {0.9,0.8,0.2};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -270;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -290;
			min = 0;
			max = 1;
		};
	};
	class T80_Base_xj400: T72_Base_xj400 {
		scope = 0;
		picture = "it80";
	//	side = 0;
	//	displayName = "$STR_DN_T80";
	//	nameSound = "t80";
	//	accuracy = 0.5;
		driverAction = "ManActT80DriverOut";
		gunnerAction = "ManActT80GunnerOut";
		commanderAction = "ManActT80CommanderOut";
		hiddenSelections[] = {"pruh"};
		driverInAction = "ManActT80Driver";
		gunnerInAction = "ManActT80Gunner";
		commanderInAction = "ManActT80Commander";
	//	armor = 700;
	//	cost = 1500000;
		maxSpeed = 70;
		soundEngine[] = {"Vehicles\ModernIdle1",0.0316228,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.0316228,1};
		model = "t80";
	//	weapons[] = {"Gun120","MachineGun12_7"};
	//	magazines[] = {"Heat120","Shell120","MachineGun12_7"};
	//	type = 1;
	//	threat[] = {0.9,0.9,0.3};
	};
	class T80Res_Base_xj400: T80_Base_xj400 {
		picture = "it80";
		side = 2;
		displayName = "$STR_DN_OUT_T80Res";
		nameSound = "t80";
		accuracy = 0.5;
		hiddenSelections[] = {};
		armor = 700;
		cost = 1500000;
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Heat120","Shell120","MachineGun12_7"};
		type = 1;
		threat[] = {0.9,0.9,0.3};
		
		scope = private;
		class HitGun { armor = 3; material = 52; name = "gun"; passThrough = 1; };
	};

	class TZK_HeavyWestTank_Base_xj400: M1Abrams_Base_xj400 { // For Animations
		class Anim_Base_suspension { animperiod = 0.5; selection = "sus_F"; axis = "osa_sus"; angle0 = +0.06; angle1 = -0.06; type = "rotation"; };
		class Anim_Base_gunrec { animperiod = 0.05; selection = "gunrec"; axis = "osa_rec"; angle0 = 0; angle1 = 0.026; type = "rotation"; };
		class Animations {
			class suspension: Anim_Base_suspension {};
			class gunrec: Anim_Base_gunrec {};
		};
	};
	class TZK_HeavyEastTank_Base_xj400: T80_Base_xj400 { // For Animations
		class Anim_Base_suspension { animperiod = 0.5; selection = "sus_F"; axis = "osa_sus"; angle0 = -0.06; angle1 = +0.06; type = "rotation"; };
		class Anim_Base_gunrec { animperiod = 0.05; selection = "gunrec"; axis = "osa_rec"; angle0 = 0; angle1 = 0.026; type = "rotation"; };
		class Animations {
			class suspension: Anim_Base_suspension {};
			class gunrec: Anim_Base_gunrec {};
		};
	};

// WEST Heavy Tanks
	class M1A1_xj400: TZK_HeavyWestTank_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.4;
		displayName = "M1A1"; nameSound = "Abrams"; side = 1; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		// model = "\TZK_Model_4_0_0\M1A1_TZK.p3d";
		model = "\TZK_Model_4_0_3\M1A1_TZK.p3d";
		hiddenSelections[] = {"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6", tzk_tex_00,
			tex_abrams_kolo.pac, tex_abrams_kolo2.pac, tex_abrams_svetlo.paa, tex_abrams_svetlo_b.paa, tex_m1a1_ammo_box.pac, tex_m1a1_bocek.pac, tex_m1a1_dratram_back.paa, tex_m1a1_dratram_side.paa, tex_m1a1_drtrm_back_b.paa, tex_m1a1_frnt_bck_lod.pac, tex_m1a1_hlaven.pac, tex_m1a1_main_back.pac, tex_m1a1_main_bottom.pac, tex_m1a1_main_front.pac, tex_m1a1_main_side.pac, tex_m1a1_main_top.pac, tex_m1a1_poklop_driver.pac, tex_m1a1_vez_back.pac, tex_m1a1_vez_front.pac, tex_m1a1_vez_hatch.pac, tex_m1a1_vez_side.pac, tex_m1a1_vez_top.pac, tex_m1a1_vymetnice.pac, tex_m60pas.pac, tex_pasy_okolo_uni.pac,
			tex_bmp_kuk2.pac, tex_t72_kolo_kraj.pac, tex_t72_zubkolo_detail.paa, tex_t72_zubkolo_detail2.paa
				, tzk_tex_99
		};
		//Strengthen M1A1's armor to T80N's level by increasing armor.
		armor = 1350; armorStructural = 2.0 * 1400/1350;
		
		// driverCanSee = "1+2+8+16"; gunnerCanSee = "1+4+8+16"; // Special benifit for M1A1, M1A2.
		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		
		weapons[] = {"M1Gun_xj400","M1MG_xj400"};
		magazines[] = {"M1Sabot_xj400","M1Heat_xj400","MachineGun12_7_xj400","MachineGun12_7_xj400","CoaxW_xj400"};
		
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\M1A1.sqs}; _vehicle animate [{suspension}, 0.5]";};
	};
	class M1A1_Art_xj400: M1A1_xj400 {
		displayName = "M1A1 Art"; accuracy = 1000; // Unrecognizeable on appearance.
		irScanToEyeFactor = 1; // Allow Art Vehicles scan far.
		weapons[] = {"M1Gun_xj400","M1MG_xj400"};
		magazines[] = {"M1Heat_xj400","M1Heat_xj400","MachineGun12_7_xj400","MachineGun12_7_xj400","CoaxW_xj400"};
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d";
		hiddenSelections[] = {
			tzk_tex_00,
			tex_abrams_kolo.pac, tex_abrams_kolo2.pac, tex_abrams_svetlo.paa, tex_abrams_svetlo_b.paa, tex_m1a1_ammo_box.pac, tex_m1a1_bocek.pac, tex_m1a1_dratram_back.paa, tex_m1a1_dratram_side.paa, tex_m1a1_drtrm_back_b.paa, tex_m1a1_frnt_bck_lod.pac, tex_m1a1_hlaven.pac, tex_m1a1_main_bottom.pac, tex_m1a1_main_front.pac, tex_m1a1_main_side.pac, tex_m1a1_main_top.pac, tex_m1a1_poklop_driver.pac, tex_m1a1_vez_back.pac, tex_m1a1_vez_front.pac, tex_m1a1_vez_hatch.pac, tex_m1a1_vez_side.pac, tex_m1a1_vez_top.pac, tex_m1a1_vymetnice.pac, tex_m60pas.pac, tex_pasy_okolo_uni.pac,
			tex_bmp_kuk2.pac, tex_t72_kolo_kraj.pac, tex_t72_zubkolo_detail.paa, tex_t72_zubkolo_detail2.paa
				, tzk_tex_99
		};
	};
	class M1A2_INQ_xj400: TZK_HeavyWestTank_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.4;
		displayName = "M1A2 SEP"; nameSound = "Abrams"; side = 1; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		picture = "\TZK_Texture_4_0_0\icon\iM1A2.paa"
		model = "\TZK_Model_4_0_0\M1A2_INQ.p3d";
		
		hiddenSelections[] = {"BS1","BS2","BS3","_mark","_chevron","_for",  tzk_tex_00,
			tex_blampe1.paa, tex_blampe2.paa, tex_box.paa, tex_box2.paa, tex_ca.paa, tex_chabak.paa, tex_chabot.paa, tex_chatop.paa, tex_citv.paa, tex_cws.paa, tex_cws1.paa, tex_dratybk.paa, tex_dratysd.paa, tex_drivhat.paa, tex_green.paa, tex_greendirt.paa, tex_kettea1.paa, tex_kolo1.paa, tex_kolo1a.paa, tex_kolo2.paa, tex_kolo2a.paa, tex_kolop.paa, tex_kolot.paa, tex_ksidin1.paa, tex_ksidin2.paa, tex_ksidl.paa, tex_ksidr.paa, tex_ksidtp.paa, tex_kuk2x2a.paa, tex_mg.paa, tex_mg2.paa, tex_misc1.paa, tex_misc2.paa, tex_misc3.paa, tex_mlamp1.paa, tex_mlamp1b.paa, tex_mlamp2.paa, tex_mlamp2b.paa, tex_turbk.paa, tex_turbot.paa, tex_turcrt.paa, tex_turfr.paa, tex_tursil.paa, tex_tursir.paa, tex_turtop.paa,
			tex_iff.paa, tex_kbi.paa, tex_tread.paa, tex_treadin.paa, tex_treadmid.paa, tex_treadsid.paa,
			tex_2418i.paa,tex_3-4-67.paa,tex_4-67.paa,tex_bandits.paa,tex_ch_alpha.paa,tex_ch_char.paa,tex_goaway.paa,tex_skull.paa,tex_spearhead.paa,tex_timetodie.paa,tex_warhorse.paa,tex_warhorse1.paa,tex_warhorse2.paa
				, tzk_tex_99
		};
		armor = 1350; armorStructural = 2.0 * 1500/1350;
		maxSpeed = 67;
		
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\M1A2_Gun.p3d"; gunnerOpticsColor[] = {0,0,0,1};
		commanderOpticsModel = "\TZK_Model_4_0_0\Opt\M1A2_Com.p3d"; commanderOpticsColor[] = {0,0.46,0.2,1};
		
		// driverCanSee = "1+2+8+16"; gunnerCanSee = "1+4+8+16"; // Special benifit for M1A1, M1A2.
		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		
		weapons[] = {"M12Gun_xj400","M1MG_xj400"};
		magazines[] = {"M12Sabot_xj400","M12Heat_xj400","MachineGun12_7_xj400","MachineGun12_7_xj400","CoaxW_xj400"};
		
		soundEngine[] = {"Vehicles\ModernIdle1",0.031622775,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.01,1};
		soundLandCrash[] = {"Explosions\intoground",0.3162278,1};
		soundCrash[] = {"Vehicles\crash_small2",0.3162278,1};
		soundGear[] = {"Vehicles\Gear_Trans1",0.0031623,1};
		soundDammage[] = {"Objects\alarm_loop1",0.01,1};
		forceHideGunner = 0;
		forceHideCommander = 0;
		hideWeaponsCargo = 1;
		gunnerAction = "ManActm1a1gunnerout";
		commanderAction = "ManActm1a2commanderout";
		class TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"\TZK_Sounds_4_0_0\M1_Turret.wss",0.031622775,0.9};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -6;
			maxElev = 18;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {"\TZK_Sounds_4_0_0\M1_Turret.wss",0.00031622775,1.08};
			minElev = -6;
			maxElev = 18;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};

		class WeaponFireGun {
			cloudletDuration = 1.3;		// time to live (not including fades)
			cloudletAnimPeriod = 1.0; 	// animation speed
			cloudletSize = 2.0;
			cloudletAlpha = 1.0;
			cloudletGrowUp = 0.2;	// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.5;		// fade-out time
			cloudletAccY = 0;		// vertical acceleration
			cloudletMinYSpeed = -100;	// vertical speed range
			cloudletMaxYSpeed = 100;
			cloudletShape = "cl_fired";
			cloudletColor[] = {1, 1, 1, 0};
			// source parameters
			interval = 0.01;
			size = 6;
			sourceSize = 0.5;
			timeToLive = 0;

			initT = 4500;
			deltaT = -3000;
			class Table {
				class T0 {maxT = 0; color[] = {0.82, 0.95, 0.93, 0};}
				class T1 {maxT = 200; color[] = {0.75, 0.77, 0.9, 0};}
				class T2 {maxT = 400; color[] = {0.56, 0.62, 0.67, 0};}
				class T3 {maxT = 600; color[] = {0.39, 0.46, 0.47, 0};}
				class T4 {maxT = 800; color[] = {0.24, 0.31, 0.31, 0};}
				class T5 {maxT = 1000; color[] = {0.23, 0.31, 0.29, 0};}
				class T6 {maxT = 1500; color[] = {0.21, 0.29, 0.27, 0};}
				class T7 {maxT = 2000; color[] = {0.19, 0.23, 0.21, 0};}
				class T8 {maxT = 2300; color[] = {0.22, 0.19, 0.1, 0};}
				class T9 {maxT = 2500; color[] = {0.35, 0.2, 0.02, 0};}
				class T10 {maxT = 2600; color[] = {0.62, 0.29, 0.03, 0};}
				class T11 {maxT = 2650; color[] = {0.59, 0.35, 0.05, 0};}
				class T12 {maxT = 2700; color[] = {0.75, 0.37, 0.03, 0};}
				class T13 {maxT = 2750; color[] = {0.88, 0.34, 0.03, 0};}
				class T14 {maxT = 2800; color[] = {0.91, 0.5, 0.17, 0};}
				class T15 {maxT = 2850; color[] = {1, 0.6, 0.2, 0};}
				class T16 {maxT = 2900; color[] = {1, 0.71, 0.3, 0};}
				class T17 {maxT = 2950; color[] = {0.98, 0.83, 0.41, 0};}
				class T18 {maxT = 3000; color[] = {0.98, 0.91, 0.54, 0};}
				class T19 {maxT = 3100; color[] = {0.98, 0.99, 0.6, 0};}
				class T20 {maxT = 3300; color[] = {0.96, 0.99, 0.72, 0};}
				class T21 {maxT = 3600; color[] = {1, 0.98, 0.91, 0};}
				class T22 {maxT = 4200; color[] = {1, 1, 1, 0};}
			}
		};
		class WeaponCloudsGun {
			access = ReadOnlyVerified;
			// single cloudlet parameters
			cloudletDuration = 0.1;		// time to live (not including fades)
			cloudletAnimPeriod = 1.0; 	// animation speed
			cloudletSize = 1.0;
			cloudletAlpha = 2.0;
			cloudletGrowUp = 2;		// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.8;		// fade-out time
			cloudletAccY = 0.4;		// vertical acceleration
			cloudletMinYSpeed = 0.2;	// vertical speed range
			cloudletMaxYSpeed = 0.8;
			cloudletShape = "cl_basic";
			cloudletColor[] = {1, 1, 1, 0};
			// source parameters
			interval = 0.05;
			size = 2;
			sourceSize = 0.5;
			timeToLive = 0.1;

			initT = 0;
			deltaT = 0;
			class Table {
				class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
			}
		};
		class WeaponCloudsMGun: WeaponCloudsGun {
			access = ReadOnlyVerified;

			cloudletGrowUp = 0.05;		// grow-up time
			cloudletFadeIn = 0;		// fade-in time
			cloudletFadeOut = 0.1;		// fade-out time
			cloudletDuration = 0.05;	// time to live (not including fades)

			cloudletAlpha = 0.3;

			cloudletAccY = 0;		// vertical acceleration
			cloudletMinYSpeed = -100;	// vertical speed range
			cloudletMaxYSpeed = 120;

			interval = 0.02;
			size = 0.3;
			sourceSize = 0.02;
		};
		class WeaponFireMGun: WeaponFireGun {
			cloudletDuration = 0;		// time to live (not including fades)
			cloudletGrowUp = 0.06;		// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.12;		// fade-out time

			interval = 0.006;
			size = 0.3;
			sourceSize = 0.02;

			initT = 3200;
			deltaT = -4000;
		};
		class GunFire: WeaponFireGun{};
		class GunClouds: WeaponCloudsGun{};
		class MGunFire: WeaponFireMGun{};
		class MGunClouds: WeaponCloudsMGun{};

		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\M1A2.sqs}; _vehicle animate [{suspension}, 0.5]";};
	};
	class Leo2A6_xj400: TZK_HeavyWestTank_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.4;
		displayName = "Leopard 2A6"; nameSound = "tank"; side = 1; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		picture = "\TZK_Texture_4_0_0\icon\iLeo2A6.paa";
		model = "\TZK_Model_4_0_0\Leo2A6.p3d";
		hiddenSelections[] = {
			"zadni svetlo","Takt_Kp","Takt_Symbol","Takt_Btl_1","Takt_Btl_2","Takt_Btl_3","nr1","nr2","nr3", tzk_tex_00,
			tex_kettes.pac, tex_ketteu.pac, tex_main1.pac, tex_main2.pac, tex_main3.pac, tex_rolle2.pac, tex_rolle2m.pac, tex_rollei.paa
				, tzk_tex_99
		};
		maxSpeed = 70;
		armor = 1350; armorStructural = 2.0 * 1500/1350;
		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		
		weapons[] = {"LeoGun_xj400","LeoMG_xj400"};
		magazines[] = {"LeoSabot_xj400","LeoHeat_xj400","LeoMG_xj400"};
		
		soundEngine[] = {"\TZK_Sounds_4_0_0\Leo2A6\Engine2.wss",0.031622775,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.01,0.8};

		forceHideGunner = 1;
		unloadInCombat = 2;

		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\Leo2A6_optik2.p3d"; gunnerOpticsColor[] = {0, 0, 0, 1};
		commanderOpticsModel = "\TZK_Model_4_0_0\Opt\Leo2A6_optik.p3d"; commanderOpticsColor[] = {0, 0, 0, 1};

		gunnerInAction = "ManActBWMODLeo2A6Gun";
		driverAction = "ManActBWMODLeo2A6DrvOut"; driverInAction = "ManActBWMODLeo2A6Drv";
		commanderAction = "ManActBWMODLeo2A6CmdOut"; commanderInAction = "ManActBWMODLeo2A6Cmd";

		class ViewGunnerBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.550000;
			minFov = 0.320000;
			maxFov = 0.850000;
		};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";

			soundServo[] = {"\TZK_Sounds_4_0_0\Leo2A6\Turret.wss",0.0316228,1};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";

			minElev = -9; maxElev = +20;
			minTurn = -360; maxTurn = +360;

			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
		//	angle = -1.2;
			angle = -180; // Modified to avoid too long osa in memory-LOD.
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 180;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = -180;
		};


		class WeaponFireGun {
			cloudletDuration = 1.3;		// time to live (not including fades)
			cloudletAnimPeriod = 1.0; 	// animation speed
			cloudletSize = 2.0;
			cloudletAlpha = 1.0;
			cloudletGrowUp = 0.2;	// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.5;		// fade-out time
			cloudletAccY = 0;		// vertical acceleration
			cloudletMinYSpeed = -100;	// vertical speed range
			cloudletMaxYSpeed = 100;
			cloudletShape = "cl_fired";
			cloudletColor[] = {1, 1, 1, 0};
			// source parameters
			interval = 0.01;
			size = 7;
			sourceSize = 0.5;
			timeToLive = 0;

			initT = 4500;
			deltaT = -3000;
			class Table {
				class T0 {maxT = 0; color[] = {0.82, 0.95, 0.93, 0};}
				class T1 {maxT = 200; color[] = {0.75, 0.77, 0.9, 0};}
				class T2 {maxT = 400; color[] = {0.56, 0.62, 0.67, 0};}
				class T3 {maxT = 600; color[] = {0.39, 0.46, 0.47, 0};}
				class T4 {maxT = 800; color[] = {0.24, 0.31, 0.31, 0};}
				class T5 {maxT = 1000; color[] = {0.23, 0.31, 0.29, 0};}
				class T6 {maxT = 1500; color[] = {0.21, 0.29, 0.27, 0};}
				class T7 {maxT = 2000; color[] = {0.19, 0.23, 0.21, 0};}
				class T8 {maxT = 2300; color[] = {0.22, 0.19, 0.1, 0};}
				class T9 {maxT = 2500; color[] = {0.35, 0.2, 0.02, 0};}
				class T10 {maxT = 2600; color[] = {0.62, 0.29, 0.03, 0};}
				class T11 {maxT = 2650; color[] = {0.59, 0.35, 0.05, 0};}
				class T12 {maxT = 2700; color[] = {0.75, 0.37, 0.03, 0};}
				class T13 {maxT = 2750; color[] = {0.88, 0.34, 0.03, 0};}
				class T14 {maxT = 2800; color[] = {0.91, 0.5, 0.17, 0};}
				class T15 {maxT = 2850; color[] = {1, 0.6, 0.2, 0};}
				class T16 {maxT = 2900; color[] = {1, 0.71, 0.3, 0};}
				class T17 {maxT = 2950; color[] = {0.98, 0.83, 0.41, 0};}
				class T18 {maxT = 3000; color[] = {0.98, 0.91, 0.54, 0};}
				class T19 {maxT = 3100; color[] = {0.98, 0.99, 0.6, 0};}
				class T20 {maxT = 3300; color[] = {0.96, 0.99, 0.72, 0};}
				class T21 {maxT = 3600; color[] = {1, 0.98, 0.91, 0};}
				class T22 {maxT = 4200; color[] = {1, 1, 1, 0};}
			}
		};
		class WeaponCloudsGun {
			access = ReadOnlyVerified;
			// single cloudlet parameters
			cloudletDuration = 0.1;		// time to live (not including fades)
			cloudletAnimPeriod = 1.0; 	// animation speed
			cloudletSize = 1.0;
			cloudletAlpha = 2.0;
			cloudletGrowUp = 2;		// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.8;		// fade-out time
			cloudletAccY = 0.4;		// vertical acceleration
			cloudletMinYSpeed = 0.2;	// vertical speed range
			cloudletMaxYSpeed = 0.8;
			cloudletShape = "cl_basic";
			cloudletColor[] = {1, 1, 1, 0};
			// source parameters
			interval = 0.05;
			size = 2;
			sourceSize = 0.5;
			timeToLive = 0.1;

			initT = 0;
			deltaT = 0;
			class Table {
				class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
			}
		};
		class WeaponCloudsMGun: WeaponCloudsGun {
			access = ReadOnlyVerified;

			cloudletGrowUp = 0.05;		// grow-up time
			cloudletFadeIn = 0;		// fade-in time
			cloudletFadeOut = 0.1;		// fade-out time
			cloudletDuration = 0.05;	// time to live (not including fades)

			cloudletAlpha = 0.3;

			cloudletAccY = 0;		// vertical acceleration
			cloudletMinYSpeed = -100;	// vertical speed range
			cloudletMaxYSpeed = 120;

			interval = 0.02;
			size = 0.3;
			sourceSize = 0.02;
		};
		class WeaponFireMGun: WeaponFireGun {
			cloudletDuration = 0;		// time to live (not including fades)
			cloudletGrowUp = 0.06;		// grow-up time
			cloudletFadeIn = 0.01;		// fade-in time
			cloudletFadeOut = 0.12;		// fade-out time

			interval = 0.006;
			size = 0.3;
			sourceSize = 0.02;

			initT = 3200;
			deltaT = -4000;
		};
		class GunFire: WeaponFireGun{};
		class GunClouds: WeaponCloudsGun{};
		class MGunFire: WeaponFireMGun{};
		class MGunClouds: WeaponCloudsMGun{};
		
		class Animations {
			class suspension: Anim_Base_suspension {};
			class gunrec: Anim_Base_gunrec {};
			class NebelAnim {
				type = "rotation";
				animperiod = 0.1;
				selection = "NebelAnim";
				axis = "osa_NebelAnim";
				angle0 = 0;
				angle1 = 3.14159265;
			};
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Leo2A6.sqs}; _vehicle animate [{suspension}, 0.5]; [_vehicle, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {nr}, {0}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs}";
		};
	};
// EAST Heavy Tanks
	class T80_xj400: TZK_HeavyEastTank_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "T80"; nameSound = "t80"; side = 0; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		model = "\TZK_Model_4_0_0\T80_TZK.p3d";
		hiddenSelections[] = {
			"pruh", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6",  tzk_tex_00,
			tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_t72_vymetnice.pac, tex_t80_kolo2.pac, tex_tank_04_bck.pac, tex_tank_04_bednyuvalce_.pac, tex_tank_04_frt.pac, tex_tank_04_krabic_back.pac, tex_tank_04_krabic_sidet.pac, tex_tank_04_lauf_frt.pac, tex_tank_04_lauf_top.pac, tex_tank_04_platyzveze_s.pac, tex_tank_04_platyzvozu_t.pac, tex_tank_04_side.pac, tex_tank_04_spod.pac, tex_tank_04_sud_norm.pac, tex_tank_04_sud_side.paa, tex_tank_04_top.pac, tex_tank_04_v_lec_norm.pac, tex_tank_04_v_lec_side.paa, tex_tank_04_vez_bck.pac, tex_tank_04_vez_frt.pac, tex_tank_04_vez_side.pac, tex_tank_04_vez_top.pac, tex_tank_m_02_kanon.pac, tex_tank_m_02_vez_frt.pac,
			tex_t80_kolo1.pac, tex_tank4_passide.pac, tex_tank_04_detailkanon.pac, tex_tank_04_detailkanon2.pac, tex_tnk04topslo.pac, tex_tank_04_spod_spol.pac, tex_ural_kabok2.pac, tex_t72_kolo3.paa,
			tex_drat_svetlo_s.paa, tex_t72_com_strop.paa, tex_t72_dri_poklop.paa, tex_t72_hlaven_s.pac, tex_t72_vez_strop.paa, tex_t72_zubkolo_detail.paa, tex_t72_zubkolo_detail2.paa
			, tex_t80_stranakol.pac
				, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T80.sqs}; _vehicle animate [{suspension}, 0.5]";};
		
		// Necessary for T80 to redefine cost and armor in CTI, make them totally same as M1A1.
		armor = 1350; armorStructural = 2.0 * 1500/1350;
		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		
		gunnerInAction = "ManActM1A1Gunner";
		commanderInAction = "ManActM1A1Commander";
		weapons[] = {"T80Gun_xj400","MachineGun12_7_xj400"};
		magazines[] = {"T80Sabot_xj400","T80Heat_xj400","MachineGun12_7_xj400","MachineGun12_7_xj400"};
	};
	class T80_Art_xj400: T80_xj400 {
		displayName = "T80 Art"; accuracy = 1000; // Unrecognizeable on appearance.
		irScanToEyeFactor = 1; // Allow Art Vehicles scan far.
		weapons[] = {"T80Gun_xj400","MachineGun12_7_xj400"};
		magazines[] = {"T80Heat_xj400","T80Heat_xj400","MachineGun12_7_xj400","MachineGun12_7_xj400"};
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d";
		hiddenSelections[] = {
			"pruh",  tzk_tex_00,
			tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_t72_vymetnice.pac, tex_t80_kolo2.pac, tex_tank_04_bck.pac, tex_tank_04_bednyuvalce_.pac, tex_tank_04_frt.pac, tex_tank_04_krabic_back.pac, tex_tank_04_krabic_sidet.pac, tex_tank_04_lauf_frt.pac, tex_tank_04_lauf_top.pac, tex_tank_04_platyzveze_s.pac, tex_tank_04_platyzvozu_t.pac, tex_tank_04_side.pac, tex_tank_04_spod.pac, tex_tank_04_sud_norm.pac, tex_tank_04_sud_side.paa, tex_tank_04_top.pac, tex_tank_04_v_lec_norm.pac, tex_tank_04_v_lec_side.paa, tex_tank_04_vez_bck.pac, tex_tank_04_vez_frt.pac, tex_tank_04_vez_side.pac, tex_tank_04_vez_top.pac, tex_tank_m_02_kanon.pac, tex_tank_m_02_vez_frt.pac,
			tex_t80_kolo1.pac, tex_tank4_passide.pac, tex_tank_04_detailkanon.pac, tex_tank_04_detailkanon2.pac, tex_tnk04topslo.pac, tex_tank_04_spod_spol.pac, tex_ural_kabok2.pac, tex_t72_kolo3.paa,
			tex_drat_svetlo_s.paa, tex_t72_com_strop.paa, tex_t72_dri_poklop.paa, tex_t72_hlaven_s.pac, tex_t72_vez_strop.paa
				, tzk_tex_99
		};

	};
	class T90_xj400: TZK_HeavyEastTank_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "T90"; nameSound = "tank"; side = 0; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};

		model = "\TZK_Model_4_0_0\T90_ICP.p3d";
		hiddenSelections[] = {"TR","pl","fire1","fire2","fire3","fire4","fire5","fire6","rak1","rak2","rak3","rak4","Flag", "n1", "n2", "n3"};
		picture = "\TZK_Texture_4_0_0\icon\iT90.paa";
		armor = 1350; armorStructural = 2.0 * 1500/1350;
		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		class EventHandlers {
			Init = "_vehicle = _this select 0; _vehicle animate [{suspension}, 0.5]; [_vehicle, {\TZK_Texture_4_0_0\DKMM\}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs}";
		};
		
		gunnerInAction = "ManActM1A1Gunner";
		commanderInAction = "ManActM1A1Commander";
		
		weapons[] = {"T90Gun_xj400","MachineGun12_7_xj400"};
		magazines[] = {"T90Sabot_xj400","T90Heat_xj400","MachineGun12_7_xj400","MachineGun12_7_xj400"};
		
		soundEngine[] = {"\TZK_Sounds_4_0_0\T90Engine.wss",0.031622775,1};
		soundEnviron[] = {"\TZK_Sounds_4_0_0\T90Treads.wss",0.01,1};
		soundGear[] = {"\TZK_Sounds_4_0_0\T90Gear.wss",0.0031622775,0.8};
		
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = -100
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -100
		};
		class ViewGunnerBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.550000;
			minFov = 0.320000;
			maxFov = 0.850000;
		};
		class TurretBase {
			soundServo[] = {"\TZK_Sounds_4_0_0\T90Turret.wss",0.031622775,1.0};
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";

			minElev = -4; maxElev = +20;
			minTurn = -360; maxTurn = +360;

			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Animations {
			class suspension: Anim_Base_suspension {};
			class gunrec: Anim_Base_gunrec {};
			class SetNumber {
				type = "rotation";
				animperiod = 0.5;
				selection = "useract";
				axis = "osa_useract";
				angle0 = 0;
				angle1 = 0;
			};
			class InFlamed {
				type = "rotation";
				animperiod = 0.5;
				selection = "useract";
				axis = "osa_useract";
				angle0 = 0;
				angle1 = 0;
			};
			class SmokeLaunch {
				type = "rotation";
				animperiod = 0.1;
				selection = "useract";
				axis = "osa_useract";
				angle0 = 0;
				angle1 = 0;
			};
			class Minoiskatel {
				type ="rotation";
				animPeriod =0.5;
				selection ="mini";
				axis ="osa_mini";
				angle0 =0;
				angle1 =1;
			};
			class OtstrelGilz {
				type ="rotation";
				animPeriod =0.5;
				selection ="Krish";
				axis ="osa_krish";
				angle0 =0;
				angle1 =-2.5;
			};
		};
	};
	class T90ms_xj400: T90_xj400 {
		displayName = "$STR_mfm_t90ms_std";
		model = "\TZK_Model_4_0_0\T90ms_mfm.p3d";
		hiddenSelections[] = {
			"no1", "no2", "no3", "SignSide", "arena_block", "zadni svetlo", "brzdove svetlo", tzk_tex_00,
			tex_t90ms_,
			tzk_tex_99
		};
		picture = "\TZK_Texture_4_0_0\icon\iT90ms.paa";
		armor = 1350; armorStructural = 2.0;
		
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\t90ms_g.p3d";
		commanderOpticsModel = "\TZK_Model_4_0_0\Opt\t90ms_c.p3d";
		maxSpeed = 60;
		driverAction = "ManActT80DriverOut";
		gunnerAction = "ManActT72GunnerOut";
		commanderAction = "ManActT72CommanderOut";
		driverInAction = "ManActT72Driver";
		
		// gunnerInAction = "ManActT80Gunner";
		// commanderInAction = "ManActTruck5tCoDriver";
		gunnerInAction = "ManActM1A1Gunner";
		commanderInAction = "ManActM1A1Commander";
		
		soundEngine[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\engine_loaded.wss",0.031622775,1};
		soundEnviron[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\tracks.wss",0.01,0.800000};
		soundGear[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\gear.wss",0.0031622775,0.8};
		
		weapons[] = {"T90msGun_xj400","t90ms_PKT_xj400"};
		magazines[] = {"t90ms_3VBM17_xj400","t90ms_3VOF36_xj400","t90ms_PKT_xj400"};
		
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T90ms.sqs}; _vehicle animate [{suspension}, 0.5]; [_vehicle, {\TZK_Texture_4_0_0\mfm_cfg_t90ms\num\}, {no}, {0}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs}";
		};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -140;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -140;
		};	

        class IndicatorSpeed {
			selection = "ukaz_mph";
			axis = "osa_mph";
			angle = 185; //angle = 250;
			min = 0;
			max = "90 / 3.6"; //max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = 315;
			min = 0;
			max = 1;
		};			
		class TurretBase {
			  gunAxis = "osahlavne";
			  turretAxis = "osaveze";	
			  soundServo[] = {"Vehicles\gun_elevate",0.0316228,1.0};
			  gunBeg = "usti hlavne";
			  gunEnd = "konec hlavne";
			  minElev = -6
			  maxElev = 18
			  minTurn = -360
			  maxTurn = 360
			  //initangl = 8;
			  body = "otocvez";
			  gun = "otochlaven";
		};
		class Turret: TurretBase{};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate",0.0003162,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -10;
			maxElev = 45;
			minTurn = -300
			maxTurn = 300
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
		
	//class ViewCommanderBase{};
	//:ViewCommanderBase
		class ViewCommander {
			initAngleX = 5;minAngleX = -30;maxAngleX = 30;
			initAngleY = 0;minAngleY = -150;maxAngleY = 170; //initAngleY = 0;minAngleY = -150;maxAngleY = 170;
			initFov = 0.7;minFov = 0.7;maxFov = 0.85; //initFov = 0.7;minFov = 0.7;maxFov = 0.85;
		};
	//class ViewGunnerBase{};	
	// :ViewGunnerBase
		class ViewGunner {
			initAngleX = 5;minAngleX = -30;maxAngleX = 30;
			initAngleY = 0;minAngleY = -60;maxAngleY = 60;
			initFov = 0.7;minFov = 0.42;maxFov = 0.85;
		};
		class ViewPilot {
			initAngleX = 5;minAngleX = -50;maxAngleX = 50;
			initAngleY = 0;minAngleY = -60;maxAngleY = 60;
			initFov = 0.7;minFov = 0.42;maxFov = 0.85;
		};
			
		class ViewOpticsBase{};
		class ViewOptics:ViewOpticsBase {
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.3;   // 0.3;
			minFov = 0.04;    //  0.07;
			maxFov = 0.4;    // 0.35;
		};
			
		class Animations {
		/*	class Recoil {
				type ="rotation";
				animPeriod =0.1;
				selection ="stv";
				axis ="osa_stv";
				angle0 =0;
				angle1 =  -0.010; //  -0.006;  //angle1 =-0.0042;
			};
			class Podveska {
				type = "rotation";
				animperiod = 0.5;
				selection = "podw";
				axis = "osa_podw";
				angle0 = -0.04;
				angle1 = 0.04;
			};	
			class kompas {type = "rotation";animPeriod = 0.01;selection = "S_kompas";axis = "osa_S_kompas";angle0 = 0;angle1 = 6.283185;};	*/
			class suspension: Anim_Base_suspension {};
			class gunrec: Anim_Base_gunrec { selection ="stv"; axis ="osa_stv"; };
		};	
	};
	class ZTZ99_xj400: TZK_HeavyEastTank_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "ZTZ-99G"; nameSound = "tank"; side = 0; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		model = "\TZK_Model_4_0_0\ZTZ99.p3d"; hiddenSelections[] = {"n1", "n2", "n3"};
		picture = "\TZK_Texture_4_0_0\icon\iZTZ99.paa";

		maxSpeed = 70;
		armor = 1350; armorStructural = 2.0;
		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		class EventHandlers {
			Init = "_vehicle = _this select 0; _vehicle animate [{suspension}, 0.5]; [_vehicle, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {n}, {0}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs}";
		};

 		soundEngine[] = {"\TZK_Sounds_4_0_0\M1_Turbine.wss",0.031622775,1.1};
		soundEnviron[] = {"\TZK_Sounds_4_0_0\M1_Treads.wss",0.01,1};

		driverInAction = "ManActT80Driver";
		gunnerInAction = "ManActM1A1Gunner";
		commanderInAction = "ManActM1A1Commander";

		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ZTZ99G_ViewGunner.p3d";
		commanderOpticsModel = "\TZK_Model_4_0_0\Opt\ZTZ99G_ViewCommander.p3d";
		
		weapons[] = {"PLAGun_xj400","PLAMG_xj400"};
		magazines[] = {"PLASabot_xj400","PLAHeat_xj400","PLAMG_xj400","PLAMG_xj400"};
	};

	// Total armor doubled but selections same as before tanks, for trial.
	class M1A1_TZK_ExtentArmor_xj400: M1A1_xj400 { armorStructural = 3.0 * 1400/1350; };
	class M1A2_TZK_ExtentArmor_xj400: M1A2_INQ_xj400 { armorStructural = 3.0 * 1500/1350; };
	class Leo2A6_ExtentArmor_xj400: Leo2A6_xj400 { armorStructural = 3.0 * 1500/1350; };
	class T80_TZK_ExtentArmor_xj400: T80_xj400 { armorStructural = 3.0 * 1500/1350; };
	class T90_ExtentArmor_xj400: T90_xj400 { armorStructural = 3.0 * 1500/1350; };
	class T90ms_ExtentArmor_xj400: T90ms_xj400 { armorStructural = 3.0; };
	class ZTZ99_ExtentArmor_xj400: ZTZ99_xj400 { armorStructural = 3.0; };
	
	// Classes compatible to last version.
	class T80U_TZK_xj400: T80_xj400 {};
	class T90ms_TZK_xj400: T90ms_xj400 {};
	class ZTZ99_TZK_xj400: ZTZ99_xj400 {};

// GUER Heavy Tanks
	class T80Res_TZK_xj400: T80Res_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		displayName = "T80(Res) Red"; accuracy = 1000;
		model = "\TZK_Model_4_0_0\T80_TZK.p3d";
	//	hiddenSelections[] = {"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"}; // Res tank don't have to hide the drum or re-texture.
		hiddenSelections[] = {
			"pruh", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6",  tzk_tex_00,
			tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_t72_vymetnice.pac, tex_t80_kolo2.pac, tex_tank_04_bck.pac, tex_tank_04_bednyuvalce_.pac, tex_tank_04_frt.pac, tex_tank_04_krabic_back.pac, tex_tank_04_krabic_sidet.pac, tex_tank_04_lauf_frt.pac, tex_tank_04_lauf_top.pac, tex_tank_04_platyzveze_s.pac, tex_tank_04_platyzvozu_t.pac, tex_tank_04_side.pac, tex_tank_04_spod.pac, tex_tank_04_sud_norm.pac, tex_tank_04_sud_side.paa, tex_tank_04_top.pac, tex_tank_04_v_lec_norm.pac, tex_tank_04_v_lec_side.paa, tex_tank_04_vez_bck.pac, tex_tank_04_vez_frt.pac, tex_tank_04_vez_side.pac, tex_tank_04_vez_top.pac, tex_tank_m_02_kanon.pac, tex_tank_m_02_vez_frt.pac,
			tex_t80_kolo1.pac, tex_tank4_passide.pac, tex_tank_04_detailkanon.pac, tex_tank_04_detailkanon2.pac, tex_tnk04topslo.pac, tex_tank_04_spod_spol.pac, tex_ural_kabok2.pac, tex_t72_kolo3.paa,
			tex_drat_svetlo_s.paa, tex_t72_com_strop.paa, tex_t72_dri_poklop.paa, tex_t72_hlaven_s.pac, tex_t72_vez_strop.paa, tex_t72_zubkolo_detail.paa, tex_t72_zubkolo_detail2.paa
			, tex_t80_stranakol.pac
				, tzk_tex_99
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T80.sqs}, [_vehicle, {red}] exec {\TZK_Objects\Scripts\texture\GUER.sqs};
		};
		gunnerInAction = "ManActM1A1Gunner";
		commanderInAction = "ManActM1A1Commander";
	};
	class T80Res_Orange_xj400: T80Res_TZK_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_300";
		displayName = "T80(Res) Orange"; accuracy = 1000;
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T80.sqs}, [_vehicle, {orange}] exec {\TZK_Objects\Scripts\texture\GUER.sqs};
		};
	};
	class T80Res_Yellow_xj400: T80Res_Orange_xj400 {
		displayName = "T80(Res) Yellow"; accuracy = 1000;
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T80.sqs}, [_vehicle, {yellow}] exec {\TZK_Objects\Scripts\texture\GUER.sqs};
		};
	};
	class T80Res_Purple_xj400: T80Res_Orange_xj400 {
		displayName = "T80(Res) Purple"; accuracy = 1000;
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T80.sqs}, [_vehicle, {purple}] exec {\TZK_Objects\Scripts\texture\GUER.sqs};
		};
	};
	class T80Res_Green_xj400: T80Res_Base_xj400 {
		// This unit using original OFPR T80Res Model.
		scope = protected; vehicleClass = "TZK_Testing_300";
		displayName = "T80(Res) Green"; accuracy = 1000;
	};
// Vanilla Tanks
	class T80Res_Green_TZK_xj400: T80Res_Green_xj400 {
		hiddenSelections[] = {"pruh"};
	};
	class M1Abrams_xj400: TZK_HeavyWestTank_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.4;
		displayName = "M1A1"; nameSound = "Abrams"; side = 1; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		model = "m1_abrams";
		armor = 1350; armorStructural = 2.0 * 1400/1350;
		
		gunnerCanSee = "1+4+8+16";
		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		
		weapons[] = {"M1Gun_xj400","M1MG_xj400"};
		magazines[] = {"M1Sabot_xj400","M1Heat_xj400","MachineGun12_7_xj400","MachineGun12_7_xj400","CoaxW_xj400"};
		class Animations{};
	};
	class T80_Vanilla_xj400: TZK_HeavyEastTank_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "T80"; nameSound = "t80"; side = 0; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		model = "t80";
		armor = 1350; armorStructural = 2.0 * 1500/1350;
		
		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		
		weapons[] = {"T80Gun_xj400","MachineGun12_7_xj400"};
		magazines[] = {"T80Sabot_xj400","T80Heat_xj400","MachineGun12_7_xj400","MachineGun12_7_xj400"};
		class Animations{};
	};

// Light Tanks
	class M60_xj400: M60_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		weapons[] = {"Gun105","MachineGun7_6_xj400"};
		magazines[] = {"Heat105","Shell105","MachineGun7_6_xj400"};
	//	class HitGun { armor = 3; material = 52; name = "gun"; passThrough = 1; };  Unnecessary to enhance tanks' gun in 2.01 game since "SetSelectionDammage" applied.
		
		side = 1;
		displayName = "$STR_DN_M60";
		nameSound = "M60";
		accuracy = 0.7;
		armor = 300;
		cost = 800000;
		type = 1;
		threat[] = {1,0.6,0.2};
		
		model = "\TZK_Model_4_0_3\M60_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00,
			tex_abrams_roury_frt.pac, tex_abrams_roury_side.pac, tex_m1a1_hlaven.pac, tex_m60_kolo_strana.pac, tex_m60_lauf.pac, tex_m60_poklop_driver.pac, tex_m60_spoj_tl.pac, tex_m60_t_back.pac, tex_m60_t_front.pac, tex_m60_t_side.pac, tex_m60_t_top.pac, tex_m60_tc_front.pac, tex_m60_tc_side.pac, tex_m60_zadni_rantl.paa, tex_m60hullback.pac, tex_m60hullback2.pac, tex_m60hulldown.pac, tex_m60hulldown2.pac, tex_m60hullfront.pac, tex_m60hullfront2.pac, tex_m60hulltop.pac, tex_m60kolo.paa, tex_m60kolo.pac, tex_m60kolo2.paa, tex_m60kolo2.pac, tex_m60kolo3.pac, tex_m60kolomaly.paa, tex_m60kolozub.paa, tex_m60pas.pac, tex_m60pasb.pac, tex_m60s.pac, tex_pasy_okolo_uni.pac, 
			tex_m60_sidepas.pac
				, tzk_tex_99
		};
		class EventHandlers { Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\M60.sqs}"; };
	};
	class T72_xj400: T72_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		weapons[] = {"Gun120","MachineGun7_6_xj400"};
		magazines[] = {"Heat120","Shell120","MachineGun7_6_xj400"};
	//	class HitGun { armor = 3; material = 52; name = "gun"; passThrough = 1; };  Unnecessary to enhance tanks' gun in 2.01 game since "SetSelectionDammage" applied.
	
		side = 0;
		displayName = "$STR_DN_T72";
		nameSound = "t72";
		accuracy = 0.5;
		armor = 400;
		cost = 1000000;
		type = 1;
		threat[] = {0.9,0.8,0.2};

		model = "\TZK_Model_4_0_3\T72_TZK.p3d";
		hiddenSelections[] = {"pruh", tzk_tex_00,
			tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_t72_back.pac, tex_t72_front.pac, tex_t72_hlaven_s.pac, tex_t72_kolo.pac, tex_t72_kolo2.pac, tex_t72_kolo3.paa, tex_t72_pixla.pac, tex_t72_pixla_side.pac, tex_t72_side2.pac, tex_t72_sum.pac, tex_t72_top.pac, tex_t72_vez_back.pac, tex_t72_vez_front.pac, tex_t72_vez_roura.pac, tex_t72_vez_side.pac, tex_t72_vez_top.pac, tex_t72_vymetnice.pac, tex_t72pasb.pac, tex_tank_03_kanon_frt.pac, tex_tank_04_spod.pac, tex_tank_04_spod_spol.pac, tex_tank_04_sud_norm.pac, tex_tank_04_sud_side.paa, tex_ural_kabok2.pac
				, tzk_tex_99
		};
		class EventHandlers { Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T72.sqs}"; };
		class Animations {
			class gunrec { animperiod = 0.05; selection = "gunrec"; axis = "osa_rec"; angle0 = 0; angle1 = 0.026; type = "rotation"; };
		};
	};
	class M60_120S_xj400: M60_xj400 {
		weapons[] = {"Gun120","M1MG_xj400"};
		magazines[] = {"Heat120","Shell120","MachineGun12_7_xj400","MachineGun12_7_xj400","CoaxW_xj400"};
		
		model = "\TZK_Model_4_0_3\M60_120S_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00,
			tex_bmp_kuk2.pac, 
			tex_m1a1_ammo_box.pac, 
			tex_m1a1_dratram_back.paa, tex_m1a1_dratram_side.paa, tex_m1a1_drtrm_back_b.paa, tex_m1a1_frnt_bck_lod.pac, tex_m1a1_hlaven.pac, tex_m1a1_main_back.pac, tex_m1a1_main_bottom.pac, tex_m1a1_main_front.pac, tex_m1a1_main_side.pac, tex_m1a1_main_top.pac, tex_m1a1_poklop_driver.pac, tex_m1a1_vez_back.pac, tex_m1a1_vez_front.pac, tex_m1a1_vez_hatch.pac, tex_m1a1_vez_side.pac, tex_m1a1_vez_top.pac, 
			tex_m60_kolo_strana.pac, tex_m60_poklop_driver.pac, 
			tex_m60hullback.pac, tex_m60hullback2.pac, tex_m60hulldown.pac, tex_m60hulldown2.pac, tex_m60hullfront.pac, tex_m60hullfront2.pac, tex_m60hulltop.pac, tex_m60kolo.paa, tex_m60kolo.pac, tex_m60kolo2.paa, tex_m60kolo2.pac, tex_m60kolo3.pac, tex_m60kolomaly.paa, tex_m60kolozub.paa, tex_m60pas.pac, tex_m60pasb.pac, tex_m60s.pac, tex_pasy_okolo_uni.pac, 
			tex_m60_sidepas.pac
				, tzk_tex_99
		};
		class EventHandlers { Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\M60_120S.sqs}"; };
		class Animations {
			class gunrec { animperiod = 0.05; selection = "gunrec"; axis = "osa_rec"; angle0 = 0; angle1 = 0.026; type = "rotation"; };
		};
		
		displayName = "M60-120S"; cost = 2400000; threat[] = {1, 1, 0.5};
		armor = 400;
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 95;
		};
		gunnerAction = "ManActM1A1Gunner";
		gunnerInAction = "ManActM1A1Gunner";
		commanderAction = "ManActM1A1CommanderOut";
		commanderInAction = "ManActM1A1Commander";
	};

	class T55G_xj400: T55_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		weapons[] = {"Gun105","MachineGun7_6_xj400"};
		magazines[] = {"Heat105","Shell105","MachineGun7_6_xj400"};
		
		crew = "SoldierGCrew";
		side = 2;
		displayName = "$STR_DN_T55";
		
		nameSound = "t55";
		accuracy = 0.7;
		armor = 300;
		cost = 150000;
		type = 1;
		threat[] = {1,1,0.2};
		
		model = "\TZK_Model_4_0_3\T55_TZK.p3d";
		hiddenSelections[] = {pruh_FIA, tzk_tex_00,
			tex_ammobox_top.pac, tex_fueltank_top.pac, tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_bok.pac, tex_t55_kolo1.pac, tex_t55_kolo2.pac, tex_t55_predek.pac, tex_t55_spodek.pac, tex_t55_top.pac, tex_t55_vez_side.pac, tex_t55_zadek.pac, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t55vez_top.pac
				, tzk_tex_99
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T55.sqs}";
		};
	};
	class T55E_xj400: T55_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		weapons[] = {"Gun105","MachineGun7_6_xj400"};
		magazines[] = {"Heat105","Shell105","MachineGun7_6_xj400"};
		
		crew = "SoldierECrew";
		side = 0;
		displayName = "T55";
		
		nameSound = "t55";
		accuracy = 0.7;
		armor = 300;
		cost = 150000;
		type = 1;
		threat[] = {1,1,0.2};
		
		model = "\TZK_Model_4_0_3\T55_TZK.p3d";
		hiddenSelections[] = {pruh_FIA, tzk_tex_00,
			tex_ammobox_top.pac, tex_fueltank_top.pac, tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_bok.pac, tex_t55_kolo1.pac, tex_t55_kolo2.pac, tex_t55_predek.pac, tex_t55_spodek.pac, tex_t55_top.pac, tex_t55_vez_side.pac, tex_t55_zadek.pac, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t55vez_top.pac
				, tzk_tex_99
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T55.sqs}, _vehicle setObjectTexture [(typeOf _vehicle GetVehicleParamArray {hiddenSelections}) find {pruh_FIA}, {east_01.paa}];
		};
	};
	
// Howitzers
	// M109A6 from DKM
	class M109A6G_Base_xj400: M1Abrams_Base_xj400 {
		scope = private; vehicleClass = "TZK_Units_400";
	//	accuracy = 0.4; // Defined in concrete class valuing 0.7
		displayName = "M109A6-G"; nameSound = "Weapon"; side = 1; cost = 750000; type = "VArmor"; threat[] = {0.8,0.8,0.1};
		
		irScanRangeMax = 6000; maxSpeed = 60;
		laserScanner = 1; canfloat = 0;
		
		model = "\TZK_Model_4_0_0\M109A6_DKMM.p3d";
		hiddenSelections[] = {"vlam","clamp"};
		picture = "\TZK_Texture_4_0_0\icon\iM109A6G.paa";
		icon = "\TZK_Texture_4_0_0\icon\uiM109.paa";
		
		soundEngine[] = {"\TZK_Sounds_4_0_0\DKM\diesel.wss", 0.5, 1.2};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.01,1}; // Keep same as original M1A1 in OFP
		soundGear[] = {"\TZK_Sounds_4_0_0\COC\shift.wss",db-25,1};
		
	//	armor = 150;
		extCameraPosition[] = {0,2.5,-12};

		formationX = 30; // formation spacing
		formationZ = 40;

		getInRadius = 3.5;
		getInAction = "ManActGetInTank";
		getOutAction = "ManActGetOutTank";
		nightVision = 1;

		turnCoef = 5.000000;

		crew = "SoldierWCrew";
		driverAction = "ManActBMPDriverOut";
		gunnerAction = "ManActBMPGunnerOut";
		commanderAction = "ManActBMPCommander";
		driverInAction = "ManActBMPDriver";
		gunnerInAction = "ManActBMPGunner";
		commanderInAction = "ManActBMPCommanderOut";
		gunnerOpticsModel = "optika_tankw_auxiliary"; CommanderOpticsModel = "optika_tankw_auxiliary"; driverOpticsModel = "optika_tank_driver";
		gunnercansee = "1+4+8+16";
		drivercansee = "1+2+8+16";
		castdrivershadow = 1;
		castGunnerShadow = 1;
		castCommanderShadow = 1;
		forcehideDriver = 0;
		forceHideGunner = 0;
		forcehideCommander = 0;
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 155;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 110;
		};
		class HatchGunner {
			 selection = "poklop_gunner";
			 axis = "osa_poklop_gunner";
			 angle = 100;
		};
		class Turret {
			gunaxis = "OsaHlavne";
			turretaxis = "OsaVeze";
			soundServo[] = {"\TZK_Sounds_4_0_0\2S6\servo.ogg",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = +68;
			minTurn = -360;
			maxTurn = +360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class ComTurret {
			turretAxis = "comturAx";
			gunAxis = "comgunAx";
			soundServo[] = {"Vehicles\gun_elevate",db-70,1.2};
			gunBeg = "comgunB"; // currently ignored
			gunEnd = "comgunE";
			minElev = -4; maxElev = +20;
			minTurn = -360; maxTurn = +360;
			body = "cmdrturret";
			gun = "cmdrgun";
		};	
	};
	class M109A6G_xj400: M109A6G_Base_xj400 {	
		scope = protected; accuracy = 0.7;
		armor = 180;
		hiddenSelections[] = {
			"vlam","clamp", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6",  tzk_tex_00,
			tex_box.paa, tex_pal1.pac, tex_pal2.pac, tex_cog.paa
				, tzk_tex_99
		};
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d";
		weapons[] = {"Gun155_xj400", "MachineGun12_7_xj400"};
		magazines[] = {"HE155_0827_xj400", "MachineGun12_7_xj400"};
		
		class ComTurret {
		// Modified to rotate reasonable. The translation correcting in view commander(cargo) LOD is caculated by the center of ComTurret and OsaVelitele.
		// Coordinate(x,z): -0.898, 3.148; 0.912, 2.249. The translation of view cargo is hence(x,z) 1.810, -0.900
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate",db-70,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4; maxElev = +20;
			minTurn = -360; maxTurn = +360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
		// Animations for deployment and suspension
		class Animations {
			//suspension
			class suspension {
				type = "rotation";
				animperiod = .5;
				selection = "sus_F";
				axis = "osa_sus";
				angle0 = -0.1;
				angle1 = +0.1;
			};
			class backdoor {
				type = "rotation";
				animperiod = .5;
				selection = "backdoor";
				axis = "osa_bd";
				angle0 = 0;
				angle1 = 1.61;
			};
			class sidedoor: backdoor {
				selection = "sidedoor";
				axis = "osa_sd";
				angle0 = 0;
				angle1 = 3.1415;
			};
			//shovels
			class shovL {
				type = "rotation";
				selection = "shovL";
				axis = "osa_shov";
				angle0 = 0;
				angle1 = 2.8;
				animperiod = .7;	
			};
			class clamp {
				type = "rotation";
				selection = "clamp";
				axis = "osa_clamp";
				angle0 = 0;
				angle1 = 1.62;
				animperiod = 1.2;	
			};
			class shovR: shovL {
				selection = "shovR";
				axis = "osa_shov";
			};
			class BoxL: shovL {
				selection = "boxL";
				axis = "osa_boxL";
				angle0 = 0;
				angle1 = -3.1415;
				animperiod = 1;	
			};
			class BoxR: BoxL {
				selection = "boxR";
				axis = "osa_boxR";
			};

			class gunrec {
				type = "rotation";
				animperiod = 0.1;
				selection = "gunrec";
				axis = "osa_rec";
				angle0 = 0;
				angle1 = -0.020;
			};
		};
		class UserActions {
			class prepfire {
				displayName = "Take firing position";
				position = "osahlavne";
				radius = 5;
				condition = local this && "_x == {DeploySwitch_xj400}" count magazines this == 0;
				statement = "[this,1] exec {\TZK_Objects\Scripts\Deploy\M109A6G.sqs}";
			};
			class prepdrive {
				displayName = "Driving mode";
				position = "osahlavne";
				radius = 5;
				condition = local this && "_x == {DeploySwitch_xj400}" count magazines this > 0;
				statement = "[this,0] exec {\TZK_Objects\Scripts\Deploy\M109A6G.sqs}";
			};
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\M109A6G.sqs}; [_vehicle] exec {\TZK_Objects\Scripts\InitEventHandlers\M109A6G.sqs}";
		};
	};
	class M109A6G_Art_xj400: M109A6G_xj400 {
		displayName = "M109A6-G Art"; accuracy = 1000; // Unrecognizeable on appearance.
		irScanToEyeFactor = 1; // Allow Art Vehicles scan far.
	};
	// PLZ05 from PLA3.5
	class PLZ05_VME_Base_xj400: T72_Base_xj400 {
		scope = private; vehicleClass = "TZK_Units_400";
	//	accuracy = 0.4;
		displayName = "PLZ-05"; nameSound = "Tank"; side = 0; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		model = "\TZK_Model_4_0_0\PLZ05.p3d";
		hiddenSelections[] = {"n1", "n2", "n3", "zhijia", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"};
		picture = "\TZK_Texture_4_0_0\icon\iPLZ05.paa";
		
 		soundEngine[] = {"\TZK_Sounds_4_0_0\M1_Turbine.wss",0.031622775,1.1};
		soundEnviron[] = {"\TZK_Sounds_4_0_0\M1_Treads.wss",0.01,1};
		
		Maxspeed = 60; canfloat = 1; mapSize = 10;
		irScanToEyeFactor = 0.616;
		
		gunnerInAction = "ManActT80Gunner";
		driverInAction = "ManActT55Driver";
		commanderInAction = "ManActT80Commander";
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d";

		class GunFire: WeaponFireGun {
			cloudletDuration = 0.4;
			cloudletAnimPeriod = 1.50;
			cloudletSize = 6.0;
			cloudletColor[] = {1, 1, 1, 1};
			size = 9;
		};
		class GunClouds: WeaponCloudsGun {
			cloudletDuration = 0.6;
			cloudletAnimPeriod = 1.50;
			cloudletSize = 6.0;
			cloudletColor[] = {1, 1, 1, 1};
			size = 9;
			sourceSize = 0.5;
		};
		
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = 100;
		};
		class HatchCommander {
			selection = "poklop_Commander";
			axis = "osa_poklop_Commander";
			angle = 165;
		};
		class Hatchdriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 100;
		};
		
		class TurretBase {
			gunAxis = "osahlavne";
			turretAxis = "osaveze";
			soundServo[] = {"\TZK_Sounds_4_0_0\VME\Turret.wss",0.0316228,1};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			
			body = "OtocVez";
			gun = "OtocHlaven";

			minElev = -3;
			maxElev = +65;
			minTurn = -360;
			maxTurn = +360;
		};
		class Turret: TurretBase {};
	};
	class PLZ05_TZK_xj400: PLZ05_VME_Base_xj400 {
		scope = protected; accuracy = 0.7;
		armor = 180;
		
		weapons[] = {"Gun155_xj400", "MachineGun12_7_xj400"};
		magazines[] = {"HE155_0930_xj400", "MachineGun12_7_xj400"};
		
		class Animations {
			class suspension {
				type = "rotation";
				animperiod = 0.5;
				selection = "sus_F";
				axis = "osa_sus";
				angle0 = -0.1;
				angle1 = 0.1;
			};
			class gunrec {
				type = "rotation";
				animperiod = 0.1;
				selection = "gunrec";
				axis = "osa_rec";
				angle0 = 0;
				angle1 = -0.020;
			};
			class ZhuChuan {
				type = "rotation";
				animperiod = 3.50;
				selection = "zhuchuan";
				axis = "osa_zhuchuan";
				angle0 = 0;
				angle1 = -2.67035;
			};
		};
		class UserActions {
			class prepfire {
				displayName = "Take Firing Position";
				position = "osahlavne";
				radius = 5;
				condition = local this && "_x == {DeploySwitch_xj400}" count magazines this == 0;
				statement = "[this,1] exec {\TZK_Objects\Scripts\Deploy\PLZ05.sqs}";
			};
			class prepdrive {
				displayName = "Driving Mode";
				position = "osahlavne";
				radius = 5;
				condition = local this && "_x == {DeploySwitch_xj400}" count magazines this > 0;
				statement = "[this,0] exec {\TZK_Objects\Scripts\Deploy\PLZ05.sqs}";
			};
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle] exec {\TZK_Objects\Scripts\InitEventHandlers\PLZ05.sqs}; [_vehicle, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {n}, {0}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs}";
		};
	};
	class PLZ05_Art_xj400: PLZ05_TZK_xj400 {
		displayName = "PLZ-05 Art"; accuracy = 1000; // Unrecognizeable on appearance.
		irScanToEyeFactor = 1; // Allow Art Vehicles scan far.
	};


// Rocket Vehicle
	class TOS1_TZK_xj400: T72_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "TOS-1 Buratino"; nameSound = "tank"; side = 0; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		picture = "\TZK_Texture_4_0_0\icon\iTOS_1.paa";
		icon = "\TZK_Texture_4_0_0\icon\uiMLRS.paa";
		model = "\TZK_Model_4_0_0\TOS1_DKMM.p3d";
		hiddenSelections[] ={"n1", "n2", "n3", "lidF","lidR", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6", "m01","m02","m03","m04","m05","m06","m07","m08","m09","m10","m11","m12","m13","m14","m15","m16","m17","m18","m19","m20","m21","m22","m23","m24","m25","m26","m27","m28","m29","m30"};
		
		armor = 250;
		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		laserscanner = 1;
		
		class Animations {
			class STL {
				type = "rotation";
				animperiod = 0.9;
				selection = "STL";
				axis = "osa_stl";
				angle0 = 0;	
				angle1 = -1.1; 	
			};
			class STR: Stl {
				selection = "STR";
				axis = "osa_str";
				angle0 = 0;	
				angle1 = 1.1; 	
			};
			class STF: Stl {
				selection = "STF";
				axis = "osa_stf";
				angle0 = 0;	
				angle1 = 1.1; 	
			};
			class suspension: STL {
				animperiod = 0.5;
				selection = "sus_F";
				axis = "osa_sus";
				angle0 = -0.1;
				angle1 = +0.1; 	
			};
		};
		class UserActions {
			class prepfire {
				displayName = "Take Firing Position";
				position = "osahlavne";
				radius = 5;
				condition = local this && "_x == {DeploySwitch_xj400}" count magazines this == 0;
				statement = "[this,1] exec {\TZK_Objects\Scripts\Deploy\TOS1.sqs}";
			};
			class prepdrive {
				displayName = "Driving Mode";
				position = "osahlavne";
				radius = 5;
				condition = local this && "_x == {DeploySwitch_xj400}" count magazines this > 0;
				statement = "[this,0] exec {\TZK_Objects\Scripts\Deploy\TOS1.sqs}";
			};
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle] exec {\TZK_Objects\Scripts\InitEventHandlers\TOS1.sqs}";
		//	Fired = "_this exec {\TZK_Objects\Scripts\Fired_EH\TOS1.sqs}";
			Killed = "_this exec {\TZK_Objects\Scripts\Killed_EH\DestroyAllSelections.sqs}";
		};
		
		weapons[] = {"FAE220Launcher_xj400", "NoGun_xj400"};
		magazines[] = {"FAE220_DKMM_0500_xj400"};
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d"; forceHideGunner = 1;
		
		class ViewOptics {
			initAngleX = 0; minAngleX = -30; maxAngleX = +30;
			initAngleY = 0; minAngleY = -100; maxAngleY = +100;
			initFov = 0.7; minFov = 0.06; maxFov = 0.85;
		};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"\TZK_Sounds_4_0_0\2S6\servo.ogg",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -1;
			maxElev = +42;
			minTurn = -360;
			maxTurn = +360; 	
			body = "OtocVez";
			gun = "OtocHlaven";
		};

		class GunFire: WeaponFireGun { size = 0; };
		class GunClouds: WeaponCloudsGun { size = 0; }; // Rocket Launcher using EH to create effects.
	};
	class M270_M29064_xj400: M1Abrams_Base_xj400 {
	//lowered db values from 250 so they'd sound halfway decent
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.4;
		displayName = "M270 MLRS"; nameSound = "Tank"; side = 1; cost = 600000; type = 1; threat[] = {0.9, 0.9, 0.1};
		
		picture = "\TZK_Texture_4_0_0\icon\iM270.paa";
		icon = "\TZK_Texture_4_0_0\icon\uiMLRS.paa";
		model = "\TZK_Model_4_0_0\M270_m29064.p3d";
		hiddenSelections[] = {
			"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6", "m01","m02","m03","m04","m05","m06","m07","m08","m09","m10","m11","m12",  tzk_tex_00,
			tex_btex.paa, tex_btex2.paa, tex_cover.paa, tex_down.pac, tex_rwkolo.paa, tex_side_l.paa, tex_side_r.paa, tex_t55zub.paa, tex_t72_3.paa, tex_top.paa
				, tzk_tex_99
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\M270.sqs}; [_vehicle] exec {\TZK_Objects\Scripts\InitEventHandlers\M270.sqs}";
		//	Fired = "_this exec {\TZK_Objects\Scripts\Fired_EH\M270.sqs}";
			Killed = "_this exec {\TZK_Objects\Scripts\Killed_EH\DestroyAllSelections.sqs}";
		};
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d";
		armor = 250;
		class GunFire: WeaponFireGun { size = 0; };
		class GunClouds: WeaponCloudsGun { size = 0; }; // Rocket Launcher using EH to create effects.
		
		// tac: vehicle crew can't hear, and no scanner
		commanderCanSee = "31-1-8";
		gunnerCanSee = "31-1-8";
		driverCanSee = "31-1-8";
		commanderOpticsModel = "optika_tankw_auxiliary";
		commanderInAction = "ManActBMPCommander";
		forceHideCommander = true;
		
		driverAction = "ManActM113DriverOut";
		driverInAction = "ManActM113Driver";
		forceHideDriver = false;		

		outGunnerMayFire = false;		
		gunnerInAction = "ManActBMPGunner";
		forceHideGunner = true;
		
		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		
		weapons[] = {"M26Launcher_xj400"};
		magazines[] = {"M26_COC_0600_xj400"};


		soundEngine[] = {"Vehicles\ModernIdle1",0.031622775,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.01,1};
		soundCrash[] = {"Vehicles\crash_small2",0.3162278,1};
		soundGear[] = {"Vehicles\Gear_Trans1",0.0031623,1};
		soundDammage[] = {"Objects\alarm_loop1",0.01,1};
		soundLandCrash[] = {"Explosions\intoground",0.3162278,1};
		

		extCameraPosition[] = {0,2.5,-12};

		// general abilities, costs, cargo		
		
		maxSpeed = 70;
		wheelCircumference = 2.82600;
		turnCoef = 6.000000;
		fuelCapacity = 675;
		
		laserScanner = 1;
		preferRoads = 0;
		nightVision = 1;
		
		typicalCargo[] = {};
		transportSoldier = 0;
		class TransportMagazines {};

		class IndicatorSpeed {
			selection = "ukaz_mph";
			axis = "osa_mph";
			angle = 250;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = 315;
			min = 0;
			max = 1;
		};

		class TurretBase {	
			soundServo[] = {"\TZK_Sounds_4_0_0\COC\Turret.wss",0.0316228,1};
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = 0;
			maxElev = 60;
			minTurn = -180;
			maxTurn = 180;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = 0;
			maxElev = 25;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
			soundServo[] = {"Vehicles\gun_elevate",db-70,1.2};
		};
 	};

	class 2S6_DKM_xj400: T72_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1; camouflage = 5; audible = 15; sensitivity = 3.5; visibleNightLightsOn = 50;
		displayName = "2S6M"; nameSound = "tank"; side = 0; cost = 900000; type = 1; threat[] = {1, 1, 1};
		
		picture = "\TZK_Texture_4_0_0\icon\i2S6.paa"; icon = "antiAC.paa";
		model = "\TZK_Model_4_0_0\2s6c_DKMM.p3d";
		hiddenSelections[] = {
			"n1","n2","n3","nav3", "nav4", "nav1", "nav2", "nav5", "ind_hr", "ind_vr", "radarleft","radarright","radarfold", tzk_tex_00,
			tex_tungt1.paa, tex_tungt2.paa, tex_2s6.paa
				, tzk_tex_99,
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\2S6.sqs}; [_vehicle, {C}] exec {\TZK_Objects\Scripts\InitEventHandlers\2S6.sqs}";
		//	Fired = "_this exec {\TZK_Objects\Scripts\Fired_EH\2S6.sqs}";
		};
		armor = 90; armorStructural = 4;
		fuelCapacity = 375;

		weapons[] = {"Tunguska_30mm_DKM_xj400", "9M311_26_xj400"};
		magazines[] = {"Tunguska_30mm_DKM_xj400", "9M311_26_xj400"};

		maxSpeed = 65;

		soundGear[] = {"\TZK_Sounds_4_0_0\COC\shift.wss",db-25,1};
		soundEngine[] = {"\TZK_Sounds_4_0_0\2S6\tungdies.wss",0.031622775,1.35};
		
		class DKMM_tung_WeaponClouds {
			cloudletDuration = 2.0;		
			cloudletAnimPeriod = 0.5; 	
			cloudletSize = 1.0;
			cloudletAlpha = 0.4;
			cloudletGrowUp = 0.5;		
			cloudletFadeIn = 0.03;		
			cloudletFadeOut = 1;		
			cloudletAccZ = 3;
			cloudletMinZSpeed = 2.0;
			cloudletMaxZSpeed = 2.4;
			cloudletAccY = 0.1;		
			cloudletMinYSpeed = 0.05;	
			cloudletMaxYSpeed = 0.2;	
			cloudletShape = "cl_basic";
			cloudletColor[] = {0.8, 0.8, 0.8, 0.6; 0.9, 0.9, 0.9, 0.5};
			interval = 0.05;
			size = 2;
			sourceSize = 0.5;
			timeToLive = 5; //0.5

			initT = 0.2;
			deltaT = 0.4;
			class Table {
				class T0 {
					maxT = 0; color[] = {0.8, 0.8, 0.8, 0.6};
				};
			};
		};
		class MGunClouds : DKMM_tung_WeaponClouds {};
		
		hideWeaponsDriver = 1; hideWeaponsgunner = 1; hideWeaponsCommander = 1;
		wheelcircumference = 5.1;
		damperForce = 8.5;
		damperSize = 0.45;
		turnCoef = 10;
		extCameraPosition[] = {0,2.5,-12};

		irTarget = 1;
		irScanGround = 0; irScanToEyeFactor = 2;
		preferRoads = 0;
		nightVision = 1;
		getinradius = 3.5;

		formationX = 40;
		formationZ = 40;
		formationTime = 10;
		
		typicalCargo[] = {};
		transportSoldier = 0;
		class TransportMagazines {};

	// crew, weapons, armor
		commanderOpticsModel = "optika_tanke_auxiliary";
		commanderAction = "manactcargo";
		commanderInAction = "ManActM1A1Commander";

		driverAction = "ManActM1A1Driver";
		driverInAction = "ManActM1A1Driver";
		forcehidedriver = 0;
				
		gunnerCanSee = "1+4+8+16";
		gunnerOpticsModel = "optika_zsu_gunner";
		gunnerInAction = "ManActM1A1Gunner";
		forceHideGunner = 0;

		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 30;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = 102;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 102;
		};

		class IndicatorSpeed {
			selection = "ukaz_mph";
			axis = "osa_mph";
			angle = 250;
			min = 0;
			max = "100 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = 315;
			min = 0;
			max = 1;
		};
		class IndicatorTurret {
			selection = "ukazsmer";
			axis = "osa_ukazsmer";
			angle = 360*4;
			min = -3.1415926;
			max = +3.1415926;
		};
		class IndicatorRadar {
			selection = "ukaz_radar";
			axis = "osa_radar";
			angle = 360;
			min = 0;
			max = 1;
		};
		class TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"Vehicles\gun_elevate", db-30, 1.0};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			
		  	minElev = -6;maxElev = 87;
		  	minTurn = -360;maxTurn = 360;

		  	body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: turretbase {
			soundServo[] = {"\TZK_Sounds_4_0_0\2S6\servo.ogg",0.0316228,1};
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
		  	gunBeg = "usti hlavne";
		  	gunEnd = "konec hlavne";
		  	body = "OtocVez";
		  	gun = "OtocHlaven";
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = +35;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
			soundServo[] = {"Vehicles\gun_elevate", db-70, 1.2};
		};

		class ViewGunner {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -180;
			maxAngleY = 180;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		
		class Animations {
			class rot_radar {
				type = rotation;
			//	animperiod = 2;
				animperiod = 2*7200;
				selection = scanrad;
				axis= osa_SR;
				angle0= 0;
			//	angle1= -12.566;
				angle1= -12.566*7200;
			};
			class rot_radar2: rot_radar {
				selection = scanradR;
				axis= osa_SR;
			};
			class fold_radar {
				type = rotation;
				animperiod = 4;
				selection = scanradF;
				axis= osa_SRF;
				angle0= 0;
				angle1= 1.57;
			};
			//map y axis
			class Y_ind {
				type = rotation;
				animperiod = 0.1;
				selection = ind_hr;
				axis = osa_ind_hr;
				angle0= .21;	
				angle1= -.21; 	
			};
			//map x axis
			class X_ind: Y_ind {
				selection = ind_vr;
				axis = osa_ind_vr;
				angle0= -.21;	
				angle1= .21;	
			};
		};

	/*	class ReloadAnimations {
		// Abandoned. Each class of ReloadAnimations must use distinguish weapons, otherwise only the first class of one weapon will work.
			class Gatling1 {
				weapon = "Tunguska_30mm_DKM_xj400";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 1904;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling 1";
				begin = "osa_gat1_usti";
				end = "osa_gat1_konec";
			};
			class Gatling2: Gatling1 {
				selection = "gatling 2";
				begin = "osa_gat2_usti";
				end = "osa_gat2_konec";
			};
		};	*/

  	};
/*	class 2S6D_DKM_xj400: 2S6C_DKM_xj400 {
		displayName = "2S6M-D";
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {D}] exec {\TZK_Objects\Scripts\texture\2S6.sqs}; [_vehicle, {D}] exec {\TZK_Objects\Scripts\InitEventHandlers\2S6.sqs}";
		};
	};
	class 2S6G_DKM_xj400: 2S6C_DKM_xj400 {
		displayName = "2S6M-G";
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {G}] exec {\TZK_Objects\Scripts\texture\2S6.sqs}; [_vehicle, {G}] exec {\TZK_Objects\Scripts\InitEventHandlers\2S6.sqs}";
		};
	};
	class 2S6W_DKM_xj400: 2S6C_DKM_xj400 {
		displayName = "2S6M-W";
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {W}] exec {\TZK_Objects\Scripts\texture\2S6.sqs}; [_vehicle, {W}] exec {\TZK_Objects\Scripts\InitEventHandlers\2S6.sqs}";
		};
	};
*/
	class ZSU_xj400: ZSU {
		scope = protected; vehicleClass = "TZK_Units_400";

		class IndicatorTurret {
			selection = "ukazsmer";
			axis = "osa_ukazsmer";
			angle = 360*4;
			min = -3.1415926;
			max = +3.1415926;
		};
		class IndicatorRadar {
			selection = "ukaz_radar";
			axis = "osa_radar";
			angle = 360;
			min = 0;
			max = 1;
		};
		class ViewGunner {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -180;
			maxAngleY = 180;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
	//	model = "\TZK_Model_4_0_1\ZSU_TZK.p3d"; // Modified to fit multiple texture.
		model = "\TZK_Model_4_0_3\ZSU_TZK.p3d"; // Modified again to make radar "rorate".
		hiddenSelections[] = {
			tzk_tex_00,
			tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t72_hlaven_s.pac, tex_ural_kabok2.pac, tex_zsu_back2.pac, tex_zsu_back2_lod.pac, tex_zsu_front2.pac, tex_zsu_front2_lod.pac, tex_zsu_hydra_side.pac, tex_zsu_hydraulika.paa, tex_zsu_kolo_hnac.pac, tex_zsu_kolo_new.pac, tex_zsu_kolo_zuby.pac, tex_zsu_pasy_side2.pac, tex_zsu_plech.pac, tex_zsu_radar_side.pac, tex_zsu_radar_top2.pac, tex_zsu_refl_frt.paa, tex_zsu_side2.pac, tex_zsu_spod.pac, tex_zsu_spod_lod.pac, tex_zsu_top.pac, tex_zsu_vez_pruh.pac, tex_zsu_vez_top.pac
			,  tzk_tex_99
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\ZSU.sqs};
		};
		class Animations {
			class rot_radar {
				type = rotation;
				animperiod = 2*7200;
				selection = "radar0";
				axis = "osa_radar0";
				angle0= 0;
				angle1= -12.566*7200;
			};
		};
	};
	class ZSU_MNF_xj400: ZSU_xj400 {
		scope = protected;
		// weapons[] = {RedTop_26_xj400};
		// magazines[] = {RedTop_26_xj400};
		
		soundEnviron[] = {"\TZK_Sounds_4_0_0\MNF_ZSU\OldRolling_Treads1.ogg", 1.5, 1};
		soundEngine[] = {"\TZK_Sounds_4_0_0\MNF_ZSU\shilkaeng.wss", 5, 1.3};
		forceHideGunner = 1;
		forceHideDriver = 1;
 		commanderAction = "ManActRUS_ZSUCommanderOut";
		cargoAction[] = {"ManActRUS_zsuproxy1","ManActRUS_zsuproxy2","ManActRUS_zsuproxy3","ManActRUS_zsuproxy4"};
		transportSoldier = 4;
		class IndicatorTurret {
			selection = "ukazsmer";
			axis = "osa_ukazsmer";
			angle = 360*4;
			min = -3.1415926;
			max = +3.1415926;
		};

		class Animations {
		/*	class SetNumber {
				type = "rotation";
				animperiod = 0.5;
				selection = "useract";
				axis = "osa_useract";
				angle0 = 0;
				angle1 = 0;
			};	*/
			class Podveska {
				type = "rotation";
				animperiod = 0.5;
				selection = "podv";
				axis = "osa_sus";
				angle0 = -0.04;
				angle1 = 0.04;
			};
			class Trigg_Radar {
				type = rotation;
				animperiod = 1;
				selection = "trigg";
				axis = "osa_trigg";
				angle0= 0;
				angle1= 1.82;
			};
			class Pod_Radar {
				type = rotation;
				animperiod = 2;
				selection = "R1";
				axis = "osa_R1";
				angle0= 0;
				angle1= 1.82;
			};
		//	class Rotat_Radar {
			class rot_radar {
				type = rotation;
			//	animperiod = 3;
				animperiod = 2*7200;
				selection = "R2";
				axis = "osa_R2";
				angle0= 0;
			//	angle1= 3.7;
				angle1= -12.566*7200;
			};
		};
		model = "\TZK_Model_4_0_0\ZSU_MNF.p3d"; // Modified to fit multiple texture.
		hiddenSelections[] = {
		//	"n1","n2","n3","pod_1","pod_2","pod_3","rot_1","rot_2","rot_3","brevno","radar",  tzk_tex_00,  // Completed info for radar controlling.
			"n1","n2","n3","pod_1","pod_2","pod_3","brevno",  tzk_tex_00,
			tex_1.paa, tex_11.paa, tex_2.paa, tex_3.paa, tex_4.paa, tex_5.paa, tex_6.paa, tex_8.paa, tex_col1.paa,
			tex_det.paa, tex_far.paa, tex_track.paa, tex_lr\1lr.paa, tex_lr\2lr.paa, tex_lr\3lr.paa, tex_lr\4lr.paa, tex_lr\5lr.paa, tex_lr\6lr.paa,
			tex_col1.paa, tex_det.paa, tex_far.paa, tex_track.paa
			,  tzk_tex_99
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\ZSU_MNF.sqs}, _vehicle animate [{Podveska}, 0.5], [_vehicle, {\TZK_Texture_4_0_0\MNF_ZSU\rnums\res\}, {n}, {}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs};
			//Engine = "if (_this select 1) then {(_this select 0) say ""ICP_ZSUEngineOnSound_xj400""} else {(_this select 0) say ""ICP_ZSUEngineOffSound_xj400""}";
		};
	};

// Structures. Actually defending structures are kinda tanks as well (using same simulation and "face property").
	// M252 from "COC" and refer to "PackMortar".
	class M252Mortar_TZK_xj400: M2StaticMG {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.11; // The big enough value which is less than tank's accuracy.
		displayName = "Mortar 60mm"; nameSound = "Weapon"; side = 1; cost = 100000; type = 0; threat[] = {1, 1, 0.5};
		
		model = "\TZK_Objects\Model\Mortar81_TZK.p3d";
		picture = "\TZK_Objects\Texture\icon\iM252.paa";
		icon = "\TZK_Objects\Texture\icon\uiMortar.paa";
		armor = 300; armorStructural = 1;
		
		gunnerOpticsModel = "\TZK_Objects\Model\Opt\ViewGunner_Grad.p3d";
		hiddenSelections[] = {"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"};
		weapons[] = {"M252Launcher"};
		magazines[] = {"Mortar_0120_xj400"};
		gunnerAction = "ManActGunner_SitDown";
		gunnerInAction = "ManActGunner_SitDown";
		
		hideProxyInCombat = false;
		
		transportSoldier = 0;
		transportAmmo = 0;
		// tac: won't show up as M2
		typicalCargo[] = {};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		getInRadius = 5;
		class GunFire: WeaponFireGun{};
		class GunClouds: CoC_81mortarClouds {};
		class MGunFire: WeaponFireMGun {};
		class MGunClouds: WeaponCloudsMGun {};

		crew = "SoldierWB";
		hasDriver = 0; hasGunner = 1; hasCommander = 0;
		castGunnerShadow = 1; ejectDeadGunner = 1;
		unitInfoType = "UnitInfoSoldier";
		formationX = 15;
		formationZ = 0;
		hideUnitInfo = 1;
		irScanRangeMin = 0;
		irScanRangeMax = 0;
		irTarget = 1;
		maxSpeed = 1;
		fuelCapacity = 0;
		
		gunnerCanSee = "2+8"; commanderCanSee = "2+8";
		
		extCameraPosition[] = {0,0.800000,-5};
		class TransportMagazines {};
		getInAction = "ManActGetInCar";
		getOutAction = "ManActGetOutCar";

		class TurretBase {};
		class Turret: TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -2.5
			maxElev = +80;
			minTurn = -360;
			maxTurn = +360;
			body = "OtocVez";
			gun = "OtocHlaven";
			soundServo[] = {"\TZK_Objects\Sound\Pack_Mortar\mortar_move.ogg",0.3,0.7}; // Use PackMortar sound.
		};
		class ViewOpticsBase {};
		class ViewOptics: ViewOpticsBase { // A better design fits graduations.
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewGunnerBase {};
		class ViewGunner {
			initAngleX = 5; minAngleX = -30; maxAngleX = +70;
			initAngleY = 0; minAngleY = -100; maxAngleY = +100;
			initFov = 0.7; minFov = 0.42; maxFov = 0.85;
		};
		class Reflectors {
			class Left {
				color[] = {0.0, 0.0, 0.0, 0.0};
				ambient[] = {0.0, 0.0, 0.0, 0.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 00.0;
				brightness = 0.00;
			};
			class Right {
				color[] = {0.0, 0.0, 0.0, 0.0};
				ambient[] = {0.0, 0.0, 0.0, 0.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.0;
				brightness = 0.00;
			};
		};
	};
	class M252Mortar_TZK_E_xj400: M252Mortar_TZK_xj400 { side = 0; };

	class m119_xj400: M2StaticMG {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.4;
		displayName = "M119 105mm Howitzer"; nameSound = "Weapon"; side = 1; cost = 15000; type = 1; threat[] = {0.9, 0.2, 0.1};
		
		mapSize = 10;
		picture = "\TZK_Texture_4_0_0\icon\im119.paa";
		icon = "\TZK_Texture_4_0_0\icon\uiM101.paa";
		model = "\TZK_Model_4_0_0\m119.p3d";
		
		armor = 60; armorStructural = 10.0;
		irTarget = 1;
		
		hiddenSelections[] = {"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"};
		weapons[] = {"Gun105_xj400"};
		magazines[] = {"HE105_0712_xj400"};
		getInRadius = 5;

		maxspeed = 1;
		sensitivity = 3;
		hasCommander = 0; hasGunner = 1; hasDriver = 0;
		castGunnerShadow = 1;
		
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d";
		commanderOpticsModel = "optika_dalekohled";
		gunnerAction = "ManActM2Gunner";
		gunnerinAction = "ManActM2Gunner";

		class Turret {
			gunAxis = "osahlavne";
			turretAxis = "osaveze";
			soundServo[] = {Vehicles\gun_elevate2,db-30,1.0};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			
			body = "OtocVez";
			gun = "OtocHlaven";

			minElev = -5;
			maxElev = +70; // +55
			minTurn = -360;// +-30
			maxTurn = +360;
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {Objects\noise,db-160,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = 15;
			minTurn = -40;
			maxTurn = 40;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};

		class GunFire : WeaponFireGun {
			cloudletDuration = 0.4;		
			cloudletAnimPeriod = 1.50;
			cloudletSize = 6.0;			
			cloudletColor[] = {1, 1, 1, 1};			
			size = 9;			
		};
		class GunClouds : WeaponCloudsGun {
			cloudletDuration = 0.6;
			cloudletAnimPeriod = 1.50;
			cloudletSize = 6.0;			
			cloudletColor[] = {1, 1, 1, 1};
			size = 9;
			sourceSize = 0.5;			
		};
	};
	class D30_xj400: M2StaticMG {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.4;
		displayName = "D-30A"; nameSound = "Weapon"; side = 0; cost = 20000; type = 1; threat[] = {0.8, 0.6, 0.1};
		
		picture = "\TZK_Texture_4_0_0\icon\iD30A.paa";
		icon = "\TZK_Texture_4_0_0\icon\uiM101.paa";
		model = "\TZK_Model_4_0_0\D30.p3d";
		
		armor = 50; armorStructural = 5;
		irTarget = 1;
		crew = "SoldierEB";

		hiddenSelections[] = {"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"};
		weapons[] = {"Gun122_xj400"};
		magazines[] = {"HE122_0690_xj400"};
		
		maxspeed = 0;

		sensitivity = 0.8;
    	camouflage = 3;

		hideUnitInfo = 0;
		nightVision = 0;

		insideSoundCoef = 1.0;
		// getInRadius = 2.5;
		getInRadius = 5;

		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d";
		commanderOpticsModel = "optika_dalekohled";

		GunnerOpticsColor[] = {0, 0, 0, 1};
		CommanderOpticsColor[] = {0, 0, 0, 1};

		unitInfoType = "unitinfosoldier";

		GunnerCanSee = "2+4+8+16";
		CommanderCanSee = "2+4+8+16";

		hideProxyInCombat = 0;
		viewGunnerInExternal = 1;
		viewcommanderInExternal = 1;

		hasCommander = 0; hasGunner = 1; hasDriver = 0;
		ejectDeadGunner = 1;
		outGunnerMayFire = 1;
		castGunnerShadow = 1;
		forceHideGunner = "false";
		hideWeaponsGunner = 1;

		commanderAction = "ManActStandToBinocStand";
		commanderInAction = "ManActStandToBinocStand";

		gunnerAction = "ManActm2Gunner";
		gunnerInAction = "ManActm2Gunner";
		forceHideCommander = "false";
		hideWeaponsCommander = 0;
		ejectDeadCommander = 1;
		castCommanderShadow = 1;

		secondaryExplosion = 0;

		class Turret {
			gunAxis = "osahlavne";
			turretAxis = "osaveze";
			soundServo[] = {Vehicles\gun_elevate2,db-30,1.0};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			
			body = "OtocVez";
			gun = "OtocHlaven";

			minElev = -7;
			maxElev = +70;
			minTurn = -360;
			maxTurn = +360;
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate2",0.000316,1.200000};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = 20;
			minTurn = -30;
			maxTurn = 60;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
	};

	// M2 MG
	class M2StaticMG_xj400: M2StaticMG {
		scope = protected; vehicleClass = "TZK_Units_400";
		displayName = "Static MG 12.7mm"
		side = TCivilian;
		cost = 100000;
		accuracy = 0.10; // The big enough value which is less than tank's accuracy.
		
		secondaryExplosion = 1;
		weapons[] = {StaticMG_12mm7_xj400};
		magazines[] = {
			Mag_12mm7_100_xj400,
			Mag_12mm7_100_xj400,
			Mag_12mm7_100_xj400,
			Mag_12mm7_100_xj400,
			Mag_12mm7_100_xj400,
			Mag_12mm7_100_xj400,
			Mag_12mm7_100_xj400,
			Mag_12mm7_100_xj400,
			Mag_12mm7_100_xj400,
			Mag_12mm7_100_xj400,
		};
		threat[] = {1, 0.5, 1};
		// hideUnitInfo = true;
	};
	class M2StaticMG_W_xj400: M2StaticMG_xj400 {
		displayName = "Static MG 12.7mm West";
		side = TWest;
		accuracy = 0.11; // The big enough value which is less than tank's accuracy.
	};
	class M2StaticMG_E_xj400: M2StaticMG_xj400 {
		displayName = "Static MG 12.7mm East";
		side = TEast; crew = "SoldierE";
		accuracy = 0.11; // The big enough value which is less than tank's accuracy.
	};

	// M46 from "DKMM".
	class M46_W_xj400: M2StaticMG {
		scope = protected;
		side = TWest;
		displayName = "M46 Fieldgun"; vehicleClass = "TZK_Units_400";
		nameSound = "weapon"; cost = 500000; armor = 110; armorStructural = 1;
		picture = "\TZK_Texture_4_0_0\icon\im46.paa"; // For vehicle the picture is same as uiPicture of weapons.
		icon = "\TZK_Texture_4_0_0\icon\uim46.paa";
		
		model = "\TZK_Model_4_0_0\M46_DKMM.p3d";
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d";
		hiddenSelections[] = {"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"};

		weapons[] = {"Gun130_xj400"};
		magazines[] = {"AP130_xj400","HE130_xj400"};
		
		insidesoundcoef = 1;
		type = "Varmor";
		camouflage = 3.1; // Tank is 8, truck is 4, soldier(except sniper/saboteur) is 1. The green M46 use 3.1 in DKM mod.
		threat[] = {0.9,0.95,0.05};
		extCameraPosition[] = {0,2.5,-12};
		gunnerCanSee = "2 + 4 + 8 + 16";
		
		irTarget = 1;
		accuracy = 0.11; // The big enough value which is less than tank's accuracy, 0.12
		crew = "SoldierWB";
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 0.616; irScanGround = 1; // Standard radar setting.
		
		getInRadius = 3.0;
		unitInfoType = "UnitInfoSoldier";
		hideUnitInfo = 0;
		nightVision = 1;
		outGunnerMayFire = 1;
		viewGunnerInExternal = 1;
		gunnerAction = "ManActGunner_Crouch";
		gunnerInAction = "ManActGunner_Crouch";
		castGunnerShadow = 1;
		
		gunnerhiddenwanted = 0;
		class Reflectors {};
		class HitHull {
			armor = 0.4;
			material = 50;
			name = "hull";
			passThrough = 1;
		};
		class HitTurret {
			armor = 0.9;
			material = 51;
			name = "turet";
			passThrough = 1;
		};
		class HitGun {
			armor = 0.75;
			material = 52;
			name = "gun";
			passThrough = 1;
		};
		armorHull = 0.4;
		armorTurret = 0.2;
		armorGun = 0.2;
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -10;
			maxElev = "+20";
			minTurn = -30;
			maxTurn = "+30";
			soundservo[] = {};
			body = "OtocVez";
			gun = "OtocHlaven";
		};

	};
	class M46_E_xj400: M46_W_xj400 {
		side = TEast; crew = "SoldierEB";
	};
	class M46_W_Art_xj400: M46_W_xj400 {
		displayName = "M46 Art"; accuracy = 1000; irScanToEyeFactor = 1;
	};
	class M46_E_Art_xj400: M46_E_xj400 {
		// Since wish to use "accuracy = 1000", this unit can't inherit from M46_W_Art_xj400 whose side is west.
		displayName = "M46 Art"; accuracy = 1000; irScanToEyeFactor = 1;
	};

	class Target_TZK_xj400: HeliH {
		model = "\TZK_Objects\Model\Target_TZK.p3d";
		displayName = "Target_TZK";
		vehicleClass = "TZK_Units_400";
		icon = "heli_h";
		nameSound = "helipad";
		accuracy = 0.3;
	};
/*	// Pack Mortar. Abandoned for its gun has an elevation and thus require more graduations.
	class Mortar5_Pack_Base_xj400: M2StaticMG {
		scope = private;
		side = TWest;
		displayName = "Mortar 60mm"; vehicleClass = "TZK_Units_400";
		nameSound = "weapon"; cost = 500000; armor = 100; armorStructural = 1;
		picture = "\TZK_Texture_4_0_0\icon\iMortar60.paa"; // For vehicle the picture is same as uiPicture of weapons. Use picture from CoC.
		icon = "\TZK_Texture_4_0_0\icon\uiMortar.paa";
		model = "\TZK_Model_4_0_0\Mortar_Pack.p3d";
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\optika_MRT1.p3d"; gunnerOpticsColor[] = {0.91,0.23,0.23,0.9};
		
		weapons[] = {"Mortar_0200_xj400"};
		magazines[] = {"Mortar_0200_xj400", "Mortar_0200_xj400", "Mortar_0200_xj400", "Mortar_0200_xj400", "Mortar_0200_xj400", "Mortar_0200_xj400", "Mortar_0200_xj400", "Mortar_0200_xj400", "Mortar_0200_xj400", "Mortar_0200_xj400"};
		

		irTarget = 1; // lock-able in irScan system.
		accuracy = 0.11; // The big enough value which is less than tank's accuracy, 0.12
		sensitivity = 1; // No modification.
		crew = "SoldierWB";
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 0.616; irScanGround = 1; // Standard radar setting.
		hasCommander = 0; // Not allow a structure with commander in MP game. It is about bug with commander and local.
		threat[] = {1.0, 0.5, 0.1};
		
        gunnerAction = "ManActGunner_Crouch";
		gunnerInAction = "ManActGunner_Crouch";
		class GunFire: WeaponCloudsMGun{};
		class GunClouds: mortar1Clouds {};
		class MGunFire: WeaponFireMGun {};
		class MGunClouds: WeaponCloudsMGun {};
		class Turret {
			gunAxis = "osahlavne";
			turretAxis = "osaveze";
			soundServo[] = {"\TZK_Objects\Sound\Pack_Mortar\mortar_move.ogg",0.3,0.7};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
		//	minElev = -10;
			minElev = -60; // Need a negative small enough minElev parameter to shoot high InitSpeed Mortar.
			maxElev = +90;
			minTurn = -180;
			maxTurn = +180;
		};
		class ViewOptics {
			initAngleX = +15; minAngleX = -20; maxAngleX = +30;
			initAngleY = 0; minAngleY = -70; maxAngleY = +70;
			initFov = 0.5; minFov = 0.5; maxFov = 0.5;
		};
	};
	class PackMortar1_W_xj400: Mortar5_Pack_Base_xj400 {
		scope = protected;
		side = TWest;
		accuracy = 1000;		
		displayName = "Mortar(500m)";
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\optika_MRT1.p3d";
	};
	class PackMortar2_W_xj400: PackMortar1_W_xj400 {
		displayName = "Mortar(1000m)";
		weapons[] = {"Mortar_0201_xj400"};
		magazines[] = {"Mortar_0201_xj400", "Mortar_0201_xj400", "Mortar_0201_xj400", "Mortar_0201_xj400", "Mortar_0201_xj400", "Mortar_0201_xj400", "Mortar_0201_xj400", "Mortar_0201_xj400", "Mortar_0201_xj400", "Mortar_0201_xj400"};
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\optika_MRT2.p3d";
	};
	class PackMortar3_W_xj400: PackMortar1_W_xj400 {
		displayName = "Mortar(1500m)";
		weapons[] = {"Mortar_0202_xj400"};
		magazines[] = {"Mortar_0202_xj400", "Mortar_0202_xj400", "Mortar_0202_xj400", "Mortar_0202_xj400", "Mortar_0202_xj400", "Mortar_0202_xj400", "Mortar_0202_xj400", "Mortar_0202_xj400", "Mortar_0202_xj400", "Mortar_0202_xj400"};
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\optika_MRT3.p3d";
	};
	class PackMortar1_E_xj400: PackMortar1_W_xj400 {
		side = TEast; crew = "SoldierEB";
	};
	class PackMortar2_E_xj400: PackMortar2_W_xj400 {
		side = TEast; crew = "SoldierEB";
	};
	class PackMortar3_E_xj400: PackMortar3_W_xj400 {
		side = TEast; crew = "SoldierEB";
	};
	class PackMortar_TZK_xj400: PackMortar1_W_xj400 {
		scope = protected;
		model = "\TZK_Model_4_0_0\Mortar_Pack_TZK.p3d";
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d";
		
		hiddenSelections[] = {"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"};
		magazines[] = {"Mortar_0080_xj400","Mortar_0080_xj400"};
		class Turret {
			gunAxis = "osahlavne";
			turretAxis = "osaveze";
			soundServo[] = {"\TZK_Objects\Sound\Pack_Mortar\mortar_move.ogg",0.3,0.7};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
			minElev = +0; // Need a negative small enough minElev parameter to shoot high InitSpeed Mortar.
			maxElev = +90;
			minTurn = -180;
			maxTurn = +180;
		};
		armor = 300; armorStructural = 1;
	};
	*/
	
// For test
	class plz05_text: PLZ05_TZK_xj400{
		scope = protected; vehicleClass = "TZK_Testing";
		class Turret: TurretBase {
			minElev = 60;
			maxElev = 60;
			minTurn = 0;
			maxTurn = 0;
		};
		weapons[] = {LAW_TZK}; magazines[] = {LAW_TZK};
	};
//EOF