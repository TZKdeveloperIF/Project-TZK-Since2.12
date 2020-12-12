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
	class TZK_CONFIG_405 {
		name = "TZK_CONFIG_405";
		author = "IF";
		units[] = {};
		requiredAddons[] = {"MFCTI116","RMFCTI116",  "TZK_Objects_400_3","TZK_CONFIG_404"}; // IMPORTANT!
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
	// Redefine the power of sabot in TZK. Their indirectHit and indirectHitRange is unified as BIS value. The 800 hit is proper for keep same power as before.
	class M1Sabot_xj400: Shell120 {
		hit = 800; indirectHit = 300; indirectHitRange = 1;
	};
	class T80Sabot_xj400: Shell120 {
		hit = 800; indirectHit = 300; indirectHitRange = 1;
	};
	class LeoSabot_xj400: Shell120 {
		hit = 800; indirectHit = 300; indirectHitRange = 1;
	};
	class PLASabot_xj400: Shell120 {
		hit = 800; indirectHit = 300; indirectHitRange = 1;
	};
	// Provide proxy model packed in critical TZK Object/Config pbo.
	class AT3:Default {};
	class LAW:AT3 {};
	class RPG:LAW {};
	class CarlGustav:AT3 {};
	class AT4: CarlGustav {};
	class AA:CarlGustav {};
	class 9K32:AA {};
	class Stinger_xj400: AA { proxyShape = "\TZK_Config_4_0_5\model\wp\rocket_stinger.p3d"; };
	// Redefine proper mortar shell for Mortar 81mm/82mm structure. The mortar shouldn't be able to ruin tanks but in OFP it's hard to design this module. So mortar should just has small power with big range as before.
	class Grenade: Default {};
	class MortarShell: Grenade {};
	class Mortar4Ammo_xj400: MortarShell {};
	class Mortar81_xj400: Mortar4Ammo_xj400 {
		hit = 0; indirectHit = 40; indirectHitRange = 10;
		maxRange = 1500;
		model = "\TZK_Config_4_0_5\Model\PP87_Ammo.p3d";
	};

	class Shell_90mm_BOH_xj400: Shell {
		hit=150;
		indirectHit=110;
		indirectHitRange=6.0;
		minRange=20;
		minRangeProbab=0.75;
		midRange=400;
		midRangeProbab=0.95;
		maxRange=4000;
		maxRangeProbab=0.05;
		cost=1000;
		irLock=0;
		airLock=1;
		laserLock=0;
		soundHit[]={"\BOHJSDF5\wzr2\snd\can_exp",100.0,1};
	};
	class BulletSingle: Default {};
	class ExplosiveBullet: BulletSingle {};
	class Bullet30: ExplosiveBullet {};
	class Bullet_CGun_BOH_xj400: Bullet30 {
		hit=120;
		indirectHit=20;
		indirectHitRange=2;
		minRange=20;
		minRangeProbab=0.2;
		midRange=100;
		midRangeProbab=0.5;
		maxRange=1000;
		maxRangeProbab=0.05;
		cost=50;
		irLock=0;
		airLock=1;
		laserLock=0;
		soundHit[]={"\BOHJSDF5\wzr2\snd\cgun_exp",1.0,1};
		tracerColor[]={0.8,0.7,0.4,0.4};
	};
	class Hellfire: AT3 {};
	class HellfireApach: Hellfire {};
	class Hellfire2W_BOH_xj400: HellfireApach {
		model="\Apac\hellfire";
		hit=1800;
		indirectHit=180;
		indirectHitRange=2.500000;
		initTime=0.0000000;
		thrustTime=8.000000;
		thrust=1200;
		minRange=50;
		minRangeProbab=0.600000;
		midRange=1500;
		midRangeProbab=0.950000;
		maxRange=3500;
		maxRangeProbab=0.800000;
		maxSpeed=350;
		airLock=true;
		irLock=true;
		laserLock=true;
		maneuvrability=36.0;
	};
	class Bullet_FV24B_BOH_xj400: Bullet30 {
		hit=120;
		indirectHit=20;
		indirectHitRange=2;
		minRange=20;
		minRangeProbab=0.2;
		midRange=100;
		midRangeProbab=0.5;
		maxRange=1000;
		maxRangeProbab=0.05;
		cost=50;
		irLock=0;
		airLock=1;
		laserLock=0;
		soundHit[]={"\BOHJSDF5\wap\fv24b_exp",1.0,1};
		tracerColor[]={0.8,0.7,0.4,0.4};
	};
	class Shell_Zwige_BOH_xj400: Shell {
		hit=500;
		indirectHit=250;
		indirectHitRange=6.0;
		minRange=20;
		minRangeProbab=0.75;
		midRange=400;
		midRangeProbab=0.95;
		maxRange=4000;
		maxRangeProbab=0.05;
		cost=1000;
		irLock=0;
		airLock=1;
		laserLock=0;
		soundHit[]={"\BOHJSDF5\wap\Zwige_exp",100.0,1};
	};
	class DonkeyDX2_BOH_xj400: AT3 {
		hit=900;
		indirectHit=600;
		indirectHitRange=3.5;
		minRange=200;
		minRangeProbab=0.3;
		midRange=600;
		midRangeProbab=0.8;
		maxRange=3000;
		maxRangeProbab=0.5;
		maxSpeed=200;
		soundHit[]={"\BOHJSDF5\wap\DonkeyDX2_exp",100.0,1};
		soundFly[]={"\BOHJSDF5\wap\fly",0.05,2};
		soundEngine[]={"\BOHJSDF5\wap\DonkeyDX2_engine",1.0,1};
		cost=20000;
		model="TOW";
		irLock=1;
		airLock=0;
		laserLock=0;
		manualControl=0;
		maxControlRange=22500;
		maneuvrability=10.0;
		initTime=0.05;
		thrustTime=10.0;
		thrust=200;
	};
};
class CfgWeapons {
	class Default {};

	class LAWLauncher:Default {};
	class CarlGustavLauncher:LAWLauncher {};
	class AT3Launcher: CarlGustavLauncher {};
	class HellfireLauncher: AT3Launcher {};
	class 9M311_26_xj400: HellfireLauncher {
		magazineReloadTime = 15;
	};

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
	
	class Mortar81_Launcher_xj400: Gun120 {
		displayName = "M252 Mortar 81mm"; // Weapon, Muzzle and Mode parameter.
		scopeWeapon = 2; scopeMagazine = 0;
		
		backgroundReload = 1;
		reloadSound[] = {"\TZK_Objects\Sound\Pack_Mortar\mortar_reload.ogg",0.0316,1};
		canLock = 0; // Muzzle parameter
		magazineReloadTime = 5;
		primary = 10; // Default value. Probably no use. Refer to https://forums.bohemia.net/forums/topic/135694-primary-in-configcpp-regarding-weapons/
		magazines[]={"Mortar81_0200_xj400", "Mortar81_0201_xj400", "Mortar81_0202_xj400", "Mortar81_0080_xj400", "Mortar81_0120_xj400", "Mortar81_0180_xj400"}; // Use one of itself as its magazine.
	};
	class Mortar82_Launcher_xj400: Mortar81_Launcher_xj400 {
		displayName = "PP-87 Mortar 82mm"; // Weapon, Muzzle and Mode parameter.
		
	};
	class Mortar81_0200_xj400: Mortar81_Launcher_xj400 {
		displayName = "Mortar (directly shoot)"; // Weapon, Muzzle and Mode parameter.
		scopeWeapon = 0; scopeMagazine = 2;
		
		displayNameMagazine = "Mortar (directly shoot)"; // Magazine parameter
		shortNameMagazine = "Mortar";
		count = 25;
		initSpeed = 200; // This value will allow AI use it normally, and its range is a little more than 1500, quite ideal.
		
		ammo = "Mortar81_xj400"; // Mode parameter
		autoReload = 1;
		autoFire = 1;
		ffMagnitude = 0;
		ffFrequency = 1;
		reloadTime = 3;
		aiRateOfFire = 0.7;
		aiRateOfFireDistance = 2000;
		sound[] = {"\TZK_Objects\Sound\Pack_Mortar\mortar_fire.ogg",db+30,1};
		
		enableAttack = 1;
	};
	class Mortar81_0201_xj400: Mortar81_0200_xj400 {
		displayName = "Mortar (directly shoot)";
		displayNameMagazine = "Mortar (directly shoot)"; // Magazine parameter
		shortNameMagazine = "Mortar";
		ammo = "Mortar81_xj400"; // Mode parameter
		initSpeed = 201;
	};
	class Mortar81_0202_xj400: Mortar81_0200_xj400 {
		displayName = "Mortar (directly shoot)";
		displayNameMagazine = "Mortar (directly shoot)"; // Magazine parameter
		shortNameMagazine = "Mortar";
		ammo = "Mortar81_xj400"; // Mode parameter
		initSpeed = 202;
	};
	class Mortar81_0080_xj400: Mortar81_0200_xj400 {
		displayName = "Mortar (500m)";
		displayNameMagazine = "Mortar (500m)";
		shortNameMagazine = "Mortar";
		initSpeed = 80;
	};
	class Mortar81_0120_xj400: Mortar81_0080_xj400 {
		displayName = "Mortar (1000m)";
		displayNameMagazine = "Mortar (1000m)";
		initSpeed = 120;
	};
	class Mortar81_0180_xj400: Mortar81_0080_xj400 {
		displayName = "Mortar (1500m)";
		displayNameMagazine = "Mortar (1500m)";
		initSpeed = 180;
	};

	class MGun: Default {};
	class MachineGun7_6: MGun {};
	class CoaxW_xj400: MachineGun7_6 {
		displayNameMagazine = "M240 7.62mm";
	};
	class CoaxE_xj400: MachineGun7_6 {
		displayNameMagazine = "PKT 7.62mm";
	};

