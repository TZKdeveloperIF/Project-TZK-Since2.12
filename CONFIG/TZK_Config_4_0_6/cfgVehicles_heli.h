	#define SpoofMagazines "SpoofSwitch_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400"
	class UH60_CSLA_Base_xj400: Helicopter {
		class EventHandlers {
			GetOut = "_this exec localize {TZK_EVENT_GETOUT_UH60A}"
		};
	};
	class UH60_CSLA_xj400: UH60_CSLA_Base_xj400 {
		armor = 120;
		model = "\TZK_Model_4_0_6\UH60A_CSLA2.p3d";
		class Turret: TurretBase {
			minElev = -0;
			maxElev = 0;
			minTurn = -0;
			maxTurn = 0;
		};
	};
	class UH60MG_CSLA_Base_xj400: UH60_CSLA_Base_xj400 {
		armor = 120;
		model = "\TZK_Model_4_0_6\UH60A_CSLA2.p3d";
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {"",0.01,1.0};
			minElev = -42;
			maxElev = 5;
			minTurn = 0;
			maxTurn = 165;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
	}
	class Mi17_owp_ABC_xj400: Mi17 {
		model = "\TZK_Model_4_0_6\Mi17_OWP.p3d";
		class ViewOpticsBase {};
	};
	class Mi17_owp_Base_xj400: Mi17_owp_ABC_xj400 {
		class ViewOptics: ViewOpticsBase {
			// addon's value
			initAngleX = 0; minAngleX = -40; maxAngleX = 17;
			initAngleY = 0; minAngleY = -100; maxAngleY = 100;
			// BIS config value
			initFov = 0.5; minFov = 0.3; maxFov = 1.2;
		};
	};
	class Mi17_owp_xj400: Mi17_owp_Base_xj400 {
		class Turret: TurretBase {
			minElev = -0; maxElev = +0;
			minTurn = -0; maxTurn = +0;
		};
		gunnerOpticsModel = "optika_empty";
		armor = 75;
	};
	class Mi17_owp_PKT_xj400: Mi17_owp_Base_xj400 {
		gunnerOpticsModel = "optika_empty";
		armor = 75;
	};

	class MH6_Side_Base_xj400: Helicopter {
		model = "\TZK_Model_4_0_6\MH6_Bas.p3d";
	};
	class MH6_FakeC_Base0_xj400: MH6_Side_Base_xj400 {};
	class MH6_FakeC_Base1_xj400: MH6_FakeC_Base0_xj400 {};
	class MH6_TZK_xj400: MH6_FakeC_Base1_xj400 {};
	class MH6_irNo_TZK_xj400: MH6_TZK_xj400 {};
	class MH6_irNo_SideWep_xj400: MH6_irNo_TZK_xj400 {
		scope = private;
		transportSoldier = 3;
		model = "\TZK_Model_4_0_6\MH6_SideWep.p3d";
		gunnerAction = "ManActBAS_MH60Gunner";
		gunnerOpticsModel = "optika_empty";
		class Turret: TurretBase {
			minElev = -42;
			maxElev = 5;
			minTurn = 30;
			maxTurn = 150;
		};
		class ViewGunner: ViewGunnerBase {
			initAngleY = 90;
			minAngleY = 30;
			maxAngleY = 150;
			initAngleX = 0;
			minAngleX = -42;
			maxAngleX = 5;
		};
	};
	class MH6_irNo_M134_xj400: MH6_irNo_SideWep_xj400 {
		scope = protected;
		displayName = "MH-6 (M134)";
		hiddenSelections[] = {"m60"};

		weapons[] = {"GAU2B_Bas_xj400"};
		magazines[] = {"GAU2B_Bas_xj400", SpoofMagazines};
		class ReloadAnimations {
			class GAU2B {
				weapon = "GAU2B_Bas_xj400";
				angle0 = 0;
				angle1 = -2 * 3.141592654;
				multiplier = 5000;
				type = rotation;
				animPeriod = 1;
				selection = gatling;
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class MH6_irNo_M60_xj400: MH6_irNo_SideWep_xj400 {
		scope = protected;
		displayName = "MH-6 (M60)";
		hiddenSelections[] = {"m134"};

		weapons[] = {"M60_Heli_xj400"};
		magazines[] = {"M60_Heli_xj400", "M60_Heli_xj400", SpoofMagazines};
	};

	class Mi2NOE_Side_Base_xj400: Helicopter {
		model = "\TZK_Model_4_0_6\Mi2NO.p3d";
	};
	class Mi2NOE_FakeC_Base0_xj400: Mi2NOE_Side_Base_xj400 {};
	class Mi2NOE_FakeC_Base1_xj400: Mi2NOE_FakeC_Base0_xj400 {};
	class Mi2NOE_TZK_xj400: Mi2NOE_FakeC_Base1_xj400 {
		scope = protected;
	};
	class Mi2NOE_irNo_TZK_xj400: Mi2NOE_TZK_xj400 {};
	class Mi2NOE_irNo_SideWep_xj400: Mi2NOE_irNo_TZK_xj400 {
		scope = private;
		hasGunner = 1;
		model = "\TZK_Model_4_0_6\Mi2NO_SideWep.p3d";
		gunnerAction = "ManActBAS_MH60Gunner";
		gunnerOpticsModel = "optika_empty";
		class Turret: TurretBase {
			minElev = -42;
			maxElev = 5;
			minTurn = 210;
			maxTurn = 330;
		};
		class ViewGunner: ViewGunnerBase {
			initAngleY = 90;
			minAngleY = 30;
			maxAngleY = 150;
			initAngleX = 0;
			minAngleX = -42;
			maxAngleX = 5;
			initFov = 1;
			maxFov = 1;
		};
	};
	class Mi2NOE_irNo_GShG_xj400: Mi2NOE_irNo_SideWep_xj400 {
		scope = protected;
		displayName = "Mi-2 (GShG)";
		hiddenSelections[] = {"pkt", "m134"};

		weapons[] = {"GShG7_62_xj400"};
		magazines[] = {"GShG7_62_xj400", SpoofMagazines};
		class ReloadAnimations {
			class GAU2B {
				weapon = "GShG7_62_xj400";
				angle0 = 0;
				angle1 = -2 * 3.141592654;
				multiplier = 5000;
				type = rotation;
				animPeriod = 1;
				selection = gatling;
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class Mi2NOE_irNo_M134_xj400: Mi2NOE_irNo_SideWep_xj400 {
		scope = protected;
		displayName = "Mi-2 (M134)";
		hiddenSelections[] = {"pkt", "gshg"};

		weapons[] = {"GShG7_62_xj400"};
		magazines[] = {"GShG7_62_xj400", SpoofMagazines};
		class ReloadAnimations {
			class GAU2B {
				weapon = "GShG7_62_xj400";
				angle0 = 0;
				angle1 = -2 * 3.141592654;
				multiplier = 5000;
				type = rotation;
				animPeriod = 1;
				selection = gatling;
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class Mi2NOE_irNo_PKT_xj400: Mi2NOE_irNo_SideWep_xj400 {
		scope = protected;
		displayName = "Mi-2 (PKT)";
		hiddenSelections[] = {"m134", "gshg"};

		weapons[] = {"PKT_Heli_xj400"};
		magazines[] = {"PKT_Heli_xj400", "PKT_Heli_xj400", SpoofMagazines};
	};

	class Orca95_MCSR_ABC_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.3;
		// displayName = "ORCA Craft";
		nameSound = "chopper";
		// side = 0;
		cost = 10000000; type = 2; threat[] = {0, 1, 0.2};

		model = "\TZK_Model_4_0_6\Orca95_MCSR.p3d";
		armor = 20;
		hiddenSelections[] = {};
		picture = "\tzk_texture_4_0_6\ui\iOrca95.paa";
		weapons[] = {"LaserDesignatorOH"};
		magazines[] = {"LaserDesignatorOH", SpoofMagazines};

		hasGunner = 0;
		driverAction = "ManActMCSR_OrcaPilot";
		driverOpticsModel = "\o\vehl\V80_optika.p3d";
		animated = 1;
		maxSpeed = 500;
		mainrotorspeed = 2.5;
		backrotorspeed = 2.5;

		soundEngine[] = {"\TZK_Sounds_4_0_6\mcsr\OrcaEng.wss", db+10, 1};
		InsideSoundCoef = 0.005;
		armorStructural=3;
		armorHull = 0.5;
		armorEngine = 0.6;
		armorAvionics = 1.4;
		armorVRotor = 0.5;
		armorHRotor = 0.7;
		armorMissiles = 1.6;
		armorGlass = 0.5;

		ejectSpeed[] = {0,0,0};

		class Animations {
			class FWheelAnim {
				type=rotation;animperiod=0.7;
				selection= FrontWheel; axis=FWheelAxis;
				angle0= 0;angle1= -0.91804;
			};
			class RwheelAnim {
				type=rotation;animperiod=0.7;
				selection= RearWheel;axis=RWheelAxis;
				angle0= 0;angle1= -0.91455;
			};
			class FldoorAnim {
				type=rotation;animperiod=0.7;
				selection= Fldoor; axis=FldoorAxis;
				angle0= 0;angle1= 1.5708;
			};
			class FrdoorAnim {
				type=rotation;animperiod=0.7;
				selection= Frdoor; axis=FrdoorAxis;
				angle0= 0;angle1= -1.5708;
			};
			class RdoorAnim {
				type=rotation;animperiod=0.5;
				selection= RearDoor;axis=RDoorAxis;
				angle0= 0;angle1= -1.5708;
			};
		};
		class ViewPilotBase {};
		class ViewPilot: ViewPilotBase {
			initFov = 1.0;
			minFov = 0.400000;
			maxFov = 1.000000;
			initAngleX = 7;
			minAngleX = -25;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		class Turret: TurretBase {
			minElev = -90;
			maxElev = +20;
			minTurn = -180;
			maxTurn = +180;
		};

		// In origin pbo inherit cobra. This base class inherit from helicopter and remain those un-overwrite cobra's attributes.
		gunnerAction = "ManActAH1Gunner";
		rotorBig = "vrtule_velka";
		rotorBigBlend = "vrtule_velka_bl_";
		rotorSmall = "vrtule_mala";
		rotorSmallBlend = "vrtule_mala_bl";

		laserScanner = 1;
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};

		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Orca95_West_Base_xj400: Orca95_MCSR_ABC_xj400 {
		scope = private;
		side = TWest;
		accuracy = 0.8;
		displayName = "ORCA Craft West";
	};
	class Orca95_W_xj400: Orca95_West_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		armor = 120;
	};
	class Orca95_East_Base_xj400: Orca95_MCSR_ABC_xj400 {
		scope = private;
		side = TEast;
		accuracy = 0.8;
		displayName = "ORCA Craft East";
	};
	class Orca95_E_xj400: Orca95_East_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		armor = 120;
	};