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

#define WeaponNoSlot			0// 	dummy weapons
#define WeaponSlotPrimary		1// 	primary weapons
#define WeaponSlotSecondary		16// 	secondary weapons
#define WeaponSlotItem			256// 	items
#define WeaponSlotBinocular		4096// 	binocular
#define WeaponHardMounted		65536

#define VSoft 0
#define VArmor 1
#define VAir 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16
#define CanSeeRadarC CanSeeRadar+CanSeeCompass
#define CanSeeAll 31
#define CanSee_VehicleWithRadar CanSeeEye+CanSeeEar+CanSeeOptics+CanSeeCompass+CanSeeRadar
#define CanSee_VehicleNoRadar CanSeeEye+CanSeeEar+CanSeeOptics+CanSeeCompass


class CfgPatches {
	class TZK_Objects_400_3 {
		name = "TZK_Objects_400_3";
		author = "IF";
		units[] = {};
		requiredAddons[] = {
			AH64, BIS_Resistance, BIS_WeaponPack, BMP2, Bradley, BRDM,
			HMMWV, LaserGuided, Su25, Vulcan,
		//	CWKZodiac, GST_KawaP, RKTMod
			
		//	, TZK_Vehicle_Models_401, TZK_Vehicle_Models_401_1, TZK_Weapon_Models_400, TZK_Sounds_400, TZK_Anims_400
		};
		requiredVersion = 1.99;
	};
	class TZK_Objects_400_2: TZK_Objects_400_3 {
		name = "TZK_Objects_400_2";
	};
};

// Include some basic Material effect.
#include "TZK_Objects\HPP\CfgMaterials_HighContrast.hpp"
#include "TZK_Objects\HPP\CfgTextureToMaterial_core.hpp"
// Extend Material Effects is defined in TZK_Effects.

	#include "TZK_Objects\HPP\CfgModels_inherit.hpp"

class CfgAmmo {
	#include "TZK_Objects\HPP\CfgAmmo_default_inherit.hpp"
	#include "TZK_Objects\HPP\CfgAmmo_Tank_inherit.hpp"
	#include "TZK_Objects\HPP\CfgAmmo_Infantry_inherit.hpp"
	#include "TZK_Objects\HPP\CfgAmmo_CannonMG_inherit.hpp"
	#include "TZK_Objects\HPP\CfgAmmo_Missile_inherit.hpp"
	#include "TZK_Objects\HPP\CfgAmmo_Virtual_inherit.hpp"

	// C130 Flare
	class c130_Flare_xj400: Default {
		hit = 0; indirectHit = 0; indirectHitRange = 0.001;
		minRange = 50;	minRangeProbab = 0.20;
		midRange = 300;	midRangeProbab = 0.95;
		maxRange = 500;	maxRangeProbab = 0.20;
		soundHit[] = {"Explosions\expl3",db-50,2};
		irLock = 1;
		laserLock =1;
		dispersion = 200.000000;
		sideAirFriction = 1.0;
		maneuvrability = 0;
		maxSpeed = 100;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		explosive = 0;
		cost = 20;
		model = "empty";
		maxControlRange = 0;
		simulationStep = 0.05;
		simulation = "shotRocket";
	};

	//West
	class M60Sabot_MF_xj400: Heat105{hit = 500;indirectHit = 100;};
	class M60A3Sabot_MF_xj400: Heat105 {hit = 500;indirectHit = 100;};
	class M1Sabot_MF_xj400: Heat105 {hit = 500;indirectHit = 100;};
	class M1A1APFSDS_MF_xj400: Heat120 {hit = 725;indirectHit = 150;minRange = 20;midRange = 225;maxRange = 900;};

	//East
	class T72Sabot_MF_xj400: Heat125 {hit = 675;indirectHit = 200;minRange = 20;midRange = 200;maxRange = 850;};
	class T80Sabot_MF_xj400: Heat125 {hit = 675;indirectHit = 200;minRange = 20;midRange = 200;maxRange = 850;};

