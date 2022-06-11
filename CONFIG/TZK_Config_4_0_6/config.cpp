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

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16 
#define CanSeeAll 31

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
	class Heat: Shell {};
	class Heat73: Heat {};
	class Heat105: Heat73 {};
	class Heat120: Heat105 {};
	class Heat125: Heat120 {};
	
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
		soundHit[] = {"Explosions\timebomb", 100, 1};
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
	
	class GrenadeHand: Grenade {};
	class RKG3M_xj400: GrenadeHand {
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2.5;
		// ================ above same as LAW ================
		cost = 500; // less cost to make AI use it more
		// ================ below same as Kasap ================
		model = "\TZK_Config_4_0_6\RGK3M.p3d";
		soundHit1[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Boom2.ogg",db40,1};
		soundHit2[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Boom3.ogg",db40,1};
		soundHit3[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Boom4.ogg",db40,1};
		soundHit4[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Boom5.ogg",db40,1};
		hitGround[] = {soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitMan[] = {soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitArmor[] = {soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitBuilding[] = {soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
	};
	
	class Carl_I_1_TZK_xj400: CarlGustav {};
	class Carl_I_2_TZK_xj400: Carl_I_1_TZK_xj400 { hit = 900; };
	class Carl_II_1_TZK_xj400: Carl_I_1_TZK_xj400 {
		maxControlRange = 400; maneuvrability = 1.3;
	};
	class Carl_II_2_TZK_xj400: Carl_II_1_TZK_xj400 { hit = 900; };
	class Carl_III_1_TZK_xj400: Carl_I_1_TZK_xj400 {
		maxControlRange = 600; maneuvrability = 1.6;
	};
	class Carl_III_2_TZK_xj400: Carl_III_1_TZK_xj400 { hit = 900; };
	class Carl_IV_1_TZK_xj400: Carl_I_1_TZK_xj400 {
		maxControlRange = 800; maneuvrability = 2; maxRange = 800; thrustTime = 2.5;
	};
	class Carl_IV_2_TZK_xj400: Carl_IV_1_TZK_xj400 { hit = 900; };
	class AT4_I_1_TZK_xj400: Carl_I_1_TZK_xj400 { model = "RPG"; };
	class AT4_II_1_TZK_xj400: Carl_II_1_TZK_xj400 { model = "RPG"; };
	class AT4_III_1_TZK_xj400: Carl_III_1_TZK_xj400 { model = "RPG"; };
	class AT4_IV_1_TZK_xj400: Carl_IV_1_TZK_xj400 { model = "RPG"; };
	class AT4_I_2_TZK_xj400: Carl_I_2_TZK_xj400 { model = "RPG"; };
	class AT4_II_2_TZK_xj400: Carl_II_2_TZK_xj400 { model = "RPG"; };
	class AT4_III_2_TZK_xj400: Carl_III_2_TZK_xj400 { model = "RPG"; };
	class AT4_IV_2_TZK_xj400: Carl_IV_2_TZK_xj400 { model = "RPG"; };
	class AA_I_TZK_xj400: AA { maxRange = 1500; };
	class 9K32_I_TZK_xj400: AA_I_TZK_xj400 {};
	
	class Sabot106_htr_xj400: Bullet12_7 {
		airLock = 0;
		hit = 650; indirectHit = 250; indirectHitRange = 1;
		minRange = 5; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.95;
		soundHit[] = {"Explosions\expl4", 100, 1};
		soundFly[] = {"objects\bulletnoise",0.0316228,4};
		simulation = "shotBullet";
		timeToLive = 60; // Useless for shotBullet
		
		explosive = 1;
		cost = 300;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 10;
		tracerColor[] = {0, 0, 0, 0};
   };
	class PG9HEAT_fdf_xj400: Bullet12_7 {
		airLock = 0;
		hit = 490; indirectHit = 100; indirectHitRange = 4;
		minRange = 5; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.95;
		soundFly[] = {"\TZK_Config_4_0_6\snd\finmod\tank_shell_fly.wss", 1, 1}; //FDF - Goeth 10.1.2004
		soundHit1[] = {"\TZK_Config_4_0_6\snd\finmod\spg9_expl.wss", 100, 1};
		soundHit2[] = {"\TZK_Config_4_0_6\snd\finmod\spg9_expl.wss", 100, 1};
		soundHit3[] = {"\TZK_Config_4_0_6\snd\finmod\spg9_expl.wss", 100, 1};
		soundHitArmor1[] = {"\TZK_Config_4_0_6\snd\finmod\spg9_expl.wss", 100, 1};
		soundHitArmor2[] = {"\TZK_Config_4_0_6\snd\finmod\spg9_expl.wss", 100, 1};
		soundHitMan1[] = {"\TZK_Config_4_0_6\snd\finmod\spg9_expl.wss", 100, 1};
		soundHitMan2[] = {"\TZK_Config_4_0_6\snd\finmod\spg9_expl.wss", 100, 1};
		soundHitBuilding1[] = {"\TZK_Config_4_0_6\snd\finmod\spg9_expl.wss", 100, 1};
		soundHitBuilding2[] = {"\TZK_Config_4_0_6\snd\finmod\spg9_expl.wss", 100, 1};
		hitGround[] = {soundHit1, 0.33, soundHit2, 0.33, soundHit3, 0.33};
		hitArmor[] = {soundHitArmor1, 0.5, soundHitArmor2, 0.5};
		hitMan[] = {soundHitMan1, 0.5, soundHitMan2, 0.5};
		hitBuilding[] = {soundHitBuilding1, 0.5, soundHitBuilding2, 0.5};

		explosive = 1;
		cost = 270;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 10;
		tracerColor[] = {1, 0, 0, 0};
	};

	class Shrapnel_xj400: Heat120 {
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2.5;
		// ================ above same as LAW ================
		simulation = "shotShell";
	};
	
	class 105RCSabot_OFrP_xj400: Heat105 {
		hit = 700; indirectHit = 300; indirectHitRange = 1;
		minRange = 10;
		soundFly[] = {"\TZK_Config_4_0_6\PrjtlFlg.wss",db-20,1.0};
		cost = 800;
	};
	class 105RCHE_OFrP_xj400: Shell105 {
		hit = 150; indirectHit = 100; indirectHitRange = 8;
		soundFly[] = {"\TZK_Config_4_0_6\PrjtlFlg.wss",db-20,1.0};
		minRange = 50; minRangeProbab = 0.5;
		midRange = 1050; midRangeProbab = 0.99;
		maxRange = 2000; maxRangeProbab = 0.75;
		cost = 200;
	};
	// Fix 155mm shell model error
	class HEAT155_DKMM_xj400: Heat125 {
		model = "\TZK_Config_4_0_6\wp\heat155.p3d";
		soundFly[] = {"\TZK_Sounds_4_0_0\COC\155mmFly.wss", db-30, 1};
	};
	// 120/122 mm howitzer shell
	class HE120_Coc_xj400: HEAT155_DKMM_xj400 {
		hit = 200; indirectHit = 150; indirectHitRange = 9.5;
		soundFly[] = {"\TZK_Config_4_0_6\coc\shellfly.wss", db-30, 0.9};
		cost = 300;
	};
	class HE122_VME_xj400: HEAT155_DKMM_xj400 {
		hit = 250; indirectHit = 200; indirectHitRange = 12;
		soundHit1[] = {"\TZK_Sounds_4_0_0\VME\sabot1.wss", 100, 1};
		soundHit2[] = {"\TZK_Sounds_4_0_0\VME\sabot2.wss", 100, 1};
		soundHitArmor1[] = {"\TZK_Sounds_4_0_0\VME\sabot1.wss", 100, 1};
		soundHitArmor2[] = {"\TZK_Sounds_4_0_0\VME\sabot2.wss", 100, 1};
		hitGround[]={"soundHit1",0.5,"soundHit2",0.5};
		hitArmor[]={"soundHitArmor1",0.5,"soundHitArmor2",0.5};
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
		magazines[] = {
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
	
	class GrenadeLauncher: Default {};
	class HandGrenade: GrenadeLauncher {};
	
	class Carl_I_1_TZK_xj400: CarlGustavLauncher {
		ammo = "Carl_I_1_TZK_xj400"; 
		picture = "\dtaext\equip\m\m_CarlGustavLauncher.paa";
		magazineType = "3 * 		256";
	};
	class Carl_II_1_TZK_xj400: Carl_I_1_TZK_xj400 { ammo = "Carl_II_1_TZK_xj400"; };
	class Carl_III_1_TZK_xj400: Carl_I_1_TZK_xj400 { ammo = "Carl_III_1_TZK_xj400"; };
	class Carl_IV_1_TZK_xj400: Carl_I_1_TZK_xj400 { ammo = "Carl_IV_1_TZK_xj400"; };
	class Carl_I_2_TZK_xj400: Carl_I_1_TZK_xj400 { ammo = "Carl_I_2_TZK_xj400"; };
	class Carl_II_2_TZK_xj400: Carl_I_1_TZK_xj400 { ammo = "Carl_II_2_TZK_xj400"; };
	class Carl_III_2_TZK_xj400: Carl_I_1_TZK_xj400 { ammo = "Carl_III_2_TZK_xj400"; };
	class Carl_IV_2_TZK_xj400: Carl_I_1_TZK_xj400 { ammo = "Carl_IV_2_TZK_xj400"; };
	class Carl_TZK_xj400: CarlGustavLauncher {
		magazines[] = {
			"CarlGustavLauncher"
			,"Carl_I_1_TZK_xj400","Carl_II_1_TZK_xj400","Carl_III_1_TZK_xj400","Carl_IV_1_TZK_xj400"
			,"Carl_I_2_TZK_xj400","Carl_II_2_TZK_xj400","Carl_III_2_TZK_xj400","Carl_IV_2_TZK_xj400"
		};
		picture = "\dtaext\equip\w\w_CarlGustavLauncher.paa";
	};
	class AT4Launcher: CarlGustavLauncher {};
	class AT4_I_1_TZK_xj400: AT4Launcher {
		ammo = "AT4_I_1_TZK_xj400";
		picture = "\dtaext\equip\m\m_AT4Launcher.paa";
		magazineType = "3 * 		256";
	};
	class AT4_II_1_TZK_xj400: AT4_I_1_TZK_xj400 { ammo = "AT4_II_1_TZK_xj400"; };
	class AT4_III_1_TZK_xj400: AT4_I_1_TZK_xj400 { ammo = "AT4_III_1_TZK_xj400"; };
	class AT4_IV_1_TZK_xj400: AT4_I_1_TZK_xj400 { ammo = "AT4_IV_1_TZK_xj400"; };
	class AT4_I_2_TZK_xj400: AT4_I_1_TZK_xj400 { ammo = "AT4_I_2_TZK_xj400"; };
	class AT4_II_2_TZK_xj400: AT4_I_1_TZK_xj400 { ammo = "AT4_II_2_TZK_xj400"; };
	class AT4_III_2_TZK_xj400: AT4_I_1_TZK_xj400 { ammo = "AT4_III_2_TZK_xj400"; };
	class AT4_IV_2_TZK_xj400: AT4_I_1_TZK_xj400 { ammo = "AT4_IV_2_TZK_xj400"; };
	class AT4_TZK_xj400: AT4Launcher {
		magazines[] = {
			"AT4Launcher"
			,"AT4_I_1_TZK_xj400","AT4_II_1_TZK_xj400","AT4_III_1_TZK_xj400","AT4_IV_1_TZK_xj400"
			,"AT4_I_2_TZK_xj400","AT4_II_2_TZK_xj400","AT4_III_2_TZK_xj400","AT4_IV_2_TZK_xj400"
		};
		picture = "\dtaext\equip\w\w_AT4Launcher.paa";
	};
	class AALauncher: CarlGustavLauncher {};
	class AA_I_TZK_xj400: AALauncher {
		picture = "\dtaext\equip\m\m_AALauncher.paa";
		magazineType = "3 * 		256";
		ammo = "AA_I_TZK_xj400";
	};
	class AA_TZK_xj400: AALauncher {
		magazines[] = {"AALauncher","AA_I_TZK_xj400"};
		picture = "\dtaext\equip\w\w_AALauncher.paa";
	};
	class 9K32Launcher: AALauncher {};
	class 9k32_I_TZK_xj400: 9k32Launcher {
		picture = "\dtaext\equip\m\m_9k32Launcher.paa";
		magazineType = "3 * 		256";
		ammo = "9K32_I_TZK_xj400";
	};
	class 9k32_TZK_xj400: 9k32Launcher {
		magazines[] = {"9k32Launcher","9k32_I_TZK_xj400"};
		picture = "\dtaext\equip\w\w_9k32Launcher.paa";
	};
	
	class Gun106_htr_xj400: Gun120 {
		displayName = "106mm HEAT";
		reloadSound[] = {"\TZK_Config_4_0_6\snd\m151a1c\106reload.wss", 0.5, 1};
		magazines[] = {"Sabot106_htr_xj400"};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class Sabot106_htr_xj400: Shell120 {
		displayName = "106mm HEAT";
		displayNameMagazine = "106mm HEAT";
		shortNameMagazine = "HEAT";
		ammo = "Sabot106_htr_xj400";
		count = 8;
		initSpeed = 1400;
		nameSound = "heat";
		reloadTime = 8;
		sound[] = {"\TZK_Config_4_0_6\snd\m151a1c\106shot.wss", db+20, 1};
		soundContinuous = 0;
		ffCount = 1;
		flash = "gunfire";
		flashSize = 1;
		dispersion = 0;
		maxLeadSpeed = 80;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class Gun_Spg_fdf_xj400: Gun120 {
		displayName = "PG-9 HEAT-FS";
		drySound[] = {"\TZK_Config_4_0_6\snd\finmod\mg_dry.wss",0.000316,1};
		reloadMagazineSound[] = {"\TZK_Config_4_0_6\snd\finmod\mg_reload_manual.wss",0.000316,1};
		reloadSound[] = {"\TZK_Config_4_0_6\snd\finmod\musti_reload.wss",0.000316,1};
		magazines[] = {"PG9HEAT_fdf_xj400"};
		magazineReloadTime = 0;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class PG9HEAT_fdf_xj400: Shell120 {
		displayName="PG-9 HEAT-FS";
		displayNameMagazine="HEAT";
		shortNameMagazine="PG-9 HEAT-FS Rounds";
		ammo = "PG9HEAT_fdf_xj400";
		count = 15;
		initSpeed = 1400;
		nameSound = "heat";
		reloadTime = 8;
		sound[] = {"\TZK_Config_4_0_6\snd\finmod\spg9.wss", db+20, 1};
		soundContinuous = 0;
		ffCount = 1;
		flash = "gunfire";
		flashSize = 1;
		dispersion = 0.002;
		maxLeadSpeed = 50;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};

	// AMX-10 RC weapon
	class 105RC_OFrP_xj400: Gun105 {
		displayName = "105mm/48caliber";
		magazines[] = {"105RCSabot_OFrP_xj400", "105RCHE_OFrP_xj400"};
		reloadTime = 8; //chargeur manuel
		
		opticsZoomMin = 0.04;
 		opticsZoomMax = 0.18;
 		distanceZoomMin = 800;
 		distanceZoomMax = 50;
	};
	class 105RCSabot_OFrP_xj400: HEAT105 {
		displayName = "APFSDS 105mm F3";
		displayNameMagazine = "APFSDS";
		shortNameMagazine = "APFSDS";
		ammo = "105RCSabot_OFrP_xj400";
		count = 38;
		initSpeed = 1400;
		nameSound = "heat";
		recoil = "Empty";
		dispersion = 0.0001;
		reloadTime = 8;
		sound[] = {"\TZK_Config_4_0_6\tir10RC.wss", 10, 1.0};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class 105RCHE_OFrP_xj400: Shell105 {
		displayName = "HE 105mm F3";
		displayNameMagazine = "HE";
		shortNameMagazine = "HE";
		ammo = "105RCHE_OFrP_xj400";
		count = 38;
		initSpeed = 800;
		nameSound = "Shell";
		recoil = "Empty";
		dispersion = 0.001;
		reloadTime = 8;
		sound[] = {"\TZK_Config_4_0_6\tir10RC.wss", 10, 1.0};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	// 2S25 Sprut-SD Weapon from mfm. Defined in TZK_Objects. Redefine here
	class Sprut_3VBM17_xj400: Heat125 {
		displayName = "3BM-42 APFSDS";
		displayNameMagazine = "3BM-42 APFSDS";
		shortNameMagazine = "3BM-42 APFSDS";
		namesound = "heat";
		sound[] = {"\TZK_Sounds_4_0_0\2S25\125mm_3p.wss", db+30, 1};
		reloadTime = 8;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class Sprut_3VBK25_xj400: Heat125 {
		displayName = "3VBK25 HEAT";
		displayNameMagazine = "3VBK25 HEAT";
		shortNameMagazine = "3VBK25 HEAT";
		nameSound = "shell";
		reloadTime = 8;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
        sound[] = {"\TZK_Sounds_4_0_0\2S25\125mm_3p.wss", db+30, 1};
	};
	class Sprut_2A75_xj400: Gun125 {
		reloadSound[] = {"\TZK_Sounds_4_0_0\2S25\125mmreload.wss", 0.1, 0.9};
		reloadTime = 8;
		magazines[] = {"Sprut_3VBM17_xj400","Sprut_3VBK25_xj400"};
	};


	class Gun120_Grk_xj400: shell125 {
		displayName = "120mm Gun";
		scopeWeapon = 2; scopeMagazine = 0;
		
		backgroundReload = 1;
		reloadSound[] = {"Weapons\reload",0.001,1};
		magazines[] = {
			"HE120_Grk_0080_xj400","HE120_Grk_0120_xj400","HE120_Grk_0180_xj400","HE120_Grk_0300_xj400","HE120_Grk_0400_xj400"
			,"HE120_Grk_0500_xj400","HE120_Grk_0600_xj400","HE120_Grk_0700_xj400"
		};
		magazineReloadTime = 8;
	};
	class HE120_Grk_Base_xj400: shell125 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "120mm HE"; shortNameMagazine = "HE";
		count = 20;
		initSpeed = 500;
		
		displayName = "120mm HE";
		ammo = "HE120_Coc_xj400";
		sound[] = {"\TZK_Config_4_0_6\coc\amos_fire.wss", db+20 ,1};
		reloadTime = 4;
		flash = "gunfire";
		flashSize = 10.000000;
		dispersion = 0.00055;
		autoFire = 0;
		aiRateOfFire = 0.06; aiRateOfFireDistance = 10000;
	};
	#define HE120_Grk(speed) \
	class HE120_Grk_##speed##_xj400: HE120_Grk_Base_xj400 { \
		initSpeed = ##speed##;  displayName = 120mm HE (##speed##m/s); \
	};
	HE120_Grk(0080); HE120_Grk(0120); HE120_Grk(0180); HE120_Grk(0300); HE120_Grk(0400); HE120_Grk(0500); HE120_Grk(0600); HE120_Grk(0700);

	class Gun122_VME_xj400: shell125 {
		displayName = "122mm Gun";
		scopeWeapon = 2; scopeMagazine = 0;
		
		backgroundReload = 1;
		reloadSound[] = {"\TZK_Sounds_4_0_0\VME\aa1.wav", 0.1, 1};
		magazines[] = {
			"HE122_VME_0080_xj400","HE122_VME_0120_xj400","HE122_VME_0180_xj400","HE122_VME_0300_xj400","HE122_VME_0400_xj400"
			,"HE122_VME_0500_xj400","HE122_VME_0600_xj400","HE122_VME_0700_xj400"
		};
		magazineReloadTime = 8;
		
		opticsZoomMin = 0.04;
		opticsZoomMax = 0.12;
		distanceZoomMin = 1500;
		distanceZoomMax = 80;
	};
	class HE122_VME_Base_xj400: shell125 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "122mm HE"; shortNameMagazine = "HE";
		count = 50;
		initSpeed = 500;
		
		displayName = "122mm HE";
		ammo = "HE122_VME_xj400";
		sound[] = {"\TZK_Config_4_0_6\vme\plz89.wss", db+20, 1};
		reloadTime = 8;
		flash = "gunfire";
		flashSize = 10;
		dispersion = 0.00055;
		autoFire = 0;
		aiRateOfFire = 0.06; aiRateOfFireDistance = 10000;
	};
	#define HE122_VME(speed) \
	class HE122_VME_##speed##_xj400: HE122_VME_Base_xj400 { \
		initSpeed = ##speed##;  displayName = 122mm HE (##speed##m/s); \
	};
	HE122_VME(0080); HE122_VME(0120); HE122_VME(0180); HE122_VME(0300); HE122_VME(0400); HE122_VME(0500); HE122_VME(0600); HE122_VME(0700);

	class RKG3M_xj400: HandGrenade {
		displayName = "RKG-3M";
		displayNameMagazine = "RKG-3M";
		shortNameMagazine = "RKG-3M";
		picture = "\TZK_Config_4_0_6\RKG-3_co.paa";
		maxLeadSpeed = 20; // 72 km/h at most
		ammo = "RKG3M_xj400"
		sound[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Throw.ogg", db-60, 1};
	};
	class Throw: GrenadeLauncher {};
	class Throw_xj400: Throw {
		enableAttack = 1;
		magazines[] = {
			"HandGrenade","SmokeShell","SmokeShellRed","SmokeShellGreen"
			, "RKG3M_xj400"
		};
		// RKG3M_xj400 requires AI equip Throw weapon with "enableAttack = 1" and equipping RKG3M_xj400 only (namely don't equip HandGrenade)
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

class WeaponFireGun {};
class WeaponCloudsGun {};

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

	class M151A1C_htr_xj400: JeepMG {
		scope = 2; vehicleClass = "TZK_Units_400";
	//	accuracy = ;
		displayName = "M151A1C with 106mm"; side = 1; cost = 100000; threat[] = {0.3, 1, 0.1};
		
		model = "\TZK_Config_4_0_6\m151a1c_htr.p3d";
		picture = "\TZK_Config_4_0_6\tex\htr_m151a1c_ui.paa";
		hiddenSelections[] = {"shell_casing01","shell_projectile01","shell_casing02","shell_projectile02","shell_casing03","shell_projectile03","shell_casing04","shell_projectile04","shell_casing05","shell_projectile05","n1","n2","chambProj","chambCase"};

		gunnerAction = "ManActHTRM151ACGunner";
		gunnerOpticsModel = "\TZK_Config_4_0_6\opt\htr_106recOptic";
		
		// "Gun106_htr_xj400"
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[] = {"Sabot106_htr_xj400"}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.

		class MGunClouds : WeaponFireGun {};

		maxSpeed = 80;
		unitInfoType = "UnitInfoShip";
		hideUnitInfo = 0;
		secondaryExplosion = 5;

		preferRoads = 0;
		terrainCoef = 1;

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
		class ViewOpticsBase {};
		class ViewOptics: ViewOpticsBase {
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = +30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = +100;
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
		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
		};
		class EventHandlers {
			init = _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs};
		};
	};
	class UAZ_SPG_FDF_xj400: JeepMG {
		scope = 2; vehicleClass = "TZK_Units_400";
		// accuracy = 0.4;
		displayName = "UAZ (SPG-9)"; nameSound = "UAZ"; side = 0; cost = 100000; type = 1; threat[] = {0.5, 1, 0.1};
		
		model = "\TZK_Config_4_0_6\uaz_spg_RUS.p3d";
		picture = "\TZK_Config_4_0_6\tex\icon_musti.paa";
		crew ="soldierECrew";
		soundEngine[] = {"\TZK_Config_4_0_6\fdf\uaz_engine.wss",0.031623,1}; //FDF - Goeth 12.10.2003
		soundEnviron[] = {"\TZK_Config_4_0_6\fdf\car_treads.wss",0.001000,1};
		soundGetIn[] = {"\TZK_Config_4_0_6\fdf\car_getin.wss",0.001000,1};
		soundGetOut[] = {"\TZK_Config_4_0_6\fdf\car_getout.wss",0.001000,1};
		soundLandCrash[] = {"\TZK_Config_4_0_6\fdf\car_crash.wss",0.006000,1};
		soundGear[] = {"\TZK_Config_4_0_6\fdf\old_gear.wss",0.000500,1};
		soundWaterCrash[] = {"\TZK_Config_4_0_6\fdf\medium_water_splash.wss",0.006000,1};
		
		// "Gun_Spg_fdf_xj400"
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[] = {"PG9HEAT_fdf_xj400"}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.

		class MGunClouds : WeaponFireGun {};

		dammageHalf[] = {"jeep4x4_glass.paa","jeep4x4_glassB.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa","scud_sklo.paa","scud_skloB.paa","scud_sklo2.paa","scud_sklo2B.paa","scud_sklo3.paa","scud_sklo3B.paa","scud_sklo4.paa","scud_sklo4B.paa"};
		dammageFull[] = {"jeep4x4_glass.paa","jeep4x4_glassC.paa","jeep_kab_sklo1.paa","jeep_kab_sklo1C.paa","jeep_kab_sklo2.paa","jeep_kab_sklo2C.paa","scud_sklo.paa","scud_skloC.paa","scud_sklo2.paa","scud_sklo2C.paa","scud_sklo3.paa","scud_sklo3C.paa","scud_sklo4.paa","scud_sklo4C.paa"};

		armor = 20;
		armorGlass = 0.5;
		armorWheels = 0.1;

		transportsoldier = 1;
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
		
		preferRoads = 0;
		terrainCoef = 1;

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
			soundServo[] = {"\TZK_Config_4_0_6\fdf\manual_servo.wss",0.000500,1}; //FDF - Goeth 11.5.2003
			minElev = -18;
			maxElev = 30;
			minTurn = -180;
			maxTurn = 180;
		};
		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
		};
		class EventHandlers {
			init = _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs};
		};
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
		magazines[] = {SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_AAOnly_xj406: A10_xj406 {
		displayName = "A10 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30W" };
		magazines[] = {"MachineGun30W", "MachineGun30W", "MachineGun30W", SpoofMagazines, "AfterBurnerSwitch_xj400"};
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
		magazines[] = {SpoofMagazines, "AfterBurnerSwitch_xj400"};
		maxSpeed = 533; // 2/3 of Su25's maxspeed thus Su25 can approach it easier.
	};
	class Su25_AAOnly_xj406: Su25_xj406 {
		displayName = "Su25 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30E" };
		magazines[] = {"MachineGun30E", "MachineGun30E", "MachineGun30E", SpoofMagazines, "AfterBurnerSwitch_xj400"};
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
		magazines[] = {"MachineGun30E", "MachineGun30E", "MachineGun30E", SpoofMagazines, "AfterBurnerSwitch_xj400"};
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
		model = "\TZK_Config_4_0_6\M1A1_TZK.p3d";
	};
	class M1A2_INQ_xj400: TZK_HeavyWestTank_Base_xj400 {
		maxSpeed = 57;
		model = "\TZK_Config_4_0_6\M1A2_INQ.p3d";
	};
	class Leo2A6_xj400: TZK_HeavyWestTank_Base_xj400 {
		maxSpeed = 57;
		model = "\TZK_Config_4_0_6\Leo2A6.p3d";
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
		model = "\TZK_Config_4_0_6\T80_TZK.p3d";
	};
	class T90_xj400: TZK_HeavyEastTank_Base_xj400 {
		maxSpeed = 57;
		model = "\TZK_Config_4_0_6\T90_ICP.p3d";
	};
	class ZTZ99_xj400: TZK_HeavyEastTank_Base_xj400 {
		maxSpeed = 57;
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
		accuracy = 0.4; // Big size tank easier to be identified
		model = "\TZK_Config_4_0_6\M109A6_DKMM.p3d";
	};
	class PLZ05_VME_Base_xj400: T72_Base_xj400 {};
	class PLZ05_TZK_xj400: PLZ05_VME_Base_xj400 {
		accuracy = 0.4; // Big size tank easier to be identified
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

	// Grkpbv from CoC mod
	class Grkpbv_Coc_xj400: M1Abrams_Base_xj400 {
		scope = 2; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "GrkPbv 120"; nameSound = "tank"; side = 1; cost = 1700000; type = 1; threat[] = {1, 0.4, 0.1};

		crew = "SoldierWCrew";
		model = "\TZK_Config_4_0_6\Grkpbv_Coc.p3d";
		hiddenSelections[] = {
			"flash1","flash2","flash3","flash4","flash5","flash6"
			, "tzkGunL00", "tzkGunL01", "tzkGunL02", "tzkGunR00", "tzkGunR01", "tzkGunR02"
		};
		soundEngine[] = {"\TZK_Config_4_0_6\coc\motor.wss", db-30, 1};
		soundEnviron[] = {"\TZK_Config_4_0_6\coc\band.wss", db-40, 0.7};
		picture = "\TZK_Config_4_0_6\tex\inv_ssg120_com.paa";
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

		class TurretBase {
		  	gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"\TZK_Config_4_0_6\coc\servo.wss",db-30,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -5;
			maxElev = 85;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Turret: TurretBase {};
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
			init = "_veh = _this select 0; _veh animate [{suspension}, 0.5]; {[_veh, _x] exec {\TZK_Config_4_0_6\Scripts\recoilByTex\grkpbv.sqs}} forEach [{L},{R}]";
		};

		transportAmmo = 0;
		transportMaxMagazines = 250;
		transportMaxWeapons = 25;
		class TransportMagazines {};
	};
	// PLZ89 from VME pla3.2 mod
	class PLZ89_VME_Base_xj400: T72_Base_xj400 {
		scope = private; vehicleClass = "TZK_Units_400";
	//	accuracy = 0.4;
		displayName = "PLZ-89"; nameSound = "Tank"; side = 0; cost = 2000000; type = 1; threat[] = {1, 1, 0.5};
		
		model = "\TZK_Config_4_0_6\PLZ89.p3d";
		hiddenSelections[] = {
			"n1", "n2", "n3"
			, "tzkGun00", "tzkGun01", "tzkGun02", "tzkGun03"
		};
		picture = "\TZK_Config_4_0_6\tex\plz89.paa";
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
		class TurretBase {
			gunAxis = "osahlavne";
			turretAxis = "osaveze";
			soundServo[] = {"\TZK_Config_4_0_6\vme\paotaztz99.wav", db-25, 1};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			
			body = "OtocVez";
			gun = "OtocHlaven";

			minElev = -5;
			maxElev = +55;
			minTurn = -360;
			maxTurn = +360;
		};
		class Turret: TurretBase {};
	};
	class PLZ89_TZK_xj400: PLZ89_VME_Base_xj400 {
		scope = 2; accuracy = 0.45;
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
			Init = "_veh = _this select 0; [_veh, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {n}, {0}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs}; _veh animate [{suspension}, 0.5]; _veh exec {\TZK_Config_4_0_6\Scripts\recoilByTex\plz89.sqs}";
		};

	};
	
	// AMX10RC from OFrP mod
	class AMX10RC_OFrP_xj400: M1Abrams_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "AMX 10 RC"; nameSound = "tank"; side = 1; cost = 1000000; type = 1; threat[] = {1, 1, 0.6};
		
		model = "\TZK_Config_4_0_6\Amx10Rc_uiox.p3d";
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
 		picture = "\TZK_Config_4_0_6\tex\i10rc.paa";
		// smaller vehicle size
		camouflage = 5; audible = 5;
		// hs_todo: need verify armor in real
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

		// hs_todo: 换成AI的散射机枪
		weapons[] = {"105RC_OFrP_xj400", "MachineGun7_6"};
		magazines[] = {
			"105RCSabot_OFrP_xj400", "105RCHE_OFrP_xj400", 
			"MachineGun7_6", "MachineGun7_6", "MachineGun7_6", "MachineGun7_6", "MachineGun7_6", "MachineGun7_6", "MachineGun7_6", "MachineGun7_6"
		};

		// hs_todo: adjust db value, verify turret/comturret sound/memory
		soundEngine[] = {"\TZK_Config_4_0_6\moteur10rc.wss",db-15,1};
		soundEnviron[] = {,db-15,1};

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
		
		gunnerOpticsModel = "\TZK_Config_4_0_6\opt\TirRc";
		commanderOpticsModel = "\TZK_Config_4_0_6\opt\ComRc";
		
		// EVENTS ##################################################
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {D}] exec {\TZK_Config_4_0_6\Scripts\texture\AMX10RC.sqs}";
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
	class T55_Base_xj400: Tank_xj400 {}
	// 2S25 from mfm mod
	class 2S25_mfm_xj400: T55_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuract = 0.5;
		displayName = "2S25 Sprut-SD"; nameSound = "tank"; side = 0; cost = 950000; type = 1; threat[] = {0.6,1,0.3};

		model = "\TZK_Config_4_0_6\2S25_mfm.p3d";
		hiddenselections[]= {"no1", "no2", "no3"};
		icon = "\TZK_Config_4_0_6\tex\sprut_i.paa";
		picture = "\TZK_Config_4_0_6\tex\sprut.paa";

		gunnerOpticsModel = "\TZK_Config_4_0_6\opt\G_Optic.p3d";
		commanderOpticsModel = "\TZK_Config_4_0_6\opt\C_Optic.p3d";

		irScanToEyeFactor = 0.616; // Special radar setting in TZK.
		laserscanner = 1;

		armor = 180;
		class HitGun { armor = 0.9; material = 52; name = "gun"; passThrough = 1; };
		maxspeed = 71;
		canFloat = 1;
		crew = "SoldierECrew";

		weapons[] = {"Sprut_2A75_xj400", "MachineGun7_6"};
		magazines[] = {"Sprut_3VBM17_xj400","Sprut_3VBK25_xj400", "MachineGun7_6"};

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
		hascommander = 1;

		soundEngine[] = {"\TZK_Config_4_0_6\engine_loaded.wss", db-30, 1};
		soundEnviron[] = {"\TZK_Config_4_0_6\tracks.wss", db-40, 0.8};
		soundGear[] = {"\TZK_Config_4_0_6\gear.wss", db-50,0.8};
		
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
		class TurretBase {
			gunAxis = "osahlavne";
			turretAxis = "osaveze";
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1.0};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -5
			maxElev = 17
			minTurn = -360
			maxTurn = 360
			initangl = 8;
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
		model = "\TZK_Config_4_0_6\T80_TZK.p3d";
		hiddenSelections[] = {
			"pruh", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6", tzk_tex_00,
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
	class ParachuteBase: Helicopter {};
	class ParachuteC:ParachuteBase {};
	class pwr_paraC_xj400: ParachuteC {};
	class pwr_paraC_4ammo_xj400: pwr_paraC_xj400 {
		model = "\TZK_Config_4_0_6\PARA_Ammo.p3d";
	};
	class pwr_paraC_4veh_xj400: pwr_paraC_xj400 {
		model = "\TZK_Config_4_0_6\PARA_Veh.p3d";
	};
};


class CfgNonAIVehicles {
	class ProxyCrew {};
	class ProxyDriver: ProxyCrew {};
	class ProxyGunner: ProxyCrew {};
	class ProxyCommander: ProxyCrew {};

	class ProxyOFrPAMX10RCDriver: ProxyDriver {};
	class ProxyOFrPAMX10RCDriverOut: ProxyDriver {};
	class ProxyOFrPAMX10RCGunner: ProxyGunner {};
	class ProxyOFrPAMX10RCGunnerOut: ProxyGunner {};
	class ProxyOFrPAMX10RCCommander: ProxyCommander {};
	class ProxyOFrPAMX10RCCommanderOut: ProxyCommander {};
};

class CfgVehicleActions {
	OFrPAMX10RCDriver = "OFrPAMX10RCDriver";
	OFrPAMX10RCGunner = "OFrPAMX10RCGunner";
	OFrPAMX10RCCommander = "OFrPAMX10RCCommander";
	OFrPAMX10RCDriverOut = "OFrPAMX10RCDriverOut";
	OFrPAMX10RCGunnerOut = "OFrPAMX10RCGunnerOut";
	OFrPAMX10RCCommanderOut = "OFrPAMX10RCCommanderOut";

	HTRM151ACGunner = "CrouchToWeapon";
	FDFCrouch2 = "CrouchToWeapon";

	SFP_ssg120driver = "SFP_ssg120driver";
	SFP_ssg120driverout = "SFP_ssg120driverout";
	SFP_ssg120gunner = "SFP_ssg120gunner";
	SFP_ssg120gunnerout = "SFP_ssg120gunnerout";
	SFP_ssg120commander = "SFP_ssg120commander";
	SFP_ssg120commanderout = "SFP_ssg120commanderout";
};
class CfgMovesMC {
	class Default {};
	class DefaultDie: Default {};
	class StandBase: Default {};
	class States {
		class Driver: Default {};
		class Gunner: Driver {};
		class Commander: Driver {};
		class Cargo: Driver {};

// --------------------------- AMX10RC -------------------------------

		class OFrPAMX10RCDriver: Driver {
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_driver.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCDriverDying",1};
			interpolateTo[] = {"OFrPAMX10RCDriverDying",0.100000};
		};
		class OFrPAMX10RCDriverDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_driver_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCDriver",1};
		};
		class OFrPAMX10RCDriverDead: OFrPAMX10RCDriverDying {
			actions = "DeadActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_driver_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class OFrPAMX10RCDriverOut: Driver {
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_driver_Out.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCDriverOutDying",1};
			interpolateTo[] = {"OFrPAMX10RCDriverOutDying",0.100000};
		};
		class OFrPAMX10RCDriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_driver_Out_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCDriverOut",1};
		};
		class OFrPAMX10RCDriverOutDead: OFrPAMX10RCDriverOutDying {
			actions = "DeadActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_driver_Out_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCDriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};

		class OFrPAMX10RCDriverOutForward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Driver_out_forward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCDriverOutDying",0.1,"OFrPAMX10RCDriverOutDying",0.1};
		};
		class OFrPAMX10RCDriverOutBackward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Driver_out_backward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCDriverOutDying",0.1,"OFrPAMX10RCDriverOutDying",0.1};
		};
		class OFrPAMX10RCGunner: Gunner {
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_gunner.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCGunnerDying",1};
			interpolateTo[] = {"OFrPAMX10RCGunnerDying",0.100000};
		};

		class OFrPAMX10RCGunnerDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_gunner_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCGunner",1};
		};
		class OFrPAMX10RCGunnerDead: OFrPAMX10RCGunnerDying {
			actions = "DeadActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_gunner_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class OFrPAMX10RCGunnerOut: Gunner {
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Gunner_out.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCGunnerOutDying",1};
			interpolateTo[] = {"OFrPAMX10RCGunnerOutDying",0.100000};
		};

		class OFrPAMX10RCGunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Gunner_out_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCGunnerOut",1};
		};
		class OFrPAMX10RCGunnerOutDead: OFrPAMX10RCGunnerOutDying {
			actions = "DeadActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Gunner_out_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCGunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};

		class OFrPAMX10RCGunnerOutForward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Gunner_out_forward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCGunnerOutDying",0.1,"OFrPAMX10RCGunnerOutDying",0.1};
		};
		class OFrPAMX10RCGunnerOutBackward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Gunner_out_backward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCGunnerOutDying",0.1,"OFrPAMX10RCGunnerOutDying",0.1};
		};
		class OFrPAMX10RCCommander: Commander {
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Commander.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCCommanderDying",1};
			interpolateTo[] = {"OFrPAMX10RCCommanderDying",0.100000};
		};
		class OFrPAMX10RCCommanderDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Commander_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCCommander",1};
		};
		class OFrPAMX10RCCommanderDead: OFrPAMX10RCCommanderDying {
			actions = "DeadActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Commander_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCCommanderDying",1};
			connectTo[] = {"DeadState",1};
		};
		class OFrPAMX10RCCommanderOut: Commander {
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Commander_out.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCCommanderOutDying",1};
			interpolateTo[] = {"OFrPAMX10RCCommanderOutDying",0.100000};
		};
		class OFrPAMX10RCCommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Commander_out_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCCommanderOut",1};
		};
		class OFrPAMX10RCCommanderOutDead: OFrPAMX10RCCommanderOutDying {
			actions = "DeadActions";
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Commander_out_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCCommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};

		class OFrPAMX10RCCommanderOutForward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Commander_out_forward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCCommanderOutDying",0.1,"OFrPAMX10RCCommanderOutDying",0.1};
		};
		class OFrPAMX10RCCommanderOutBackward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Config_4_0_6\Anims\AMX10RC_Commander_out_backward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCCommanderOutDying",0.1,"OFrPAMX10RCCommanderOutDying",0.1};
		};