	// Weapon for BOH WAP units.
	class HVG90_BOH_xj400: Shell120 {
		cursor="\BOHJSDF5\wzr2\cursor.paa";
		cursorAim="\BOHJSDF5\wzr2\cursorA.paa";
		displayName="90mm HV Gun";
		displayNameMagazine="90HIVG";
		shortNameMagazine="90HIVG";
		ammo="Shell_90mm_BOH_xj400";
		count=18;
		initSpeed=1500;
		reloadTime=0.7;
		sound[]={"\BOHJSDF5\wzr2\snd\canon90",20.0,1};
		reloadSound[]={"\BOHJSDF5\wzr2\snd\canrld",0.01,1};
		magazineReloadTime=3;
	};
	class MachineGun12_7: MachineGun7_6 {};
	class CGun_BOH_xj400 : MachineGun12_7 {
		cursor="\BOHJSDF5\wzr2\cursor.paa";
		cursorAim="\BOHJSDF5\wzr2\cursorA.paa";
		ammo="Bullet_CGun_BOH_xj400";
		displayName="GAU-8C gatling gun";
		displayNameMagazine="GAU-8C";
		shortNameMagazine="GAU-8C";
		dispersion=0.005;
		count=1000;
		initSpeed=1100;
		reloadTime=0.08;
		sound[]={"\BOHJSDF5\wzr2\snd\gun",10.0,1};
		flashSize=0.6;
		maxLeadSpeed=350;
		soundContinuous=1;
		revolving="barrels";
		revolvingAxis="barrels_axis";
	};
	class HellfireLauncherApach: HellfireLauncher {};
	class HellfireLauncherWAP_BOH_xj400: HellfireLauncherApach {
		cursor="\BOHJSDF5\wzr2\cursor.paa";
		cursorAim="\BOHJSDF5\wzr2\cursorM.paa";
		ammo="Hellfire2W_BOH_xj400";
		displayName="AGM-114F";
		displayNameMagazine="AGM-114F";
		shortNameMagazine="AGM-114F";
		count=4;
	};
	class HellfireLauncherWAP2_BOH_xj400: HellfireLauncherWAP_BOH_xj400 {
		ammo = "GuidedAT_Heli_xj400";
	};
	class FV24B_BOH_xj400 : MachineGun12_7 {
		cursor="\BOHJSDF5\wap\cursor.paa";
		cursorAim="\BOHJSDF5\wap\cursorAim.paa";
		ammo="Bullet_FV24B_BOH_xj400";
		displayName="FV-24B";
		displayNameMagazine="FV-24B";
		shortNameMagazine="FV-24B";
		dispersion=0.005;
		count=1000;
		initSpeed=1100;
		reloadTime=0.04;
		sound[]={"\BOHJSDF5\wap\fv24b",10.0,1};
		flashSize=0.6;
		maxLeadSpeed=350;
		soundContinuous=1;
		revolving="barrels";
		revolvingAxis="barrels_axis";
	};
	class Zwige_BOH_xj400: Shell120 {
		cursor="\BOHJSDF5\wap\cursor.paa";
		cursorAim="\BOHJSDF5\wap\cursorAim.paa";
		displayName="Zwige";
		displayNameMagazine="Zwige";
		shortNameMagazine="Zwige";
		ammo="Shell_Zwige_BOH_xj400";
		count=8;
		initSpeed=1550;
		reloadTime=1.0;
		sound[]={"\BOHJSDF5\wap\Zwige_fire",20.0,1};
		reloadSound[]={"\BOHJSDF5\wap\Zwige_reload",0.01,1};
		magazineReloadTime=5;
	};
	class DonkeyDX2Launcher_BOH_xj400: AT3Launcher {
		cursor="\BOHJSDF5\wap\cursor.paa";
		cursorAim="\BOHJSDF5\wap\cursorAim_m.paa";
		scopeWeapon=2;
		scopeMagazine=2;
		ammo="DonkeyDX2_BOH_xj400";
		weaponType=65536;
		magazineType=0;
		displayName="Donkey DX2";
		displayNameMagazine="Donkey DX2";
		shortNameMagazine="Donkey DX2";
		count=8;
		reloadTime=2.0;
		sound[]={"\BOHJSDF5\wap\DonkeyDX2_launch",5.0,1};
		reloadSound[]={"Weapons\missload",0.0003,1};
		initSpeed=0;
		primary=10;
		canLock=2;
		autoReload=1;
		aiRateOfFire=2.0;
		aiRateOfFireDistance=1800;
	};

};

// Base classes for UserActions. They're defined in TZK_Objects.pbo of @TZK_4.0.3 and are just declared here.
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
class UA_LAND_Heli {}