	//West
	class M60Heat_MF_xj400: Shell105 {hit = 150;indirectHit = 110;indirectHitRange = 10;};
	class M60A3Heat_MF_xj400: Shell105 {hit = 150;indirectHit = 110;indirectHitRange = 10;};
	class M1Heat_MF_xj400: Shell105 {hit = 150;indirectHit = 110;indirectHitRange = 10;};
	class M1A1Heat_MF_xj400: Shell120 {hit = 200;indirectHit = 150;indirectHitRange = 10;};
	//East
	class BMP1Heat_MF_xj400: Shell73 {hit = 100;indirectHit = 90;indirectHitRange = 9;};
	class BMP1HeFrag_MF_xj400: Shell73 {hit = 50;indirectHit = 80;indirectHitRange = 14;};
	class T72Heat_MF_xj400: Shell125 {hit = 200;indirectHit = 150;indirectHitRange = 10;};
	class T80Heat_MF_xj400: Shell125 {hit = 200;indirectHit = 150;indirectHitRange = 10;};


	//Bullets
	class Bullet7_6_MF_xj400:Bullet7_6 {hit=11;indirectHit=2;indirectHitRange=0.15;};
	class Bullet12_7_MF_xj400: Bullet12_7 {hit = 30;};
	//Missiles
	class AIM9_MF_xj400: AA {
		hit = 360;
		indirectHit = 150;
		indirectHitRange = 5.0;
		minRange = 50;
		minRangeProbab = 0.500000;
		midRange = 500;
		midRangeProbab = 0.950000;
		maxRange = 1750;
		maxRangeProbab = 0.500000;
		maneuvrability = 45.0;
		maxSpeed = 700;
		model = "\mfcti1.16\AIM9.p3d";
		proxyShape = "\mfcti1.16\AIM9.p3d";
		thrustTime = 10.0;
	};

	class AA11_MF_xj400: AA {
		hit = 360;
		indirectHit = 150;
		indirectHitRange = 10.0;
		minRange = 50;
		minRangeProbab = 1;
		midRange = 500;
		midRangeProbab = 1;
		maxRange = 1750;
		maxRangeProbab = 1;
		maneuvrability = 50.0;
		maxSpeed = 700;
		model = "\mfcti1.16\AA11.p3d";
		proxyShape = "\mfcti1.16\AA11.p3d";
		thrustTime = 10.0;
	};

	//US TOW 2
	class TOW2_MF_xj400: Hellfire {
		hit = 875;
		indirectHit = 500;
		maneuvrability = 15;
		maxSpeed = 329;
	};

	//Russian AT-3.
	class AT3_MF_xj400: Hellfire {
		hit = 500;
		indirectHit = 200;
		maneuvrability = 10;
		maxSpeed = 150;
	};

	//Russian AT-5.
	class AT5_MF_xj400: Hellfire {
		hit = 650;
		indirectHit = 400;
		maneuvrability = 15;
		maxSpeed = 200;
	};

	//Russian AT-5B.
	class AT5B_MF_xj400: Hellfire {
		hit = 925;
		indirectHit = 500;
		maneuvrability = 15;
		maxSpeed = 208;
	};

	//Russian AT-8.
	class AT8_MF_xj400: Hellfire {
		hit = 550;
		indirectHit = 200;
		maneuvrability = 10;
		maxSpeed = 350;
	};

	//Russian AT-11.
	class AT11_MF_xj400: Hellfire {
		airlock = true;
		hit = 750;
		indirectHit = 300;
		maneuvrability = 15;
		maxSpeed = 350;
	};

};
	
	#include "TZK_Objects\HPP\CfgRecoils_inherit.hpp"