// --------------------------- Grkpbv -------------------------------

		class SFP_ssg120driver: StandBase {
			actions=StandActions;
			file = "\TZK_Config_4_0_6\Anims\strf90_driver.rtm";
			speed=SPEED_STATIC;
			looped=1
			soundEnabled=0
			variantAfter[]={1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo=HandGunStand;
		};
		class SFP_ssg120driverout: StandBase {
			actions=StandActions;
			file = "\TZK_Config_4_0_6\Anims\strf90_driverout.rtm";
			speed=SPEED_STATIC;
			looped=1
			soundEnabled=0
			variantAfter[]={1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo=HandGunStand;
		};
		class SFP_ssg120gunner: StandBase {
			actions=StandActions;
			file = "\TZK_Config_4_0_6\Anims\strf90_gunner.rtm";
			speed=SPEED_STATIC;
			looped=1
			soundEnabled=0
			variantAfter[]={1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo=HandGunStand;
		};
		class SFP_ssg120gunnerout: StandBase {
			actions=StandActions;
			file = "\TZK_Config_4_0_6\Anims\strf90_gunnerout.rtm";
			speed=SPEED_STATIC;
			looped=1
			soundEnabled=0
			variantAfter[]={1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo=HandGunStand;
		};
		class SFP_ssg120commander: StandBase {
			actions=StandActions;
			file = "\TZK_Config_4_0_6\Anims\strf90_commander.rtm";
			speed=SPEED_STATIC;
			looped=1
			soundEnabled=0
			variantAfter[]={1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo=HandGunStand;
		};
		class SFP_ssg120commanderout: StandBase {
			actions=StandActions;
			file = "\TZK_Config_4_0_6\Anims\strf90_commanderout.rtm";
			speed=SPEED_STATIC;
			looped=1
			soundEnabled=0
			variantAfter[]={1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo=HandGunStand;
		};
	};
};

// EOF