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
	class AA_I_TZK_xj400: AALauncher {
		picture = "\dtaext\equip\m\m_AALauncher.paa";
		magazineType = "3 * 256";
	};
	class AA_II_TZK_xj400: AA_I_TZK_xj400 {
		ammo = "AA_II_TZK_xj400";
	};
	class AA_TZK_xj400: AALauncher {
		magazines[] = {"AALauncher", "AA_I_TZK_xj400", "AA_II_TZK_xj400"};
		picture = "\dtaext\equip\w\w_AALauncher.paa";
	};
	class 9K32_I_TZK_xj400: 9k32Launcher {
		picture = "\dtaext\equip\m\m_9k32Launcher.paa";
		magazineType = "3 * 256";
	};
	class 9K32_II_TZK_xj400: 9K32_I_TZK_xj400 {
		ammo = "9K32_II_TZK_xj400";
	};
	class 9k32_TZK_xj400: 9k32Launcher {
		magazines[] = {"9k32Launcher", "9K32_I_TZK_xj400", "9K32_II_TZK_xj400"};
		picture = "\dtaext\equip\w\w_9k32Launcher.paa";
	};
	class LAW_TZK_xj400: LAWLauncher {
		scopeWeapon = 2; scopeMagazine = 0;
		magazines[] = {"LAWLauncher", "LAW_1slot_xj400"};
		picture = "\dtaext\equip\w\w_lawLauncher.paa";
	};
	class LAW_1slot_xj400: LAWLauncher {
		scopeWeapon = 0; scopeMagazine = 2;
		magazineType = "1 * 256";
		picture = "\dtaext\equip\m\m_lawLauncher.paa";
	};
	class RPG_TZK_xj400: RPGLauncher {
		scopeWeapon = 2; scopeMagazine = 0;
		magazines[] = {"RPGLauncher", "RPG_1slot_xj400"};
		picture = "\dtaext\equip\w\w_rpgLauncher.paa";
	};
	class RPG_1slot_xj400: RPGLauncher {
		scopeWeapon = 0; scopeMagazine = 2;
		magazineType = "1 * 256";
		picture = "\dtaext\equip\m\m_rpgLauncher.paa";
	};
	// Infantry gun
	class M60_TZK_xj400: M60 {
		scopeMagazine = 0;
		weaponType = "1";
		magazines[] = {"M60"};
		picture = "\dtaext\equip\w\w_m60.paa";
	};
	class PK_TZK_xj400: PK {
		scopeMagazine = 0;
		weaponType = "1";
		magazines[] = {"PK"};
		picture = "\dtaext\equip\w\w_pk.paa";
	};
	class M240_M145_xj400: MachineGun7_6Manual {};
	class M240_Mag_xj400: M240_M145_xj400 {
		class Fullauto {
			ammo = "Bullet_M240_xj400";
			multiplier = 1; burst = 1;
			displayName = "7,62x51";
			sound[] = {"\TZK_Sounds_4_0_0\LSR\M240Fire.wss",db7,1};
			soundContinuous = 0;
			reloadTime = 0.0705;
			ffCount = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			dispersion = 0.0033;
			aiDispersionCoefX = 5; // dispersion used to simulate horizontal burst
			maxLeadSpeed = 300;
			recoil = "M249_750_Recoil_LSR";
			autoFire = 1;
			useAction = 0; useActionTitle = "";
			aiRateOfFire = 0.075;
			aiRateOfFireDistance = 1000;
		};
	};
	class M60e4_xj400: MachineGun7_6Manual {
		weaponType = "1";
	};
	class PKM_Mag_xj400: MachineGun7_6Manual {
		dispersion = 0.0033;
	};
	class PKM_1P29_xj400: PKM_Mag_xj400 {
		weaponType = "1";
	};

	class RPK74_Mag_xj400: AK74 {};
	class RPK74_Pistol_Mag_xj400: RPK74_Mag_xj400 {
		magazineType = "1 * 32";
	};
	class RPK74M_1P29_xj400: Riffle {
		magazines[]={"RPK74_Mag_xj400", "RPK74_Pistol_Mag_xj400"};
	};
	class RPK74_SD_Mag_xj400: RPK74_Mag_xj400 {};
	class RPK74_SD_Pistol_Mag_xj400: RPK74_SD_Mag_xj400 {
		magazineType = "1 * 32";
	};
	class RPK74M_1P29_SD_xj400: RPK74M_1P29_xj400 {
		magazines[]={"RPK74_SD_Mag_xj400", "RPK74_SD_Pistol_Mag_xj400"};
	};

	class SupportMag_xj400: Riffle {
		scopeWeapon = 0;
		scopeMagazine = 2;
		modelOptics = "";
		picture = "\dtaext\equip\m\m_apmine.paa";
		optics = "false";
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		displayName = "Support Box";
		displayNameMagazine = "Support Box";
		shortNameMagazine = "Support Box";

		drySound[] = {"weapons\M16dry", 0, 1};
		muzzles[] = {};
		ammo = "StrokeFistHit";
		count = 1;
		multiplier = 1;
		division = 7;
		burst = 7;
		dispersion = 0.0001;
		sound[] = {"\kozl\kozl_single", 0, 1};
		reloadMagazineSound[] = {"\kozl\kozl_load","db-70",1};
		soundContinuous = "false";
		reloadTime = 0.001;
		magazineReloadTime = 3;
		ffCount = 1;
		recoil = "sniperSingle";
		recoilFixed = "riffleSingleFixed";
		autoFire = "false";
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		useAction = "false";
		useActionTitle = "";

		enableAttack = 0;
		primary = 1;
		showEmpty = 0;
		canDrop = 0;

		magazineType = "1 * 256";
	};
	class SupportBox_xj400: SupportMag_xj400 {
		model = "\kozl\kozlice";
		displayName = "Support Box";
		displayNameMagazine = "Support Box";
		shortNameMagazine = "Support Box";
		
		scopeWeapon = 2;
		scopeMagazine = 0;
		weaponType = "1";

		enableAttack = 0;
		primary = 1;
		showEmpty = 0;
		canDrop = 0;
	};

	class RKG3M_xj400: HandGrenade {
		displayName = "RKG-3M";
		displayNameMagazine = "RKG-3M";
		shortNameMagazine = "RKG-3M";
		picture = "\TZK_Config_4_0_6\Tex\RKG-3.paa";
		maxLeadSpeed = 20; // 72 km/h at most
		ammo = "RKG3M_xj400"
		sound[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Throw.ogg", db-60, 1};
	};
	class Throw_xj400: Throw {
		enableAttack = 1;
		magazines[] = {
			"HandGrenade","SmokeShell","SmokeShellRed","SmokeShellGreen"
			, "RKG3M_xj400"
		};
		// RKG3M_xj400 requires AI equip Throw weapon with "enableAttack = 1" and equipping RKG3M_xj400 only (namely don't equip HandGrenade)
	};