class CfgWeapons {
	#include "TZK_Objects\HPP\CfgWeapons_default_inherit.hpp"
	#include "TZK_Objects\HPP\CfgWeapons_Tank_inherit.hpp"
	#include "TZK_Objects\HPP\CfgWeapons_Infantry_inherit.hpp"
	#include "TZK_Objects\HPP\CfgWeapons_CannonMG_inherit.hpp"
	#include "TZK_Objects\HPP\CfgWeapons_Missile_inherit.hpp"
	#include "TZK_Objects\HPP\CfgWeapons_Virtual_inherit.hpp"

	// C130 Flare
	class c130_Flare_xj400: Default	{
		ammo = "c130_Flare_xj400";
		displayName = "Flare";
		displayNameMagazine = "c130_Flare";
		shortNameMagazine = "c130_Flare";
		count = 44;
		reloadTime = 0.75;
		aiRateOfFire = 0.0125;
		aiRateOfFireDistance = 300;
		sound[] = {"\TZK_Sounds_4_0_0\HWK_c130\flare.ogg",db+80,1.5};
		reloadSound[] = {Weapons\missload,db-70,1};
		initSpeed = 10;
		magazineReloadTime = 1.0;
		autoFire = 1;
		burst = 1;
	};

// The animation is unique to vehicle. However the "animate" command seems invalid if unit out of sight, thus magazine should probably be the best way, as the controller.
	// Spoof Switch & Limit.
	class SpoofSwitch_xj400: Default {
		ammo = ""; count = 0;
		displayName = ""; displayNameMagazine = ""; shortNameMagazine = "";
	};
	class SpoofCount_xj400: SpoofSwitch_xj400 {};
	class AfterBurnerSwitch_xj400: SpoofSwitch_xj400 {};
	// Deploy Switch
	class DeploySwitch_xj400: SpoofSwitch_xj400 {};
	
	
	//West turrets
	class M60Gun_MF_xj400: Gun105 {magazines[]={"M60Sabot_MF_xj400","M60Heat_MF_xj400"};};
	class M60A3Gun_MF_xj400: M60Gun_MF_xj400 {magazines[]={"M60A3Sabot_MF_xj400","M60A3Heat_MF_xj400"};};
	class M1Gun_MF_xj400: Gun105 {magazines[] = {"M1Sabot_MF_xj400","M1Heat_MF_xj400"};};
	class M1A1Gun_MF_xj400: Gun120 {magazines[] = {"M1A1APFSDS_MF_xj400","M1A1Heat_MF_xj400"};};

	//East turrets
	class BMP1Gun_MF_xj400: Gun73 {magazines[]={"BMP1Heat_MF_xj400","BMP1HeFrag_MF_xj400"};};
	class T72Gun_MF_xj400: Gun125 {magazines[]={"T72Sabot_MF_xj400","T72Heat_MF_xj400"};};
	class T72BGun_MF_xj400: Gun125 {magazines[]={"T72Sabot_MF_xj400","T72Heat_MF_xj400","T72AT11_MF_xj400"};};
	class T80Gun_MF_xj400: Gun125 {magazines[]={"T80Sabot_MF_xj400","T80Heat_MF_xj400"};};
	class T80BGun_MF_xj400: Gun125 {magazines[]={"T80Sabot_MF_xj400","T80Heat_MF_xj400","T80AT8_MF_xj400"};};
	class T80UGun_MF_xj400: Gun125 {magazines[]={"T80Sabot_MF_xj400","T80Heat_MF_xj400","T80AT11_MF_xj400"};};

