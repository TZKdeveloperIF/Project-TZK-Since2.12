class CfgPatches {
	class TZK_CONFIG_406_Patch5 {
		name = "TZK_CONFIG_406_Patch5";
		author = "IF";
		units[] = {};
		requiredAddons[] = {"TZK_CONFIG_406_Patch4"}; // IMPORTANT!
		requiredVersion = 1.99;
	};
};

class CfgAmmo {
	class Default {};

	// =============================================== bullet simulated shell ===============================================
	class Shell: Default {};
	class Shell73: Shell {};
	class Shell105: Shell73 {};
	class Shell120: Shell105 {};
	class Heat: Shell {};
	class Heat73: Heat {};
	class Heat105: Heat73 {};
	class Heat120: Heat105 {};

	class Heat105_Bullet_xj400: Heat105 {
		simulation = "shotBullet";
	};
	class Shell105_Bullet_xj400: Shell105 {
		simulation = "shotBullet";
	};
	class Heat120_Bullet_xj400: Heat120 {
		simulation = "shotBullet";
	};
	class Shell120_Bullet_xj400: Shell120 {
		simulation = "shotBullet";
	};

	// =============================================== 2S25 ammo ===============================================
	class T80Sabot_xj400: Shell120 {};
	class T80Heat_xj400: Heat120 {};
	class Sprut_3BM42_xj400: T80Sabot_xj400 {};
	class Sprut_3OF26_xj400: T80Heat_xj400 {};
	class Sprut_3BM42_xj406: Sprut_3BM42_xj400 {
		// Heat120 power
		hit = 700;
		indirectHit = 300;
		cost = 1000;
	};
	class Sprut_3OF26_xj406: Sprut_3OF26_xj400 {
		// Shell120 power
		hit = 200;
		indirectHit = 150;
		cost = 300;
	};
	// =============================================== soldier rifle ===============================================
	class BulletSingle: Default {};
	class Bullet_LSR_xj400: BulletSingle {};
	class Bullet_JAM_Large_Rifle_Single_xj400: Bullet_LSR_xj400 {
		hit = 10.5; indirectHit = 2; indirectHitRange = 0.1;
		// no range modify. same as default rifle bullet
		// no visible/audible modify as well

		cost = 0.7;
		tracerColor[] = {0.8, 0.2, 0.0, 0.25};
		tracerColorR[]= {0.0, 0.0, 0.0, 0.005};
	};
	class Bullet_JAM_Large_Rifle_Burst_xj400: Bullet_JAM_Large_Rifle_Single_xj400
	{
		// burst param same as BIS
		minRange = 0.5;
		minRangeProbab = 0.25;
		midRange = 70;
		midRangeProbab = 0.5;
		maxRange = 250;
		maxRangeProbab = 0.08;
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 5;
		cost = 2.1;
	};
	class Bullet_JAM_Large_Rifle_Auto_xj400: Bullet_JAM_Large_Rifle_Burst_xj400 {
		// auto param same as BIS
		cost = 2.5;
	};
	class Bullet_VME_Silence_Single_58: BulletSingle {
		hit = 7; indirectHit = 1; indirectHitRange = 0.05;
		// no range modify. same as default rifle bullet
		visibleFire = 0.05;
		audibleFire = 0.05;
		visibleFireTime = 2;

		cost = 0.7;
		tracerColor[] = {0, 0, 0, 0.005};
		tracerColorR[] = {0, 0, 0, 0.005};

		cartridge = "Cart_VME_58_xj400";
	};
	class Bullet_VME_Silence_FullAuto_58: Bullet_VME_Silence_Single_58 {
		visibleFire = 0.065;
		audibleFire = 0.065;
	};
	// =============================================== soldier AT ===============================================
	class AT3: Default {};
	class LAW: AT3 {};
	class RPG: LAW {};
	class CarlGustav: AT3 {};
	class Carl_I_1_TZK_xj400: CarlGustav {};
	class Carl_II_1_TZK_xj400: Carl_I_1_TZK_xj400 {};
	class Carl_III_1_TZK_xj400: Carl_I_1_TZK_xj400 {};
	class Carl_IV_1_TZK_xj400: Carl_I_1_TZK_xj400 {
		maxControlRange = 600; maxRange = 600;
	};
	class Carl_IV_1_800_TZK_xj400: Carl_IV_1_TZK_xj400 {
		maxControlRange = 800; maxRange = 800;
	};
	class AT4_IV_1_TZK_xj400: Carl_IV_1_TZK_xj400 {};
	class AT4_IV_1_800_TZK_xj400: AT4_IV_1_TZK_xj400 {
		maxControlRange = 800; maxRange = 800;
	};
};

