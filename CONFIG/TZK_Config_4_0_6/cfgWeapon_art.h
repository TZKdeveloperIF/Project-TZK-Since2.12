	class Gun120_Grk_xj400: shell125 {
		displayName = "120mm Gun";
		scopeWeapon = 2; scopeMagazine = 0;

		backgroundReload = 1;
		reloadSound[] = {"Weapons\reload",0.001,1};
		magazines[] = {
			"HE120_Grk_0080_xj400","HE120_Grk_0120_xj400","HE120_Grk_0180_xj400","HE120_Grk_0300_xj400","HE120_Grk_0400_xj400"
			,"HE120_Grk_0500_xj400","HE120_Grk_0600_xj400","HE120_Grk_0700_xj400"
		};
		magazineReloadTime = 2.5;
	};
	class HE120_Grk_Base_xj400: shell125 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "120mm HE"; shortNameMagazine = "HE";
		count = 20;
		initSpeed = 500;

		displayName = "120mm HE";
		ammo = "HE120_Coc_xj400";
		sound[] = {"\TZK_Sounds_4_0_6\Coc\amos_fire.wss", db+20 ,1};
		reloadTime = 5;
		flash = "gunfire";
		flashSize = 10.000000;
		dispersion = 0.00055;
		autoFire = 0;
		aiRateOfFire = 0.06; aiRateOfFireDistance = 10000;
	};
	#define HE120_Grk(speed) \
	class HE120_Grk_##speed##_xj400: HE120_Grk_Base_xj400 { \
		initSpeed = ##speed##; displayName = 120mm HE (##speed##m/s); \
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
		magazineReloadTime = 2.5;

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
		sound[] = {"\TZK_Sounds_4_0_6\VME\plz89.wss", db+20, 1};
		reloadTime = 8;
		flash = "gunfire";
		flashSize = 10;
		dispersion = 0.00055;
		autoFire = 0;
		aiRateOfFire = 0.06; aiRateOfFireDistance = 10000;
	};
	#define HE122_VME(speed) \
	class HE122_VME_##speed##_xj400: HE122_VME_Base_xj400 { \
		initSpeed = ##speed##; displayName = 122mm HE (##speed##m/s); \
	};
	HE122_VME(0080); HE122_VME(0120); HE122_VME(0180); HE122_VME(0300); HE122_VME(0400); HE122_VME(0500); HE122_VME(0600); HE122_VME(0700);

	class FAE220Launcher_xj400: MachineGun12_7 {
		magazines[] = {
			"FAE220_DKMM_0080_xj400", "FAE220_DKMM_0120_xj400", "FAE220_DKMM_0180_xj400",
			"FAE220_DKMM_0300_xj400", "FAE220_DKMM_0400_xj400", "FAE220_DKMM_0500_xj400",
			"FAE220_DKMM_0600_xj400", "FAE220_DKMM_0700_xj400", "FAE220_DKMM_0800_xj400",
			"FAE220_DKMM_0900_xj400", "FAE220_DKMM_1000_xj400",
			"FAE220_0080_xj400", "FAE220_0120_xj400", "FAE220_0180_xj400",
			"FAE220_0300_xj400", "FAE220_0400_xj400", "FAE220_0500_xj400",
			"FAE220_0600_xj400", "FAE220_0700_xj400", "FAE220_0800_xj400",
			"FAE220_0900_xj400", "FAE220_1000_xj400"
		};
	};
	class FAE220_DKMM_0080_xj400: FAE220Launcher_xj400 {};
	class FAE220_0080_xj400: FAE220_DKMM_0080_xj400 {
		ammo = "FAE220_Bullet_xj400";
	};
	class FAE220_0120_xj400: FAE220_0080_xj400 { displayName = "9M27K-TB(120m/s)"; initSpeed = 120; };
	class FAE220_0180_xj400: FAE220_0080_xj400 { displayName = "9M27K-TB(180m/s)"; initSpeed = 180; };
	class FAE220_0300_xj400: FAE220_0080_xj400 { displayName = "9M27K-TB(300m/s)"; initSpeed = 300; };
	class FAE220_0400_xj400: FAE220_0080_xj400 { displayName = "9M27K-TB(400m/s)"; initSpeed = 400; };
	class FAE220_0500_xj400: FAE220_0080_xj400 { displayName = "9M27K-TB(500m/s)"; initSpeed = 500; };
	class FAE220_0600_xj400: FAE220_0080_xj400 { displayName = "9M27K-TB(600m/s)"; initSpeed = 600; };
	class FAE220_0700_xj400: FAE220_0080_xj400 { displayName = "9M27K-TB(700m/s)"; initSpeed = 700; };
	class FAE220_0800_xj400: FAE220_0080_xj400 { displayName = "9M27K-TB(800m/s)"; initSpeed = 800; };
	class FAE220_0900_xj400: FAE220_0080_xj400 { displayName = "9M27K-TB(900m/s)"; initSpeed = 900; };
	class FAE220_1000_xj400: FAE220_0080_xj400 { displayName = "9M27K-TB(1000m/s)"; initSpeed = 1000; };

	class M26Launcher_xj400: FAE220Launcher_xj400 {
		magazines[] = {
			"M26_COC_0080_xj400", "M26_COC_0120_xj400", "M26_COC_0180_xj400", "M26_COC_0300_xj400",
			"M26_COC_0400_xj400", "M26_COC_0500_xj400", "M26_COC_0600_xj400", "M26_COC_0700_xj400",
			"M26_COC_0800_xj400", "M26_COC_0900_xj400", "M26_COC_1000_xj400", "M26_COC_1200_xj400",
			"M26_COC_1500_xj400",
			"M26_0080_xj400", "M26_0120_xj400", "M26_0180_xj400", "M26_0300_xj400",
			"M26_0400_xj400", "M26_0500_xj400", "M26_0600_xj400", "M26_0700_xj400",
			"M26_0800_xj400", "M26_0900_xj400", "M26_1000_xj400", "M26_1200_xj400",
			"M26_1500_xj400"
		};
	};
	class M26_COC_0080_xj400: M26Launcher_xj400 {};
	class M26_0080_xj400: M26_COC_0080_xj400 {
		ammo = "M26_Bullet_xj400";
	};
	class M26_0120_xj400: M26_0080_xj400 { displayName = "M26 Rocket(120m/s)"; initSpeed = 120; };
	class M26_0180_xj400: M26_0080_xj400 { displayName = "M26 Rocket(180m/s)"; initSpeed = 180; };
	class M26_0300_xj400: M26_0080_xj400 { displayName = "M26 Rocket(300m/s)"; initSpeed = 300; };
	class M26_0400_xj400: M26_0080_xj400 { displayName = "M26 Rocket(400m/s)"; initSpeed = 400; };
	class M26_0500_xj400: M26_0080_xj400 { displayName = "M26 Rocket(500m/s)"; initSpeed = 500; };
	class M26_0600_xj400: M26_0080_xj400 { displayName = "M26 Rocket(600m/s)"; initSpeed = 600; };
	class M26_0700_xj400: M26_0080_xj400 { displayName = "M26 Rocket(700m/s)"; initSpeed = 700; };
	class M26_0800_xj400: M26_0080_xj400 { displayName = "M26 Rocket(800m/s)"; initSpeed = 800; };
	class M26_0900_xj400: M26_0080_xj400 { displayName = "M26 Rocket(900m/s)"; initSpeed = 900; };
	class M26_1000_xj400: M26_0080_xj400 { displayName = "M26 Rocket(1000m/s)"; initSpeed = 1000; };
	class M26_1200_xj400: M26_0080_xj400 { displayName = "M26 Rocket(1200m/s)"; initSpeed = 1200; };
	class M26_1500_xj400: M26_0080_xj400 { displayName = "M26 Rocket(1500m/s)"; initSpeed = 1500; };

	class Mortar81_Launcher_xj400: Gun120 {};
	class Mortar81_0200_xj400: Mortar81_Launcher_xj400 {
		reloadTime = 6;
	};

	class MineLayingLauncher_xj400: FAE220Launcher_xj400 {
		displayName = "Mine Laying Launcher";
		magazines[] = {
			"MineRocket_0080_xj400", "MineRocket_0120_xj400", "MineRocket_0180_xj400",
			"MineRocket_0300_xj400", "MineRocket_0400_xj400", "MineRocket_0500_xj400",
			"MineRocket_0600_xj400", "MineRocket_0700_xj400", "MineRocket_0800_xj400",
			"MineRocket_0900_xj400", "MineRocket_1000_xj400"
		};
	};
	class MineRocket_0080_xj400: MineLayingLauncher_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "Mine Laying Rocket";
		shortNameMagazine = "Mine Rocket";
		count = 30;
		initSpeed = 80; // Rocket's initSpeed are always 20m/s.
		
		displayName = "Mine Rocket (80m/s)";
		ammo = "FAE220_DKMM_xj400";
		sound[] = {"\TZK_Sounds_4_0_6\scf_us\missile.wss", 10, 1};
		soundcontinuous = 0;
		reloadTime = 0.25;
		aiRateOfFire = 0.9;
		aiRateOfFireDistance = 1000;
		recoil = "empty";
	};
	class MineRocket_0120_xj400: MineRocket_0080_xj400 { displayName = "Mine Rocket(120m/s)"; initSpeed = 120; };
	class MineRocket_0180_xj400: MineRocket_0080_xj400 { displayName = "Mine Rocket(180m/s)"; initSpeed = 180; };
	class MineRocket_0300_xj400: MineRocket_0080_xj400 { displayName = "Mine Rocket(300m/s)"; initSpeed = 300; };
	class MineRocket_0400_xj400: MineRocket_0080_xj400 { displayName = "Mine Rocket(400m/s)"; initSpeed = 400; };
	class MineRocket_0500_xj400: MineRocket_0080_xj400 { displayName = "Mine Rocket(500m/s)"; initSpeed = 500; };
	class MineRocket_0600_xj400: MineRocket_0080_xj400 { displayName = "Mine Rocket(600m/s)"; initSpeed = 600; };
	class MineRocket_0700_xj400: MineRocket_0080_xj400 { displayName = "Mine Rocket(700m/s)"; initSpeed = 700; };
	class MineRocket_0800_xj400: MineRocket_0080_xj400 { displayName = "Mine Rocket(800m/s)"; initSpeed = 800; };
	class MineRocket_0900_xj400: MineRocket_0080_xj400 { displayName = "Mine Rocket(900m/s)"; initSpeed = 900; };
	class MineRocket_1000_xj400: MineRocket_0080_xj400 { displayName = "Mine Rocket(1000m/s)"; initSpeed = 1000; };