	//West shells
	class M60Sabot_MF_xj400: Heat105 {
		ammo = "M60Sabot_MF_xj400";
		count = 33;
		displayName = "105mm Sabot";
		displayNameMagazine = "105mm Sabot";
		shortNameMagazine = "105mm Sabot";
		initSpeed = 1500; // 105mm Gun shouldn't have such init speed. However in OFP those magazines with low init speed are inaccurate. This is the reason for this parameter modification.
	};
	class M60A3Sabot_MF_xj400: M60Sabot_MF_xj400 {
		ammo = "M60A3Sabot_MF_xj400";
		reloadTime = 13;
	};
	class M1Sabot_MF_xj400: Heat105 {
		ammo = "M1Sabot_MF_xj400";
		displayName = "105mm Sabot";
		displayNameMagazine = "105mm Sabot";
		shortNameMagazine = "105mm Sabot";
		reloadTime = 10;
	};
	class M1A1APFSDS_MF_xj400: Heat120 {
		ammo = "M1A1APFSDS_MF_xj400";
		count = 30;
		displayName = "APDS-FS";
		displayNameMagazine = "120mm APDS-FS";
		shortNameMagazine = "120mm APDS-FS";
		reloadTime = 6;
	};
	class M60Heat_MF_xj400: Shell105 {
		ammo = "M60Heat_MF_xj400";
		displayName = "105mm HEAT";
		displayNameMagazine = "105mm HEAT";
		shortNameMagazine = "105mm HEAT";
		initSpeed = 1500;
		count = 30;
	};
	class M60A3Heat_MF_xj400: M60Heat_MF_xj400 {
		ammo = "M60A3Heat_MF_xj400";
		reloadTime = 13;
	};
	class M1Heat_MF_xj400: Shell105 {
		ammo = "M1Heat_MF_xj400";
		displayName = "105mm HEAT";
		displayNameMagazine = "105mm HEAT";
		shortNameMagazine = "105mm HEAT";
		initSpeed = 1500;
		reloadTime = 10;
	};
	class M1A1Heat_MF_xj400: Shell120 {
		ammo = "M1A1Heat_MF_xj400";
		count = 10;
		displayName = "120mm HEAT";
		displayNameMagazine = "120mm HEAT";
		shortNameMagazine = "120mm HEAT";
		reloadTime = 6;
	}

	//East shells
	class BMP1Heat_MF_xj400: Shell73 {
		ammo = "BMP1Heat_MF_xj400";
		count = 20;
		displayName = "73mm HEAT";
		displayNameMagazine = "73mm HEAT";
		shortNameMagazine = "73mm HEAT";
		reloadTime = 6;
	};
	class BMP1HeFrag_MF_xj400: Shell73 {
		ammo = "BMP1HeFrag_MF_xj400";
		count = 20;
		displayName = "73mm HE-Frag";
		displayNameMagazine = "73mm HE-Frag";
		shortNameMagazine = "73mm HE-Frag";
		reloadTime = 6;
	};
	class T72Heat_MF_xj400: Shell125 {
		ammo = "T72Heat_MF_xj400";
		count = 20;
		displayName = "125mm HEAT";
		displayNameMagazine = "125mm HEAT";
		shortNameMagazine = "125mm HEAT";
		reloadTime = 6.5;
	};
	class T72Sabot_MF_xj400: Heat125 {
		ammo = "T72Sabot_MF_xj400";
		count = 25;
		displayName = "125mm Sabot";
		displayNameMagazine = "125mm Sabot";
		shortNameMagazine = "125mm Sabot";
		reloadTime = 6.5;
	};
	class T80Heat_MF_xj400: Shell125 {
		ammo = "T80Heat_MF_xj400";
		count = 20;
		displayName = "125mm HEAT";
		displayNameMagazine = "125mm HEAT";
		shortNameMagazine = "125mm HEAT";
		reloadTime = 6;
	};
	class T80Sabot_MF_xj400: Heat125 {
		ammo = "T80Sabot_MF_xj400";
		count = 25;
		displayName = "125mm Sabot";
		displayNameMagazine = "125mm Sabot";
		shortNameMagazine = "125mm Sabot";
		reloadTime = 6;
	};

	class Browning_MF_xj400: Browning {ammo="Bullet12_7_MF_xj400";};

	//West MGs
	class M240_MF_xj400: MachineGun7_6 {
		ammo = "Bullet7_6_MF_xj400";
		displayName = "7.62mm M240";
		displayNameMagazine = "7.62mm M240";
		shortNameMagazine = "7.62mm M240";
	};