class UA_AfterBurnerON {};
class UA_AfterBurnerOFF {};
class UA_SpoofMissileON {};
class UA_SpoofMissileOFF {};

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
	
	// "Vanilla" units redefinition. Using "_xj405" as new postfix. These units are for "Vanilla" mode missions to make their model change if Bin\CONFIG changed by external mods.
	#define SpoofMagazines "SpoofSwitch_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400"
	class Mi17_Vanilla_xj405: Mi17 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi17_MG_Vanilla_xj405: Mi17_Vanilla_xj405 {
		displayName = "Mi17 MG";
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
	};
	class Mi17_LGB_Vanilla_xj405: Mi17_Vanilla_xj405 {
		displayName = "Mi17 LGB";
		laserScanner = 1;
		weapons[] = {LGBLauncher_xj400};
		magazines[]={Mag_LGB_2_xj400, SpoofMagazines};
	};
	class UH60_Vanilla_xj405: UH60 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class UH60_MG_Vanilla_xj405: UH60_Vanilla_xj405 {
		displayName = "UH60 MG";
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
	};
	class UH60_LGB_Vanilla_xj405: UH60_Vanilla_xj405 {
		displayName = "UH60 LGB";
		laserScanner = 1;
		weapons[] = {LGBLauncher_xj400};
		magazines[]={Mag_LGB_2_xj400, SpoofMagazines};
	};
	class UH60MG_Vanilla_xj405: UH60MG {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	
	class Ka50_Vanilla_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "$STR_DN_OUT_HELI_KAM"; nameSound = "chopper"; side = 0; cost = 4000000; type = 2; threat[] = {0.6,1,0.8};

		armor = 50; //Must be low value else subclass won't be attack by machine gun
		model = "\TZK_Objects\Model\V80_TZK.p3d";

		picture = "\TZK_Objects\Texture\icon\iKa50.paa"

		access = 2;
		crew = "SoldierEPilot";
		maxSpeed = 400;

		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\mi_helicopter",3.1622777,1};
		weapons[] = {"Cannon30_Kamov_xj400","HellfireLauncherKamov_xj400","Rocket57x40Kamov_xj400"};
		magazines[]={"Cannon30HE_Kamov_xj400","Cannon30AP_Kamov_xj400","HellfireLauncherKamov_xj400","Rocket57x40Kamov_xj400", SpoofMagazines};
		driverOpticsModel = "\o\vehl\V80_optika.p3d";
		transportSoldier = 0;
		transportAmmo = 0;

		typicalCargo[] = {"Soldier"};
		hasGunner = 0;
		driverAction = "ManActA10Pilot";
		gunnerAction = "ManActMi24Gunner"; // Invalid for V80
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -45;
			maxElev = 10;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Viewoptics {
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
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
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -35;
			max = 35;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Ka50_Vanilla_xj405: Ka50_Vanilla_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		armor = 75; // half the value since new model with partial hit-points
		displayName = "Ka50";
		laserScanner = 1;
	};
	class Ka50_AT_Vanilla_xj405: Ka50_Vanilla_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		irScanRangeMin = 1000; irScanToEyeFactor = 0.75;
		armor = 90; // = 75 x 1.2
		displayName = "Ka50 AT";
		laserScanner = 1;
		weapons[] = {ATLauncherAir_xj400, CannonE_20HE_xj400, CannonE_20AP_xj400};
		magazines[]={GuidedAT_Heli_12_xj400, Mag_20HE_800_01_xj400, Mag_20AP_200_01_xj400, SpoofMagazines};
	};

	class A10_Vanilla_Base_xj400: A10 {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		armor = 50;

		weapons[] = {"MaverickLauncher","MachineGun30A10"};
		magazines[]={"MaverickLauncher","MachineGun30A10", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_Vanilla_xj405: A10_Vanilla_Base_xj400 {
		scope = protected;
		irScanToEyeFactor = 2.4; // Enlarge Planes' scan range thus they can spot enemy far, design their route and attack.
	//	armor = 70;
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class AfterBurnerON : UA_AfterBurnerON {}; class AfterBurnerOFF : UA_AfterBurnerOFF {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
		};
	};
	class A10_FFAR_Vanilla_xj405: A10_Vanilla_xj405 {
		displayName = "A10 FFAR";
		weapons[] = {"Zuni_MaverickLike_xj400" };
		magazines[]={"Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", SpoofMagazines };
	};
	class A10_LGB_Vanilla_xj405: A10_Vanilla_xj405 {
		displayName = "A10 LGB";
		weapons[] = {LGBLauncher_xj400, Cannon_30APHE_xj400};
		magazines[]={Mag_LGB_8_xj400, Mag_30APHE_1200_01_xj400, SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_Buster_Vanilla_xj405: A10_LGB_Vanilla_xj405 {
		displayName = "A10 Buster";
		weapons[] = {"LGBLauncher_xj400"};
		magazines[]={"Mag_LGB_8_xj400" , SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_Tomahawk_Vanilla_xj405: A10_Vanilla_xj405 {
		camouflage = 80; audible = 100; // 10x to be detected by AI for Nuclear Planes.
		displayName = "A10 Tomahawk";
		weapons[] = {"Tomahawk_xj400"};
		magazines[]={"Tomahawk_xj400", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_Support_Vanilla_xj405 : A10_Vanilla_xj405 {
		maxSpeed = 400; // 2/3 of A10's maxspeed thus A10 can approach it easier.
		displayName = "A10 Support";
		weapons[] = {};
		magazines[]={SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_AAOnly_Vanilla_xj405: A10_Vanilla_xj405 {
		displayName = "A10 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30W" };
		magazines[]={"MachineGun30W", "MachineGun30W", "MachineGun30W", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};

	class Su25_Vanilla_xj405: Su25 {
		scope = protected;
		accuracy = 1000;
		irScanToEyeFactor = 2; // Not to enlarge Su25's scan range since they are flexible and faster.
		laserScanner = 1;

		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class AfterBurnerON : UA_AfterBurnerON {}; class AfterBurnerOFF : UA_AfterBurnerOFF {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
		};
	};
	class Su25_Rocket_xj400: Su25_Vanilla_xj405 {
		displayName = "Su25 Rocket";
		weapons[] = {"Rocket57x192" };
		magazines[]={"Rocket57x192", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class Su25_LGB_xj400: Su25_Vanilla_xj405 {
		displayName = "Su25 LGB";
		weapons[] = {LGBLauncher_xj400, Cannon_30APHE_xj400};
		magazines[]={Mag_LGB_8_xj400, Mag_30APHE_1200_01_xj400, SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class Su25_Buster_xj400: Su25_LGB_xj400 {
		displayName = "Su25 Buster";
		weapons[] = {"LGBLauncher_xj400"};
		magazines[]={"Mag_LGB_8_xj400", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class Su25_Raduga_xj400: Su25_LGB_xj400 {
		camouflage = 80; audible = 100; // 10x to be detected by AI for Nuclear Planes.
		displayName = "Su25 Raduga";
		weapons[] = {"Raduga_xj400"};
		magazines[]={"Raduga_xj400", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class Su25_Support_xj400 : Su25_Vanilla_xj405 {
		displayName = "Su25 Support";
		weapons[] = {};
		magazines[]={SpoofMagazines, "AfterBurnerSwitch_xj400"};
		maxSpeed = 533; // 2/3 of Su25's maxspeed thus Su25 can approach it easier.
	};
	class Su25_AAOnly_xj400: Su25_Vanilla_xj405 {
		displayName = "Su25 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30E" };
		magazines[]={"MachineGun30E", "MachineGun30E", "MachineGun30E", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};

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
	
	class Jeep_Vanilla_xj405: Jeep {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class JeepMG_Vanilla_xj405: JeepMG {
		scope = protected; vehicleClass = "TZK_Units_400";
		class HitGun { armor = 3; material = 52; name = "gun"; passThrough = 1; }; armorGun = 3;
		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
		};
	};
	class HMMWV_Vanilla_xj405: HMMWV {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class UAZ_Vanilla_xj405: UAZ {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class BRDM_Vanilla_xj405: BRDM {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class Truck5t_Vanilla_xj405: Truck5t {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class Truck5tRepair_Vanilla_xj405: Truck5tRepair {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class AttachInVehicle_Truck : UA_AttachInVehicle_Truck {}; class AttachOnFoot_Truck : UA_AttachOnFoot_Truck {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class Truck5tRefuel_Vanilla_xj405: Truck5tRefuel {
		scope = protected; vehicleClass = "TZK_Units_400";
	};

	class Ural_Vanilla_xj405: Ural {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class UralRepair_Vanilla_xj405: UralRepair {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class AttachInVehicle_Truck : UA_AttachInVehicle_Truck {}; class AttachOnFoot_Truck : UA_AttachOnFoot_Truck {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class UralRefuel_Vanilla_xj405: UralRefuel {
		scope = protected; vehicleClass = "TZK_Units_400";
	};

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
	
	class M113_Vanilla_xj405: M113 {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class BMP_Vanilla_xj405: BMP {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};

	class M113Ambul_Vanilla_xj405: M113Ambul {
		scope = protected; vehicleClass = "TZK_Units_400";
		class TransportMagazines {};
		attendant = 0;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
		};
	};
	class MHQW_Vanilla_xj405: M113Ambul_Vanilla_xj405 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName = "Unflip MHQ";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "alive this && siPlayer == si0";
				statement = "[this] exec {Player\Action\UnflipVehicle.sqs}";
			};
			class UnLock {
				displayName = "Unlock MHQ";
				position = "pos driver";
				priority = 4;
				radius = 25;
				condition = "alive this && siPlayer == si0 && isCommander && locked this";
				statement = "[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class Lock {
				displayName = "Lock MHQ";
				position = "pos driver";
				priority = 4;
				radius = 25;
				condition = "alive this && siPlayer == si0 && isCommander && !(locked this)";
				statement = "[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class RepairMHQ {
				displayName = "Repair MHQ";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "siPlayer == si0 && !(alive this)";
				statement = "[this] exec {Player\Action\RepairMHQ.sqs}";
			};
		};
	};
	class MCVW_Vanilla_xj405: M113Ambul_Vanilla_xj405 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName = "Unflip MCV";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "alive this && siPlayer == si0";
				statement = "[this] exec {Player\Action\UnflipVehicle.sqs}";
			};
			class RepairMCV {
				displayName = "Repair MCV";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "siPlayer == si0 && !(alive this)";
				statement = "[this] exec {Player\Action\RepairMCV.sqs}";
			};
		};
	};

	class BMPAmbul_Vanilla_xj405: BMPAmbul {
		scope = protected; vehicleClass = "TZK_Units_400";
		class TransportMagazines {};
		attendant = 0;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
		};
	};
	class MHQE_Vanilla_xj405: BMPAmbul_Vanilla_xj405 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName = "Unflip MHQ";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "alive this && siPlayer == si1";
				statement = "[this] exec {Player\Action\UnflipVehicle.sqs}";
			};
			class UnLock {
				displayName = "Unlock MHQ";
				position = "pos driver";
				priority = 4;
				radius = 25;
				condition = "alive this && siPlayer == si1 && isCommander && locked this";
				statement = "[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class Lock {
				displayName = "Lock MHQ";
				position = "pos driver";
				priority = 4;
				radius = 25;
				condition = "alive this && siPlayer == si1 && isCommander && !(locked this)";
				statement = "[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class RepairMHQ {
				displayName = "Repair MHQ";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "siPlayer == si1 && !(alive this)";
				statement = "[this] exec {Player\Action\RepairMHQ.sqs}";
			};
		};
	};
	class MCVE_Vanilla_xj405: BMPAmbul_Vanilla_xj405 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName = "Unflip MCV";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "alive this && siPlayer == si1";
				statement = "[this] exec {Player\Action\UnflipVehicle.sqs}";
			};
			class RepairMCV {
				displayName = "Repair MCV";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "siPlayer == si1 && !(alive this)";
				statement = "[this] exec {Player\Action\RepairMCV.sqs}";
			};
		};
	};

	class Bradley_Vanilla_xj405: Bradley {
		scope = protected; vehicleClass = "TZK_Units_400";
		armor = 200;
		
		weapons[] = {Cannon25HE_xj400,MachineGun7_6_xj400,HellfireLauncherM2A2_xj400};
		magazines[]={Cannon25HE_xj400,MachineGun7_6_xj400,HellfireLauncherM2A2_xj400,HellfireLauncherM2A2_xj400,HellfireLauncherM2A2_xj400,HellfireLauncherM2A2_xj400};
	};
	class M2A2_Vanilla_xj405: Bradley_Vanilla_xj405 {
		scope = protected; vehicleClass = "TZK_Units_400";
		// CTI unit with special adjustment.
		displayName = "M2A2";
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 2; irScanGround = 0;
		gunnerCanSee = "1+4+8+16";
		cost = 200000;
	//	armor = 350;
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class M2A2_AT_Vanilla_xj405: M2A2_Vanilla_xj405 {
		scope = protected;
		displayName = "M2A2 AT";
		cost = 2000000;
		weapons[] = {ATLauncherTank_xj400, 50calW_xj400};
		magazines[]= {GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400,
		50calW_xj400, 50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400};
		threat[] = {1, 1, 0.5};
	};
	class M2A2_AA_Vanilla_xj405: M2A2_Vanilla_xj405 {
		displayName = "M2A2 AA";
		weapons[] = {Stinger_xj400, MachineGun7_6_xj400};
		magazines[]={Stinger_xj400, Stinger_xj400, Stinger_xj400, Stinger_xj400, Stinger_xj400, Stinger_xj400, Stinger_xj400, Stinger_xj400, MachineGun7_6_xj400};
		threat[] = {1, 0.9, 1};
		minFireTime = 1;
	};
	class M2A2_AA_Town_Vanilla_xj405: M2A2_AA_Vanilla_xj405 {
		scope = protected; vehicleClass = "TZK_Units_400";
		irScanToEyeFactor = 1.5;
		sensitivity = 2; sensitivityEar = 0.015;
	};

	class BMP2_Base_Vanilla_xj405: BMP2 {
		scope = private; vehicleClass = "TZK_Units_400";
		armor = 250;
		weapons[] = {Cannon30_BMP2_xj400,MachineGun7_6_xj400,HellfireLauncherBMP2_xj400};
		magazines[]={Cannon30HE_BMP2_xj400,Cannon30AP_BMP2_xj400,MachineGun7_6_xj400,HellfireLauncherBMP2_xj400};
	};
	class BMP2_Vanilla_xj405: BMP2_Base_Vanilla_xj405 {
		// CTI unit with special adjustment.
		scope = protected;
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 2; irScanGround = 0;
		gunnerCanSee = "1+4+8+16";
	//	armor = 330;
		displayName = "BMP2";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class BMP2_AT_Vanilla_xj405: BMP2_Vanilla_xj405 {
		displayName = "BMP2 AT";
		cost = 2000000;
		weapons[] = {ATLauncherTank_xj400, 50calE_xj400};
		magazines[]= {GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400,
		50calE_xj400, 50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400};
		threat[] = {1, 1, 0.5};
	};
	class BMP2_AA_Vanilla_xj405: BMP2_Vanilla_xj405 {
		displayName = "BMP2 AA";
		weapons[] = {Strela_xj400, MachineGun7_6_xj400};
		magazines[]={Strela_xj400, Strela_xj400, Strela_xj400, Strela_xj400, Strela_xj400, Strela_xj400, Strela_xj400, Strela_xj400, MachineGun7_6_xj400};
		threat[] = {1, 0.9, 1};
		minFireTime = 1;
	};
	class BMP2_AA_Town_Vanilla_xj405: BMP2_AA_Vanilla_xj405 {
		scope = protected;
		irScanToEyeFactor = 1.5;
		sensitivity = 2; sensitivityEar = 0.015;
	};

	class M60_Vanilla_xj405: M60 {
		scope = protected; vehicleClass = "TZK_Units_400";
		weapons[] = {"Gun105","MachineGun7_6_xj400"};
		magazines[]={"Heat105","Shell105","MachineGun7_6_xj400"};
	};
	class T72_Vanilla_xj405: T72 {
		scope = protected; vehicleClass = "TZK_Units_400";
		weapons[] = {"Gun120","MachineGun7_6_xj400"};
		magazines[]={"Heat120","Shell120","MachineGun7_6_xj400"};
	};



	// Redefine M252/PP87 Mortar and M119/D30A Howitzer STRUCTURE to make AI using rifle to shoot them, adjust position of and allow them float on water.
	class M2StaticMG: M113 {};
	class M252Mortar_TZK_xj400: M2StaticMG {
		displayName = "Mortar 81mm"; type = 1; threat[] = {1, 1, 0};
		armor = 30; armorStructural = 10; // Low armor will make AI use rifle shooting at it.
		
		model = "\TZK_CONFIG_4_0_5\Model\Mortar81_TZK.p3d";
		weapons[] = {"Mortar81_Launcher_xj400"};
		magazines[]={"Mortar81_0120_xj400"};
		
		canFloat = 1; // Since TZK_4.0.4.07 structures are allowed to be attached.
	};
	// PP87 Mortar of CHN PLA from VME PLA mod.
	class PP87_TZK_xj400: M252Mortar_TZK_xj400 {
		accuracy = 0.109; // Less than 0.11
		displayName = "PP-87 82mm"; side = 0;
		
		model = "\TZK_CONFIG_4_0_5\Model\PP87_TZK.p3d";
		picture = "\TZK_CONFIG_4_0_5\Tex\PP87.paa";
		
		weapons[] = {"Mortar82_Launcher_xj400"};
		gunnerAction = "ManActCombatToMedic";
		
		crew = "SoldierEB";
		
		class TurretBase {};
		class Turret: TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -10;
			maxElev = +85;
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
	};
	class m119_xj400: M2StaticMG {
		model = "\TZK_Model_4_0_5\m119.p3d";
		canFloat = 1;
	};
	class D30_xj400: M2StaticMG {
		model = "\TZK_Model_4_0_5\D30.p3d";
		canFloat = 1;
	};

	// Add size of pre-load texture faces of west APC and fix dismatch error of texture and selections in resolution LODs.
	class M113_xj400: M113 {
		model = "\TZK_Model_4_0_5\m113_TZK.p3d";
	};
	class M113Ambul_xj400: M113Ambul {
		model = "\TZK_Model_4_0_5\M113_Ambu_TZK.p3d";
	};
	class Vulcan_xj400: M113 {
		model = "\TZK_Model_4_0_5\Vulcan_TZK.p3d";
	};
	class Bradley_xj400: M113 {};
	class M2A2_xj400: Bradley_xj400 {
		model = "\TZK_Model_4_0_5\M2A2_TZK.p3d";
	};
	
	// Try use proxy on M1A2, containing its driver room in resolution LODs to make M1A2 contain more vertex/face (for its winter camoflage).
	class Tank_xj400: Tank {};
	class M1Abrams_Base_xj400: Tank_xj400 {};
	class TZK_HeavyWestTank_Base_xj400: M1Abrams_Base_xj400 {};
	class M1A2_INQ_xj400: TZK_HeavyWestTank_Base_xj400 {
		class HitTurret { armor = 0.6; material = 51; name = "turet"; passThrough = 1; };
		class HitGun { armor = 0.7; material = 52; name = "gun"; passThrough = 1; };
		model = "\TZK_Model_4_0_5\M1A2_INQ.p3d";
		hiddenSelections[] = {"BS1","BS2","BS3","_mark","_chevron","_for",  tzk_tex_00,
			tex_blampe1.paa, tex_blampe2.paa, tex_box.paa, tex_box2.paa, tex_ca.paa, tex_chabak.paa, tex_chabot.paa, tex_chatop.paa, tex_citv.paa, tex_cws.paa, tex_cws1.paa, tex_dratybk.paa, tex_dratysd.paa, tex_drivhat.paa, tex_green.paa, tex_greendirt.paa, tex_kettea1.paa, tex_kolo1.paa, tex_kolo1a.paa, tex_kolo2.paa, tex_kolo2a.paa, tex_kolop.paa, tex_kolot.paa, tex_ksidin1.paa, tex_ksidin2.paa, tex_ksidl.paa, tex_ksidr.paa, tex_ksidtp.paa, tex_kuk2x2a.paa, tex_mg.paa, tex_mg2.paa, tex_misc1.paa, tex_misc2.paa, tex_misc3.paa, tex_mlamp1.paa, tex_mlamp1b.paa, tex_mlamp2.paa, tex_mlamp2b.paa, tex_turbk.paa, tex_turbot.paa, tex_turcrt.paa, tex_turfr.paa, tex_tursil.paa, tex_tursir.paa, tex_turtop.paa,
			tex_iff.paa, tex_kbi.paa, tex_tread.paa, tex_treadin.paa, tex_treadmid.paa, tex_treadsid.paa,
			tex_2418i.paa,tex_3-4-67.paa,tex_4-67.paa,tex_bandits.paa,tex_ch_alpha.paa,tex_ch_char.paa,tex_goaway.paa,tex_skull.paa,tex_spearhead.paa,tex_timetodie.paa,tex_warhorse.paa,tex_warhorse1.paa,tex_warhorse2.paa
			, tex_netz.paa, tex_netz1.paa
				, tzk_tex_99
		};
	};
	// Add an extra texture on M1A1 Hlaven.
	class M1A1_xj400: TZK_HeavyWestTank_Base_xj400 {
		model = "\TZK_Model_4_0_5\M1A1_TZK.p3d";
		hiddenSelections[] = {"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6", tzk_tex_00,
			tex_abrams_kolo.pac, tex_abrams_kolo2.pac, tex_abrams_svetlo.paa, tex_abrams_svetlo_b.paa, tex_m1a1_ammo_box.pac, tex_m1a1_bocek.pac, tex_m1a1_dratram_back.paa, tex_m1a1_dratram_side.paa, tex_m1a1_drtrm_back_b.paa, tex_m1a1_frnt_bck_lod.pac, tex_m1a1_hlaven.pac, tex_m1a1_main_back.pac, tex_m1a1_main_bottom.pac, tex_m1a1_main_front.pac, tex_m1a1_main_side.pac, tex_m1a1_main_top.pac, tex_m1a1_poklop_driver.pac, tex_m1a1_vez_back.pac, tex_m1a1_vez_front.pac, tex_m1a1_vez_hatch.pac, tex_m1a1_vez_side.pac, tex_m1a1_vez_top.pac, tex_m1a1_vymetnice.pac, tex_m60pas.pac, tex_pasy_okolo_uni.pac,
			tex_bmp_kuk2.pac, tex_t72_kolo_kraj.pac, tex_t72_zubkolo_detail.paa, tex_t72_zubkolo_detail2.paa
			, tex_m1a1_hlaven1.pac
				, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Config_4_0_5\Scripts\texture\M1A1.sqs}; _vehicle animate [{suspension}, 0.5]";};
	};
	// Adjust the armor in hit class to balance the strength of heavy tanks.
	class Leo2A6_xj400: TZK_HeavyWestTank_Base_xj400 {
		class HitTurret { armor = 0.75; material = 51; name = "turet"; passThrough = 1; };
		class HitGun { armor = 0.8; material = 52; name = "gun"; passThrough = 1; };
	};
	
	// Introduce the green texture of M60 body and M1A1 for M60-2000
	class M60_Base_xj400: Tank_xj400 {};
	class M60_xj400: M60_Base_xj400 {};
	class M60_120S_xj400: M60_xj400 {
		model = "\TZK_Model_4_0_5\M60_120S_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00,
			tex_bmp_kuk2.pac, 
			tex_m1a1_ammo_box.pac, 
			tex_m1a1_dratram_back.paa, tex_m1a1_dratram_side.paa, tex_m1a1_drtrm_back_b.paa, tex_m1a1_frnt_bck_lod.pac, tex_m1a1_hlaven.pac, tex_m1a1_main_back.pac, tex_m1a1_main_bottom.pac, tex_m1a1_main_front.pac, tex_m1a1_main_side.pac, tex_m1a1_main_top.pac, tex_m1a1_poklop_driver.pac, tex_m1a1_vez_back.pac, tex_m1a1_vez_front.pac, tex_m1a1_vez_hatch.pac, tex_m1a1_vez_side.pac, tex_m1a1_vez_top.pac, 
			tex_m60_kolo_strana.pac, tex_m60_poklop_driver.pac, 
			tex_m60hullback.pac, tex_m60hullback2.pac, tex_m60hulldown.pac, tex_m60hulldown2.pac, tex_m60hullfront.pac, tex_m60hullfront2.pac, tex_m60hulltop.pac, tex_m60kolo.paa, tex_m60kolo.pac, tex_m60kolo2.paa, tex_m60kolo2.pac, tex_m60kolo3.pac, tex_m60kolomaly.paa, tex_m60kolozub.paa, tex_m60pas.pac, tex_m60pasb.pac, tex_m60s.pac, tex_pasy_okolo_uni.pac, 
			tex_m60_sidepas.pac
			, tex_m1a1_hlaven1.pac
				, tzk_tex_99
		};
		class EventHandlers { Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Config_4_0_5\Scripts\texture\M60_120S.sqs}"; };
	};
	// Optimize view-driver geometry of T80
	class RussianTank_xj400: Tank_xj400 {};
	class T72_Base_xj400: RussianTank_xj400 {};
	class T80_Base_xj400: T72_Base_xj400 {};
	class TZK_HeavyEastTank_Base_xj400: T80_Base_xj400 {};
	class T80_xj400: TZK_HeavyEastTank_Base_xj400 {
		class HitTurret { armor = 1.1; material = 51; name = "turet"; passThrough = 1; };
		model = "\TZK_Model_4_0_5\T80_TZK.p3d";
	};
	class T80Res_Base_xj400: T80_Base_xj400 {};
	class T80Res_TZK_xj400: T80Res_Base_xj400 {
		model = "\TZK_Model_4_0_5\T80_TZK.p3d";
	};
	// Adjust the armor in hit class to balance the strength of heavy tanks.
	class T90_xj400: TZK_HeavyEastTank_Base_xj400 {
		class HitTurret { armor = 1.1; material = 51; name = "turet"; passThrough = 1; };
	};
	class ZTZ99_xj400: TZK_HeavyEastTank_Base_xj400 {
		class HitTurret { armor = 0.9; material = 51; name = "turet"; passThrough = 1; };
	};
	// Prepare some tank classes to remain old hit class parameter settings aiming to provide necessary alternation if new armor unreasonable/imbalanced.
	class M1A2_TZK_xj400: M1A2_INQ_xj400 {
		class HitTurret { armor = 0.8; material = 51; name = "turet"; passThrough = 1; };
		class HitGun { armor = 0.9; material = 52; name = "gun"; passThrough = 1; };
	};
	class Leo2A6_TZK_xj400: Leo2A6_xj400 {
		class HitTurret { armor = 0.8; material = 51; name = "turet"; passThrough = 1; };
		class HitGun { armor = 0.9; material = 52; name = "gun"; passThrough = 1; };
	};
	class T80_TZK_xj400: T80_xj400 {
		class HitTurret { armor = 0.8; material = 51; name = "turet"; passThrough = 1; };
	};
	class T90_TZK_xj400: T90_xj400 {
		class HitTurret { armor = 0.8; material = 51; name = "turet"; passThrough = 1; };
	};
	class ZTZ99_TZK_xj400: ZTZ99_xj400 {
		class HitTurret { armor = 0.8; material = 51; name = "turet"; passThrough = 1; };
	};
	// Apply new model to M270. Old one has geometry component non-closed/convexed bug.
	class M270_M29064_xj400: M1Abrams_Base_xj400 {
		model = "\TZK_Model_4_0_5\M270_m29064.p3d";
	};
	
	// mfcti/Rmfcti redefine. Introduce models of ETONv5.08 mod.
	class T55_Base_xj400: Tank_xj400 {};
	class T55E_xj400: T55_Base_xj400 {};
	
	class MFCTI116T72: T72 {};
	class MFCTI116T72A: MFCTI116T72 {};
	class MFCTI116T72B: MFCTI116T72 {};
	
	class T62_mfcti_Eton508_xj400: T55E_xj400 {
		weapons[] = {"MFCTI116M60Gun","MFCTI116PKT","MFCTI116NSVT"};
		magazines[]={"MFCTI116M60Sabot","MFCTI116M60Heat","MFCTI116PKT","MFCTI116NSVT","MFCTI116NSVT","MFCTI116NSVT","MFCTI116NSVT","MFCTI116NSVT","MFCTI116NSVT",
						"MFCTI116NSVT","MFCTI116NSVT","MFCTI116NSVT","MFCTI116NSVT"};
						
		displayName = "T-62";
		nameSound = "tank";
		maxSpeed = 50;
		armor = 350;
		cost = 500000;
		model = "\ETN_T55\t55\vts_t62";
		hiddenSelections[] = {"n1","n2","n3","n4"};
		class EventHandlers {
			init = "_this exec {\SLX_GL3\SLX_Init_GL3.sqs};_this exec ""\csla_mod\scripts\burn\HeavyArmouredUnits.sqs"";_this exec ""\ICP_t72s\scripts\ETON_TANK_NBR.sqs""";
			hit = "if (_this select 0 call ETON_countedCargo > 0) then {_this select 0 exec ""\ICP_t72s\scripts\ETON_throwOff.sqs""}";
			fired = "if ((_this select 1) in [""MFCTI116M60Gun""]) then {_this call loadFile ""\ICP_t72s\scripts\stvol.sqf""; [_this select 0] exec ""\ICP_t72s\scripts\Rec_Gun.sqs""}; if ((_this select 4) in [""Bullet12_7"",""Bullet7_6""]) then {_this call loadFile ""\ICP_t72s\scripts\mgsmoke.sqf""}; [_this select 0,_this select 1] exec ""\csla_mod\scripts\shockdust.sqs""; _this exec {\ffur_effects\fired.sqs}; _this exec ""\ffur_effects\MissileFlame.sqs""";
			engine = "if (_this select 1) then {(_this select 0) exec {\ICP_t72s\scripts\ETON_RSC_Tank_Accel.sqs}}";
		};
		soundEnviron[] = {"\csla_snd\T55_Treads.wav",0.4,1};
		soundEngine[] = {"\csla_snd\T55_Engine_a.wav",0.2,1};
		commanderOpticsModel = "optika_tanke_auxiliary";
		class Reflectors {
			class Reflector {
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

		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle=-270;
			min = 0;
			max = "100 / 3.6";
		};

		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle=-270;
			min = 0;
			max = "100 / 3.6";
		};

		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle=-290;
			min = 0;
			max = 1;
		};
			
		class Animations {
		   class suspension {
				type = "rotation";
				animperiod = 0.5;
				selection = "podw";
				axis = "osa_podw";
				angle0=-0.02;
				angle1 = 0.02;
			};
           class Recoil {
				animperiod = 0.1;
				selection = "stv";
				axis = "osa_rec";
				angle0 = 0;
				angle1 = 0.016;
				type = "rotation";
			};			
		};			
	};
	class T72_mfcti_Eton508_xj400: MFCTI116T72 {
		model = "t72.p3d"; hiddenSelections[] = {"pruh"};
	};
	class T72A_mfcti_Eton508_xj400: MFCTI116T72A {
		model = "\RHS_T72A\RHS_T72A.p3d"
	};
	class T72B_mfcti_Eton508_xj400: MFCTI116T72B {
		model = "\icp_t72_add\T72b89.p3d";
	};
	
	class MFCTI116T80: T80 {};
	class MFCTI116T80B: MFCTI116T80 {};
	class MFCTI116T80U: MFCTI116T80 {};
	class T80_mfcti_Eton508_xj400: MFCTI116T80 {
		model = "t80.p3d"; hiddenSelections[] = {"pruh"};
	};

	// WAP from @BOH mod. The BOHJSDF5.PBO is contained in TZK without any modification. CONFIG of 3 WAP objects are provided here in this file.
	// Simplify some scripts and make some EH MP-compatible.
	class WAP2_BOH_xj400: Tank_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "XM1082 WAP"; nameSound = "unknown"; side = 1; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		unitInfoType = "UnitInfoShip"; // Display info on left-upper corner for its crew.
		
		armor = 1200;
		maxSpeed = 280;
		weapons[] = {"HVG90_BOH_xj400","CGun_BOH_xj400"};
		magazines[]={"HVG90_BOH_xj400","HVG90_BOH_xj400","HVG90_BOH_xj400","CGun_BOH_xj400"};
		
		model = "\BOHJSDF5\wzr2\BOHWAP2.p3d";
		hiddenSelections[] = {"nam1","nam2","rnc01","rnc02","rnc03","rnc04","misl"};
		
		crew = "SoldierWPilot";
		picture = "\BOHJSDF5\wzr2\pic.paa";
		icon = "\BOHJSDF5\wzr2\icon.paa";
		
		hasGunner = 0;
		hasCommander = 0;
		forceHideDriver = 1;

		soundEngine[] = {"\BOHJSDF5\wzr2\snd\wengn",0.3,1};
		soundEnviron[] = {"\BOHJSDF5\wzr2\snd\wenv",0.8,1};
		soundGear[] = {"\BOHJSDF5\wzr2\snd\wgr",0.1,1};
		
		canFloat = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		driverAction = "ManActUH60Pilot";
		driverInAction = "ManActUH60Pilot";
		driverOpticsModel = "\BOHJSDF5\wzr2\optic.p3d";
		driverOpticsColor[] = {1.0,1.0,1.0,0.2};
		class HitEngine {
			armor = 1.3;
			material = 60;
			name = "engine";
			passThrough = 1;
		};
		class HitHull {
			armor = 0.8;
			material = 50;
			name = "hull";
			passThrough = 1;
		};
		class HitTurret {
			armor = 1.0;
			material = 51;
			name = "turet";
			passThrough = 1;
		};
		class HitGun {
			armor = 0.5;
			material = 52;
			name = "gun";
			passThrough = 1;
		};
		class HitLTrack {
			armor = 0.6;
			material = 53;
			name = "pasL";
			passThrough = 1;
		};
		class HitRTrack {
			armor = 0.6;
			material = 54;
			name = "pasP";
			passThrough = 1;
		};
		armorLights = 0.4;
		class ViewOpticsBase {
			initAngleX = 0;
			minAngleX=-30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY=-100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.3;
			minFov = 0.020;
			maxFov = 0.035;
		};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			body = "OtocVez";
			gun = "OtocHlaven";
			soundServo[] = {"\BOHJSDF5\wzr2\snd\elevate",0.05,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev=-50;
			maxElev = 45;
			minTurn=-360;
			maxTurn = 360;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle=-320;
			min = 0;
			max = 40;
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle=-320;
			min = 0;
			max = 30;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle=-320;
			min = 0;
			max = 2;
		};
		class ReloadAnimations {
			class TurmCGUN {
				weapon = "CGun_BOH_xj400";
				angle0 = 0
				angle1 = "3.141592654 * 2";
				multiplier = 167;
				type = "rotation";
				animPeriod = 1;
				selection = "barrels";
				begin = "usti barrels";
				end = "konec barrels";
			};
		};
		class UserActions {
			class leftdash {
				displayName = "Dash left";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_SQS\dashleft_W.sqs""";
			};
			class rightdash {
				displayName = "Dash right";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_SQS\dashright_W.sqs""";
			};
			class frontdash {
				displayName = "Dash front";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_SQS\dashfront_W.sqs""";
			};
			class backdash {
				displayName = "Dash back";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_SQS\dashback_W.sqs""";
			};
		};
		class EventHandlers {
			init = "_this exec {\TZK_Config_4_0_5\Scripts\BOH_SQS\wzr_nam.sqs}; ";
			fired = "_this exec {\TZK_Config_4_0_5\Scripts\BOH_SQS\fireint.sqs}; if (_this select 1 == {HVG90_BOH_xj400}) then {[_this, 7] exec {\TZK_Config_4_0_5\Scripts\BOH_Scr\BOH_ShockDust.sqs}};";
			killed = "[_this select 0, 1.8, 5] exec {\TZK_Config_4_0_5\Scripts\BOH_Scr\BOH_FireSmoke.sqs};";
		};
	};
	class WAP2A_BOH_xj400 : WAP2_BOH_xj400 {
		scope = public;
		displayName = "XM1082 WAP Hellfire";
		hiddenSelections[] = {"nam1","nam2","rnc01","rnc02","rnc03","rnc04"};
		weapons[] = {"HVG90_BOH_xj400","CGun_BOH_xj400","HellfireLauncherWAP2_BOH_xj400"};
		magazines[]={"HVG90_BOH_xj400","HVG90_BOH_xj400","HVG90_BOH_xj400","CGun_BOH_xj400","HellfireLauncherWAP2_BOH_xj400"};
	};
	class ResistanceTank_xj400: Tank_xj400 {};
	class WAP_BOH_xj400: ResistanceTank_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "TypeXX WAP"; nameSound = "target"; side = 2; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		unitInfoType = "UnitInfoShip"; // Display info on left-upper corner for its crew.
		
		model = "\BOHJSDF5\wap\BOHWAP.p3d";
		weapons[] = {"Zwige_BOH_xj400","FV24B_BOH_xj400","DonkeyDX2Launcher_BOH_xj400"};
		magazines[]={"Zwige_BOH_xj400","Zwige_BOH_xj400","Zwige_BOH_xj400","Zwige_BOH_xj400","FV24B_BOH_xj400","DonkeyDX2Launcher_BOH_xj400"};
		
		crew = "SoldierGPilot";
		picture = "\BOHJSDF5\wap\pic.paa";
		icon = "\BOHJSDF5\wap\icon.paa";
		
		hasGunner = 0;
		hasCommander = 0;
		forceHideDriver = 1;
		
		armor = 1400;
		
		maxSpeed = 200;
		soundEngine[] = {"\BOHJSDF5\wap\engine",0.3,1};
		soundEnviron[] = {"\BOHJSDF5\wap\treads",0.8,1};
		soundGear[] = {"\BOHJSDF5\wap\gear",0.1,1};

		canFloat = 1;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		driverAction = "ManActUH60Pilot";
		driverInAction = "ManActUH60Pilot";
		driverOpticsModel = "\BOHJSDF5\wap\optika.p3d";
		driverOpticsColor[] = {1.0,1.0,1.0,0.2};
		class HitEngine {
			armor = 1.3;
			material = 60;
			name = "engine";
			passThrough = 1;
		};
		class HitHull {
			armor = 0.8;
			material = 50;
			name = "hull";
			passThrough = 1;
		};
		class HitTurret {
			armor = 1.0;
			material = 51;
			name = "turet";
			passThrough = 1;
		};
		class HitGun {
			armor = 0.5;
			material = 52;
			name = "gun";
			passThrough = 1;
		};
		class HitLTrack {
			armor = 0.6;
			material = 53;
			name = "pasL";
			passThrough = 1;
		};
		class HitRTrack {
			armor = 0.6;
			material = 54;
			name = "pasP";
			passThrough = 1;
		};
		armorLights = 0.4;
		class ViewOpticsBase {
			initAngleX = 0;
			minAngleX=-30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY=-100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.3;
			minFov = 0.020;
			maxFov = 0.035;
		};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			body = "OtocVez";
			gun = "OtocHlaven";
			soundServo[] = {"\BOHJSDF5\wap\elevate",0.05,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev=-50;
			maxElev = 45;
			minTurn=-360;
			maxTurn = 360;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle=-320;
			min = 0;
			max = 40;
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle=-320;
			min = 0;
			max = 30;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle=-320;
			min = 0;
			max = 2;
		};
		class ReloadAnimations {
			class TurmFV24B {
				weapon = "FV24B_BOH_xj400";
				angle0 = 0
				angle1 = "3.141592654 * 2";
				multiplier = 167;
				type = "rotation";
				animPeriod = 1;
				selection = "barrels";
				begin = "usti barrels";
				end = "konec barrels";
			};
		};
		class Animations {
			class FrontLeftLeg {
				type = "rotation";
				animPeriod = 0.20;
				selection = "front left leg";
				axis = "osa front left leg";
				angle0 = 0
				angle1=-1.57;
			};
			class FrontRightLeg {
				type = "rotation";
				animPeriod = 0.21;
				selection = "front right leg";
				axis = "osa front right leg";
				angle0 = 0
				angle1=-1.57;
			};
			class BackLeftLeg {
				type = "rotation";
				animPeriod = 0.19;
				selection = "back left leg";
				axis = "osa back left leg";
				angle0 = 0
				angle1=-1.57;
			};
			class BackRightLeg {
				type = "rotation";
				animPeriod = 0.22;
				selection = "back right leg";
				axis = "osa back right leg";
				angle0 = 0
				angle1=-1.57;
			};
			class LeftWing {
				type = "rotation";
				animPeriod = 0.50;
				selection = "left wing";
				axis = "osa left wing";
				angle0 = 0
				angle1 = 1.40;
			};
			class RightWing {
				type = "rotation";
				animPeriod = 0.50;
				selection = "right wing";
				axis = "osa right wing";
				angle0 = 0
				angle1 = 1.40;
			};
		};
		class UserActions {
			class Jump {
				displayName = "Jump";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\jump.sqs""";
			};
			class JumpCancel {
				displayName = "Cancel Jump";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 > 15 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\jumpcancel.sqs""";
			};
			class leftdash {
				displayName = "Dash left";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\dashleft.sqs""";
			};
			class rightdash {
				displayName = "Dash right";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\dashright.sqs""";
			};
			class frontdash {
				displayName = "Dash front";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\dashfront.sqs""";
			};
			class backdash {
				displayName = "Dash back";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\dashback.sqs""";
			};
			class leftslide {
				displayName = "Slide left";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 >= 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\slideleft.sqs""";
			};
			class rightslide {
				displayName = "Slide right";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 >= 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\slideright.sqs""";
			};
			class frontslide {
				displayName = "Slide front";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 >= 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\slidefront.sqs""";
			};
			class backslide {
				displayName = "Slide back";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 >= 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\slideback.sqs""";
			};
		};
		class EventHandlers {
			incomingMissile = "if (BOHWAPMissileWait == 1 && isengineon (_this select 0) && local (_this select 0)) then {[_this select 0] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\missilewarning.sqs"",[_this select 0] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\evasive.sqs""}";
			fired = "_this exec {\TZK_Config_4_0_5\Scripts\BOH_WAP\sisei.sqs}; if (_this select 1 == {Zwige_BOH_xj400}) then {[_this, 7] exec {\TZK_Config_4_0_5\Scripts\BOH_Scr\BOH_ShockDust.sqs}};";
			init = "[_this select 0,1,1] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\init.sqs""; ";
			killed = "[_this select 0, 2.7, 5] exec {\TZK_Config_4_0_5\Scripts\BOH_Scr\BOH_FireSmoke.sqs};";
			hit = "_this exec {\TZK_Config_4_0_5\Scripts\BOH_WAP\hit.sqs};";
		};
	};
	class WAPE_BOH_xj400: RussianTank_xj400 {
		scope = public; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "TypeXX WAP"; nameSound = "target"; side = 0; cost = 4000000; type = 1; threat[] = {1, 1, 0.5};
		
		unitInfoType = "UnitInfoShip"; // Display info on left-upper corner for its crew.
		
		model = "\BOHJSDF5\wap\BOHWAP.p3d";
		weapons[] = {"Zwige_BOH_xj400","FV24B_BOH_xj400","DonkeyDX2Launcher_BOH_xj400"};
		magazines[]={"Zwige_BOH_xj400","Zwige_BOH_xj400","Zwige_BOH_xj400","Zwige_BOH_xj400","FV24B_BOH_xj400","DonkeyDX2Launcher_BOH_xj400"};
		
		crew = "SoldierEPilot";
		picture = "\BOHJSDF5\wap\pic.paa";
		icon = "\BOHJSDF5\wap\icon.paa";
		
		hasGunner = 0;
		hasCommander = 0;
		forceHideDriver = 1;
		
		armor = 1400;
		
		maxSpeed = 200;
		soundEngine[] = {"\BOHJSDF5\wap\engine",0.3,1};
		soundEnviron[] = {"\BOHJSDF5\wap\treads",0.8,1};
		soundGear[] = {"\BOHJSDF5\wap\gear",0.1,1};

		canFloat = 1;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		driverAction = "ManActUH60Pilot";
		driverInAction = "ManActUH60Pilot";
		driverOpticsModel = "\BOHJSDF5\wap\optika.p3d";
		driverOpticsColor[] = {1.0,1.0,1.0,0.2};
		class HitEngine {
			armor = 1.3;
			material = 60;
			name = "engine";
			passThrough = 1;
		};
		class HitHull {
			armor = 0.8;
			material = 50;
			name = "hull";
			passThrough = 1;
		};
		class HitTurret {
			armor = 1.0;
			material = 51;
			name = "turet";
			passThrough = 1;
		};
		class HitGun {
			armor = 0.5;
			material = 52;
			name = "gun";
			passThrough = 1;
		};
		class HitLTrack {
			armor = 0.6;
			material = 53;
			name = "pasL";
			passThrough = 1;
		};
		class HitRTrack {
			armor = 0.6;
			material = 54;
			name = "pasP";
			passThrough = 1;
		};
		armorLights = 0.4;
		class ViewOpticsBase {
			initAngleX = 0;
			minAngleX=-30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY=-100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.3;
			minFov = 0.020;
			maxFov = 0.035;
		};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			body = "OtocVez";
			gun = "OtocHlaven";
			soundServo[] = {"\BOHJSDF5\wap\elevate",0.05,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev=-50;
			maxElev = 45;
			minTurn=-360;
			maxTurn = 360;
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle=-320;
			min = 0;
			max = 40;
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle=-320;
			min = 0;
			max = 30;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle=-320;
			min = 0;
			max = 2;
		};
		class ReloadAnimations {
			class TurmFV24B {
				weapon = "FV24B_BOH_xj400";
				angle0 = 0
				angle1 = "3.141592654 * 2";
				multiplier = 167;
				type = "rotation";
				animPeriod = 1;
				selection = "barrels";
				begin = "usti barrels";
				end = "konec barrels";
			};
		};
		class Animations {
			class FrontLeftLeg {
				type = "rotation";
				animPeriod = 0.20;
				selection = "front left leg";
				axis = "osa front left leg";
				angle0 = 0
				angle1=-1.57;
			};
			class FrontRightLeg {
				type = "rotation";
				animPeriod = 0.21;
				selection = "front right leg";
				axis = "osa front right leg";
				angle0 = 0
				angle1=-1.57;
			};
			class BackLeftLeg {
				type = "rotation";
				animPeriod = 0.19;
				selection = "back left leg";
				axis = "osa back left leg";
				angle0 = 0
				angle1=-1.57;
			};
			class BackRightLeg {
				type = "rotation";
				animPeriod = 0.22;
				selection = "back right leg";
				axis = "osa back right leg";
				angle0 = 0
				angle1=-1.57;
			};
			class LeftWing {
				type = "rotation";
				animPeriod = 0.50;
				selection = "left wing";
				axis = "osa left wing";
				angle0 = 0
				angle1 = 1.40;
			};
			class RightWing {
				type = "rotation";
				animPeriod = 0.50;
				selection = "right wing";
				axis = "osa right wing";
				angle0 = 0
				angle1 = 1.40;
			};
		};
		class UserActions {
			class Jump {
				displayName = "Jump";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\jump.sqs""";
			};
			class JumpCancel {
				displayName = "Cancel Jump";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 > 15 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\jumpcancel.sqs""";
			};
			class leftdash {
				displayName = "Dash left";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\dashleft.sqs""";
			};
			class rightdash {
				displayName = "Dash right";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\dashright.sqs""";
			};
			class frontdash {
				displayName = "Dash front";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\dashfront.sqs""";
			};
			class backdash {
				displayName = "Dash back";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 < 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\dashback.sqs""";
			};
			class leftslide {
				displayName = "Slide left";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 >= 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\slideleft.sqs""";
			};
			class rightslide {
				displayName = "Slide right";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 >= 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\slideright.sqs""";
			};
			class frontslide {
				displayName = "Slide front";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 >= 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\slidefront.sqs""";
			};
			class backslide {
				displayName = "Slide back";
				position = "OsaHlavne";
				radius = 5;
				condition = "getpos this select 2 >= 2 and isengineon this";
				statement = "[this] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\slideback.sqs""";
			};
		};
		class EventHandlers {
			incomingMissile = "if (BOHWAPMissileWait == 1 && isengineon (_this select 0) && local (_this select 0)) then {[_this select 0] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\missilewarning.sqs"",[_this select 0] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\evasive.sqs""}";
			fired = "_this exec {\TZK_Config_4_0_5\Scripts\BOH_WAP\sisei.sqs}; if (_this select 1 == {Zwige_BOH_xj400}) then {[_this, 7] exec {\TZK_Config_4_0_5\Scripts\BOH_Scr\BOH_ShockDust.sqs}};";
			init = "[_this select 0,1,1] exec ""\TZK_Config_4_0_5\Scripts\BOH_WAP\init.sqs""; ";
			killed = "[_this select 0, 2.7, 5] exec {\TZK_Config_4_0_5\Scripts\BOH_Scr\BOH_FireSmoke.sqs};";
			hit = "_this exec {\TZK_Config_4_0_5\Scripts\BOH_WAP\hit.sqs};";
		};
	};

	// No ground radar Helicopter adjust. Is it possible to use "accuracy" to make small helicopter perform as civilian side vehicle before it's close enough to AA vehicle? Yes!
	// But we need another base class with its side "unknown" or "civilian".
	class MH6_Side_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		// accuracy = 0.3;
		displayName = "MH-6"; nameSound = "chopper"; side = 4; cost = 10000000; type = 2; threat[] = {1,0.05,0.05};

		model = "\TZK_Model_4_0_0\MH6_Bas.p3d";
		armor = 30;
		picture = "\TZK_Texture_4_0_0\icon\imh6.paa"; mapSize = 10;
		weapons[] = {"Cannon_Heli_xj400"};
		magazines[]={"Mag_Heli_2000_xj400", SpoofMagazines};

		crew = "SoldierWPilot";
		laserScanner = 1;

		gunnerUsesPilotView = 0;
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		transportSoldier = 5; getInRadius = 5;
		driverAction = "ManActUH60Pilot";
		gunnerAction = "ManActUH60Pilot";
		gunnerOpticsModel = "optika_heli_gunner";
		maxSpeed = 235;
		soundEngine[] = {"\TZK_Sounds_4_0_0\bas_lbs\mh6.wss", 3.162278, 1};

		mainRotorSpeed = -1;
		rotorBig = "vrtule_velka";
		rotorBigBlend = "vrtule_velka_bl_";
		rotorSmall = "vrtule_mala";
		rotorSmallBlend = "vrtule_mala_bl";

		class Reflectors {
			class Reflector {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			// max for this indicator is 200 feet (i.e. 61m)
			// note: this is actualy Radar altitude (name is wrong)
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 70;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
			reversed = true;
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
			max = 80;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = -360;
			min = -3.1415926536;
			max = 3.1415926536;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = true;
		};
		class ReloadAnimations {
			class MachineGun30W {
				weapon = "MachineGun30W";
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
	class Mi2NOE_Side_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		// accuracy = 0.3;
		displayName = "Mi-2"; nameSound = "chopper"; side = 4; cost = 1000000; type = 2; threat[] = {0.1, 1, 0.7};

		model = "\TZK_Model_4_0_0\Mi2NO.p3d";
		picture = "\TZK_Texture_4_0_0\icon\iMi2.paa";
		armor = 40;
		weapons[] = {"Cannon_Heli_xj400"};
		magazines[]={"Mag_Heli_2000_xj400", SpoofMagazines};
		dammageHalf[] = {"\TZK_Texture_4_0_0\Mi2NO\glass0.paa","\TZK_Texture_4_0_0\Mi2NO\glass1.paa","\TZK_Texture_4_0_0\Mi2NO\glass10.paa","\TZK_Texture_4_0_0\Mi2NO\glass11.paa"};
		dammageFull[] = {"\TZK_Texture_4_0_0\Mi2NO\glass0.paa","\TZK_Texture_4_0_0\Mi2NO\glass2.paa","\TZK_Texture_4_0_0\Mi2NO\glass10.paa","\TZK_Texture_4_0_0\Mi2NO\glass12.paa"};

		crew = "SoldierEPilot";
		maxSpeed = 215;

		fuelCapacity = 150;
		mainRotorSpeed = 1.0;
		backRotorSpeed = -2.5;

		hasGunner = 0;
		soundEngine[] = {"\TZK_Sounds_4_0_0\Mi2NO\mi2s.ogg", db+10, 0.95};
		driverAction = "ManActMi24Pilot";
		transportSoldier = 5;
		typicalCargo[] = {"Soldier","SoldierLAW"};
		armorStructural = 1.0;
		armorHull = 0.4;
		armorEngine = 1.5;
		armorAvionics = 0.7;
		armorVRotor = 0.7;
		armorHRotor = 0.5;
		armorMissiles = 0.3;
		armorGlass = 0.2;
		class IndicatorAltBaro {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltBaro2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -320;
			min = 0;
			max = 300;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -340;
			min = 0;
			max = 70;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -330;
			min = 0;
			max = 11;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -330;
			min = 0;
			max = 11;
		};
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.85;
				brightness = 1.5;
			};
		};
		class Animations {
			class Susp_R {
				type = "rotation";
				animPeriod = 0.1;
				selection = "R_susp";
				axis = "R_susp_osa";
				angle0 = 0;
				angle1 = 0.261799387799149436538553615273292;
			};
			class Susp_L {
				type = "rotation";
				animPeriod = 0.1;
				selection = "L_susp";
				axis = "L_susp_osa";
				angle0 = 0;
				angle1 = -0.261799387799149436538553615273292;
			};
			class Switch {
				type = "rotation";
				animPeriod = 0.1;
				selection = "switch";
				axis = "osa switch";
				angle0 = 0;
				angle1 = 1;
			};
			class Switch_2 {
				type = "rotation";
				animPeriod = 0.1;
				selection = "switch_2";
				axis = "osa_switch_2";
				angle0 = 0;
				angle1 = 1;
			};
			class Cooler {
				type = "rotation";
				animPeriod = 5;
				selection = "vent_a";
				axis = "vent osa";
				angle0 = 0;
				angle1 = 2261.94671058465113169310323596;
			};
			class Temp1 {
				type = "rotation";
				animPeriod = 30;
				selection = "temp";
				axis = "osa_temp";
				angle0 = 0;
				angle1 = -3;
			};
			class Temp2 {
				type = "rotation";
				animPeriod = 45;
				selection = "temp2";
				axis = "osa_temp2";
				angle0 = 0;
				angle1 = -2.8;
			};
			class Fuel {
				type = "rotation";
				animPeriod = 1;
				selection = "fuel";
				axis = "osa fuel";
				angle0 = 0;
				angle1 = -3.66519;
			};
		};
	};
	
	class MH6_FakeC_Base0_xj400: MH6_Side_Base_xj400 {
		accuracy = 0.3; side = 3; // The accuracy is 0.08 for BIS abstract helicopter, 0.3 for west heli and 0.5 for east heli.
	};
	class MH6_FakeC_Base1_xj400: MH6_FakeC_Base0_xj400 {
		accuracy = 3.5; side = 1;
	};
	class MH6_TZK_xj400: MH6_FakeC_Base1_xj400 {
		scope = protected;
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class MH6_irNo_TZK_xj400: MH6_TZK_xj400 { irScanGround = 0; };
	class Mi2NOE_FakeC_Base0_xj400: Mi2NOE_Side_Base_xj400 {
		accuracy = 0.5; side = 3;
	};
	class Mi2NOE_FakeC_Base1_xj400: Mi2NOE_FakeC_Base0_xj400 {
		accuracy = 3.5; side = 0;
	};
	class Mi2NOE_TZK_xj400: Mi2NOE_FakeC_Base1_xj400 {
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi2NOE_irNo_TZK_xj400: Mi2NOE_TZK_xj400 { irScanGround = 0; };
	// Base classes for UH60/Mi17. They're BIS units thus their base class is better designed here than small helicopters above. 
	// Annotated attributes are those related to accuracy system like what I did for "M1Abrams_Base_xj400". 
	class UH60_BIS_Base_xj400: Helicopter { 
		scope = 0;
		crew = "SoldierWPilot";
		picture = "iuh60";
		maxSpeed = 270;
		// side = 1;
		// displayName = "$STR_DN_UH60";
		// nameSound = "blackhawk";
		// accuracy = 0.3;
		// armor = 60;
		// cost = 10000000;
		mainRotorSpeed = -1;
		model = "uh-60";
		rotorBig = "vrtule_uh_v";
		rotorBigBlend = "vrtule_uh_v_bl";
		rotorSmall = "vrtule_uh_m";
		rotorSmallBlend = "vrtule_uh_m_bl";
		soundEngine[] = {"Vehicles\uh1",3.1622777,1.5};
		// weapons[] = {"ZuniLauncher38"};
		// magazines[] = {"ZuniLauncher38"};
		driverAction = "ManActUH60Pilot";
		gunnerAction = "ManActUH60Pilot";
		gunnerUsesPilotView = 1;
		transportSoldier = 12;
		transportAmmo = 0;
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		// type = 2;
		// threat[] = {0.3,1,0.4};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1;
			};
			class Right {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1;
			};
		};
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
			angle = -350;
			min = 0;
			max = 175;
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
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro2 {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -320;
			min = 0;
			max = 12;
		};
	};
	class Mi17_BIS_Base_xj400: Helicopter {
		scope = 0;
		crew = "SoldierEPilot";
		picture = "imi17";
		maxSpeed = 240;
		// side = 0;
		// displayName = "$STR_DN_MI17";
		// nameSound = "mi17";
		// accuracy = 0.5;
		// cost = 3000000;
		// armor = 50;
		model = "mi17_HIP";
		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\Slow4blade_Loop1",3.1622777,1};
		// weapons[] = {"Rocket57x192"};
		// magazines[] = {"Rocket57x192"};
		driverAction = "ManActMi17Pilot";
		gunnerAction = "ManActMi17Pilot";
		gunnerUsesPilotView = 1;
		transportSoldier = 12;
		transportAmmo = 0;
		// type = 2;
		// threat[] = {0.6,1,0.4};
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
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
			angle = -350;
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
		class IndicatorAltRadar2: IndicatorAltRadar {
			selection = "alt2";
			axis = "osa_alt2";
		};
		class IndicatorAltBaro2: IndicatorAltBaro {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
		};
		class IndicatorSpeed2: IndicatorSpeed {
			selection = "mph2";
			axis = "osa_mph2";
		};
		class IndicatorVertSpeed2: IndicatorVertSpeed {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
		};
		class IndicatorRPM2: IndicatorRPM {
			selection = "rpm2";
			axis = "osa_rpm2";
		};
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1;
			};
			class Right {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1;
			};
		};
	};

	class UH60_BIS_FakeC_Base0_xj400: UH60_BIS_Base_xj400 {
		scope = private;
		accuracy = 0.3; side = 3;
		
		displayName = "$STR_DN_UH60";
		nameSound = "blackhawk";
		armor = 60;
		cost = 10000000;
		weapons[] = {"ZuniLauncher38"};
		magazines[] = {"ZuniLauncher38"};
		type = 2;
		threat[] = {0.3,1,0.4};
	};
	class UH60_BIS_FakeC_Base1_xj400: UH60_BIS_FakeC_Base0_xj400 {
		accuracy = 3.8; side = 1; // This value will be attack at about 1450 meters away for model with UH60 size (in model).
	};
	class UH60_TZK_xj400: UH60_BIS_FakeC_Base1_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class UH60_irNo_TZK_xj400: UH60_TZK_xj400 { irScanGround = 0; };
	class Mi17_BIS_FakeC_Base0_xj400: Mi17_BIS_Base_xj400 {
		scope = private;
		accuracy = 0.5; side = 3;
		
		displayName = "$STR_DN_MI17";
		nameSound = "mi17";
		cost = 3000000;
		armor = 50;
		weapons[] = {"Rocket57x192"};
		magazines[] = {"Rocket57x192"};
		type = 2;
		threat[] = {0.6,1,0.4};
	};
	class Mi17_BIS_FakeC_Base1_xj400: Mi17_BIS_FakeC_Base0_xj400 {
		accuracy = 3.8; side = 0;
	};
	class Mi17_TZK_xj400: Mi17_BIS_FakeC_Base1_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi17_irNo_TZK_xj400: Mi17_TZK_xj400 { irScanGround = 0; };
	
	class UH60_BIS_FakeC_Base2_xj400: UH60_BIS_FakeC_Base0_xj400 {
		accuracy = 3.95; side = 1; // Be attack at about 1550 meters away for model uses "transplant-simulated" animation which requires long axis and thus have bigger size. But be aware that accuracy shouldn't be bigger than 4. Don't know why in detail by now, but 4 is probably a threshold.
	};
	class UH60_irNo_CSLA_xj400: UH60_BIS_FakeC_Base2_xj400 { // Use modified model. Animations, UA, EH should be updated and attributes of vehicle (model-related ones) should be redefined.
		irScanGround = 0;
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		
		model = "\TZK_Model_4_0_4\UH60A_CSLA2.p3d";
		armor = 60;
		hiddenSelections[] = {tzk_tex_00, 
			tex_bottom.pac,tex_front.pac,tex_koloin.pac,tex_koloout.pac,tex_kolopas.pac,tex_kridlo.pac,tex_motor.pac,tex_nadrze.pac,tex_nos.pac,tex_podvozek.pac,tex_posuvokna.pac,tex_rotor.pac,tex_sidea.pac,tex_sideb.pac,tex_topa.pac,tex_valec.pac,tex_zadkolo.pac,tex_zadkridlo.pac
			, tex_all.paa
			,  tzk_tex_99
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\UH60A_CSLA.sqs}";
			Engine = "_this exec {\TZK_Config_4_0_4\Scripts\CSLA_UH60A\Engine_EH.sqs};"
			GetIn = "_this exec {\TZK_Config_4_0_4\Scripts\CSLA_UH60A\GetIn_EH.sqs};"
			GetOut = "_this exec {\TZK_Config_4_0_4\Scripts\CSLA_UH60A\GetOut_EH.sqs};"
		};
		class Animations {
			class CSLA_UH60_doorL {
				type = "rotation";
				animPeriod = 1.5;
				selection = "doorL";
				axis = "osa_doorL";
				angle0 = 0;
				angle1= +0.09;
			};
			class CSLA_UH60_doorR {
				type = "rotation";
				animPeriod = 1.5;
				selection = "doorR";
				axis = "osa_doorR";
				angle0 = 0;
				angle1= -0.09;
			};
		};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		
			class OpenRdoor {
				displayName = "$STR_DN_RHS_HIND_RdoorOpen";
				position = "pos r";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorR"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3)";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorOpenR.sqs"""; 
			};
			class CloseRdoor {
				displayName = "$STR_DN_RHS_HIND_RdoorClose";
				position = "pos r";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorR"" > 0.5";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorCloseR.sqs"""; 
			};
			class OpenLdoor {
				displayName = "$STR_DN_RHS_HIND_LdoorOpen";
				position = "pos l";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorL"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3)";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorOpenL.sqs"""; 
			};
			class CloseLdoor {
				displayName = "$STR_DN_RHS_HIND_LdoorClose";
				position = "pos l";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorL"" > 0.5";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorCloseL.sqs"""; 
			};
		};

		dammageHalf[] = {"\TZK_Texture_4_0_0\csla\uh\ps_sklo.paa","\TZK_Texture_4_0_0\csla\uh\ps_sklo2.paa","\TZK_Texture_4_0_0\csla\uh\zp_sklo.paa","\TZK_Texture_4_0_0\csla\uh\zp_sklo2.paa","\TZK_Texture_4_0_0\csla\uh\po_sklo.paa","\TZK_Texture_4_0_0\csla\uh\po_sklo2.paa","\TZK_Texture_4_0_0\csla\uh\pp_sklo.paa","\TZK_Texture_4_0_0\csla\uh\pp_sklo2.paa"};
		dammageFull[] = {"\TZK_Texture_4_0_0\csla\uh\ps_sklo.paa","\TZK_Texture_4_0_0\csla\uh\ps_sklo3.paa","\TZK_Texture_4_0_0\csla\uh\zp_sklo.paa","\TZK_Texture_4_0_0\csla\uh\zp_sklo3.paa","\TZK_Texture_4_0_0\csla\uh\po_sklo.paa","\TZK_Texture_4_0_0\csla\uh\po_sklo3.paa","\TZK_Texture_4_0_0\csla\uh\pp_sklo.paa","\TZK_Texture_4_0_0\csla\uh\pp_sklo3.paa"};
		rotorBig = "vrtule_uh_v";
		rotorBigBlend = "vrtule_uh_v_bl";
		rotorSmall = "vrtule_uh_m";
		rotorSmallBlend = "vrtule_uh_m_bl";
		mainRotorSpeed = -1;
		soundEngine[] = {"Vehicles\uh1",3.1622777,1.5};
		driverAction = "ManActUH60Pilot";
		gunnerAction = "ManActUH60Pilot";
		gunnerUsesPilotView = 1;
		transportSoldier = 12;
		transportAmmo = 0;
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;

		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
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
			angle = -350;
			min = 0;
			max = 175;
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
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro2 {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -320;
			min = 0;
			max = 12;
		};
		class ViewGunnerBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};

	};
	class Mi17_irNo_owp_TZK_xj400: Mi17_BIS_FakeC_Base1_xj400 {
		irScanGround = 0;
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		
		model = "\TZK_Model_4_0_0\Mi17_OWP.p3d";
		armor = 150;
		hiddenSelections[] = {cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight,  tzk_tex_00, 
			tex_body.pac, tex_decals.paa, tex_special.pac //, tex_dop.pac
			,  tzk_tex_99
		};
		picture = "\TZK_Texture_4_0_0\icon\iMi8_w.paa";
		class Animations {
			class Susp_R {
				type = "rotation";
				animPeriod = 0.1;
				selection = "R_susp";
				axis = "R_susp_osa";
				angle0 = 0;
				angle1 = 0.20;
			};
			class Susp_L {
				type = "rotation";
				animPeriod = 0.1;
				selection = "L_susp";
				axis = "L_susp_osa";
				angle0 = 0;
				angle1 = -0.20;
			};
			class Susp_RD {
				type = "rotation";
				animPeriod = 0.1;
				selection = "RD_susp";
				axis = "RD_susp_osa";
				angle0 = 0;
				angle1 = -0.08;
			};
			class Susp_LD {
				type = "rotation";
				animPeriod = 0.1;
				selection = "LD_susp";
				axis = "LD_susp_osa";
				angle0 = 0;
				angle1 = 0.08;
			};
			class OWP_Mi8_CDL {
				type = "rotation";
				animPeriod = 3;
				selection = "cdl";
				axis = "cdlosa";
				angle0 = 0;
				angle1= 1.0;
			};
			class OWP_Mi8_CDR {
				type = "rotation";
				animPeriod = 3;
				selection = "cdr";
				axis = "cdrosa";
				angle0 = 0;
				angle1= -1.0;
			};
			class OWP_Mi8_DOOR {
				type = "rotation";
				animPeriod = 1.5;
				selection = "door";
				axis = "door_osa";
				angle0 = 0;
				angle1= -0.05;
			};
			class OWP_Mi8_FLG {
				type = "rotation";
				animPeriod = 1.5;
				selection = "flg";
				axis = "flgosa";
				angle0 = 0;
				angle1= 0.075;
			};
			class OWP_Mi8_FRG {
				type = "rotation";
				animPeriod = 1.5;
				selection = "frg";
				axis = "frgosa";
				angle0 = 0;
				angle1 = -0.075;
			};
			class OWP_Mi8_lenta {
				type = "rotation";
				animPeriod = 0.1;
				selection = "kup";
				axis = "velka osa";
				angle0 = 0;
				angle1 = 0.1;

			};
		};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};

			class OpenMi8CargoBay {
				displayName = "$STR_OWP_Mi8_comm_Copen";
				position = "gtctrl";
				radius = 5;
				condition = "local this && this animationPhase ""OWP_Mi8_CDL"" < 0.01";
				statement = this animate ["OWP_Mi8_CDL",1], this animate ["OWP_Mi8_CDR",1];
			};
			class CloseMi8CargoBay {
				displayName = "$STR_OWP_Mi8_comm_Cclose";
				position = "gtctrl";
				radius = 5;
				condition = "local this && this animationPhase ""OWP_Mi8_CDL"" >= 0.99";
				statement = this animate ["OWP_Mi8_CDL",0], this animate ["OWP_Mi8_CDR",0];
			};
		/*	class OpenMi8Door {
				displayName = "$STR_OWP_Mi8_comm_dooropen";
				position = "doorcntrl";
				radius = 2;
				condition = "local this && this animationPhase ""OWP_Mi8_DOOR"" < 0.01";
				statement = "this animate[""OWP_Mi8_DOOR"",1];";
			};
			class CloseMi8Door {
				displayName = "$STR_OWP_Mi8_comm_doorclos";
				position = "doorcntrl";
				radius = 2;
				condition = "local this && this animationPhase ""OWP_Mi8_DOOR"" >= 0.99";
				statement = "this animate[""OWP_Mi8_DOOR"",0];";
			};
			*/
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Mi17_owp.sqs}, [_vehicle, {\TZK_Texture_4_0_0\OWP_Mi8\sign\}, {num_}, {}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs};
			Engine = "_this exec {\TZK_Objects\Scripts\OWP_Mi17\Engine_EH.sqs};"
			GetIn = "_this exec {\TZK_Objects\Scripts\OWP_Mi17\GetIn_EH.sqs};"
			GetOut = "_this exec {\TZK_Objects\Scripts\OWP_Mi17\GetOut_EH.sqs};"
		};

		insideSoundCoef = 0.004;

		rotorBig = "\TZK_Texture_4_0_0\OWP_Mi8\t\shared.pac";
		rotorBigBlend = "\TZK_Texture_4_0_0\OWP_Mi8\t\bigrotor.paa";
		rotorSmall = "\TZK_Texture_4_0_0\OWP_Mi8\t\shared.pac";
		rotorSmallBlend = "\TZK_Texture_4_0_0\OWP_Mi8\t\smallrotor.paa";
		gunnerUsesPilotView = false;
		DriverOpticsColor[] = {1,1,1,0,3};
		hideWeaponsDriver = false;
		hideWeaponsGunner = false;
		soundEngine[] = {"\TZK_Sounds_4_0_0\OWP_Mi8\Mi8.ogg", 3.1622777, 1};
		extCameraPosition[] = {0,1,-20};
		mainRotorSpeed = 0.7; // rotor animation parameters
		backRotorSpeed = 3.0;
		transportSoldier = 13;
		steerAheadSimul = 0.1;
		steerAheadPlan = 0.2;

		class ViewOpticsBase{};
		class ViewOptics : ViewOpticsBase {
			initAngleX = 0; minAngleX = -40; maxAngleX = 17;
			initAngleY = 0; minAngleY = -100; maxAngleY = 100;
			initFov = 0.2; minFov = 0.2; maxFov = 0.2;
		};
		class IndicatorAltBaro {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltBaro2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -320;
			min = 0;
			max = 320;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -340;
			min = 0;
			max = 130;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -340;
			min = 0;
			max = 130;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -330;
			min = 0;
			max = 11;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -330;
			min = 0;
			max = 11;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -360;
			min = -30;
			max = 30;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -360;
			min = -30;
			max = 30;
		};
		class Reflectors {
			class Left {
				color[] = {0.800000,0.800000,1.000000,1.000000};
				ambient[] = {0.070000,0.070000,0.070000,1.000000};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.600000;
				brightness = 1.000000;
			};
			class Right {
				color[] = {0.800000,0.800000,1.000000,1.000000};
				ambient[] = {0.070000,0.070000,0.070000,1.000000};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.600000;
				brightness = 1.000000;
			};
		};
		class CargoLight {
			color[] = {0, 1, 0, 0};
			ambient[] = {0.8, 0, 0.01, 1};
			brightness = 0.007;
		};
	};
};

class CfgNonAIVehicles {
	class ProxyWeapon{};
	class Proxym1a2_tzk_inner: ProxyWeapon { // Provides driver room displaying via proxy but not model directly. This can allow M1A2 model contain more faces for other parts.
		model = "\TZK_Model_4_0_5\m1a2_inner.p3d";
		simulation = "alwaysshow";
	};
};

class CfgSounds {
	class BOHWAPStarted {
		sound[]={"\BOHJSDF5\wap\started",0.01,1};
		name = "BOHWAPStarted";
		titles[] = {};
	};
	class BOHWAPMissileWarning {
		sound[]={"\BOHJSDF5\wap\missilewarning",0.01,1};
		name = "BOHWAPMissileWarning";
		titles[] = {};
	};
	class BOHWAPFuelOut {
		sound[]={"\BOHJSDF5\wap\fuelout",0.01,1};
		name = "BOHWAPFuelOut";
		titles[] = {};
	};
	class BOHWAPBoost1 {
		sound[]={"\BOHJSDF5\wap\boost1",1,1};
		name = "BOHWAPBoost1";
		titles[] = {};
	};
	class BOHWAPBoost2 {
		sound[]={"\BOHJSDF5\wap\boost2",1,1.2};
		name = "BOHWAPBoost2";
		titles[] = {};
	};
	class BOHWAPLeg1 {
		sound[]={"\BOHJSDF5\wap\leg",1,1};
		name = "BOHWAPLeg1";
		titles[] = {};
	};
	class BOHWAPLeg2 {
		sound[]={"\BOHJSDF5\wap\gear",1,1};
		name = "BOHWAPLeg2";
		titles[] = {};
	};
};
class CfgMarkers {
	class UnknownVehicle_Marker_xj400 {};
	class WZR2_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "wzr2";
		icon = "\BOHJSDF5\wzr2\icon.paa";
		size = 12;
	};
	class WAP_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "wap";
		icon = "\BOHJSDF5\wap\icon.paa";
		size = 12;
	};
};
// EOF