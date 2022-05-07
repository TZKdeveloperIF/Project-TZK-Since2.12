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
	class Bullet4x20_4xAA_xj406: Bullet4x20_xj400 {
		maxRange = 1300; // For 4xAA using both missile and cannon
	};
	class Bullet4x20_xj406: Bullet4x20_xj400 {
		indirectHitRange = 1;
		maxRange = 3000;
	};
	class Bullet4x23: ExplosiveBullet {};
	class Bullet4x23_xj400: Bullet4x23 {};
	class Bullet4x23_xj406: Bullet4x23_xj400 {
		indirectHitRange = 1;
	};

	// !! IMPORTANT. It seems maxControlRange is a useless parameter, and the thrustTime decides decisively the max range.
	class Stinger_xj400: AA {};
	class Stinger_Base_xj406: Stinger_xj400 {
		hit = 150; indirectHit = 0; indirectHitRange = 1; maxControlRange = 1000;
	};
	class Stinger_19_xj406: Stinger_Base_xj406 {
		maxRange = 1900;
		thrustTime = 3.2; 
	};
	class Stinger_23_xj406: Stinger_Base_xj406 {
		maxRange = 2300;
		thrustTime = 3.8;
	};
	class Stinger_26_xj406: Stinger_Base_xj406 {
		maxRange = 2600;
		thrustTime = 4.25;
	};
	class Stinger_30_xj406: Stinger_Base_xj406 {
		maxRange = 3000;
		thrustTime = 4.85;
	};
	class Strela_xj400: Stinger_xj400 {};
	class Strela_Base_xj406: Strela_xj400 {
		hit = 150; indirectHit = 0; indirectHitRange = 1; maxControlRange = 1000;
	};
	class Strela_19_xj406: Strela_Base_xj406 {
		maxRange = 1900;
		thrustTime = 3.2; 
	};
	class Strela_23_xj406: Strela_Base_xj406 {
		maxRange = 2300;
		thrustTime = 3.8;
	};
	class Strela_26_xj406: Strela_Base_xj406 {
		maxRange = 2600;
		thrustTime = 4.25;
	};
	class Strela_30_xj406: Strela_Base_xj406 {
		maxRange = 3000;
		thrustTime = 4.85;
	};
	
	class RedTop_26_xj400 : AA {
		thrustTime = 5; // Don't know why but in this class demical like 5.1 will be reset as its interger part automatically
	};
	class RedTop_30_xj400 : RedTop_26_xj400 {
		thrustTime = 6.3;
	};
	class RedTop_40_xj400 : RedTop_26_xj400 {
		thrustTime = 8.2;
	};
	// Add range-extended missile.
	class RedTop_45_xj400 : RedTop_26_xj400 {
		maxRange = 4500;
		thrustTime = 9.1;
	};
	class RedTop_48_xj400 : RedTop_26_xj400 {
		maxRange = 4800;
		thrustTime = 9.6;
	};
	class 9M311_26_xj400: RedTop_26_xj400 {
		thrustTime = 5; // Keep same as redtop
		thrust = 600;
		maxSpeed = 900;
		sideAirFriction = 1;
	};
	class 9M311_30_xj400 : 9M311_26_xj400 {
		thrustTime = 6.3;
	};
	class 9M311_40_xj400 : 9M311_26_xj400 {
		thrustTime = 8.2;
	};
	// Add range-extended missile.
	class 9M311_45_xj400 : 9M311_26_xj400 {
		maxRange = 4500;
		thrustTime = 9.1;
	};
	class 9M311_48_xj400 : 9M311_26_xj400 {
		maxRange = 4800;
		thrustTime = 9.6;
	};
	// Add special missile using small hit to attack little armor units only.
	class RedTop_26_TZK_xj400: RedTop_26_xj400 {
		thrustTime = 5.5;
		hit = 4;
	};
	class RedTop_30_TZK_xj400 : RedTop_30_xj400 {
		hit = 4;
		maxRange = 3000;
	};
	class RedTop_40_TZK_xj400 : RedTop_40_xj400 {
		hit = 4;
		maxRange = 4000;
	};
	class RedTop_45_TZK_xj400 : RedTop_45_xj400 {
		hit = 4;
		maxRange = 4500;
	};
	class RedTop_48_TZK_xj400 : RedTop_48_xj400 {
		hit = 4;
		maxRange = 4800;
	};
	class 9M311_26_TZK_xj400: 9M311_26_xj400 {
		thrustTime = 5.5;
		hit = 4;
	};
	class 9M311_30_TZK_xj400 : 9M311_30_xj400 {
		hit = 4;
		maxRange = 3000;
	};
	class 9M311_40_TZK_xj400 : 9M311_40_xj400 {
		hit = 4;
		maxRange = 4000;
	};
	class 9M311_45_TZK_xj400 : 9M311_45_xj400 {
		hit = 4;
		maxRange = 4500;
	};
	class 9M311_48_TZK_xj400 : 9M311_48_xj400 {
		hit = 4;
		maxRange = 4800;
	};

	class FakeC4_1000_xj400 : Grenade {
		hit = 0;
		indirectHit = 1000;
		indirectHitRange = 6;
		soundHit[] = {"Explosions\timebomb",100.00001,1};
		soundFly[] = {"",0,1};
		soundEngine[] = {"",0,1};
		visibleFire = 0;
		audibleFire = 0;
		visibleFireTime = 0;
	};
	class FakeC4_1100_xj400 : FakeC4_1000_xj400 {
		indirectHit = 1100;
	};
	class FakeC4_1200_xj400 : FakeC4_1000_xj400 {
		indirectHit = 1200;
	};
	class FakeC4_1300_xj400 : FakeC4_1000_xj400 {
		indirectHit = 1300;
	};
	class FakeC4_1400_xj400 : FakeC4_1000_xj400 {
		indirectHit = 1400;
	};
	class FakeC4_1500_xj400 : FakeC4_1000_xj400 {
		indirectHit = 1500;
	};

	class GuidedAT_APC_xj400: AT3 {
		hit = 750;
		indirectHitRange = 4;
	};
	class GuidedAT_P18_xj400: GuidedAT_APC_xj400 {
		hit = 650;
	};
	class GuidedAT_Heli_xj400: GuidedAT_APC_xj400 {
		hit = 1225; indirectHit = 600; indirectHitRange = 4;
	};
	class GuidedAT_Heli_P40_xj400: GuidedAT_Heli_xj400 {
		hit = 1175; indirectHitRange = 4;
		thrustTime = 10;
	};
	class GuidedAT_Cobra_P40_xj400: GuidedAT_Heli_P40_xj400 {
		proxyShape = "\TZK_Model_4_0_0\wp\hellfirecobra_proxy.p3d";
	};
	class GuidedAT_AT6_P40_xj400: GuidedAT_Heli_P40_xj400 {
		proxyShape = "\TZK_Model_4_0_0\wp\RHS_AT6a_Proxy.p3d";
	};
	class Maverick: Hellfire {};
	class Maverick_P50_xj400: Maverick {
		hit = 1250; indirectHit = 600; indirectHitRange = 4;
	};
	class Ch29T: Maverick {};
	class Ch29T_P50_xj400: Ch29T {
		hit = 1250; indirectHit = 600; indirectHitRange = 4;
		model = "\Su25\Ch_29T_shine";
		proxyShape = "\Su25\Ch_29T";
	};
	
	class Bullet12_7: Bullet7_6 {};
	class Bullet_12_7_AI_xj400: Bullet12_7 { hit = 12; };
	class Bullet_12_7_Player_xj400: Bullet12_7 { midRange = 5; maxRange = 6; } // cost = 600;
	
	class Carl_I_TZK_xj400: CarlGustav {};
	class Carl_II_TZK_xj400: Carl_I_TZK_xj400 {
		maxControlRange = 400; maneuvrability = 1.3;
	};
	class Carl_III_TZK_xj400: Carl_II_TZK_xj400 {
		maxControlRange = 600; maneuvrability = 1.6;
	};
	class Carl_IV_TZK_xj400: Carl_III_TZK_xj400 {
		maxControlRange = 800; maneuvrability = 2; maxRange = 800; thrustTime = 2.5;
	};
	class AT4_I_TZK_xj400: Carl_I_TZK_xj400 { model = "RPG"; };
	class AT4_II_TZK_xj400: Carl_II_TZK_xj400 { model = "RPG"; };
	class AT4_III_TZK_xj400: Carl_III_TZK_xj400 { model = "RPG"; };
	class AT4_IV_TZK_xj400: Carl_IV_TZK_xj400 { model = "RPG"; };
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
	class MG_12_7_TZK: MachineGun12_7 {
		modes[] = {"Player", "AI"};
		count = 1000;
		class Player: MachineGun12_7 {
			displayName = "Machine Gun (Player)";
			ammo = "Bullet_12_7_Player_xj400";
			multiplier = 2;
		};
		class AI: MachineGun12_7 {
			displayName = "Machine Gun (AI Mode)";
			ammo = "Bullet_12_7_AI_xj400";
			dispersion = 0.0035;
			reloadTime = 0.05; // double frequency of both reloadTime and aiRateOfFire
			aiRateOfFire = 0.25;
		};
	};
	
	class HellfireLauncherApach: HellfireLauncher {};
	
	#define CannonCommonMag(weapon, time, disp) weapon##_##time##_##disp##_xj406
	#define CannonSmallMag(weapon, time, disp) weapon##_Small_##time##_##disp##_xj406
	#define CannonClass(weapon, time, disp) \
	class CannonCommonMag(weapon,time,disp): weapon##_Base_xj406 { \
		reloadTime = 0.0##time##; \
		dispersion = 0.0##disp##; \
	}; \
	class CannonSmallMag(weapon,time,disp): CannonCommonMag(weapon,time,disp) { \
		count = 100; \
	};
	class MachineGun30: MachineGun7_6 {};
	class VulcanCannon_xj400: MachineGun30 {};
	class VulcanCannon_Base_xj406: VulcanCannon_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		ammo = "Bullet4x20_xj406";
	};
	CannonClass(VulcanCannon,3,30);
	CannonClass(VulcanCannon,3,25);
	CannonClass(VulcanCannon,3,20);
	CannonClass(VulcanCannon,3,15);
	CannonClass(VulcanCannon,3,10);
	CannonClass(VulcanCannon,3,05);
	class VulcanCannon_xj406: VulcanCannon_xj400 {
		scopeWeapon = 2; scopeMagazine = 0;
		magazinereloadtime = 3;
		magazines[] = {
			CannonCommonMag(VulcanCannon,3,30);
			CannonCommonMag(VulcanCannon,3,25);
			CannonCommonMag(VulcanCannon,3,20);
			CannonCommonMag(VulcanCannon,3,15);
			CannonCommonMag(VulcanCannon,3,10);
			CannonCommonMag(VulcanCannon,3,05);
			CannonSmallMag(VulcanCannon,3,30);
			CannonSmallMag(VulcanCannon,3,25);
			CannonSmallMag(VulcanCannon,3,20);
			CannonSmallMag(VulcanCannon,3,15);
			CannonSmallMag(VulcanCannon,3,10);
			CannonSmallMag(VulcanCannon,3,05);
		};
	};
	class ZsuCannon: MachineGun30 {};
	class ZsuCannon_Base_xj406: ZsuCannon {
		scopeWeapon = 0; scopeMagazine = 2;
		ammo = "Bullet4x23_xj406";
	};
	CannonClass(ZsuCannon,2,30);
	CannonClass(ZsuCannon,2,25);
	CannonClass(ZsuCannon,2,20);
	CannonClass(ZsuCannon,2,15);
	CannonClass(ZsuCannon,2,10);
	CannonClass(ZsuCannon,2,05);
	class ZsuCannon_xj406: ZsuCannon {
		scopeWeapon = 2; scopeMagazine = 0;
		magazinereloadtime = 3;
		magazines[] = {
			CannonCommonMag(ZsuCannon,2,30);
			CannonCommonMag(ZsuCannon,2,25);
			CannonCommonMag(ZsuCannon,2,20);
			CannonCommonMag(ZsuCannon,2,15);
			CannonCommonMag(ZsuCannon,2,10);
			CannonCommonMag(ZsuCannon,2,05);
			CannonSmallMag(ZsuCannon,2,30);
			CannonSmallMag(ZsuCannon,2,25);
			CannonSmallMag(ZsuCannon,2,20);
			CannonSmallMag(ZsuCannon,2,15);
			CannonSmallMag(ZsuCannon,2,10);
			CannonSmallMag(ZsuCannon,2,05);
		};
	};
	class Tunguska_30mm_DKM_xj400: ZsuCannon {};
	class Tunguska_30mm_SmallMag_xj406: Tunguska_30mm_DKM_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		count = 192;
		dispersion = 0.015;
	};
	class Tunguska_30mm_CommonMag_xj406: Tunguska_30mm_DKM_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		dispersion = 0.015;
	};
	class Tunguska_30mm_DKM_xj406: Tunguska_30mm_DKM_xj400 {
		scopeWeapon = 2; scopeMagazine = 0;
		magazinereloadtime = 3;
		magazines[] = {Tunguska_30mm_CommonMag_xj406, Tunguska_30mm_SmallMag_xj406};
	};

	class Stinger_xj400: AT3Launcher {};
	class Stinger_Mag_xj400: Stinger_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
	};
	class Strela_xj400: Stinger_xj400 {};
	class Strela_Mag_xj400: Strela_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
	};
	#define GeneralVehicleAA(range) \
	class Stinger_Mag_##range##_xj400: Stinger_Mag_xj400 { \
		ammo = Stinger_##range##_xj406; \
	}; \
	class Strela_Mag_##range##_xj400: Strela_Mag_xj400 { \
		ammo = Strela_##range##_xj406; \
	};
	GeneralVehicleAA(19);
	GeneralVehicleAA(23);
	GeneralVehicleAA(26);
	GeneralVehicleAA(30);

	class Stinger_Wep_xj400: Stinger_xj400 {
		scopeWeapon = 2; scopeMagazine = 0;
		magazines[] = {"Stinger_Mag_19_xj400","Stinger_Mag_23_xj400","Stinger_Mag_26_xj400","Stinger_Mag_30_xj400"};
	};
	class StingerT_Wep_xj400: Stinger_Wep_xj400 {
		count = 1;
		magazineReloadTime = 4;
	};
	class Strela_Wep_xj400: Strela_xj400 {
		scopeWeapon = 2; scopeMagazine = 0;
		magazines[] = {"Strela_Mag_19_xj400","Strela_Mag_23_xj400","Strela_Mag_26_xj400","Strela_Mag_30_xj400"};
	};
	class StrelaTWep_xj400: Strela_Wep_xj400 {
		count = 1;
		magazineReloadTime = 4;
	};

	#define AntiPlane4xAA(name, range) \
	class name##_##range##_TZK_xj400: ##name##_26_xj400 { \
		ammo = ##name##_##range##_TZK_xj400; \
	};
	class RedTop_26_xj400: HellfireLauncher {};
	class 9M311_26_xj400: HellfireLauncher {};
	AntiPlane4xAA(RedTop,26);
	AntiPlane4xAA(RedTop,30);
	AntiPlane4xAA(RedTop,40);
	AntiPlane4xAA(RedTop,45);
	AntiPlane4xAA(RedTop,48);
	AntiPlane4xAA(9M311,26);
	AntiPlane4xAA(9M311,30);
	AntiPlane4xAA(9M311,40);
	AntiPlane4xAA(9M311,45);
	AntiPlane4xAA(9M311,48);
	AntiPlane4xAA(9M311,60);

	class GuidedAT_APC_xj400: AT3Launcher {};
	class GuidedAT_P18_xj400: GuidedAT_APC_xj400 { ammo = "GuidedAT_P18_xj400"; };
	class ATLauncherTank_xj400: AT3Launcher {
		magazines[] = {"GuidedAT_APC_xj400","GuidedAT_P18_xj400"};
	};
	class GuidedAT_Heli_8_xj400: GuidedAT_APC_xj400 {};
	class GuidedAT_Heli_P40_xj400: GuidedAT_Heli_8_xj400 { ammo = "GuidedAT_Heli_P40_xj400"; };
	class GuidedAT_Cobra_P40_xj400: GuidedAT_Heli_8_xj400 { ammo = "GuidedAT_Cobra_P40_xj400"; };
	class GuidedAT_AT6_P40_xj400: GuidedAT_Heli_8_xj400 { ammo = "GuidedAT_AT6_P40_xj400"; };
	class GuidedAT_Heli_12_xj400: GuidedAT_APC_xj400 {};
	class GuidedAT_Heli_P40_12_xj400: GuidedAT_Heli_12_xj400 { ammo = "GuidedAT_Heli_P40_xj400"; };
	class ATLauncherAir_xj400: HellfireLauncher {
		magazines[]={
			"GuidedAT_Heli_8_xj400", "GuidedAT6_8_xj400", "GuidedAT_Cobra_8_xj400", "GuidedAT_Heli_12_xj400",
			"GuidedAT_Heli_P40_xj400", "GuidedAT_Cobra_P40_xj400", "GuidedAT_AT6_P40_xj400", "GuidedAT_Heli_P40_12_xj400",
		};
	};

	class MaverickLauncher: HellfireLauncher {};
	class Ch29TLauncher: MaverickLauncher {};
	class Maverick_P50_xj400: MaverickLauncher {
		ammo = "Maverick_P50_xj400";
	};
	class Ch29T_P50_xj400: Ch29TLauncher {
		ammo = "Ch29T_P50_xj400";
	};
	
	class Carl_I_TZK_xj400: CarlGustavLauncher {
		ammo = "Carl_I_TZK_xj400"; 
		picture = "\dtaext\equip\m\m_CarlGustavLauncher.paa";
		magazineType = "3 * 		256";
	};
	class Carl_II_TZK_xj400: Carl_I_TZK_xj400 { ammo = "Carl_II_TZK_xj400"; };
	class Carl_III_TZK_xj400: Carl_I_TZK_xj400 { ammo = "Carl_III_TZK_xj400"; };
	class Carl_IV_TZK_xj400: Carl_I_TZK_xj400 { ammo = "Carl_IV_TZK_xj400"; };
	class Carl_TZK_xj400: CarlGustavLauncher {
		magazines[] = {"CarlGustavLauncher","Carl_I_TZK_xj400","Carl_II_TZK_xj400","Carl_III_TZK_xj400","Carl_IV_TZK_xj400"};
		picture = "\dtaext\equip\w\w_CarlGustavLauncher.paa";
	};
	class AT4Launcher: CarlGustavLauncher {};
	class AT4_I_TZK_xj400: AT4Launcher { ammo = "AT4_I_TZK_xj400"; };
	class AT4_II_TZK_xj400: AT4Launcher { ammo = "AT4_II_TZK_xj400"; };
	class AT4_III_TZK_xj400: AT4Launcher { ammo = "AT4_III_TZK_xj400"; };
	class AT4_IV_TZK_xj400: AT4Launcher { ammo = "AT4_IV_TZK_xj400"; };
	class AT4_TZK_xj400: AT4Launcher {
		magazines[] = {"AT4Launcher","AT4_I_TZK_xj400","AT4_II_TZK_xj400","AT4_III_TZK_xj400","AT4_IV_TZK_xj400"};
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

	
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class HeliH: NonStrategic {};
	class Target_TZK_xj400: HeliH {
		model = "\TZK_Config_4_0_6\TZK_Target_New0.p3d";
	};
	class Strategic: Building {};
	class Camp: Strategic {};
	class Mash: Camp {};
	class Mash_TZK_xj400: Mash {
		attendant = 0;
	};
	class ReammoBox: Strategic {};
	class ReammoBoxWest: ReammoBox {};
	class ReammoBoxEast: ReammoBox {};
	class ReammoBoxW_TZK_xj400: ReammoBoxWest {
		class TransportMagazines {};
	};
	class ReammoBoxE_TZK_xj400: ReammoBoxEast {
		class TransportMagazines {};
	};
	
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

	#define SpoofMagazines "SpoofSwitch_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400"
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
	
	class A10_Base_xj400: A10 {
		accuracy = 0.29;
		armor = 2;
	};
	class A10_xj400: A10_Base_xj400 {};
	class A10_xj406: A10_xj400 {
		accuracy = 1000;
		armor = 50;
		fuelCapacity = 25;
	};
	class A10_Support_xj406 : A10_xj406 {
		maxSpeed = 400; // 2/3 of A10's maxspeed thus A10 can approach it easier.
		displayName = "A10 Support";
		weapons[] = {};
		magazines[]={SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_AAOnly_xj406: A10_xj406 {
		displayName = "A10 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30W" };
		magazines[]={"MachineGun30W", "MachineGun30W", "MachineGun30W", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_Vanilla_Base_xj400: A10 {
		accuracy = 0.29;
		armor = 2;
	};
	class A10_Vanilla_xj405: A10_Vanilla_Base_xj400 {
		accuracy = 1000;
		armor = 50;
		fuelCapacity = 25;
	};

	class Su25_Base_xj400: Plane {
		accuracy = 0.29;
		armor = 2;
	};
	class Su25_xj400: Su25_Base_xj400 {};
	class Su25_xj406: Su25_xj400 {
		accuracy = 1000;
		armor = 24;
		fuelCapacity = 25;
	};
	class Su25_Support_xj406 : Su25_xj406 {
		displayName = "Su25 Support";
		weapons[] = {};
		magazines[]={SpoofMagazines, "AfterBurnerSwitch_xj400"};
		maxSpeed = 533; // 2/3 of Su25's maxspeed thus Su25 can approach it easier.
	};
	class Su25_AAOnly_xj406: Su25_xj406 {
		displayName = "Su25 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30E" };
		magazines[]={"MachineGun30E", "MachineGun30E", "MachineGun30E", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	// Fill missed definition and fix broken definition of vanilla plane
	class Su25_Vanilla_Base_xj405: Su25 {
		accuracy = 0.29;
		armor = 2;
	};
	class Su25_Vanilla_xj405: Su25_Vanilla_Base_xj405 {
		accuracy = 1000;
		armor = 24;
		fuelCapacity = 25;
	};
	class Su25_AAOnly_Vanilla_xj405: Su25_Vanilla_xj405 {
		displayName = "Su25 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30E" };
		magazines[]={"MachineGun30E", "MachineGun30E", "MachineGun30E", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	
	class C130_Base_xj400: Plane {};
	class C130_xj400: C130_Base_xj400 {
		model = "\TZK_Config_4_0_6\C130.p3d";
	};
	
	// Remove soundEngine/soundEnviron
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

	class Tank_xj400: Tank {};
	class M1Abrams_Base_xj400: Tank_xj400 {};
	class TZK_HeavyWestTank_Base_xj400: M1Abrams_Base_xj400 {};
	class M1A1_xj400: TZK_HeavyWestTank_Base_xj400 {
		model = "\TZK_Config_4_0_6\M1A1_TZK.p3d";
	};
	class M1A2_INQ_xj400: TZK_HeavyWestTank_Base_xj400 {
		model = "\TZK_Config_4_0_6\M1A2_INQ.p3d";
	};
	class Leo2A6_xj400: TZK_HeavyWestTank_Base_xj400 {
		model = "\TZK_Config_4_0_6\Leo2A6.p3d";
	};
	
	class RussianTank_xj400: Tank_xj400 {};
	class T72_Base_xj400: RussianTank_xj400 {};
	class T80_Base_xj400: T72_Base_xj400 {};
	class TZK_HeavyEastTank_Base_xj400: T80_Base_xj400 {};
	class T80_xj400: TZK_HeavyEastTank_Base_xj400 {};
	class T90_xj400: TZK_HeavyEastTank_Base_xj400 {
		model = "\TZK_Config_4_0_6\T90_ICP.p3d";
	};
	class ZTZ99_xj400: TZK_HeavyEastTank_Base_xj400 {
		model = "\TZK_Config_4_0_6\ztz99.p3d";
	};

	class M1A1_Info_xj400: M1A1_xj400 { unitInfoType = 8; };
	class M1A2_Info_xj400: M1A2_INQ_xj400 { unitInfoType = 8; };
	class Leo2A6_Info_xj400: Leo2A6_xj400 { unitInfoType = 8; };
	class T80_Info_xj400: T80_xj400 { unitInfoType = 8; };
	class T90_Info_xj400: T90_xj400 { unitInfoType = 8; };
	class ZTZ99_Info_xj400: ZTZ99_xj400 { unitInfoType = 8; };

	class M109A6G_Base_xj400: M1Abrams_Base_xj400 {};
	class M109A6G_xj400: M109A6G_Base_xj400 {
		model = "\TZK_Config_4_0_6\M109A6_DKMM.p3d";
	};
	class PLZ05_VME_Base_xj400: T72_Base_xj400 {};
	class PLZ05_TZK_xj400: PLZ05_VME_Base_xj400 {
		model = "\TZK_Config_4_0_6\PLZ05.p3d";
	};
	
	class M60_Base_xj400: Tank_xj400 {};
	class M60_xj400: M60_Base_xj400 {
		model = "\TZK_Config_4_0_6\M60_TZK.p3d";
	};
	
	class M113_xj400: M113 {};
	class M113Ambul_xj400: M113Ambul {
		model = "\TZK_Config_4_0_6\M113_Ambu_TZK.p3d";
	};
	class Bradley_xj400: M113 {};
	class M2A2_xj400: Bradley_xj400 {
		model = "\TZK_Config_4_0_6\M2A2_TZK.p3d";
	};
	class Vulcan_xj400: M113 {
		model = "\TZK_Config_4_0_6\Vulcan_TZK.p3d";
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
	class Vulcan_Auto_xj406: Vulcan_xj400 {
		hasGunner = 0;
		driverIsGunner = 1;
	};

	class ZSU_xj400: ZSU {};
	class ZSU_Auto_xj400: ZSU_xj400 {
		hasGunner = 0;
		driverIsGunner = 1;
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
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Heat120","Shell120","MachineGun12_7"};
		type = 1;
		threat[] = {0.9,0.9,0.3};
		
		class HitGun { armor = 3; material = 52; name = "gun"; passThrough = 1; };
		maxSpeed = 70;
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
		model = "\TZK_Model_4_0_5\T80_TZK.p3d";
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
	class T80Res_Orange_xj406: T80Res_TZK_xj406 {
		scope = protected; vehicleClass = "TZK_Testing_300";
		displayName = "T80(Res) Orange"; accuracy = 1000;
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T80.sqs}, [_vehicle, {orange}] exec {\TZK_Objects\Scripts\texture\GUER.sqs};
		};
	};
	class T80Res_Yellow_xj406: T80Res_Orange_xj406 {
		displayName = "T80(Res) Yellow"; accuracy = 1000;
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T80.sqs}, [_vehicle, {yellow}] exec {\TZK_Objects\Scripts\texture\GUER.sqs};
		};
	};
	class T80Res_Purple_xj406: T80Res_Orange_xj406 {
		displayName = "T80(Res) Purple"; accuracy = 1000;
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\T80.sqs}, [_vehicle, {purple}] exec {\TZK_Objects\Scripts\texture\GUER.sqs};
		};
	};
	class T80Res_Green_xj406: T80Res_Base_xj406 {
		// This unit using original OFPR T80Res Model.
		scope = protected; vehicleClass = "TZK_Testing_300";
		displayName = "T80(Res) Green"; accuracy = 1000;
	};

	class Ship: AllVehicles {};
	class SmallShip: Ship {};
	class BoatW: SmallShip {};
	class BoatE: SmallShip {};
	class PCSFWjetski_xj400: BoatW {
		maxSpeed = 150;
	};
	class PCSFEjetski_xj400: BoatE {
		maxSpeed = 150;
	};
	class GunBoat_xj400: BoatW {};
	class GunBoatW_xj400: GunBoat_xj400 {};
	class GunBoatW_Auto_xj400: GunBoatW_xj400 {
		hasGunner = 0;
		driverIsGunner = 1;
	};
	class GunBoatE_xj400: GunBoat_xj400 {};
	class GunBoatE_Auto_xj400: GunBoatE_xj400 {
		hasGunner = 0;
		driverIsGunner = 1;
	};

	class Man: Land {};
	class Soldier: Man {};
	class SoldierWB: Soldier {};
	class SoldierWB_xj400: SoldierWB {};
	class LeaderW_xj400: SoldierWB_xj400 {};
	class LeaderW_Info_xj400: LeaderW_xj400 {
		accuracy = 1000;
		unitInfoType = 7;
		hideUnitInfo = 0;
	};
	class LeaderW_5HP_xj400: LeaderW_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class LeaderW_Info_5HP_xj400: LeaderW_Info_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class SoldierEB: Soldier {};
	class SoldierEB_xj400: SoldierEB {};
	class LeaderE_xj400: SoldierEB_xj400 {};
	class LeaderE_Info_xj400: LeaderE_xj400 {
		accuracy = 1000;
		unitInfoType = 7;
		hideUnitInfo = 0;
	};
	class LeaderE_5HP_xj400: LeaderE_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class LeaderE_Info_5HP_xj400: LeaderE_Info_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class OfficerW: SoldierWB {};
	class OfficerW_xj400: OfficerW {};
	class CommanderW_xj400: OfficerW_xj400 {};
	class CommanderW_Info_xj400: CommanderW_xj400 {
		accuracy = 1000;
		unitInfoType = 7;
		hideUnitInfo = 0;
	};
	class CommanderW_5HP_xj400: CommanderW_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class CommanderW_Info_5HP_xj400: CommanderW_Info_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class OfficerE: SoldierEB {};
	class OfficerE_xj400: OfficerE {};
	class CommanderE_xj400: OfficerE_xj400 {};
	class CommanderE_Info_xj400: CommanderE_xj400 {
		accuracy = 1000;
		unitInfoType = 7;
		hideUnitInfo = 0;
	};
	class CommanderE_5HP_xj400: CommanderE_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class CommanderE_Info_5HP_xj400: CommanderE_Info_xj400 {
		accuracy = 1000;
		armor = 5;
	};

	class SoldierWMedic: SoldierWB {};
	class SoldierWMedic_xj400: SoldierWMedic {};
	class SoldierWMedic_xj406: SoldierWMedic_xj400 { attendant = 0; };
	class SoldierEMedic: SoldierEB {};
	class SoldierEMedic_xj400: SoldierEMedic {};
	class SoldierEMedic_xj406: SoldierEMedic_xj400 { attendant = 0; };
};

// EOF