	class M60MachineGun7_6_MF_xj400: M240_MF_xj400 {count = 5950;};
	class M1MachineGun7_6_MF_xj400: M240_MF_xj400 {count = 11400;};

	class M85_MF_xj400: MachineGun12_7 {
		ammo = "Bullet12_7_MF_xj400";
		autoReload = 1;
		count = 100;
		displayName = "12.7mm M85";
		displayNameMagazine = "12.7mm M85";
		shortNameMagazine = "12.7mm M85";
		magazineReloadTime = 9;
	};
	class M2_MF_xj400: M85_MF_xj400 {
		autoReload = 1;
		displayName = "12.7mm M2";
		displayNameMagazine = "12.7mm M2";
		shortNameMagazine = "12.7mm M2";
		magazineReloadTime = 8;
	};
	class M2Stationary_MF_xj400: M2_MF_xj400 {
		autoReload = 0;
	};

	class HE_MF_xj400: M2_MF_xj400 {
		ammo = "HEBullet25_MF_xj400";
		autoReload = 0;
		flashSize = 1.2;
		maxLeadSpeed = 550;
		displayName = "25mm HE";
		displayNameMagazine = "25mm HE";
		shortNameMagazine = "25mm HE";
		reloadTime = 2.0;
		sound[] = {"Explosions\expl3",1.0,1};
	};

	class M113MachineGun12_7_MF_xj400: M2_MF_xj400 {count = 2000;};
	class M2A2MachineGun7_6_MF_xj400: M240_MF_xj400 {
		count = 2200;
		displayName = "7.62mm M240C";
		displayNameMagazine = "7.62mm M240C";
		shortNameMagazine = "7.62mm M240C";
	};

	//East MGs
	class PKT_MF_xj400: MachineGun7_6 {
		ammo = "Bullet7_6_MF_xj400";
		count = 2000;
		displayName = "7.62mm PKT";
		displayNameMagazine = "7.62mm PKT";
		shortNameMagazine = "7.62mm PKT";
	};
	class NSVT_MF_xj400: M2_MF_xj400 {
		displayName = "12.7mm NSVT";
		displayNameMagazine = "12.7mm NSVT";
		shortNameMagazine = "12.7mm NSVT";
	};

	//East MGs
	class Cannon30AP_MF_xj400: Cannon30AP {ammo = "Cannon30AP_MF_xj400";};
	class Cannon30_MF_xj400: Cannon30 {magazines[] = {"Cannon30AP_MF_xj400","Cannon30HE"};};


	//West Rockets
	class AA11Launcher_MF_xj400: HellfireLauncher {
		scopeWeapon=2;
		scopeMagazine=2;

		airlock = true;
		ammo = "AA11_MF_xj400";
		displayName = "AA-11";
		displayNameMagazine = "AA-11";
		shortNameMagazine = "AA-11";
		model = "\mfcti1.16\AA11.p3d";
		proxyShape = "\mfcti1.16\AA11.p3d";
		count = 12;
	};

	class AIM9Launcher_MF_xj400: HellfireLauncher {
		airlock = true;
		ammo = "AIM9_MF_xj400";
		displayName = "AIM-9";
		displayNameMagazine = "AIM-9";
		shortNameMagazine = "AIM-9";
		model = "\mfcti1.16\AIM9.p3d";
		proxyShape = "\mfcti1.16\AIM9.p3d";
		count = 8;
	};

	//Missile Launchers
	class TOW2Launcher_MF_xj400: AT3Launcher {
		ammo = TOW2_MF_xj400;
		count = 2;
		displayName = "TOW 2";
		displayNameMagazine = "TOW 2";
		shortNameMagazine = "TOW 2";
		reloadTime = 0.500000;
	};

	class AT3Launcher_MF_xj400: AT3Launcher {
		ammo = AT3_MF_xj400;
		count = 1;
		displayName = "AT-3";
		displayNameMagazine = "AT-3";
		shortNameMagazine = "AT-3";
		reloadTime = 10;
	};

