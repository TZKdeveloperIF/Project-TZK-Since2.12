	class M109A6G_Base_xj400: M1Abrams_Base_xj400 {};
	class M109A6G_xj400: M109A6G_Base_xj400 {
		accuracy = 0.4; // Big size tank easier to be identified
		model = "\TZK_Model_4_0_6\M109A6_DKMM.p3d";
		hiddenSelections[] = {
			"vlam","clamp", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6",  tzk_tex_00,
			tex_box.paa, tex_pal1.pac, tex_pal2.pac, tex_cog.paa
				, tzk_tex_99
			, "tzkGun00", "tzkGun01", "tzkGun02", "tzkGun03"
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec localize {TZK_EVENT_INIT_TEX_M109}, [_vehicle] exec {\TZK_Objects\Scripts\InitEventHandlers\M109A6G.sqs}, [_vehicle, {C}] exec localize {TZK_MULTITEX_GUNREC_M109};
		};
	};
	class PLZ05_VME_Base_xj400: T72_Base_xj400 {};
	class PLZ05_TZK_xj400: PLZ05_VME_Base_xj400 {
		accuracy = 0.4; // Big size tank easier to be identified
		model = "\TZK_Model_4_0_6\PLZ05.p3d";
		hiddenSelections[] = {
			"n1", "n2", "n3", "zhijia"
			, "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6",  tzk_tex_00 ,
			tex_CETI.paa, tex_cetic.paa, tex_CETIh.paa, tex_CETIq.paa, tex_CETIs.paa, tex_ct1.paa
			, tex_ct2.paa, tex_jing.paa, tex_mi.paa, tex_micai.paa, tex_pao.paa, tex_paota1.paa
			, tex_paota2.paa, tex_paotac.paa, tex_paotaqh.paa, tex_paotaSd.paa, tex_paott.paa
			, tex_qb.paa, tex_ROLLEA.pac, tex_ROLLEH.paa, tex_ROLLEV.paa, tex_ROLLEVA.paa
			, tex_tta.paa, tex_ttt.paa, tex_VWTurret3.paa, tex_VWTurret6.paa, tex_ZSD89_lun.paa
				, tzk_tex_99
			, "tzkGun00", "tzkGun01", "tzkGun02", "tzkGun03"
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle] exec {\TZK_Objects\Scripts\InitEventHandlers\PLZ05.sqs}, [_vehicle, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {n}, {0}] exec localize {TZK_EVENT_INIT_TEX_RSC_NUM}, [_vehicle, {C}] exec localize {TZK_EVENT_INIT_TEX_PLZ05}, [_vehicle, {C}] exec localize {TZK_MULTITEX_GUNREC_PLZ05};
		};
	};

	class M270_M29064_xj400: M1Abrams_Base_xj400 {
		model = "\TZK_Model_4_0_6\M270_m29064.p3d";
	};
	class TOS1_TZK_xj400: T72_Base_xj400 {
		model = "\TZK_Model_4_0_6\TOS1_DKMM.p3d";
	};

	// Grkpbv from CoC mod
	class Grkpbv_Coc_xj400: M1Abrams_Base_xj400 {
		scope = protected;
		accuracy = 0.5;
		displayName = "GrkPbv 120"; nameSound = "tank"; side = 1; cost = 1700000; type = 1; threat[] = {1, 0.4, 0.1};

		crew = "SoldierWCrew";
		model = "\TZK_Model_4_0_6\Grkpbv_Coc.p3d";
		hiddenSelections[] = {
			"flash1","flash2","flash3","flash4","flash5","flash6"
			, "tzkGunL00", "tzkGunL01", "tzkGunL02", "tzkGunR00", "tzkGunR01", "tzkGunR02"
		};
		soundEngine[] = {"\TZK_Sounds_4_0_6\Coc\motor.wss", db-30, 1};
		soundEnviron[] = {"\TZK_Sounds_4_0_6\Coc\band.wss", db-40, 0.7};
		picture = "\tzk_texture_4_0_6\ui\iGrkpbv.paa";
		icon = "\TZK_Texture_4_0_0\icon\uiM109.paa";

		irScanToEyeFactor = 1; // Howitzer can has 1x view distance radar.

		weapons[] = {"Gun120_Grk_xj400"};
		magazines[] = {"HE120_Grk_0120_xj400"};

		maxSpeed = 75;
		transportSoldier = 0;
		armor = 200;
		forceHideGunner = 1;
		forceHideCommander = 1;

		// Same as origin BMP
		canFloat = 1;
		minGunElev = -5;
		maxGunElev = 15;
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW"};
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

		driverAction = "ManActSFP_ssg120driverout";
		gunnerAction = "ManActSFP_ssg120gunnerout";
		commanderAction = "ManActSFP_ssg120commanderout";
		driverinaction = "ManActSFP_ssg120driver";
		gunnerInAction = "ManActSFP_ssg120gunner";
		commanderInAction = "ManActSFP_ssg120commander";

		class Turret: TurretBase {
			soundServo[] = {"\TZK_Sounds_4_0_6\Coc\servo.wss",db-30,1};
			minElev = -5;
			maxElev = 85;
		};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 90;
		};

		animated = 1;
		class Animations {
			class suspension {
				type = "rotation";
				animperiod = 0.5;
				selection = "sus_F";
				axis = "osa_sus";
				angle0 = -0.04;
				angle1 = 0.04;
			};
		};
		class EventHandlers {
			init = "_veh = _this select 0; _veh animate [{suspension}, 0.5]; {[_veh, _x] exec localize {TZK_MULTITEX_GUNREC_GRKPBV}} forEach [{L},{R}]";
		};

		transportAmmo = 0;
		transportMaxMagazines = 250;
		transportMaxWeapons = 25;
		class TransportMagazines {};
	};
	// PLZ89 from VME pla3.2 mod
	class PLZ89_VME_Base_xj400: T72_Base_xj400 {
		scope = private; vehicleClass = "TZK_Units_400";
		// accuracy = 0.4;
		displayName = "PLZ-89"; nameSound = "Tank"; side = 0; cost = 2000000; type = 1; threat[] = {1, 1, 0.5};

		model = "\TZK_Model_4_0_6\PLZ89.p3d";
		hiddenSelections[] = {
			"n1", "n2", "n3"
			, "tzkGun00", "tzkGun01", "tzkGun02", "tzkGun03"
		};
		picture = "\tzk_texture_4_0_6\ui\iPlz89.paa";
		icon = "\TZK_Texture_4_0_0\icon\uiM109.paa";

 		soundEngine[] = {"\TZK_Sounds_4_0_0\M1_Turbine.wss",0.031622775,1.1};
		soundEnviron[] = {"\TZK_Sounds_4_0_0\M1_Treads.wss",0.01,1};

		maxspeed = 60; canfloat = 1; mapSize = 10;

		irScanToEyeFactor = 1; // Howitzer can has 1x view distance radar.

		gunnerInAction = "ManActT55Gunner";
		driverInAction = "ManActT55Driver";
		commanderInAction = "ManActT55Commander";
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

		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -290;
			min = 0;
			max = 1;
		};
		class Hatchdriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 100;
		};
		class HatchGunner {
			selection = "poklop_gunner";
			axis = "osa_poklop_gunner";
			angle = 180;
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate",0.0003162,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = 20;
			minTurn = -80;
			maxTurn = 105;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
		class Turret: TurretBase {
			soundServo[] = {"\TZK_Sounds_4_0_6\VME\paotaztz99.wav", db-25, 1};
			minElev = -5;
			maxElev = +55;
		};
	};
	class PLZ89_TZK_xj400: PLZ89_VME_Base_xj400 {
		scope = protected;
		accuracy = 0.45;
		armor = 180;
		weapons[] = {"Gun122_VME_xj400"};
		magazines[] = {"HE122_VME_0120_xj400"};

		class Animations {
			class suspension {
				type = "rotation";
				animperiod = 0.5;
				selection = "sus_F";
				axis = "osa_sus";
				angle0 = -0.1;
				angle1 = 0.1;
			};
		};
		class EventHandlers {
			Init = _veh = _this select 0, [_veh, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {n}, {0}] exec localize {TZK_EVENT_INIT_TEX_RSC_NUM}, _veh animate [{suspension}, 0.5], _veh exec localize {TZK_MULTITEX_GUNREC_PLZ89};
		};
	};

	class MIM72_scf_xj400: M113 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.4;
		displayName = "MIM-72A Chaparral"; nameSound = "tank"; side = 1; cost = 1000000; type = 1; threat[] = {0, 0.5, 0};

		model = "\TZK_Model_4_0_6\scfus_m730a1_w.p3d";
		// hiddenSelections[] = {"missile_1","missile_2","missile_3","missile_4"};

		picture = "\tzk_texture_4_0_6\ui\iMim72.paa";
		icon = "\tzk_texture_4_0_6\ui\uiSa13.paa";
		armor = 180;

		driveriscommander = 1;
		gunnerCanSee = "4 + 8 + 16 +1";
		weapons[] = {"MineLayingLauncher_xj400"};
		magazines[] = {"MineRocket_0120_xj400"};

		unitInfoType = "UnitInfoTank";
		hideUnitInfo = false;

		gunnerOpticsModel = "optika_zsu_gunner";
		commanderOpticsModel = "optika_tanke_auxiliary";
		gunnerAction = "ManActM60Gunner";
		driverAction = "ManActUralDriver";
		driverInAction = "ManActUralDriver";

		forceHideGunner = 1;
		forceHidedriver = 0;
		// hideProxyInCombat = 0; // should be 1 as tank default value (except for those static obj like M2 MG)
		viewGunnerInExternal = 1;

		irScanRangeMin = 0; irScanRangeMax = 0; irScanToEyeFactor = 0; irScanGround = 0;

		class Turret: TurretBase {
			soundServo[] = {};
			minElev = 0; maxElev = +70;
			minTurn = -360; maxTurn = +360;
		};
		transportSoldier = 2;
		class TransportMagazines {};
	};
	class SA13_MAF_xj400: ZSU {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.4;
		displayName = "SA-13"; nameSound = "tank"; side = 0; cost = 800000; type = 1; threat[] = {0, 0.5, 0};

		model = "\TZK_Model_4_0_6\sa13.p3d";
		hiddenSelections[] = {"MARINE", "CSLA", "pod_green"};

		picture = "\tzk_texture_4_0_6\ui\iSa13.paa";
		icon = "\tzk_texture_4_0_6\ui\uiSa13.paa";

		insideSoundCoef = 1.1;
		soundEnviron[] = {"Vehicles\OldRolling_Treads1", db-15, 0.85};
		soundEngine[] = {"Vehicles\T55Sound", db-15, 1};

		fuelCapacity = 200;
		transportSoldier = 0;

		maxSpeed = 70; // A bit faster than real due to increased weight
		armor = 150
		canfloat = 1;

		unitInfoType = "UnitInfoTank";
		hideUnitInfo = false;

		weapons[] = {"MineLayingLauncher_xj400"};
		magazines[] = {"MineRocket_0120_xj400"};

		viewGunnerInExternal = true;
		viewDriverInExternal = true;
		viewCommanderInExternal = true;

		driverAction = ManActBMPDriverOut;
		gunnerAction = ManActZSUgunner;

		driverInAction = ManActBMPDriver;
		gunnerInAction = ManActZSUgunner;

		getOutAction = ManActGetOutTank;

		commanderaction = ManActZSUCommanderOut;
		commanderInAction = ManActTruck5tCoDriver;

		outGunnerMayFire = true;
		forceHideGunner = true;
		forceHideDriver = false;

		GunnerOpticsModel = "optika_tank_driver";
		commanderOpticsModel = "optika_tank_driver";

		irScanRangeMin = 0; irScanRangeMax = 0; irScanToEyeFactor = 0; irScanGround = 0;

		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -100;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 150;
		};
		class Turret: TurretBase {
			minElev = -5; maxElev = +70;
			minTurn = -360; maxTurn = +360;
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {};

			gunBeg = "usti hlavne"; // currently ignored
			gunEnd = "konec hlavne";

			minElev = -4; maxElev = +20;
			minTurn = -11.5; maxTurn = +11.5;

			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
		class ViewGunner: ViewGunnerBase {
			initAngleX = -25; minAngleX = -60; maxAngleX = -10;
			minAngleY = -20; maxAngleY = +20;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = 62 / 3.6;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -180;
			min = 0;
			max = 1;
		};
		class IndicatorRPM2: IndicatorRPM {
			selection = "ukaz_t1";
			axis = "osa_t1";
			angle = -180;
			min = 0;
			max = 3;
		};
		class Animations {
			class Hatch
			{
				type = "rotation";
				animPeriod = 1
				selection = "luken";
				axis = "osa_luken";
				angle0 = 0
				angle1 = -0.7;
			};
			class Mudgards {
				type = "rotation";
				animPeriod = 1
				selection = "mud";
				axis = "osa_mud";
				angle0 = 0
				angle1 = -2.1;
			};
		};
		class UserActions {
			class CloseHatch {
				displayName = "<Close Front Hatch>";
				position = "osa_luken";
				radius = 5;
				condition = "this animationPhase ""Hatch"" < 0.5";
				statement = "this animate [""Hatch"", 1]";
			};
			class OpenHatch {
				displayName = "<Open Front Hatch>";
				position = "osa_luken";
				radius = 5;
				condition = "this animationPhase ""Hatch"" >= 0.5";
				statement = "this animate [""Hatch"", 0]";
			};
			class ExtendMudgards {
				displayName = "<Lower Mudgards>";
				position = "osa_mud";
				radius = 5;
				condition = "this animationPhase ""Mudgards"" < 0.5";
				statement = "this animate [""Mudgards"", 1]";
			};
			class RetractMudgards {
				displayName = "<Rise Mudgards>";
				position = "osa_mud";
				radius = 5;
				condition = "this animationPhase ""Mudgards"" >= 0.5";
				statement = "this animate [""Mudgards"", 0]";
			};
		};
	}; 