	class Jeep_xj400: Jeep {
		model = "\TZK_Model_4_0_6\Jeep_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00,
			tex_mutt_backg.pac, tex_mutt_bottom.pac, tex_mutt_frontg.pac,
			tex_mutt_kapotag.pac,tex_mutt_kolog.pac, tex_mutt_koloog.pac,
			tex_mutt_palubkmg.pac, tex_mutt_podanteng.pac,tex_mutt_podlahg.pac,
			tex_mutt_podpaka.pac, tex_mutt_radiog.pac, tex_mutt_sedoperg.pac,
			tex_mutt_sedsedg.pac, tex_mutt_sideg.pac, tex_mutt_sklog.pac,
			tex_mutt_trubka.pac,tex_mutt_volant.paa, tex_mutt_pristrtga.paa
			, tzk_tex_99
			, Box006
		};
		terrainCoef = 1; preferRoads = 0;
	};
	class JeepMG_xj400: JeepMG { terrainCoef = 1; preferRoads = 0; };
	class HMMWV_xj400: Jeep { terrainCoef = 1; preferRoads = 0; };
	class UAZ_xj400: UAZ {
		model = "\TZK_Model_4_0_6\uaz_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00,
			tex_jeep_kab_sklo1.paa, tex_jeep_kab_sklo2.paa, tex_jeep_kolo_side.pac,
			tex_mutt_bottom.pac, tex_mutt_kolog.pac, tex_mutt_koloog.pac, tex_uaz_ige_front.paa,
			tex_uaz_kapota_top.pac, tex_uaz_zasterka.pac, tex_uazbck.pac, tex_uazfrt.pac,
			tex_uazkolo.pac, tex_uazside1.pac, tex_uazside2.pac, tex_uaztop.pac
			, tzk_tex_99
			, Box006
		};
		terrainCoef = 1; preferRoads = 0;
	};
	class BRDM_xj400: LandVehicle { terrainCoef = 1; preferRoads = 0; };
	class Truck5t_xj400: Truck5t { terrainCoef = 1; preferRoads = 0; };
	class Truck5tRepair_xj400: Truck5tRepair { terrainCoef = 1; preferRoads = 0; };
	class Truck5tRefuel_xj400: Truck5tRefuel { terrainCoef = 1; preferRoads = 0; };
	class Ural_xj400: Ural { terrainCoef = 1; preferRoads = 0; };
	class UralRepair_xj400: UralRepair { terrainCoef = 1; preferRoads = 0; };
	class UralRefuel_xj400: UralRefuel { terrainCoef = 1; preferRoads = 0; };

	class Jeep_Radar_xj400: Jeep_xj400 {
 		picture = "\tzk_texture_4_0_6\ui\iJeepRadar.paa";
		hiddenSelections[] = {tzk_tex_00,
			tex_mutt_backg.pac, tex_mutt_bottom.pac, tex_mutt_frontg.pac,
			tex_mutt_kapotag.pac,tex_mutt_kolog.pac, tex_mutt_koloog.pac,
			tex_mutt_palubkmg.pac, tex_mutt_podanteng.pac,tex_mutt_podlahg.pac,
			tex_mutt_podpaka.pac, tex_mutt_radiog.pac, tex_mutt_sedoperg.pac,
			tex_mutt_sedsedg.pac, tex_mutt_sideg.pac, tex_mutt_sklog.pac,
			tex_mutt_trubka.pac,tex_mutt_volant.paa, tex_mutt_pristrtga.paa
			, tzk_tex_99
		};
		class Animations {
			class rot_radar {
				type = rotation;
				animperiod = 2*7200;
				selection = "Box006";
				axis = "osaRadar";
				angle0= 0;
				angle1= -12.566*7200;
			};
		};
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 1; irScanGround = 1; // Standard radar setting.
		driverCanSee = CanSeeAll;
	};
	class UAZ_Radar_xj400: UAZ_xj400 {
 		picture = "\tzk_texture_4_0_6\ui\iUazRadar.paa";
		hiddenSelections[] = {tzk_tex_00,
			tex_jeep_kab_sklo1.paa, tex_jeep_kab_sklo2.paa, tex_jeep_kolo_side.pac,
			tex_mutt_bottom.pac, tex_mutt_kolog.pac, tex_mutt_koloog.pac, tex_uaz_ige_front.paa,
			tex_uaz_kapota_top.pac, tex_uaz_zasterka.pac, tex_uazbck.pac, tex_uazfrt.pac,
			tex_uazkolo.pac, tex_uazside1.pac, tex_uazside2.pac, tex_uaztop.pac
			, tzk_tex_99
		};
		class Animations {
			class rot_radar {
				type = rotation;
				animperiod = 2*7200;
				selection = "Box006";
				axis = "osaRadar";
				angle0= 0;
				angle1= -12.566*7200;
			};
		};
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 1; irScanGround = 1; // Standard radar setting.
		driverCanSee = CanSeeAll;
	};

	class HMMMV_TOW2A_xj400: JeepMG {
		model = "\TZK_Model_4_0_6\hmmwv_tow2_FK_HMMWV.p3d";
		terrainCoef = 1; preferRoads = 0;
	};
	class HMMMV_TOW2A_Auto_xj400: HMMMV_TOW2A_xj400 {
		// In debugging, don't forget use TZK soldiers but not origin ones otherwise CfgMoves will be abnormal
		hasGunner = 0;
		hasCommander = 0;
		driverAction = "ManActHmmwvGunner02";
		transportSoldier = 4;
		cargoAction[] = {"ManActJeepDriver","ManActHmmwvCargo02","ManActHmmwvCargo02","ManActHmmwvCargo02"};
		model = "\TZK_Model_4_0_6\hmmwv_tow2_Auto.p3d";
		class ViewPilotBase {
			initAngleX = 5;
			minAngleX = -9;
			maxAngleX = 45;
			initAngleY = 0;
			minAngleY = -180;
			maxAngleY = +180;
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.85;
		};
		class ViewPilot: ViewPilotBase {};
	};
	class BRDM2_MNF_xj400: BRDM_xj400 {
		terrainCoef = 1; preferRoads = 0;
		class UserActions {
			class SwitchToDriverLand: UA_SwitchToDriverLand {}; class SwitchToGunnerLand: UA_SwitchToGunnerLand {};

			class EquipLAW: UA_EquipLAW {};
			class EquipCarlGustav: UA_EquipCarlGustav {};
			class EquipGrenade: UA_EquipGrenade {};
			class EquipMortar: UA_EquipMortar {};
			class EquipMG: UA_EquipMG {};
			class TransportTurnON: UA_TransportTurnON {}; class TransportTurnOFF: UA_TransportTurnOFF {};
			class EjectOneCargo: UA_EjectOneCargo {}; class EjectAllCargo: UA_EjectAllCargo {};
		};
	};
	class BRDM2_MNF_Auto_xj400: BRDM2_MNF_xj400 {
		// In debugging, don't forget use TZK soldiers but not origin ones otherwise CfgMoves will be abnormal
		hasGunner = 0;
		hasCommander = 0;
		driverAction = "ManActven_brdm2_gunner";
		transportSoldier = 3;
		cargoAction[] = {"ManActven_brdm2_driver","ManActven_brdm2_codriver","ManActven_brdm2_codriver"};
		model = "\TZK_Model_4_0_6\BRDM2_MNF_Auto.p3d";
		class ViewPilotBase {
			initAngleX = 5;
			minAngleX = -5;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -180;
			maxAngleY = +180;
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.85;
		};
		class ViewPilot: ViewPilotBase {};
	};

	class HMMWV_M2wS_xj400: jeepMG {
		model = "\TZK_Model_4_0_6\hmmwv_m2wS_FK_HMMWV.p3d";
		accuracy = 1.5;
		terrainCoef = 1; preferRoads = 0;
		// redefine viewoptics
		class ViewOptics {
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -10;
			maxAngleY = 20;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class UserActions {
			class EquipM2: UA_EquipM2 {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			};
		};
	};
	class HMMWV_M134_xj400: HMMWV_M2wS_xj400 {
		displayName = "HMMWV M134"; cost = 100000; threat[] = {1, 0.1, 0.9};
		model = "\TZK_Model_4_0_6\hmmwv_M134.p3d";
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
	class BRDM_PK_xj400: BRDM {
		model = "\TZK_Model_4_0_6\BRDM_PK_BAS.p3d";
		accuracy = 1.5;
		terrainCoef = 1; preferRoads = 0;
		// redefine viewoptics
		class ViewOptics {
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -20;
			maxAngleY = 55;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class UserActions {
			class EquipPKT: UA_EquipPKT {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			};
		};
	};
	class BRDM_GShG_xj400: BRDM_PK_xj400 {
		displayName = "BRDM GShG"; cost = 100000; threat[] = {1, 0.1, 0.9};
		model = "\TZK_Model_4_0_6\BRDM_GShG.p3d";
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

	class M151A1C_htr_xj400: JeepMG_xj400 {
		accuracy = 1.5;
		displayName = "M151A1C with 106mm"; side = 1; cost = 100000; threat[] = {0.3, 1, 0.1};

		model = "\TZK_Model_4_0_6\m151a1c_htr.p3d";
		picture = "\tzk_texture_4_0_6\ui\iM151a1c.paa";
		hiddenSelections[] = {"shell_casing01","shell_projectile01","shell_casing02","shell_projectile02","shell_casing03","shell_projectile03","shell_casing04","shell_projectile04","shell_casing05","shell_projectile05","n1","n2","chambProj","chambCase"};

		gunnerAction = "ManActHTRM151ACGunner";
		gunnerOpticsmodel = "\TZK_Model_4_0_6\opt\htr_106recOptic";

		// "Gun106_htr_xj400"
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[] = {"Sabot106_htr_xj400"}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.

		class MGunClouds: WeaponFireGun {};

		maxSpeed = 80;
		unitInfoType = "UnitInfoShip";
		hideUnitInfo = 0;
		secondaryExplosion = 5;

		terrainCoef = 1; preferRoads = 0;
		// anti-tank car hasn't radar
		irScanGround = 0;
		irScanToEyeFactor = 0;

		armorBody = 0.8;
		armorFuel = 1.6;
		armorLights = 0.5;
		armorWheels = 0.12;
		damperSize = .07;
		damperForce = 40;

		driverCanSee = 2 + 4 + 8 + 16;
		gunnerCanSee = 2 + 4 + 8 + 16;
		gunnerHasOptics = 1;
		ejectDeadDriver = 1;
		ejectDeadGunner = 1;
		ejectDeadCommander = 1;
		ejectDeadCargo = 1;
		castDriverShadow = 1;
		castGunnerShadow = 1;
		hasCommander = 0;
		driverIsCommander = 1;
		nightVision = 1;
		transportSoldier = 1; // only 1 crew instead of 3 which in MCAR project is for logic turret direction detectore
		// transportSoldier = 3;

		gunnerOpticsColor[] = {1,0,0,1};

		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";

			minElev = -10 - 18; maxElev = +25 - 18; // There're +18 degree in the model thus need corret it here in config.
			minTurn = -180; maxTurn = +180;
			soundServo[] = {"",0,0};
		};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.11;
			minFov = 0.11;
			maxFov = 0.11;
		};
		class ViewGunner {
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.700000;
			minFov = 0.420000;
			maxFov = 0.850000;
		};
		class Animations {
			class lever {
				type ="rotation";
				animPeriod =.7;
				selection ="lever";
				axis ="leverAxis";
				angle0 =0;
				angle1 =-3.14;
			};
			class lock {
				type ="rotation";
				animPeriod =.7;
				selection ="lock";
				axis ="lockAxis";
				angle0 =0;
				angle1 =-1.57;
			};
			class shield {
				type ="rotation";
				animPeriod =1.5;
				selection ="frontGlass";
				axis ="frontGlass_axis";
				angle0 =0;
				angle1 =-1.7;
			};
		};
		class EventHandlers {
			init = _this exec localize {TZK_EVENT_INIT_REM_ALL_WEP};
		};
	};
	class UAZ_SPG_FDF_xj400: JeepMG_xj400 {
		accuracy = 1.5;
		displayName = "UAZ (SPG-9)"; nameSound = "UAZ"; side = 0; cost = 100000; type = 1; threat[] = {0.5, 1, 0.1};

		model = "\TZK_Model_4_0_6\uaz_spg_RUS.p3d";
		picture = "\tzk_texture_4_0_6\ui\iUazSpg.paa";
		crew ="soldierECrew";
		soundEngine[] = {"\TZK_Sounds_4_0_6\fdf\uaz_engine.wss", 0.031623, 1}; //FDF - Goeth 12.10.2003
		soundEnviron[] = {"\TZK_Sounds_4_0_6\fdf\car_treads.wss", 0.001, 1};
		soundGetIn[] = {"\TZK_Sounds_4_0_6\fdf\car_getin.wss", 0.001, 1};
		soundGetOut[] = {"\TZK_Sounds_4_0_6\fdf\car_getout.wss", 0.001, 1};
		soundLandCrash[] = {"\TZK_Sounds_4_0_6\fdf\car_crash.wss", 0.006, 1};
		soundGear[] = {"\TZK_Sounds_4_0_6\fdf\old_gear.wss", 0.0005, 1};
		soundWaterCrash[] = {"\TZK_Sounds_4_0_6\fdf\medium_water_splash.wss", 0.006, 1};

		// "Gun_Spg_fdf_xj400"
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[] = {"PG9HEAT_fdf_xj400"}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.

		class MGunClouds: WeaponFireGun {};

		dammageHalf[] = {"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa"};
		dammageFull[] = {"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo.paa","scud_skloC.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa"};

		armor = 20;
		armorGlass = 0.5;
		armorWheels = 0.1;

		transportSoldier = 1;
		gunnerCanSee = 2 + 4 + 8 + 16;
		gunnerHasOptics = 1;
		optics = 1;
		driverAction = "ManActUAZDriver";
		gunnerAction = "ManActFDFCrouch2";
		gunnerInAction = "ManActFDFCrouch2";
		cargoAction[] = {"ManActUazCoDriver","ManActCargo"};
		gunnerOpticsModel = "optika_tanke_auxiliary";

		unitInfoType = "UnitInfoShip";
		hideUnitInfo = 0;
		maxSpeed = 90;

		terrainCoef = 1; preferRoads = 0;
		// anti-tank car hasn't radar
		irScanGround = 0;
		irScanToEyeFactor = 0;

		class ViewOptics {
			initAngleX = 45;
			minAngleX = -270;
			maxAngleX = 45;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.13; minFov = 0.13; maxFov = 0.13;
		};
		class ViewGunner {
			initAngleX = 45; minAngleX = -270; maxAngleX = 45;
			initAngleY = 0; minAngleY = 0; maxAngleY = 0;
			initFov = 0.7; minFov = 0.15; maxFov = 0.7;
		};
		class TurretBase {};
		class Turret: TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
			soundServo[] = {"\TZK_Sounds_4_0_6\fdf\manual_servo.wss",0.000500,1}; //FDF - Goeth 11.5.2003
			minElev = -18;
			maxElev = 30;
			minTurn = -180;
			maxTurn = 180;
		};
		class EventHandlers {
			init = _this exec localize {TZK_EVENT_INIT_REM_ALL_WEP};
		};
	};