	class AT5Launcher_MF_xj400: AT3Launcher {
		ammo = AT5_MF_xj400;
		count = 5;
		displayName = "AT-5";
		displayNameMagazine = "AT-5";
		shortNameMagazine = "AT-5";
		reloadTime = 3.5;
	};

	class AT5BLauncher_MF_xj400: AT3Launcher {
		ammo = AT5B_MF_xj400;
		count = 5;
		displayName = "AT-5B";
		displayNameMagazine = "AT-5B";
		shortNameMagazine = "AT-5B";
		reloadTime = 3.5;
	};

	class T72AT11_MF_xj400: AT3Launcher {
		ammo = "AT11_MF_xj400";
		count = 4;
		displayName = "AT-11";
		displayNameMagazine = "AT-11";
		shortNameMagazine = "AT-11";
		reloadTime = 8;
	};

	class T80AT8_MF_xj400: AT3Launcher {
		ammo = "AT8_MF_xj400";
		count = 6;
		displayName = "AT-8";
		displayNameMagazine = "AT-8";
		shortNameMagazine = "AT-8";
		reloadTime = 7.5;
	};

	class T80AT11_MF_xj400: AT3Launcher {
		ammo = "AT11_MF_xj400";
		count = 6;
		displayName = "AT-11";
		displayNameMagazine = "AT-11";
		shortNameMagazine = "AT-11";
		reloadTime = 7.5;
	};

};

	#include "TZK_Objects\HPP\Class_WeaponFireClouds.hpp"
	// CfgVehicleActions & CfgMovesMC
	#include "TZK_Objects\HPP\CfgVehicleActionsMovesMC.hpp"

	#include "TZK_Objects\HPP\Class_UserActions_inherit.hpp"


class CfgVehicles {
	#include "TZK_Objects\HPP\CfgVehicles_default_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_Man_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_Tank_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_Light_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_APC_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_Aircraft_inherit.hpp"
	#include "TZK_Objects\HPP\CfgVehicles_Building_inherit.hpp"
	
	#include "TZK_Objects\HPP\CfgVehicles_Logic_inherit.hpp"

	class pwr_paraW_xj400: ParachuteWest {
		displayName= "$STR_PWR_PARACHUTE";
		model = "\TZK_Objects\Model\para.p3d";
		ejectDeadDriver=1;
		armor = 0;
	};
	class pwr_paraE_xj400: ParachuteEast {
		displayName= "$STR_PWR_PARACHUTE";
		model = "\TZK_Objects\Model\para.p3d";
		ejectDeadDriver=1;
		armor = 0;
	};
	class pwr_paraG_xj400: ParachuteG {
		displayName= "$STR_PWR_PARACHUTE";
		model = "\TZK_Objects\Model\para.p3d";
		ejectDeadDriver=1;
		armor = 0;
	};
	class pwr_paraC_xj400: ParachuteC {
		displayName= "$STR_PWR_PARACHUTE";
		model = "\TZK_Objects\Model\para.p3d";
		ejectDeadDriver=1;
		armor = 0;
	};

	#include "TZK_Objects\HPP\CfgVehicles_Vanilla_400_0_inherit.hpp"
};

class CfgNonAIVehicles {
	// This class is for model p3d files.
	access = 1;
	class ProxyWeapon {
		autocenter = 0;
		scope = protected;
		reversed = 0;
		model = "m16_proxy";
		simulation = "ProxyWeapon";
	};

	// Proxy of RHS_Mi24
	class Proxyat2_proxy: ProxyWeapon {
		model = "\TZK_Model_4_0_0\wp\RHS_AT2_Proxy.p3d";
		simulation = "maverickweapon";
	};
	class Proxyat6a: Proxyat2_proxy {
		model = "\TZK_Model_4_0_0\wp\RHS_AT6a_Proxy.p3d";
	};
	class Proxyat6b: Proxyat2_proxy {
		model = "\TZK_Model_4_0_0\wp\RHS_AT6b_Proxy.p3d";
	};
	class Proxyat6c: Proxyat2_proxy {
		model = "\TZK_Model_4_0_0\wp\RHS_AT6c_Proxy.p3d";
	};
	class Proxyat6d: ProxyWeapon {
		model = "\Proxyat2_proxy\wp\RHS_AT6d_Proxy.p3d";
	};
	
