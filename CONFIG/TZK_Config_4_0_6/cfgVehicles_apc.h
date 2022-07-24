	class M113_xj400: M113 {
		model = "\TZK_Model_4_0_6\m113_TZK.p3d";
		weapons[] = {"MG_12_7_xj400"};
		magazines[] = {"MG_12_7_xj400"};
	};
	class M113Ambul_xj400: M113Ambul {
		model = "\TZK_Model_4_0_6\M113_Ambu_TZK.p3d";
		camouflage = 6; // support vehicle using less value
		audible = 4;
	};
	class Bradley_xj400: M113 {};
	class M2A2_xj400: Bradley_xj400 {
		model = "\TZK_Model_4_0_6\M2A2_TZK.p3d";
		accuracy = 0.35;
	};
	class M2A2_AA_xj400: M2A2_xj400 {
		accuracy = 1000;
	};
	class M2A2_AA_Town_xj400: M2A2_AA_xj400 {
		sensitivity = 1.6; sensitivityEar = 0.012;
	};
	class Vulcan_xj400: M113 {
		model = "\TZK_Model_4_0_6\Vulcan_TZK.p3d";
		class ReloadAnimations {
			class Cannon1 {
				weapon = "VulcanCannon_xj406";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class Vulcan_TZK_xj400: Vulcan_xj400 {
		class ReloadAnimations {
			class Cannon1 {
				weapon = "VulcanCannon_xj406";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};

	class BMPAmbul_xj400: BMPAmbul {
		camouflage = 6; // support vehicle using less value
		audible = 4;
	};
	class BMP2_Base_xj400: BMP {};
	class BMP2_xj400: BMP2_Base_xj400 {
		accuracy = 0.35;
	};
	class BMP2_AA_xj400: BMP2_xj400 {
		accuracy = 1000;
	};
	class BMP2_AA_Town_xj400: BMP2_AA_xj400 {
		sensitivity = 1.6; sensitivityEar = 0.012;
	};

	class ZSU_xj400: ZSU {};

	// Auto unit
	class M2A2_Town_Auto_xj400: M2A2_AA_Town_xj400 {
		hasGunner = 0;
		hasCommander = 0;
		driverIsGunner = 1;
	};
	class BMP2_Town_Auto_xj400: BMP2_AA_Town_xj400 {
		hasGunner = 0;
		hasCommander = 0;
		driverIsGunner = 1;
	};
	class Vulcan_Auto_xj406: Vulcan_xj400 {
		hasGunner = 0;
		hasCommander = 0;
		driverIsGunner = 1;
	};
	class ZSU_Auto_xj400: ZSU_xj400 {
		hasGunner = 0;
		hasCommander = 0;
		driverIsGunner = 1;
	};

	class BMPResScoreConfuser_xj400: BMPRes {
		cost = 0; // provide no cost to make player obtain no extra score.
	};

	class M88arv_mfm_xj400: M1Abrams_Base_xj400 {
		scope = protected;
		accuracy = 0.4;
		displayName = "M88 (ARV)"; nameSound = "tank"; side = 1; cost = 1500000; type = 1; threat[] = {1, 0.3, 0.6};

		model = "\TZK_Model_4_0_6\m88a2.p3d";
		hiddenSelections[] = {
			"crane_det01", "crane_det01_2", "crane_det02", "crane_det02_2", "shield1", "shield2"
			, tzk_tex_00
			, tex_kette002.paa, tex_m88_001.paa, tex_m88_002.paa, tex_m88_003.paa
			, tzk_tex_99
		};
		icon = "\tzk_texture_4_0_6\m88\m88icon.paa";
		picture = "\tzk_texture_4_0_6\m88\m88pic.paa";
		mapSize = 11;

		maxSpeed = 46;
		armor = 550;
		irScanRangeMin = 0; irScanRangeMax = 0; irScanToEyeFactor = 0; irScanGround = 0;
		class EventHandlers {
			Init = "_vehicle = _this select 0; _vehicle animate [{Podveska}, 0.5], [_vehicle, {C}] exec localize {TZK_EVENT_INIT_TEX_M88}";
		};

		insideSoundCoef = 0.02;
		soundEnviron[] = {"\TZK_Sounds_4_0_6\MFM_M88\M1_Treads.wss",1,0.8};
		soundEngine[] = {"\TZK_Sounds_4_0_6\MFM_M88\M1_Turbine.wss",1,1};
		soundCrash[] = {"\TZK_Sounds_4_0_6\MFM_M88\tank_crash_heavy.wss",1,1};
		soundLandCrash[] = {"\TZK_Sounds_4_0_6\MFM_M88\tank_crash.wss",1,1};
		soundGear[] = {"\TZK_Sounds_4_0_6\MFM_M88\Gear.wss",0.07,1};
		soundDammage[] = {"\TZK_Sounds_4_0_6\MFM_M88\Alarm.wss",0.1,1};

		gunnerOpticsModel = "optika_empty";
		commanderOpticsModel = "optika_tank_driver";

		weapons[] = {"MG_12_7_xj400"};
		magazines[] = {"MG_12_7_xj400"};

		gunnerAction = "ManActM88MGGunner";
		gunnerInAction = "ManActM88MGGunner";
		driverAction = "ManActM113DriverOut";
		// driverInAction = "ManActM2A2Driver";
		driverInAction = "ManActm88driver";
		commanderAction = "ManActM113DriverOut";
		// commanderInAction = "ManActTruck5tCoDriver";
		commanderInAction = "ManActm88commander";

		commanderCanSee = 31;

		viewGunnerInExternal = 1;
		outGunnerMayFire = 1;
		forceHideGunner = 1; //1
		castGunnerShadow = 1;

		transportMaxMagazines = 25;
		transportMaxWeapons = 5;
		// transportRepair = 200000000;
		transportSoldier = 0;

		camouflage = 9;
		audible = 7;
		extCameraPosition[] = {0,2,-14}; //{0,1.5,-9};
		class Animations {
			class Podveska {type = "rotation";animperiod = 0.5;selection = "podw";axis = "osa_podw";angle0 = -0.04;angle1 = 0.04;};
			class Bucket {type = "rotation";animPeriod = 3.5;selection = "bucket";axis = "osa_bucket";angle0 = 0;angle1 = 1.3;};
			class Crane {type = "rotation";animPeriod = 3.5;selection = "crane";axis = "osa_crane";angle0 = 0;angle1 = 2.110;};
		};
		class UserActions
		{
			class Bucket_down {
				displayName = "<Bucket down>";
				position = "controls";
				radius = 4;
				condition = "this animationPhase ""Bucket"" < 0.5";
				statement = "this animate [""Bucket"", 1]";
			};
			class Bucket_up {
				displayName = "<Bucket up>";
				position = "controls";
				radius = 4;
				condition = "this animationPhase ""Bucket"" >= 0.5";
				statement = "this animate [""Bucket"", 0]";
			};
			class Crane_up {
				displayName = "<Crane up>";
				position = "controls";
				radius = 4;
				condition = "this animationPhase ""Crane"" == 0";
				statement = [this, "Up"] exec localize {TZK_ACTION_M88_CRANE};
			};
			class Crane_down {
				displayName = "<Crane down>";
				position = "controls";
				radius = 4;
				condition = "this animationPhase ""Crane"" == 1 ";
				statement = [this, "Down"] exec localize {TZK_ACTION_M88_CRANE};
			};
		};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = 90;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = -90;
		};
		class Turret: TurretBase {
			soundServo[] = {};
			minElev = -5;
			maxElev = 40;
			minTurn = -360;
			maxTurn = 360;
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -5;
			maxElev = 10;
			minTurn = -15;
			maxTurn = 15;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
		class ViewGunner: ViewGunnerBase {
			minAngleY = 0;
			maxAngleY = 0;
		};
		class ViewPilot: ViewPilotBase {
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -60;
			maxAngleY = 60;
		};
		class ViewCommander: ViewCommanderBase {
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			minAngleY = -60;
			maxAngleY = 60;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -160; //240 //180
			min = 0;
			max = 16.6700001;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -240; //340
			min = 0;
			max = 1;
		};
	};
	class BREM_mfm_xj400: T72_Base_xj400 {
		scope = protected;
		accuracy = 0.4;
		displayName = "BREM-1"; nameSound = "tank"; side = 0; cost = 900000; type = 1; threat[] = {1, 0.3, 0.6};

		model = "\TZK_Model_4_0_6\mfm_brem1mt02.p3d";
		hiddenSelections[] = {
			"Tros",				// 0
			"Strela_V1",		// 1
			"Strela_V2",		// 2
			"Strela_V3",		// 3
			"Strela_H1",		// 4
			"Strela_H2",		// 5
			"Strela_H3",		// 6
			"no1",				// 7
			"no2",				// 8
			"no3",				// 9
			"barrels"			// 10
		};
		icon = "\tzk_texture_4_0_6\brem1\ic_brem1.paa";
		picture = "\tzk_texture_4_0_6\brem1\pic_brem1.paa";
		mapSize = 11;

		maxSpeed = 50;
		armor = 450; //400
		irScanRangeMin = 0; irScanRangeMax = 0; irScanToEyeFactor = 0; irScanGround = 0;
		class EventHandlers {
			Init = (_this select 0) exec localize {TZK_EVENT_INIT_TEX_BREM1};
		};

		getInRadius = 2.0; //3.5

		driverAction = "ManActT72DriverOut";
		driverInAction = "ManActT72Driver";
		gunnerAction = "ManActbremgunner02";
		gunnerInAction = "ManActbremgunner02";
		commanderAction = "ManActBMPCommanderOut";
		commanderInAction = "ManActbremcommander";

		weapons[] = {"MG_12_7_xj400"};
		magazines[] = {"MG_12_7_xj400"};
		gunnerOpticsModel = "optika_empty";
		commanderOpticsModel = "optika_tank_driver";

		// transportRepair = 200000000;

		insideSoundCoef = 0.04;
		soundEngine[] = {"\TZK_Sounds_4_0_6\MFM_BREM1\EngineF2.wss", 1, 1};
		soundEnviron[] = {"\TZK_Sounds_4_0_6\MFM_BREM1\I_treadsF3.wss", 1, 0.8};

		class ViewPilot: ViewPilotBase {
			minAngleY = -100;
			maxAngleY = 100;
		};
		class ViewCommander: ViewCommanderBase{
			minAngleY = -150;
			maxAngleY = 170;
		};
		class ViewGunner: ViewGunnerBase {
			minAngleX = -70; maxAngleX = +45;
			minAngleY = -90; maxAngleY = +90;
		};
		class HatchCommander {
			selection = "poklop_commander";
			axis = "osa_poklop_commander";
			angle = 110;
		};
		class HatchDriver {
			selection = "poklop_driver";
			axis = "osa_poklop_driver";
			angle = -110;
		};
		class Turret: TurretBase {
			soundServo[] = {};
			minElev = -10; //-6
			maxElev = 75; //80
			minTurn = -160; //-160
			maxTurn = 132; //132
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -5;
			maxElev = 10;
			minTurn = -10;
			maxTurn = 180;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
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

		class UserActions {
			class Crane_up {
				displayName = "<Crane up>";
				position = "controls";
				radius = 4;
				condition = "this animationPhase ""Strela_V"" ==0";
				statement = [this, "Up"] exec localize {TZK_ACTION_BREM1_CRANE};
			};
			class Crane_down {
				displayName = "<Crane down>";
				position = "controls";
				radius = 4;
				condition = "this animationPhase ""Strela_H"" == 0.5";
				statement = [this, "Down"] exec localize {TZK_ACTION_BREM1_CRANE};
			};
		};
		class Animations {
			class Podveska {type = "rotation";animperiod = 0.5;selection = "podw";axis = "osa_podw";angle0 = -0.04;angle1 = 0.04;};
			class kompas {type = "rotation";animPeriod = 0.01;selection = "S_kompas";axis = "osa_S_kompas";angle0 = 0;angle1 = 6.283185;};
			class kompas2 {type = "rotation";animPeriod = 0.01;selection = "S_kompas2";axis = "osa_S_kompas2";angle0 = 0;angle1 = 6.283185;};
			class Strela_V {type = "rotation";animPeriod = 3.5;selection = "Strela_V";axis = "osa_strela_V";angle0 = 0;angle1 = 0.959931;};
			class Strela_H {type = "rotation";animPeriod = 6;selection = "Strela_H";axis = "osa_strela_H";angle0 = 0;angle1 = 2.792526;};
			class barrels {type = "rotation";animPeriod = 0.01;selection = "barrels";axis = "osa_barrels";angle0 = 0;angle1 = 3.141592;};
			class Trg_Horn{type = "rotation";animPeriod = 0.01;selection = "Trg_Horn";axis = "osa_Trigger";angle0 = 0;angle1 = 1.570796;};			// 90*
	 	};
	};	
	class BMR3M_ICP_xj400: T90_xj400 {
		displayName = "BMR-3M"; cost = 3000000; type = 1; threat[] = {0, 0.1, 0.1};
		hiddenSelections[] = {
			"TR","fire1","fire2","fire3","fire4","fire5","fire6",
			"rak1","rak2","rak3","rak4","Flag",
			"n1", "n2", "n3"
		};
		maxSpeed = 70;

		model = "\TZK_Model_4_0_6\BMR3M_ICP.p3d";
		picture = "\TZK_Texture_4_0_0\icon\iT90.paa";
		armor = 600; armorStructural = 2.0;
		irScanRangeMin = 0; irScanRangeMax = 0; irScanToEyeFactor = 0; irScanGround = 0;
		gunnerInAction = "ManActM1A1Gunner";
		commanderInAction = "ManActM1A1Commander";

		weapons[] = {};
		magazines[] = {};
		hasGunner = 0;
		hasCommander = 0;
	};