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

#define private 0
#define protected 1
#define public 2

class CfgPatches {
	class TZK_CONFIG_406 {
		name = "TZK_CONFIG_406";
		author = "IF";
		units[] = {};
		requiredAddons[] = {"TZK_CONFIG_405"}; // IMPORTANT!
		requiredVersion = 1.99;
	};
};


class CfgAmmo {
	class Default {};
	class Shell: Default {};
	class Shell73: Shell {};
	class Shell105: Shell73 {};
	class Shell120: Shell105 {};
	class Shell125: Shell120 {};
	
	class AT3:Default {};
	class LAW:AT3 {};
	class RPG:LAW {};
	class CarlGustav:AT3 {};
	class AT4: CarlGustav {};
	class AA:CarlGustav {};
	class 9K32:AA {};
	
	class Grenade: Default {};
	class MortarShell: Grenade {};
	
	class BulletSingle: Default {};
	class ExplosiveBullet: BulletSingle {};
	class Bullet30: ExplosiveBullet {};
	
	class Hellfire: AT3 {};
	class HellfireApach: Hellfire {};
	
	class Bullet4x20: ExplosiveBullet {};
	class Bullet4x20_xj400: Bullet4x20 {};
	class Bullet4x20_AntiPlane_xj406: Bullet4x20_xj400 {
		hit = 4; indirectHit = 1; indirectHitRange = 1;
		maxRange = 5000; 	maxRangeProbab = 0.2;
	};
};
class CfgWeapons {
	class Default {};

	class LAWLauncher:Default {};
	class CarlGustavLauncher:LAWLauncher {};
	class AT3Launcher: CarlGustavLauncher {};
	class HellfireLauncher: AT3Launcher {};

	class Gun73: Default {};
	class Gun105: Gun73 {};
	class Gun120: Gun105 {};
	class Gun125: Gun120 {};
	class Shell73 : Default {};
	class Heat73: Shell73 {};
	class Shell105: Shell73 {};
	class Heat105: Shell105 {};
	class Shell120: Shell105 {};
	class Heat120: Shell120 {};
	class Shell125: Shell120 {};
	class Heat125: Shell125 {};
	

	class MGun: Default {};
	class MachineGun7_6: MGun {};
	class MachineGun12_7: MachineGun7_6 {};
	
	class HellfireLauncherApach: HellfireLauncher {};
	
	class MachineGun30: MachineGun7_6 {};
	class VulcanCannon_xj400: MachineGun30 {};
	class VulcanCannon_AntiPlane_xj400: VulcanCannon_xj400 {
		ammo = "Bullet4x20_AntiPlane_xj406";
		initSpeed = 5000;
	};
};

	
class UA_MHQBuildMenu {};
class UA_MCVBuildMenu {};
class UA_SupBuildMenu {};

class UA_SelfMedic {};

class UA_EjectAICargo {};
class UA_EjectAllCargo {};
class UA_EjectOneCargo {};
class UA_TransportTurnON {};
class UA_TransportTurnOFF {};

class UA_AttachInVehicle {};
class UA_AttachOnFoot {};
class UA_AttachInVehicle_Truck : UA_AttachInVehicle {};
class UA_AttachOnFoot_Truck : UA_AttachOnFoot {};

class UA_AttachInVehicle_Center : UA_AttachInVehicle {};
class UA_AttachInVehicle_Right : UA_AttachInVehicle {};
class UA_AttachInVehicle_Left : UA_AttachInVehicle_Right {};
class UA_AttachOnFoot_Center : UA_AttachOnFoot {};
class UA_AttachOnFoot_Right : UA_AttachOnFoot {};
class UA_AttachOnFoot_Left : UA_AttachOnFoot {};

class UA_AttachInVehicle_APC : UA_AttachInVehicle {};
class UA_AttachOnFoot_APC : UA_AttachOnFoot {};

class UA_AttachInVehicle_Heli : UA_AttachInVehicle {};
class UA_AttachOnFoot_Heli : UA_AttachOnFoot {};

class UA_SwitchToDriverAir {};
class UA_SwitchToGunnerAir {};
class UA_SwitchToDriverLand : UA_SwitchToDriverAir {};
class UA_SwitchToGunnerLand : UA_SwitchToGunnerAir {};

class UA_SetFlightAltitude {};
class UA_LAND_Heli {};
class UA_AfterBurnerON {};
class UA_AfterBurnerOFF {};
class UA_SpoofMissileON {};
class UA_SpoofMissileOFF {};

class UA_EquipLAW {};
class UA_EquipRPG {};
class UA_EquipCarlGustav {};
class UA_EquipAT4 {};
class UA_EquipGrenade {};
class UA_EquipMortar {}	
class UA_EquipMG {};

class UA_ShowEquipList {};
class UA_HideEquipList {};

class UA_EquipM2 {};
class UA_EquipPKT {};

