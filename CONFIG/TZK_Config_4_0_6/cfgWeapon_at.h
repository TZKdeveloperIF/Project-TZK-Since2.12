	class HellfireLauncherBMP2_xj400: AT3Launcher {
		ammo = "AT3_xj400";
	};
	class HellfireLauncherM2A2_xj400: AT3Launcher {
		ammo = "AT3_xj400";
	};
	class GuidedAT_APC_xj400: AT3Launcher {
		magazineReloadTime = 2.5;
	};
	class LaserAT_APC_xj400: GuidedAT_APC_xj400 {
		ammo = "LaserAT_APC_xj400";
	};
	class GuidedAT_P18_xj400: GuidedAT_APC_xj400 { ammo = "GuidedAT_P18_xj400"; };
	class ATLauncherTank_xj400: AT3Launcher {
		magazines[] = {"GuidedAT_APC_xj400","GuidedAT_P18_xj400","LaserAT_APC_xj400"};
	};
	class GuidedAT_Heli_8_xj400: GuidedAT_APC_xj400 {};
	class GuidedAT_Heli_P40_xj400: GuidedAT_Heli_8_xj400 { ammo = "GuidedAT_Heli_P40_xj400"; };
	class GuidedAT_Cobra_P40_xj400: GuidedAT_Heli_8_xj400 { ammo = "GuidedAT_Cobra_P40_xj400"; };
	class GuidedAT_AT6_P40_xj400: GuidedAT_Heli_8_xj400 { ammo = "GuidedAT_AT6_P40_xj400"; };
	class GuidedAT_Heli_12_xj400: GuidedAT_APC_xj400 {};
	class GuidedAT_Heli_P40_12_xj400: GuidedAT_Heli_12_xj400 { ammo = "GuidedAT_Heli_P40_xj400"; };
	class ATLauncherAir_xj400: HellfireLauncher {
		magazineReloadTime = 2.5;
		magazines[] = {
			"GuidedAT_Heli_8_xj400", "GuidedAT6_8_xj400", "GuidedAT_Cobra_8_xj400", "GuidedAT_Heli_12_xj400",
			"GuidedAT_Heli_P40_xj400", "GuidedAT_Cobra_P40_xj400", "GuidedAT_AT6_P40_xj400", "GuidedAT_Heli_P40_12_xj400",
		};
	};

	class MaverickLauncher_xj400: MaverickLauncher {
		magazines[] = {"MaverickLauncher", "Maverick_P50_xj400", "Maverick_14_xj400", "Maverick_16_xj400", "Maverick_18_xj400", "Maverick_20_xj400"};
	};
	class Ch29TLauncher_xj400: Ch29TLauncher {
		magazines[] = {"Ch29TLauncher", "Ch29T_P50_xj400", "Ch29T_14_xj400", "Ch29T_16_xj400", "Ch29T_18_xj400", "Ch29T_20_xj400"};
	};
	class Maverick_P50_xj400: MaverickLauncher {
		ammo = "Maverick_P50_xj400";
	};
	class Ch29T_P50_xj400: Ch29TLauncher {
		ammo = "Ch29T_P50_xj400";
	};
	class Maverick_14_xj400: MaverickLauncher {
		ammo = "Maverick_14_xj400";
	};
	class Maverick_16_xj400: Maverick_14_xj400 {
		ammo = "Maverick_16_xj400";
	};
	class Maverick_18_xj400: Maverick_14_xj400 {
		ammo = "Maverick_18_xj400";
	};
	class Maverick_20_xj400: Maverick_14_xj400 {
		ammo = "Maverick_20_xj400";
	};
	class Ch29T_14_xj400: Ch29TLauncher {
		ammo = "Ch29T_14_xj400";
	};
	class Ch29T_16_xj400: Ch29T_14_xj400 {
		ammo = "Ch29T_16_xj400";
	};
	class Ch29T_18_xj400: Ch29T_14_xj400 {
		ammo = "Ch29T_18_xj400";
	};
	class Ch29T_20_xj400: Ch29T_14_xj400 {
		ammo = "Ch29T_20_xj400";
	};