class CfgWeapons {
	class Default {};

	// =============================================== bullet simulated shell ===============================================
	class Shell73: Default {};
	class Heat73: Shell73 {};
	class Gun73: Default {};
	class Shell105: Shell73 {};
	class Heat105: Shell105 {};
	class Gun105: Gun73 {};
	class Shell120: Shell105 {};
	class Heat120: Shell120 {};
	class Gun120: Gun105 {};

	class Heat105_Bullet_xj400: Heat105 {
		ammo = "Heat105_Bullet_xj400";
	};
	class Shell105_Bullet_xj400: Shell105 {
		ammo = "Shell105_Bullet_xj400";
	};
	class Gun105_Bullet_xj400: Gun105 {
		magazines[] = {"Heat105_Bullet_xj400","Shell105_Bullet_xj400"};
	};
	class Heat120_Bullet_xj400: Heat120 {
		ammo = "Heat120_Bullet_xj400";
	};
	class Shell120_Bullet_xj400: Shell120 {
		ammo = "Shell120_Bullet_xj400";
	};
	class Gun120_Bullet_xj400: Gun120 {
		magazines[] = {"Heat120_Bullet_xj400","Shell120_Bullet_xj400"};
	};

	// =============================================== 2S25 weapon ===============================================
	class Shell125: Shell120 {};
	class Heat125: Shell125 {};
	class Gun125: Gun120 {};
	class Sprut_3VBM17_xj400: Heat125 {};
	class Sprut_3VBK25_xj400: Heat125 {};
	class Sprut_2A75_xj400: Gun125 {};
	class Sprut_3VBM17_xj406: Sprut_3VBM17_xj400 {
		ammo = "Sprut_3BM42_xj406";
	};
	class Sprut_3VBK25_xj406: Sprut_3VBK25_xj400 {
		ammo = "Sprut_3OF26_xj406";
	};
	class Sprut_2A75_xj406: Sprut_2A75_xj400 {
		magazines[] = {"Sprut_3VBM17_xj406","Sprut_3VBK25_xj406"};
	};

