// Cannon
	class Cannon30HE_BMP2_xj400: Default {
		scopeWeapon = 0;
		scopeMagazine = 2;
		primary = 0;
		autoFire = 1;
		shotFromTurret = 1;
		displayName = $STR_DN_ADD_BMP2_HE;
		displayNameMagazine = $STR_DN_ADD_BMP2_HE;
		shortNameMagazine = $STR_DN_ADD_BMP2_HE;
		nameSound = shell;
		ammo = Cannon30HE_BMP2_xj400;
		count = 250;
		multiplier = 2;
		reloadTime = 0.18;
		initSpeed = 1000;
		sound[] = {"\bmp2\bmp2_cannon",3.16228,1};
		flashSize = 1.1;
		maxLeadSpeed = 450;
		optics = 1;
		ffCount = 1;
	};
	class Cannon30AP_BMP2_xj400: Cannon30HE_BMP2_xj400 {
		shotFromTurret = 1;
		ammo = Cannon30AP_BMP2_xj400;
		displayName = $STR_DN_ADD_BMP2_AP;
		displayNameMagazine = $STR_DN_ADD_BMP2_AP;
		shortNameMagazine = $STR_DN_ADD_BMP2_AP;
		nameSound = heat;
	};
	class Cannon30_BMP2_xj400: Default {
		scopeWeapon = 2;
		scopeMagazine = 0;
		shotFromTurret = 1;
		displayName = $STR_DN_GUN;
		sound[] = {"\bmp2\bmp2_cannon",3.16228,1};
		reloadSound[] = {"Weapons\reload",0.000316228,1};
		backgroundReload = 1;
		ffMagnitude = 1;
		ffFrequency = 5;
		magazines[]={Cannon30HE_BMP2_xj400,Cannon30AP_BMP2_xj400};
	};

	class Cannon30HE_Kamov_xj400: Default {
		scopeWeapon=0
		scopeMagazine=2
		primary=0
		autoFire=1
		shotFromTurret=1
		displayName="$STR_DN_OUT_V80_HE";
		displayNameMagazine="$STR_DN_OUT_V80_HE";
		shortNameMagazine="$STR_DN_OUT_V80_HE";
		nameSound="shell";
		ammo="Cannon30HE_Kamov_xj400";
		count=250
		multiplier=2
		reloadTime=0.180000;
		initSpeed=1000
		sound[]={"\o\vehl\v80_cannon",3.162278,1};
		flashSize=1.100000;
		maxLeadSpeed=450
		optics=1
		ffCount=1
	};
	class Cannon30AP_Kamov_xj400: Cannon30HE_Kamov_xj400 {
		shotFromTurret=1
		ammo="Cannon30AP_Kamov_xj400";
		displayName="$STR_DN_OUT_V80_AP";
		displayNameMagazine="$STR_DN_OUT_V80_AP";
		shortNameMagazine="$STR_DN_OUT_V80_AP";
		nameSound="heat";
	};
	class Cannon30_Kamov_xj400: Default {
		scopeWeapon=2
		scopeMagazine=0
		shotFromTurret=1
		displayName="$STR_DN_GUN";
		sound[]={"\o\vehl\v80_cannon",3.162278,1};
		reloadSound[]={"Weapons\reload",0.000316,1};
		backgroundReload=1
		ffMagnitude=1
		ffFrequency=5
		magazines[]={"Cannon30AP_Kamov_xj400","Cannon30HE_Kamov_xj400"};
	};

	class Cannon25HE_xj400: Default {
		scopeWeapon = 2;
		scopeMagazine = 2;
		shotFromTurret = 1;
		autoFire = 1;
		magazineReloadTime = 1.5;
		displayName = $STR_DN_ADD_M2A2_25;
		displayNameMagazine = $STR_DN_ADD_M2A2_25;
		shortNameMagazine = $STR_DN_ADD_M2A2_25;
		ammo = Cannon25HE_xj400;
		count = 300;
		reloadTime = 0.14;
		initSpeed = 1000;
		sound[] = {"\m2a2\cannon.wss",3.16228,1};
		flashSize = 1.1;
		maxLeadSpeed = 450;
		optics = 1;
		ffCount = 1;
		multiplier = 2;
	};
	class VulcanCannon_xj400: MachineGun30 {
		ammo = Bullet4x20_xj400;
		count = 2000;
		multiplier = 4;
		initSpeed = 900;
		flashSize = 1.2;
		reloadTime = 0.15;
		displayName = "$STR_DN_VULCAN20";
		displayNameMagazine = "$STR_DN_VULCAN20";
		shortNameMagazine = "$STR_DN_VULCAN20";
		dispersion = 0.0015;
		maxLeadSpeed = 900;
		aiRateOfFire = 0.3;
		aiRateOfFireDistance = 3000;
	};

	class M197_xj400: MachineGun30 {
		sound[]={"\TZK_Sounds_4_0_0\m197.wss",4,1};
		flashSize=1.1;
		soundContinuous=1;
	};
	class Tunguska_30mm_DKM_xj400: ZsuCannon {
		displayName = "30mm";
		
		magazineReloadTime = 15;
		flash = gunfire;
		flashSize = 10;
		optics = 1;

		displayNameMagazine = "30mm";
		shortNameMagazine = "30mm";
		ammo = "Tunguska_30mm_DKM_xj400";
		count = 1904;
		initSpeed = 2000;
		maxLeadSpeed = 1500;

		sound[] = {"\TZK_Sounds_4_0_0\2S6\30mm.ogg",3.1622777,1};
		soundContinuous = 0;
		reloadTime = 0.05;
		multiplier= 4;
		burst = 16;
		dispersion = 0.001;
		aiRateOfFire = 0.02;
		aiRateOfFireDistance = 5000;
		autoFire = 1;
	};

	class Cannon_Heli_xj400: VulcanCannon {
		count = 2000;
		magazines[]={Mag_Heli_2000_xj400};
		magazineReloadTime=1;
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=5.0;
	};
	class Mag_Heli_2000_xj400: VulcanCannon {
		displayName = "Cannon"
		displayNameMagazine = "Cannon"
		shortNameMagazine = "Cannon"
		count = 2000;
		ammo = Cannon_Heli_xj400;
		reloadTime=0.1;
		aiRateOfFire=0.1;
		aiRateOfFireDistance=1000;
		multiplier=1;
		sound[]={"Weapons\automatic_cannon",db10,1};
	};
	// A cannon mag whose ammo has a simulation "shotmissile" thus will be fired from rocket launcher