class UA_Equip9K112 {};
class UA_Equip9K119 {};
class UA_EquipATGM125 {};

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
	class Car: LandVehicle {};
	class Truck: Car {};
	class Jeep: Car {};
	class JeepMG: Jeep {};
	class HMMWV: Jeep {};
	class UAZ: Car {};
	class UAZG: Car {};
	class scud: Car {};
	class BRDM: LandVehicle {};
	class Truck5t: Truck {};
	class Truck5tRepair: Truck5t {};
	class Truck5tReammo: Truck5t {};
	class Truck5tRefuel: Truck5t {};
	class Ural: Truck {};
	class UralRepair: Ural {};
	class UralReammo: Ural {};
	class UralRefuel: Ural {};

	class Tank: LandVehicle {};
	class RussianTank: Tank {};
	class APC: Tank {};
	class ZSU: Tank {};
	class BMP: APC {};
	class BMPAmbul: BMP {};
	class BMPRes: BMP {};
	class BMP2: BMP {};
	class T55G: Tank {};
	class T72: RussianTank {};
	class T72Res: T72 {};
	class T80: RussianTank {};
	class T80Res: T80 {};
	class M1Abrams: Tank {};
	class M113: APC {};
	class M113Ambul: M113 {};
	class Vulcan: M113 {};
	class Bradley: M113 {};
	class M60: Tank {};

	class M2StaticMG: M113 {};
	
	class HMMMV_TOW2A_xj400 : JeepMG {};
	class HMMMV_TOW2A_Auto_xj400 : HMMMV_TOW2A_xj400 {
		// In debugging, don't forget use TZK soldiers but not origin ones otherwise CfgMoves will be abnormal
		hasGunner = 0;
		driverAction = "ManActHmmwvGunner02";
		transportSoldier = 4;
		cargoAction[] = {"ManActJeepDriver","ManActHmmwvCargo02","ManActHmmwvCargo02","ManActHmmwvCargo02"};
		model = "\TZK_Config_4_0_6\hmmwv_tow2_Auto.p3d";
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
	class BRDM_xj400: LandVehicle {};
	class BRDM2_MNF_xj400: BRDM_xj400 {
		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			
			class EquipLAW: UA_EquipLAW {};
			class EquipCarlGustav: UA_EquipCarlGustav {};
			class EquipGrenade: UA_EquipGrenade {};
			class EquipMortar: UA_EquipMortar {};
			class EquipMG: UA_EquipMG {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class BRDM2_MNF_Auto_xj400: BRDM2_MNF_xj400 {
		// In debugging, don't forget use TZK soldiers but not origin ones otherwise CfgMoves will be abnormal
		hasGunner = 0;
		driverAction = "ManActven_brdm2_gunner";
		transportSoldier = 3;
		cargoAction[] = {"ManActven_brdm2_driver","ManActven_brdm2_codriver","ManActven_brdm2_codriver"};
		model = "\TZK_Config_4_0_6\BRDM2_MNF_Auto.p3d";
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

	class UH60_CSLA_Base_xj400: Helicopter {
		class EventHandlers {
			GetOut = "_this exec {\TZK_Config_4_0_6\Scripts\CSLA_UH60A\GetOut_EH.sqs};"
		};
	};
	class UH60_CSLA_xj400: UH60_CSLA_Base_xj400 {
		model = "\TZK_Config_4_0_6\UH60A_CSLA2.p3d";
		class TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {};
			minElev = -20;
			maxElev = 20;
			minTurn = -45;
			maxTurn = 45;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {
			minElev = -0;
			maxElev = 0;
			minTurn = -0;
			maxTurn = 0;
		};
	};
	class UH60MG_CSLA_Base_xj400: UH60_CSLA_Base_xj400 {
		model = "\TZK_Config_4_0_6\UH60A_CSLA2.p3d";
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
	class Mi17_owp_ABC_xj400: Mi17 {};
	class Mi17_owp_Base_xj400: Mi17_owp_ABC_xj400 {};
	class Mi17_owp_xj400: Mi17_owp_Base_xj400 {
		class TurretBase {};
		class Turret: TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {};
			minElev = -0; maxElev = +0;
			minTurn = -0; maxTurn = +0;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
	};
	
	class Mi2NOE_Side_Base_xj400: Helicopter {};
	class Mi2NOE_FakeC_Base0_xj400: Mi2NOE_Side_Base_xj400 {};
	class Mi2NOE_FakeC_Base1_xj400: Mi2NOE_FakeC_Base0_xj400 {};
	class Mi2NOE_TZK_xj400: Mi2NOE_FakeC_Base1_xj400 {
		scope = protected;
	};
	
	class Su25_Base_xj400: Plane {};
	class Su25_xj400: Su25_Base_xj400 {};
	class Su25_xj406: Su25_xj400 {
		fuelCapacity = 10;
		armor = 3;
		armorStructual = 16;
	};
	
	class m119_xj400: M2StaticMG {
		soundEngine[] = {"",0,1};
		soundEnviron[] = {"",0,1};
	};
	class D30_xj400: M2StaticMG {
		soundEngine[] = {"",0,1};
		soundEnviron[] = {"",0,1};
	};
	class M252Mortar_TZK_xj400: M2StaticMG {
		soundEngine[] = {"",0,1};
		soundEnviron[] = {"",0,1};
	};

	// class Tank_xj400: Tank {};
	// class RussianTank_xj400: Tank_xj400 {};
	// class T72_Base_xj400: RussianTank_xj400 {};
	// class T80_Base_xj400: T72_Base_xj400 {};
	// class TZK_HeavyEastTank_Base_xj400: T80_Base_xj400 {};
	// class ZTZ99_xj400: TZK_HeavyEastTank_Base_xj400 {
		// model = "TZK_Config_4_0_6\ztz99.p3d";
	// };
};

// EOF