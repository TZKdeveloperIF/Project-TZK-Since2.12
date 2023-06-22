// Missile launcher
	// Original OFP Aircrafts' Missile Launcher
	class HellfireLauncherCobra_xj400: HellfireLauncherCobra {
		ammo = HellfireCobra_xj400;
		aiDispersionCoefX = 12; aiDispersionCoefY = 12;
	};
	class HellfireLauncherApach_xj400: HellfireLauncher {
		ammo = HellfireApach_xj400;
		displayName = $STR_DN_AH64Ammo;
		displayNameMagazine = $STR_MN_AH64Ammo;
		shortNameMagazine = $STR_SN_AH64Ammo;
		count = 8;
		aiDispersionCoefX = 12; aiDispersionCoefY = 12;
	};
	class HellfireLauncherHind_xj400: HellfireLauncherHind {
		ammo = "AT6_xj400";
		aiDispersionCoefX = 12; aiDispersionCoefY = 12;
	};
	class HellfireLauncherKamov_xj400: HellfireLauncherHind {
		ammo="AT6_xj400";
		displayName="$STR_DN_AT6";
		displayNameMagazine="$STR_MN_AT6";
		shortNameMagazine="$STR_SN_AT6";
		count = 12
		initSpeed = 30;
		aiDispersionCoefX = 12; aiDispersionCoefY = 12;
	};
	class AT6a_RHS_xj400: HellfireLauncherHind_xj400 {
		ammo = "AT6a_RHS_xj400";
	};
	class AT6b_RHS_xj400: HellfireLauncherHind_xj400 {
		ammo = "AT6b_RHS_xj400";
	};
	class AT6c_RHS_xj400: HellfireLauncherHind_xj400 {
		ammo = "AT6c_RHS_xj400";
	};
	class AT6d_RHS_xj400: HellfireLauncherHind_xj400 {
		ammo = "AT6d_RHS_xj400";
	};
	
	class Rocket57x40Kamov_xj400: Rocket57x64 {
		ammo="Rocket57";
		displayName="$STR_DN_ROCKET_57";
		displayNameMagazine="$STR_MN_ROCKET_57";
		shortNameMagazine="$STR_SN_ROCKET_57";
		count = 40
	};

	class Ch29TLauncher_xj400: MaverickLauncher {
		ammo = Ch29T;
		displayName=$STR_DN_CH29T;
		displayNameMagazine=$STR_MN_CH29T;
		shortNameMagazine=$STR_SN_CH29T;
		count = 6;
	};

	// Vehicle's AA Launcher
	class Stinger_xj400: AT3Launcher {
		count = 2;
		ammo = Stinger_xj400;
		displayName="Stinger";
		displayNameMagazine="Stinger";
		shortNameMagazine="Stinger";
		reloadTime = 1.0;
		magazineReloadTime = 5;
		aiRateOfFire = 3.0;
		aiRateOfFireDistance = 2000;
		maxLeadSpeed = 600;
		sound[]={Weapons\missile,db10,1};
		aiDispersionCoefX = 16; aiDispersionCoefY = 16;
	};
	class StingerT_xj400: Stinger_xj400 {
		count = 1;
		magazineReloadTime = 4;
	};
	class Strela_xj400: Stinger_xj400 {
		ammo = Strela_xj400;
		displayName="Strela";
		displayNameMagazine="Strela";
		shortNameMagazine="Strela";
	};
	class StrelaT_xj400: Strela_xj400 {
		count = 1;
		magazineReloadTime = 4;
	};

	class RedTop_26_xj400: HellfireLauncher {
		displayName = "RedTop AAM";
		magazineReloadTime = 15;
		maxLeadSpeed = 2500;
		aiDispersionCoefX = 20; aiDispersionCoefY = 20;
		
		displayNameMagazine = "RedTop";
		shortNameMagazine = "RedTop";
		count = 4;
		initspeed = 30;
		
		ammo = "RedTop_26_xj400";
		reloadTime = 2;
		aiRateOfFire = 6; aiRateOfFireDistance = 2000;
	};
	class RedTop_30_xj400: RedTop_26_xj400 {
		ammo = "RedTop_30_xj400";
	};
	class RedTop_40_xj400: RedTop_26_xj400 {
		ammo = "RedTop_40_xj400";
	};
 	class 9M311_26_xj400: HellfireLauncher {
		displayName = "9M311";
		
		optics = 1;
		flash = gunfire;
		flashsize = 8;
		magazineReloadTime = 90;
		maxLeadSpeed = 3000;
		aiDispersionCoefX = 20; aiDispersionCoefY = 20;
		
		displayNameMagazine = "9M311";
		shortNameMagazine = "9M311";
		count = 4;
		
		ammo = "9M311_26_xj400";
		reloadTime = 2;
		sound[] = {"\TZK_Objects\Sound\2S6\missfly.ogg",0.031622775,1};
		reloadSound[] = {"Weapons\missload",db-50,1};
		aiRateOfFire = 1; aiRateOfFireDistance = 20000;
	};
	class 9M311_30_xj400: 9M311_26_xj400 {
		ammo = "9M311_30_xj400";
	};
	class 9M311_40_xj400: 9M311_26_xj400 {
		ammo = "9M311_40_xj400";
	};
	class 9M311_60_xj400: 9M311_26_xj400 {
		ammo = "9M311_60_xj400";
	};

	class StingerShip_xj400: MachineGun12_7_xj400 {
		count = 2;
		ammo = Stinger_xj400;
		displayName="Stinger";
		displayNameMagazine="Stinger";
		shortNameMagazine="Stinger";
		reloadTime = 1.0;
		magazineReloadTime = 5;
		aiRateOfFire = 3.0;
		aiRateOfFireDistance = 2000;
		maxLeadSpeed = 600;
		sound[]={Weapons\missile,db10,1};
	};
	class StrelaShip_xj400: StingerShip_xj400 {
		ammo = Strela_xj400;
		displayName="Strela";
		displayNameMagazine="Strela";
		shortNameMagazine="Strela";
	};

	class HellfireLauncherBMP2_xj400: AT3Launcher {
		count = 8;
		reloadTime = 30;
		displayName = $STR_DN_ADD_BMP2_AT;
		displayNameMagazine = $STR_DN_ADD_BMP2_AT;
		shortNameMagazine = $STR_DN_ADD_BMP2_AT;
	};
	class HellfireLauncherM2A2_xj400: AT3Launcher {
		count = 2;
		reloadTime = 0.5;
		displayName = $STR_DN_TOW;
		displayNameMagazine = $STR_DN_TOW;
		shortNameMagazine = $STR_DN_TOW;
		cost = 20000;
	};

	// Vehicle's AT Launcher
	class GuidedAT_APC_xj400: AT3Launcher {
		count = 2;
		ammo = GuidedAT_APC_xj400;
		displayName="AT";
		displayNameMagazine="AT";
		shortNameMagazine="AT";
		reloadTime = 1.0; magazineReloadTime = 10;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 1000;
		sound[]={Weapons\at_launch,db10,1};
	};
	class ATLauncherTank_xj400: AT3Launcher {
		magazines[]={GuidedAT_APC_xj400};
		aiDispersionCoefX = 8; aiDispersionCoefY = 8;
	};
	class ATLauncherShip_xj400: MachineGun12_7_xj400 {
		count = 2;
		ammo = GuidedAT_APC_xj400;
		displayName="AT";
		displayNameMagazine="AT";
		shortNameMagazine="AT";
		reloadTime = 1.0; magazineReloadTime = 10;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 1000;
		sound[]={Weapons\at_launch,db10,1};
	};

	class GuidedAT_Heli_8_xj400: GuidedAT_APC_xj400 {
		count = 8;
		ammo = GuidedAT_Heli_xj400;
		reloadTime = 0.5;
		sound[]={Weapons\TOW,db-30,1};
		reloadSound[]={Weapons\missload,db-70,1};
		aiRateOfFire = 4;
		aiRateOfFireDistance = 1000;
	};
	class GuidedAT6_8_xj400: GuidedAT_Heli_8_xj400 {
		ammo = GuidedAT_AT6_xj400;
	};
	class GuidedAT_Cobra_8_xj400: GuidedAT_Heli_8_xj400 {
		ammo = GuidedAT_Cobra_xj400;
	};
	class GuidedAT_Heli_12_xj400: GuidedAT_APC_xj400 {
		count = 12;
		ammo = GuidedAT_Heli_xj400
		reloadTime = 0.5;
		sound[]={Weapons\TOW,db-30,1};
		reloadSound[]={Weapons\missload,db-70,1};
		aiRateOfFire = 4;
		aiRateOfFireDistance = 1000;
	};
	class ATLauncherAir_xj400: HellfireLauncher {
		magazines[]={GuidedAT_Heli_8_xj400, GuidedAT6_8_xj400, GuidedAT_Cobra_8_xj400, GuidedAT_Heli_12_xj400};
		magazineReloadTime = 10;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 1000;
		multiplier = 1;
		aiDispersionCoefX = 12; aiDispersionCoefY = 12;
	};

	class HOT3Launcher_xj400: HellfireLauncher {
		ammo = HOT3Rocket_xj400;
		displayName = "HOT 3";
		displayNameMagazine = "HOT 3";
		shortNameMagazine = "HOT3";
		count = 8;
		aiDispersionCoefX = 12; aiDispersionCoefY = 12;
	};
	class PARS3Launcher_xj400: GuidedAT_Heli_8_xj400 {
		ammo = PARS3Rocket_xj400;
		displayName="PARS 3 LR";
		displayNameMagazine="PARS 3 LR";
		shortNameMagazine="PARS3";
		count = 8;
		aiDispersionCoefX = 12; aiDispersionCoefY = 12;
	};

	// Rocket Launcher
	class Zuni_MaverickLike_xj400: ZuniLauncher38 {
		ammo = "Zuni_MaverickLike_xj400";
		count = 8;
		magazineReloadTime = 0.1;
	}
	class ZuniLauncherOH_xj400: ZuniLauncher38 {
		opticsZoomMin = 0.08;
		opticsZoomMax = 0.84;
		count = 14;
		reloadTime = 0.15;
	};
	class Rocket57x14_xj400: Rocket57x64 {
		count = 14
	};
	class ZuniLauncherShip_xj400: MachineGun12_7_xj400 {
		scopeWeapon = 2;
		scopeMagazine = 2;
		ammo = "Zuni";
		displayName = "$STR_DN_FFAR";
		displayNameMagazine = "$STR_MN_FFAR";
		shortNameMagazine = "$STR_SN_FFAR";
		count = 14;
		reloadTime = 0.1;
		aiRateOfFire = 0.4;
		aiRateOfFireDistance = 1000;
		sound[] = {"Weapons\rocket1",0.031622775,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
		initSpeed = 44;
		autoFire = 1;
	};
	class RocketLauncherShip_xj400: ZuniLauncherShip_xj400 {
		ammo = "Rocket57";
		displayName = "$STR_DN_ROCKET_57";
		displayNameMagazine = "$STR_MN_ROCKET_57";
		shortNameMagazine = "$STR_SN_ROCKET_57";
		count = 14;
	};
	
	class SNEB70Launcher_xj400: ZuniLauncher38 {
		ammo = "SNEB70_xj400";
		displayName="SNEB70";
		displayNameMagazine="SNEB70";
		shortNameMagazine="SNEB70";
	};
	
	// Tomahawk & Raguda launcher
	class Tomahawk_xj400: MaverickLauncher {
		ammo="tomahawk_xj400";
		displayName="BGM-109 Tomahawk";
		displayNameMagazine="BGM-109 Tomahawk";
		shortNameMagazine="BGM-109 Tomahawk";
		count = 2;
		aiDispersionCoefX = 12; aiDispersionCoefY = 12;
	};
	class Raduga_xj400: Tomahawk_xj400 {
		displayName="Raduga Kh-65";
		displayNameMagazine="Raduga Kh-65";
		shortNameMagazine="Raduga Kh-65";
	};

	// Bomb Launcher
	class LaserGuidedBombLauncher_xj400: HellfireLauncher {
		picture = Hellfire;
		ammo = LaserGuidedBomb_xj400;
		displayName = $STR_DN_LASER_BOMB;
		displayNameMagazine = $STR_DN_LASER_BOMB;
		shortNameMagazine = $STR_DN_LASER_BOMB;
		count = 8;
		reloadTime = 0.5;
		sound[] = {"",0.0316228,1};
		reloadSound[] = {"",0.000316228,1};
		initSpeed = 0;
		aiRateOfFire = 13;
		aiRateOfFireDistance = 2500;
	};
	class LGBLauncher_xj400: LaserGuidedBombLauncher_xj400 {
		magazines[]={Mag_LGB_2_xj400, Mag_LGB_4_xj400, Mag_LGB_8_xj400};
	};
	class Mag_LGB_2_xj400: LaserGuidedBombLauncher_xj400 {
		displayName = "LGB";
		displayNameMagazine = "LGB";
		shortNameMagazine = "LGB";
		ammo = LaserGuidedBomb_xj400;
		count = 2;
		reloadTime = 0.1;
	};
	class Mag_LGB_4_xj400: Mag_LGB_2_xj400 {
		count = 4;
	};
	class Mag_LGB_8_xj400: Mag_LGB_2_xj400 {
		count = 8;
	};
	class RKTHunter_BombRail_xj400: HellfireLauncher {
		ammo = RKTHunter_Bomb_xj400;
		displayName="500lb Bomb";
		displayNameMagazine="Bomb";
		shortNameMagazine="Bomb";
		sound[]={"",1,1};
		count = 14;
		initspeed = 10;
		reloadTime =2;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 0.01;
		maxLeadSpeed = 1500;
	};

	
//EOF