//	class Mag_Heli_Rocket_2000_xj400: Mag_Heli_2000_xj400 { ammo = Cannon_Heli_Rocket_xj400; };

	class Cannon_20HE_xj400: Cannon30_Kamov_xj400 {
		magazines[] ={Mag_20HE_800_01_xj400, Mag_20HE_800_03_xj400};
		magazineReloadTime=1.0;
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=10.0;
	};
	class Cannon_20AP_xj400: Cannon30_Kamov_xj400 {
		magazines[] ={Mag_20AP_200_01_xj400, Mag_20AP_200_03_xj400};
		magazineReloadTime=1.0;
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=10.0;
	};
	class CannonE_20HE_xj400: Cannon_20HE_xj400 {};
	class CannonE_20AP_xj400: Cannon_20AP_xj400 {};
	class Mag_20HE_800_01_xj400: Cannon30HE_Kamov_xj400 {
		count = 800;
		reloadTime=0.1;
		displayName = "20mm Cannon HE"; displayNameMagazine = "20mm HE"; shortNameMagazine = "20mm HE";
		ammo = Cannon_20HE_xj400;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 500;
		multiplier = 1;
	};
	class Mag_20HE_800_03_xj400: Mag_20HE_800_01_xj400 {
		reloadTime=0.3;
	};
	class Mag_20AP_200_01_xj400: Cannon30AP_Kamov_xj400 {
		count = 200;
		reloadTime=0.1;
		displayName = "20mm Cannon AP"; displayNameMagazine = "20mm AP"; shortNameMagazine = "20mm AP";
		ammo = Cannon_20AP_xj400;
		aiRateOfFire = 0.1;
		aiRateOfFireDistance = 500;
		multiplier = 1;
	};
	class Mag_20AP_200_03_xj400: Mag_20AP_200_01_xj400 {
		reloadTime=0.3;
	};

	class Cannon_30APHE_xj400: Cannon_20HE_xj400 {
		magazines[] ={Mag_30APHE_1200_01_xj400};
	};
	class Mag_30APHE_1200_01_xj400: Mag_20AP_200_01_xj400 {
		reloadTime=0.1;
		count = 1200;
		displayName = "30mm AP/HE"; displayNameMagazine = "30mm AP/HE"; shortNameMagazine = "30mm AP/HE";
		ammo = Cannon_30APHE_xj400;
		sound[]={"Weapons\automatic_cannon",db-30,1};
	};

	class RMKHETiger_DVD_xj400: MachineGun7_6 {
		scopeWeapon=2;
		scopeMagazine=0;

		ammo = "Mi24HEammo_DVD_xj400";
		autoFire=1;
		shotFromTurret=1;
		multiplier=1;
		reloadTime=0.1;
		magazineReloadTime=2.5;
		displayName="RMK 30mm HE";
		displayNameMagazine="30mm HE";
		shortNameMagazine="30mm HE";
		maxLeadSpeed=800;
		dispersion=0.0010;
		sound[]={"\TZK_Sounds_4_0_0\DVD_Config\20mm_fire.wss", db+0.1, 1};
		soundContinuous=false;
		ffCount=30;

		aiRateOfFire=0.2;
		aiRateOfFireDistance=500;

		magazines[]={"Mag_RMKHETiger_400_xj400"};
	};
	class Mag_RMKHETiger_400_xj400: RMKHETiger_DVD_xj400 { 
		scopeWeapon=0;
		scopeMagazine=2;
		count=400;
	};
	class RMKAPTiger_DVD_xj400: RMKHETiger_DVD_xj400 {
		scopeWeapon=2;
		scopeMagazine=0;

		ammo = "BMKAP30_DVD_xj400";
		displayName="RMK 30mm AP";
		displayNameMagazine="30mm AP";
		shortNameMagazine="30mm AP";

		magazines[]={"Mag_RMKAPTiger_300_xj400"};
	};
	class Mag_RMKAPTiger_300_xj400: RMKAPTiger_DVD_xj400 {
		scopeWeapon=0;
		scopeMagazine=2;
		count=300;
	};

	class MachineGun30PlaneLGB_xj400: MachineGun30A10Burst {
		canlock=2;
		ammo = "Bullet30PlaneLGB_xj400";
	};
	class RKTHunter_Guns_xj400: MachineGun30 {
		displayName = "4x 30mm Cannons";
		ammo = "RKT_Hunter_Bullet_xj400";
		count = 1600;
		initSpeed = 2000;
		reloadTime = 0.02;
		soundContinuous = 1;
		sound[]={"\TZK_Objects\Sound\rkthunter\gun.wss",db10,1};
		flashSize=0.001;
		maxLeadSpeed=1800;
		dispersion=0.02;
	};

