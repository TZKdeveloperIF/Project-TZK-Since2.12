	class Tank_xj400: Tank {
		vehicleClass = "TZK_Units_400";
	};
	class M1Abrams_Base_xj400: Tank_xj400 {};
	class TZK_HeavyWestTank_Base_xj400: M1Abrams_Base_xj400 {
		// remove abandoned animations
		class Anim_Base_suspension { animperiod = 0; selection = ""; axis = ""; angle0 = 0; angle1 = 0; type = "rotation"; };
		class Anim_Base_gunrec { animperiod = 0; selection = ""; axis = ""; angle0 = 0; angle1 = 0; type = "rotation"; };
		class Animations {
			class suspension: Anim_Base_suspension {};
			class gunrec: Anim_Base_gunrec {};
		};
	};
	class M1A1_xj400: TZK_HeavyWestTank_Base_xj400 {
		maxSpeed = 57;
		model = "\TZK_Model_4_0_6\M1A1_TZK.p3d";
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec localize {TZK_EVENT_INIT_TEX_M1A1}; _vehicle animate [{suspension}, 0.5]";
		};
		weapons[] = {"M1Gun_xj400","Coax_M240_xj400"};
		magazines[] = {"M1Sabot_xj400","M1Heat_xj400", "Coax_M240_xj400"};
	};
	class M1A2_INQ_xj400: TZK_HeavyWestTank_Base_xj400 {
		maxSpeed = 57;
		model = "\TZK_Model_4_0_6\M1A2_INQ.p3d";
		weapons[] = {"M12Gun_xj400","Coax_M240_xj400"};
		magazines[] = {"M12Sabot_xj400","M12Heat_xj400", "Coax_M240_xj400"};
	};
	class Leo2A6_xj400: TZK_HeavyWestTank_Base_xj400 {
		maxSpeed = 57;
		model = "\TZK_Model_4_0_6\Leo2A6.p3d";
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";

			soundServo[] = {"\TZK_Sounds_4_0_0\Leo2A6\Turret.wss",0.0316228,1};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";

			minElev = -8; maxElev = +20;
			minTurn = -360; maxTurn = +360;

			body = "OtocVez";
			gun = "OtocHlaven";
		};
		weapons[] = {"LeoGun_xj400","MG3A1_xj400"};
		magazines[] = {"LeoSabot_xj400","LeoHeat_xj400", "MG3A1_xj400"};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec localize {TZK_EVENT_INIT_TEX_LEO2A6}, _vehicle animate [{suspension}, 0.5], [_vehicle, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {nr}, {0}] exec localize {TZK_EVENT_INIT_TEX_RSC_NUM};
		};
	};

	class RussianTank_xj400: Tank_xj400 {};
	class T72_Base_xj400: RussianTank_xj400 {};
	class T80_Base_xj400: T72_Base_xj400 {};
	class TZK_HeavyEastTank_Base_xj400: T80_Base_xj400 {
		// remove abandoned animations
		class Anim_Base_suspension { animperiod = 0; selection = ""; axis = ""; angle0 = 0; angle1 = 0; type = "rotation"; };
		class Anim_Base_gunrec { animperiod = 0; selection = ""; axis = ""; angle0 = 0; angle1 = 0; type = "rotation"; };
		class Animations {
			class suspension: Anim_Base_suspension {};
			class gunrec: Anim_Base_gunrec {};
		};
	};
	class T80_xj400: TZK_HeavyEastTank_Base_xj400 {
		maxSpeed = 57;
		model = "\TZK_Model_4_0_6\T80_TZK.p3d";
		weapons[] = {"T80Gun_xj400","MG_12_7_xj400"};
		magazines[] = {"T80Sabot_xj400","T80Heat_xj400", "MG_12_7_xj400","MG_12_7_xj400"};
	};
	class T90_xj400: TZK_HeavyEastTank_Base_xj400 {
		maxSpeed = 57;
		model = "\TZK_Model_4_0_6\T90_ICP.p3d";
		weapons[] = {"T90Gun_xj400","MG_12_7_xj400"};
		magazines[] = {"T90Sabot_xj400","T90Heat_xj400", "MG_12_7_xj400","MG_12_7_xj400"};
	};
	class ZTZ99_xj400: TZK_HeavyEastTank_Base_xj400 {
		maxSpeed = 57;
		model = "\TZK_Model_4_0_6\ztz99.p3d";
		weapons[] = {"PLAGun_xj400","PLAMG_xj400"};
		magazines[] = {"PLASabot_xj400","PLAHeat_xj400", "PLAMG_xj400","PLAMG_xj400"};
	};

	class M1A1_Info_xj400: M1A1_xj400 { unitInfoType = 8; };
	class M1A2_Info_xj400: M1A2_INQ_xj400 { unitInfoType = 8; };
	class Leo2A6_Info_xj400: Leo2A6_xj400 { unitInfoType = 8; };
	class T80_Info_xj400: T80_xj400 { unitInfoType = 8; };
	class T90_Info_xj400: T90_xj400 { unitInfoType = 8; };
	class ZTZ99_Info_xj400: ZTZ99_xj400 { unitInfoType = 8; };

	class M60_Base_xj400: Tank_xj400 {};
	class M60_xj400: M60_Base_xj400 {
		model = "\TZK_Model_4_0_6\M60_TZK.p3d";
		weapons[] = {"Gun105","MG_7_6_xj400"};
		magazines[] = {"Heat105","Shell105","MG_7_6_xj400"};
	};
	class T72_xj400: T72_Base_xj400 {
		weapons[] = {"Gun120","MG_7_6_xj400"};
		magazines[] = {"Heat120","Shell120","MG_7_6_xj400"};
	};
	class M60_120S_xj400: M60_xj400 {
		weapons[] = {"Gun120","Coax_M240_xj400"};
		magazines[] = {"Heat120","Shell120", "Coax_M240_xj400"};
	};
	class T55_Base_xj400: Tank_xj400 {}
	class T55G_xj400: T55_Base_xj400 {
		weapons[] = {"Gun105","MG_7_6_xj400"};
		magazines[] = {"Heat105","Shell105","MG_7_6_xj400"};
	};
	class T55E_xj400: T55_Base_xj400 {
		weapons[] = {"Gun105","MG_7_6_xj400"};
		magazines[] = {"Heat105","Shell105","MG_7_6_xj400"};
	};

	class ResistanceTank_xj400: Tank_xj400 {};
	class T80Res_Base_xj406: ResistanceTank_xj400 {
		scope = 0;
		picture = "it80";
		side = 2;
		displayName = "$STR_DN_OUT_T80Res";
		nameSound = "t80";
		accuracy = 0.5;
		hiddenSelections[] = {};
		armor = 700;
		cost = 1500000;
		weapons[] = {"Gun120","MG_12_7_xj400"};
		magazines[] = {"Heat120","Shell120", "MG_12_7_xj400"};
		type = 1;
		threat[] = {0.9,0.9,0.3};

		class HitGun { armor = 3; material = 52; name = "gun"; passThrough = 1; };
		maxSpeed = 57;
		soundEngine[] = {"Vehicles\ModernIdle1",0.0316228,1};
		soundEnviron[] = {"Vehicles\ModernRolling_Treads1",0.0316228,1};
		model = "t80";
		driverAction = "ManActT80DriverOut";
		gunnerAction = "ManActT80GunnerOut";
		commanderAction = "ManActT80CommanderOut";
		driverInAction = "ManActT80Driver";
		gunnerInAction = "ManActT80Gunner";
		commanderInAction = "ManActT80Commander";
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
	class T80Res_TZK_xj406: T80Res_Base_xj406 {
		scope = protected; vehicleClass = "TZK_Units_400";
		displayName = "T80(Res) Red"; accuracy = 1000;
		model = "\TZK_Model_4_0_6\T80_TZK.p3d";
		hiddenSelections[] = {
			"pruh", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6", tzk_tex_00,
			tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_t72_vymetnice.pac, tex_t80_kolo2.pac, tex_tank_04_bck.pac, tex_tank_04_bednyuvalce_.pac, tex_tank_04_frt.pac, tex_tank_04_krabic_back.pac, tex_tank_04_krabic_sidet.pac, tex_tank_04_lauf_frt.pac, tex_tank_04_lauf_top.pac, tex_tank_04_platyzveze_s.pac, tex_tank_04_platyzvozu_t.pac, tex_tank_04_side.pac, tex_tank_04_spod.pac, tex_tank_04_sud_norm.pac, tex_tank_04_sud_side.paa, tex_tank_04_top.pac, tex_tank_04_v_lec_norm.pac, tex_tank_04_v_lec_side.paa, tex_tank_04_vez_bck.pac, tex_tank_04_vez_frt.pac, tex_tank_04_vez_side.pac, tex_tank_04_vez_top.pac, tex_tank_m_02_kanon.pac, tex_tank_m_02_vez_frt.pac,
			tex_t80_kolo1.pac, tex_tank4_passide.pac, tex_tank_04_detailkanon.pac, tex_tank_04_detailkanon2.pac, tex_tnk04topslo.pac, tex_tank_04_spod_spol.pac, tex_ural_kabok2.pac, tex_t72_kolo3.paa,
			tex_drat_svetlo_s.paa, tex_t72_com_strop.paa, tex_t72_dri_poklop.paa, tex_t72_hlaven_s.pac, tex_t72_vez_strop.paa, tex_t72_zubkolo_detail.paa, tex_t72_zubkolo_detail2.paa
			, tex_t80_stranakol.pac
				, tzk_tex_99
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec localize {TZK_EVENT_INIT_TEX_T80}, [_vehicle, {red}] exec localize {TZK_EVENT_INIT_TEX_GUER};
		};
		gunnerInAction = "ManActM1A1Gunner";
		commanderInAction = "ManActM1A1Commander";
	};
	class T80Res_Orange_xj406: T80Res_TZK_xj406 {
		scope = protected; vehicleClass = "TZK_Testing_300";
		displayName = "T80(Res) Orange"; accuracy = 1000;
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec localize {TZK_EVENT_INIT_TEX_T80}, [_vehicle, {orange}] exec localize {TZK_EVENT_INIT_TEX_GUER};
		};
	};
	class T80Res_Yellow_xj406: T80Res_Orange_xj406 {
		displayName = "T80(Res) Yellow"; accuracy = 1000;
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec localize {TZK_EVENT_INIT_TEX_T80}, [_vehicle, {yellow}] exec localize {TZK_EVENT_INIT_TEX_GUER};
		};
	};
	class T80Res_Purple_xj406: T80Res_Orange_xj406 {
		displayName = "T80(Res) Purple"; accuracy = 1000;
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec localize {TZK_EVENT_INIT_TEX_T80}, [_vehicle, {purple}] exec localize {TZK_EVENT_INIT_TEX_GUER};
		};
	};
	class T80Res_Green_xj406: T80Res_Base_xj406 {
		// This unit using original OFPR T80Res Model.
		scope = protected; vehicleClass = "TZK_Testing_300";
		displayName = "T80(Res) Green"; accuracy = 1000;
	};

	// AMX10RC from OFrP mod
	class AMX10RC_OFrP_xj400: M1Abrams_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "AMX 10 RC"; nameSound = "tank"; side = 1; cost = 1000000; type = 1; threat[] = {1, 1, 0.6};

		model = "\TZK_Model_4_0_6\Amx10Rc_uiox.p3d";
		hiddenSelections[] = {
			"nom","ID","logo","KFOR","Flag"
			, tzk_tex_00
			, tex_10p_cha.pac, tex_10p_gre.pac, tex_ar1.paa, tex_camo.paa, tex_cots.paa, tex_cul.paa,
			tex_d1.paa, tex_d2.paa, tex_d3.paa, tex_d4.paa, tex_d5.paa, tex_d6.paa, tex_d7.paa, tex_d8.paa,
			tex_des.paa, tex_det.paa, tex_det2.paa, tex_ec.paa, tex_epinoir.paa, tex_lg.paa, tex_pan.paa,
			tex_roue.paa, tex_roues.paa, tex_t1.paa, tex_tav.paa, tex_tconduc.paa, tex_td.paa,
			tex_tg.paa, tex_tour.paa, tex_viseur.paa, tex_visouv.paa
			, tzk_tex_99
		};
 		picture = "\tzk_texture_4_0_6\ui\iAmx10rc.paa";
 		icon = "\tzk_texture_4_0_6\ui\iAmx10rc.paa";
		// smaller vehicle size
		camouflage = 5; audible = 5;

		armor = 200; armorStructural = 2.0;
		class HitEngine { armor = 0.8; material = 60; name = "engine"; passThrough = 1; };
		class HitHull { armor = 1.0; material = 50; name = "hull"; passThrough = 1; };
		class HitTurret { armor = 0.8; material = 51; name = "turet"; passThrough = 1; };
		class HitGun { armor = 0.9; material = 52; name = "gun"; passThrough = 1; };
		class HitLTrack { armor = 0.4; material = 53; name = "pasL"; passThrough = 1; };
		class HitRTrack { armor = 0.4; material = 54; name = "pasP"; passThrough = 1; };

		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		nightVision = 1;
		canFloat = 1; //amphibie
		maxSpeed = 85;
		precision = 5;
		brakeDistance = 10;
		fuelCapacity = 675;
		formationX = 50;
		formationZ = 50;

		weapons[] = {"105RC_OFrP_xj400", "MG_7_6_xj400"};
		magazines[] = {
			"105RCSabot_OFrP_xj400", "105RCHE_OFrP_xj400",
			"MG_7_6_xj400", "MG_7_6_xj400", "MG_7_6_xj400", "MG_7_6_xj400", "MG_7_6_xj400"
		};

		soundEngine[] = {"\TZK_Sounds_4_0_6\AMX10\moteur10rc.wss", db-15, 1};
		soundEnviron[] = {"", db-15, 1};

		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"Vehicles\gun_elevate",db-30,1.0}; // 0.0316228
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
			minElev = -8;
			maxElev = +20;
			minTurn = -360;
			maxTurn = +360;
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate",db-70,1.2}; // 0.0003162

			gunBeg = "usti hlavne"; // currently ignored
			gunEnd = "konec hlavne";

			minElev = -15; maxElev = +20;
			minTurn = -360; maxTurn = +360;

			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};

		class ViewOptics {
			initFov = 0.18; minFov = 0.04; maxFov = 0.18;
			initAngleX = 0; minAngleX = -40; maxAngleX = +40;
			initAngleY = 0; minAngleY = -360; maxAngleY = +360;
		};
		class ViewPilot {
			initAngleX = 5; minAngleX = -20; maxAngleX = +20;
			initAngleY = 0; minAngleY = -45; maxAngleY = +45;
			initFov = 0.7; minFov = 0.42; maxFov = 0.85;
		};
		class ViewCommander {
			initAngleX = 5; minAngleX = -20; maxAngleX = +20;
			initAngleY = 0; minAngleY = -150; maxAngleY = +150;
			initFov = 0.7; minFov = 0.42; maxFov = 0.85;
		};
		class ViewGunner {
			initAngleX = 5; minAngleX = -15; maxAngleX = +15;
			initAngleY = 0; minAngleY = -45; maxAngleY = +45;
			initFov = 0.7; minFov = 0.42; maxFov = 0.85;
		};

		commanderAction = "ManActOFrPAMX10RCCommanderOut";
		commanderInAction = "ManActOFrPAMX10RCCommander";
		commanderCanSee = CanSeeRadar+CanSeeEye+CanSeeOptics+CanSeeCompass;
		forceHideCommander = false;

		driverAction = "ManActOFrPAMX10RCDriverOut";
		driverInAction = "ManActOFrPAMX10RCDriver";
		driverCanSee = CanSeeEye+CanSeeEar+CanSeeCompass;
		forceHideDriver = false;

		gunnerAction = "ManActOFrPAMX10RCGunnerOut";
		gunnerInAction = "ManActOFrPAMX10RCGunner";
		gunnerCanSee = CanSeeRadar+CanSeeEye+CanSeeOptics+CanSeeCompass;
		outGunnerMayFire = false;
		forceHideGunner = false;

		gunnerOpticsmodel = "\TZK_Model_4_0_6\opt\TirRc";
		commanderOpticsmodel = "\TZK_Model_4_0_6\opt\ComRc";

		// EVENTS ##################################################
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec localize {TZK_EVENT_INIT_TEX_AMX10RC}";
		};

		// ANIMATIONS ##############################################
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 90;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -120;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = 120;
		};

		// ANIMATIONS SELECTION LOD ###############################
		class Animations {
			class AnimDrecL {
				type = "rotation";
				animperiod = 0.01;
				selection = ReloadDrecL;
				axis = AxeDrecL;
				angle0= -0.04;
				angle1= 0.04;
			};
			class AnimDrecR {
				type = "rotation";
				animperiod = 0.01;
				selection = ReloadDrecR;
				axis = AxeDrecR;
				angle0= -0.04;
				angle1= 0.04;
			};
			class AnimDreb {
				type = "rotation";
				animperiod = 0.01;
				selection = ReloadDreb;
				axis = AxeDreb;
				angle0= -0.04;
				angle1= 0.04;
			};
			class TrappeVisGun {
				type = "rotation";
				animperiod = 2;
				selection = TrappeVisGun;
				axis = AxeTrappeVisGun;
				angle0= 0;
				angle1= pi/2;
			};
			class TrappeVisChar {
				type = "rotation";
				animperiod = 2;
				selection = TrappeVisChar;
				axis = AxeTrappeVisChar;
				angle0= 0;
				angle1= -pi/2;
			};
			class AnimBriseLame {
				type = "rotation";
				animperiod = 3;
				selection = BriseLame;
				axis = AxeBriseLame;
				angle0= 0;
				angle1= pi/1.5;
			};
		};
	};
	// 2S25 from mfm mod
	class 2S25_mfm_xj400: T55_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "2S25 Sprut-SD"; nameSound = "tank"; side = 0; cost = 950000; type = 1; threat[] = {0.6,1,0.3};

		model = "\TZK_Model_4_0_6\2S25_mfm.p3d";
		hiddenSelections[]= {"no1", "no2", "no3"};
 		icon = "\tzk_texture_4_0_6\ui\iAmx10rc.paa";
		picture = "\tzk_texture_4_0_6\ui\i2s25.paa";

		gunnerOpticsmodel = "\TZK_Model_4_0_6\opt\G_Optic.p3d";
		commanderOpticsmodel = "\TZK_Model_4_0_6\opt\C_Optic.p3d";

		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		laserscanner = 1;

		armor = 180;
		class HitGun { armor = 0.9; material = 52; name = "gun"; passThrough = 1; };
		maxspeed = 71;
		canFloat = 1;
		crew = "SoldierECrew";

		weapons[] = {"Sprut_2A75_xj400", "MG_7_6_xj400"};
		magazines[] = {"Sprut_3VBM17_xj400","Sprut_3VBK25_xj400", "MG_7_6_xj400"};

		transportSoldier = 0;
		class TransportMagazines{};

		driverAction = "ManActT72DriverOut";
		gunnerAction = "ManActT72GunnerOut";
		commanderAction = "ManActT72CommanderOut";
		driverInAction = "ManActBMPDriver";
		gunnerInAction = "ManActT72Gunner";
		commanderInAction = "ManActT72Commander";
		commandercansee = 31;
		drivercansee = 31;
		gunnercansee = 31;
		hasCommander = 1;

		soundEngine[] = {"\TZK_Sounds_4_0_6\MFM_2S25\engine_loaded.wss", db-30, 1};
		soundEnviron[] = {"\TZK_Sounds_4_0_6\MFM_2S25\tracks.wss", db-40, 0.8};
		soundGear[] = {"\TZK_Sounds_4_0_6\MFM_2S25\gear.wss", db-50, 0.8};

		forceHideGunner = 0;
		// same setting as bmp
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -90;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = 90;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -320;
			min = 0;
			max = "40 / 3.6";
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -230;
			min = 0;
			max = 1;
		};

		class Reflectors {
			class Left {
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		class Turret: TurretBase {
			minElev = -5
			maxElev = 17
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate",0.0003162,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -6;
			maxElev = 25;
			minTurn = -100;
			maxTurn = 100;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};

		class Animations {
			class Podveska {
				type = "rotation";
				animperiod = 0.5;
				selection = "podw";
				axis = "osa_podw";
				angle0 = -0.04;
				angle1 = 0.04;
			};
		};
		class EventHandlers {
			init = "(_this select 0) animate [{Podveska}, 0.5]"
		};
	};

	// Auto unit
	class M1A1_Auto_xj400: M1A1_xj400 {
		hasGunner = 0;
		hasCommander = 0;
		driverIsGunner = 1;
	};
	class T80_Auto_xj400: T80_xj400 {
		hasGunner = 0;
		hasCommander = 0;
		driverIsGunner = 1;
	};