	// Proxy of BWMOD_TIGER. However there aren't such proxy's defination in tiger's model so Proxy defined here is non-sense.
	class ProxyROCKET_PARS3: ProxyWeapon {
		model = "TOW";
		simulation = "maverickweapon";
	};
	class ProxyROCKET_HOT3: ProxyWeapon {
		model = "TOW";
		simulation = "maverickweapon";
	};
	class ProxyROCKET_Stinger: ProxyWeapon {
		model = "TOW";
		simulation = "maverickweapon";
	};
	
	// Proxy of infantry guns
	class ProxyVNgroza1sscope: ProxyWeapon {};
	class ProxyRFSVUa: ProxyWeapon {}; 
};

	#include "TZK_Objects\HPP\CfgGroups_inherit.hpp"
	#include "TZK_Objects\HPP\CfgMarkers_inherit.hpp"

class CfgRadio {
	class DKMM_M_dud_xj400 {
		sound[] = {"\TZK_Objects\Sound\DKM\eng_hey2.wss", db+40, 1};
		name = "DKMM_M_dud_xj400";
		title = "Missile DUD";
 	};
};
class CfgSounds {
//	sounds[] = {IncomingWarningAir_xj400, Rearming_xj400, AutoRefuel_xj400, NuclearMissileReady_xj400, NuclearMissileLaunched_xj400, MCV_Deployed_xj400, DKMM_M_dud_xj400};
//	sounds[] is necessary for description.ext but not for AddOns.
	class IncomingWarningAir_xj400 {
		sound[] = {"\TZK_Objects\Sound\incoming.wss",db+30,1};
		name = "IncomingWarningAir_xj400";
		titles[] = {0, "WARNING! Incoming Missile!"};
	};
	class Rearming_xj400 {
		sound[] = {"\Sound\Weapons\missload.wss",db+30,1};
		name = "Rearming_xj400";
		titles[] = {0, "Rearm in process."};
	};
	class AutoRefuel_xj400 {
		sound[] = {"\Sound\Weapons\missload.wss",db+40,0.2};
		name = "AutoRefuel_xj400";
		titles[] = {};
	};
	class NuclearMissileReady_xj400 {
		sound[] = {"\TZK_Objects\Sound\snukread.wss",db-10,1};
		name = "NuclearMissileReady_xj400";
		titles[] = {};
	};
	class NuclearMissileLaunched_xj400 {
		sound[] = {"\TZK_Objects\Sound\snuksire.wss",db-10,1};
		name = "NuclearMissileLaunched_xj400";
		titles[] = {0, "WARNING! Nuclear Missile Launched!"};
	};
	class MCV_Deployed_xj400 {
		sound[] = {"\TZK_Objects\Sound\uplace.wss",db-10,1};
		name = "MCV_Deployed_xj400";
		titles[] = {};
	};
	class A10AfterBurning_xj400 {
		sound[] = {"\TZK_Objects\Sound\burner.wss",1.0,1.0};
		name = "A10AfterBurning_xj400";
		titles[] = {};
	};
	class Su25AfterBurning_xj400 {
		sound[] = {"\TZK_Objects\Sound\burner.wss",1.0,1.0};
		name = "Su25AfterBurning_xj400";
		titles[] = {};
	};
	class ko_no_DIO_da_xj400 {
		sound[] = {"\TZK_Objects\Sound\konoDIOda.wss",1.0,1.0};
		name = "ko_no_DIO_da_xj400";
		titles[] = {};
	};
};
	
// End of Config File