// MG
	// StaticMG Weapon
	class StaticMG_12mm7_xj400: Browning_xj400 {
		magazines[]={Mag_12mm7_100_xj400, Mag_12mm7_1000_xj400};
		magazineReloadTime = 5
		reloadMagazineSound[]={"weapons\m16load",db-70,1};
		aiDispersionCoefX=10.0;
		aiDispersionCoefY=5.0;
		// optics = true;
		// modelOptics="optika_M60_MG";
	};
	class Mag_12mm7_100_xj400: Browning_xj400 {
		count = 100;
		ammo = "Ammo_12mm7_xj400";
		reloadTime = 0.15
		aiRateOfFire=0;
		aiRateOfFireDistance=500;
	};
	class Mag_12mm7_1000_xj400: Mag_12mm7_100_xj400 {
		count = 1000;
	};
	// Car MG
	class M2cal50_DVDUS_xj400: MachineGun12_7_xj400 {
		ammo="MG3AAammo_DVD_xj400";
		displayName = "M2 12.7mm";
		displayNameMagazine="M2 12.7mm";
		shortNameMagazine="M2 Box Mag";
		count=100;
		reloadTime=0.11;
		sound[]={"\TZK_Sounds_4_0_0\mg.wss",4,1};
		reloadMagazineSound[]={"\TZK_Sounds_4_0_0\mgreload.wss",0.3,1};
		soundContinuous=0;
		magazines[]={"M2cal50_DVDUS_xj400"};
		initSpeed=1000;
		autoFire=1;
		optics=1;
		autoReload=1;
		magazineReloadTime=10;
		dispersion=0.0030;
	};
	class RUSPK_BAS_xj400: MachineGun7_6_xj400 {
		scopeWeapon = public;
		scopeMagazine = public;

		ammo = "Bullet7_6E";
		count = 200;
		magazineReloadTime = 4;
		modelOptics = "optika_PK";
		sound[] = {"Weapons\AK74full",db10,1};
		displayName = $STR_DN_PK;
		displayNameMagazine = $STR_MN_PK;
		shortNameMagazine = $STR_SN_PK;
	};

	class PKTbase_DVD_xj400: MachineGun7_6_xj400 {
		ammo="MG3ammo_DVD_xj400";
		displayName = $STR_DVDPKT;
		displayNameMagazine = $STR_DVDPKT;
		shortNameMagazine = $STR_DVDPKT;
		sound[]={"\TZK_Sounds_4_0_0\PKTshot.wss",db -15, 1};
		soundContinuous=0;
		reloadTime=0.08;
		backgroundReload=1;
		dispersion=0.001500;
	};
	class PKTUAZ_DVD_xj400: PKTbase_DVD_xj400 {
		displayName = 7.62mm PK ;
		displayNameMagazine = 7.62mm PK ;
		shortNameMagazine = 7.62mm PK ;
		count = 200;
		autoReload = 1;
		magazineReloadTime = 12;
		reloadMagazineSound[]={"\TZK_Sounds_4_0_0\mgreload.wss",0.3,1};
	};

//EOF