	// =============================================== soldier rifle ===============================================
	class MGun: Default {};
	class Riffle: MGun {};
	class M16: Riffle {};
	class JAM_W762_20_Mag_xj400: M16 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "20rd 7.62x51 Mag";
		shortNameMagazine = "20rd 7.62x51 Mag";
		picture = "\TZK_Patch5_4_0_6\res\JAM_762x51_20rdMag.paa";
		count = 20;
		initSpeed = 817;
		canDrop = 1;
		modes[] = {"Single","FullAuto"};
		class Single {
			ammo = "Bullet_JAM_Large_Rifle_Single_xj400";
			multiplier = 1; burst = 1;
			displayName = "7.62x51 Semi";
			dispersion = 0.00007125;
			sound[] = {"\TZK_Patch5_4_0_6\res\M14Fire.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.08;
			ffCount = 1;
			recoil = "JAM_762x51_RifleRecoil";
			autoFire = 0;
			aiRateOfFire = 0.85;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo = "Bullet_JAM_Large_Rifle_Auto_xj400";
			multiplier = 1; burst = 1;
			displayName = "7.62x51 Auto";
			dispersion = 0.000285;
			sound[] = {"\TZK_Patch5_4_0_6\res\M14Fire.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.08;
			ffCount = 30;
			recoil = "JAM_762x51_AutoRecoil";
			autoFire = 1;
			aiRateOfFire = 0.85;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
	};
	class SniperRiffle: Riffle {};
	class M21: SniperRiffle {};
	class G3SG1_BAS_xj400: M21 {
		scopeWeapon = 2; scopeMagazine = 0;
		reloadMagazineSound[] = {"\TZK_Patch5_4_0_6\res\M4Reload.wss", 0.01, 1};
		picture = "\TZK_Patch5_4_0_6\res\bas_HKG3SG1.paa";
		displayName = "G3/SG1";
		modelOptics = "optika_snpierw";
		optics = 1;
		opticsZoomMin = 0.12;
		opticsZoomMax = 0.35; // can't use 0.4. Otherwise aiming position will change after shooting
		model = "\TZK_Patch5_4_0_6\res\bas_HKG3SG1";
		magazines[] = {"JAM_W762_20_Mag_xj400"};
		modes[]= {"this","this"};
	};
	class QBZ95WS_Mag_xj400: Riffle {
		scopeWeapon = 0; scopeMagazine = 2;
		picture="\TZK_Patch5_4_0_6\res\m_QBZ95.paa";
		displayNameMagazine = "30rd 5.8x42mm Mag";
		shortNameMagazine = "30rd 5.8x42mm Mag";
		initSpeed = 750;
		modes[] = {"Single","FullAuto"};
		class Single {
			ammo = "Bullet_VME_Silence_Single_58";
			multiplier = 1; burst = 1;
			displayName = "5.8x42mm_Semi";
			dispersion = 0.00018;
			sound[] = {"\TZK_Patch5_4_0_6\res\qbz95bsds.wav",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.086;
			ffCount = 1;
			recoil = "QBZ95Single";
			recoilFixed = "QBZ95SingleFixed";
			autoFire = 0;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo="Bullet_VME_Silence_FullAuto_58";
			multiplier = 1; burst = 1;
			displayName = "5.8x42mm_Auto";
			dispersion = 0.00078;
			sound[] = {"\TZK_Patch5_4_0_6\res\qbz95bsds.wav",1.0,1};
			soundContinuous = 0;
			reloadTime = 0.086;
			ffCount = 6;
			recoil = "QBB95Burst";
			recoilFixed = "QBB95BurstFixed";
			autoFire = 1;
			aiRateOfFire = 0.6;
			aiRateOfFireDistance = 200;
			useAction = 0; useActionTitle = "";
		};
	};
	class QBZ95WS_xj400: Riffle {
		scopeWeapon = 2; scopeMagazine = 0;
		picture = "\TZK_Patch5_4_0_6\res\QBZ95_Scope.paa";
		model = "\TZK_Patch5_4_0_6\res\QBZ95WS.p3d";
		displayName = "QBZ95WS";

		// The parameter of "selectWeapon" is muzzle but not weapon
		// Thus use muzzle whose name is same as weapon
		muzzles[] = {"QBZ95WS_xj400"};
		class QBZ95WS_xj400: QBZ95WS_Mag_xj400 {
			modelOptics = "\TZK_Patch5_4_0_6\res\Optic_Scope.p3d";
			optics = 1;
			opticsZoomMin = 0.15;
			opticsZoomMax = 0.15;
			distanceZoomMin = 300;
			distanceZoomMax = 300;
			drySound[] = {"weapons\M16dry", 0.01, 1};
			magazines[] = {"QBZ95WS_Mag_xj400"};
		};
	};
	// =============================================== soldier AT ===============================================
	class LAWLauncher:Default {};
	class RPGLauncher: LAWLauncher {};
	class CarlGustavLauncher:LAWLauncher {};
	class AT4Launcher: CarlGustavLauncher {};
	class Carl_I_1_TZK_xj400: CarlGustavLauncher {};
	class Carl_II_1_TZK_xj400: Carl_I_1_TZK_xj400 {};
	class Carl_III_1_TZK_xj400: Carl_I_1_TZK_xj400 {};
	class Carl_IV_1_TZK_xj400: Carl_I_1_TZK_xj400 {};
	class Carl_IV_1_800_TZK_xj400: Carl_I_1_TZK_xj400 { ammo = "Carl_IV_1_800_TZK_xj400"; };
	class Carl_TZK_xj400: CarlGustavLauncher {
		magazines[] = {
			"CarlGustavLauncher"
			,"Carl_I_1_TZK_xj400","Carl_II_1_TZK_xj400","Carl_III_1_TZK_xj400","Carl_IV_1_TZK_xj400", "Carl_IV_1_800_TZK_xj400"
			,"Carl_I_2_TZK_xj400","Carl_II_2_TZK_xj400","Carl_III_2_TZK_xj400","Carl_IV_2_TZK_xj400"
		};
	};
	class AT4_I_1_TZK_xj400: AT4Launcher {};
	class AT4_II_1_TZK_xj400: AT4_I_1_TZK_xj400 {};
	class AT4_III_1_TZK_xj400: AT4_I_1_TZK_xj400 {};
	class AT4_IV_1_TZK_xj400: AT4_I_1_TZK_xj400 {};
	class AT4_IV_1_800_TZK_xj400: AT4_I_1_TZK_xj400 { ammo = "AT4_IV_1_800_TZK_xj400"; };
	class AT4_TZK_xj400: AT4Launcher {
		magazines[] = {
			"AT4Launcher"
			,"AT4_I_1_TZK_xj400","AT4_II_1_TZK_xj400","AT4_III_1_TZK_xj400","AT4_IV_1_TZK_xj400", "AT4_IV_1_800_TZK_xj400"
			,"AT4_I_2_TZK_xj400","AT4_II_2_TZK_xj400","AT4_III_2_TZK_xj400","AT4_IV_2_TZK_xj400"
		};
	};
};

class CfgVehicles {
	class All {
		class ViewGunnerBase {};
		class ViewOpticsBase {}; // for gunner aiming?
		class ViewCommanderBase {};
		class ViewPilotBase {};
	};
	class AllVehicles: All{};
	class Land: AllVehicles{};
	class LandVehicle: Land {};
	class Tank: LandVehicle {
		class TurretBase {};
	};
	class Tank_xj400: Tank {};
	class M1Abrams_Base_xj400: Tank_xj400 {};
	class T55_Base_xj400: Tank_xj400 {}

	// =============================================== Assault gun ===============================================
	class AMX10RC_OFrP_xj400: M1Abrams_Base_xj400 {};
	class 2S25_mfm_xj400: T55_Base_xj400 {};
	class AMX10RC_OFrP_xj406: AMX10RC_OFrP_xj400 {
		irScanToEyeFactor = 1;
	};
	class 2S25_mfm_xj406: 2S25_mfm_xj400 {
		irScanToEyeFactor = 1;
		weapons[] = {"Sprut_2A75_xj406", "MachineGun7_6_xj400"};
		magazines[] = {"Sprut_3VBM17_xj406","Sprut_3VBK25_xj406", "MachineGun7_6_xj400"};
	};

	// =============================================== Motorcycle ===============================================
	class Motorcycle: LandVehicle {};
	class Jawa: Motorcycle {};
	class Jawa_xj400: Jawa {};
	class Jawa_xj406: Jawa_xj400 {};
	class Jawa_FakeArmor_xj406: Jawa_xj406 {
		armor = 50; // very good value to be attacked by both bullet and missile
		irTarget = 1;
		accuracy = 0.55;
	};
	class JawaT_C_xj406: Jawa_FakeArmor_xj406 {
		armor = 10;
		accuracy = 1000;
	};
	class Jawa_FakeArmor_W_xj406: Jawa_FakeArmor_xj406 {
		side = 1;
		accuracy = 0.6;
	};
	class Jawa_FakeArmor_E_xj406: Jawa_FakeArmor_xj406 {
		side = 0;
		accuracy = 0.6;
	};
	class JawaT_W_xj406: Jawa_FakeArmor_W_xj406 {
		armor = 10;
		accuracy = 1000;
	};
	class JawaT_E_xj406: Jawa_FakeArmor_E_xj406 {
		armor = 10;
		accuracy = 1000;
	};

	// =============================================== Motor ship ===============================================
	class Ship: AllVehicles {};
	class SmallShip: Ship {};
	class BoatW: SmallShip {};
	class BoatE: SmallShip {};
	class PCSFWjetski_xj400: BoatW {
		soundEngine[] = {"Vehicles\mediumcar", 0.01, 2}; // Ship's soundEngine always exists no matter whethre the engine is off
		accuracy = 0.5; // easier to be recognized
	};
	class PCSFEjetski_xj400: BoatE {
		soundEngine[] = {"Vehicles\mediumcar", 0.01, 2}; // Ship's soundEngine always exists no matter whethre the engine is off
		accuracy = 0.5; // easier to be recognized
	};
	class Jetski_T_W_xj400: PCSFWjetski_xj400 {
		irTarget = 1; // test irTarget
	};
	class Jetski_T_E_xj400: PCSFEjetski_xj400 {
		irTarget = 1; // test irTarget
	};
	// =============================================== Main gun ship ===============================================
	class GunBoat_xj400: BoatW {};
	class GunBoatW_xj400: GunBoat_xj400 {};
	class GunBoatE_xj400: GunBoat_xj400 {};
	class GunBoatW_105mm_xj400: GunBoatW_xj400 {
		displayName = "105mm boat West";
		driverOpticsModel = "optika_tank_driver";
		gunnerOpticsModel = "optika_tank_gunner";
		gunnerOpticsColor[] = {0.91,0.23,0.23,1};
		weapons[] = {"Gun105_Bullet_xj400", "MachineGun7_6_xj400"};
		magazines[] = {"Heat105_Bullet_xj400","Shell105_Bullet_xj400", "MachineGun7_6_xj400"};
		// same as BIS tanks
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		// Extend Radar-can-see same as Tank_xj400
		gunnerCanSee = "4+8+16 +1";
		driverCanSee = "2+8+16 +1";
	};
	class GunBoatE_105mm_xj400: GunBoatE_xj400 {
		displayName = "105mm boat East";
		driverOpticsModel = "optika_tank_driver";
		gunnerOpticsModel = "optika_tank_gunner";
		gunnerOpticsColor[] = {0.91,0.23,0.23,1};
		weapons[] = {"Gun105_Bullet_xj400", "MachineGun7_6_xj400"};
		magazines[] = {"Heat105_Bullet_xj400","Shell105_Bullet_xj400", "MachineGun7_6_xj400"};
		// same as BIS tanks
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		// Extend Radar-can-see same as Tank_xj400
		gunnerCanSee = "4+8+16 +1";
		driverCanSee = "2+8+16 +1";
	};
	class GunBoatW_120mm_xj400: GunBoatW_xj400 {
		displayName = "120mm boat West";
		driverOpticsModel = "optika_tank_driver";
		gunnerOpticsModel = "optika_tank_gunner";
		gunnerOpticsColor[] = {0.91,0.23,0.23,1};
		weapons[] = {"Gun120_Bullet_xj400", "MachineGun7_6_xj400"};
		magazines[] = {"Heat120_Bullet_xj400","Shell120_Bullet_xj400", "MachineGun7_6_xj400"};
		// same as BIS tanks
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		// Extend Radar-can-see same as Tank_xj400
		gunnerCanSee = "4+8+16 +1";
		driverCanSee = "2+8+16 +1";
	};
	class GunBoatE_120mm_xj400: GunBoatE_xj400 {
		displayName = "120mm boat East";
		driverOpticsModel = "optika_tank_driver";
		gunnerOpticsModel = "optika_tank_gunner";
		gunnerOpticsColor[] = {0.91,0.23,0.23,1};
		weapons[] = {"Gun120_Bullet_xj400", "MachineGun7_6_xj400"};
		magazines[] = {"Heat120_Bullet_xj400","Shell120_Bullet_xj400", "MachineGun7_6_xj400"};
		// same as BIS tanks
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		// Extend Radar-can-see same as Tank_xj400
		gunnerCanSee = "4+8+16 +1";
		driverCanSee = "2+8+16 +1";
	};
	// =============================================== Cart ===============================================
	class Thing: All {};
	class ThingEffect: Thing {};
	class Cart_VME_58_xj400: ThingEffect {
		model="\TZK_Patch5_4_0_6\res\cart";
		displayName = "5.8mm";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 30;
		disappearAtContact="false";
	};
};

class CfgRecoils {
	JAM_762x51_RifleRecoil[]={0.0435,0.0798,0.0484,0.1355,0,0};
	JAM_762x51_AutoRecoil[]={0.02,0.015,0.015, 0.02,0.025,0.02, 0.02,0.15,0.01, 0.02,0,0};
	QBZ95Single[]= {0.050000,0.015000,0.020000,0.050000,0,0};
	QBZ95SingleFixed[]= {0.050000,0.008000,0.0150000,0.050000,0,0};
	QBB95Burst[]= {0.050000,0.020000,"0.02*1.5",0.050000,0.010000,"0.01*1.5",0.050000,0.030000,"0.05*1.5",0.050000,0.020000,"0.01*1.5",0.050000,0.020000,"0.01*1.5",0.010000,0,0};
	QBB95BurstFixed[]= {0.050000,"0.02*1.0","0.02*0.2",0.050000,"0.01*1.0","0.01*0.2",0.050000,"0.015*1.0","0.015*0.2",0.050000,"0.015*1.0","0.015*0.2",0.050000,"0.015*1.0","0.015*0.2",0.010000,0,0};
};

// EOF