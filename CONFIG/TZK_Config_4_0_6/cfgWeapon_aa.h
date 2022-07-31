	class VehAA_xj400: AT3Launcher {
		count = 20;
		ammo = "AA_II_TZK_xj400";
		modelOptics = "optika_stinger";
		displayName = "$STR_DN_AA";
		displayNameMagazine = "$STR_MN_AA";
		shortNameMagazine = "$STR_SN_AA";
		sound[] = {"Weapons\at_launch",0.01,1};
		reloadSound[] = {"Weapons\at_load",0.0003162,1};
		reloadTime = 5;
		magazineReloadTime = 5;
		aiRateOfFire = 3.0;
		aiRateOfFireDistance = 2000;
		maxLeadSpeed = 600;
		aiDispersionCoefX = 16; aiDispersionCoefY = 16;
	};
	class Veh9k32_xj400: VehAA_xj400 {
		modelOptics = "optika_strela";
		ammo = "9K32_II_TZK_xj400";
		displayName = "$STR_DN_9K32";
		displayNameMagazine = "$STR_MN_9K32";
		shortNameMagazine = "$STR_SN_9K32";
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
		magazineReloadTime = 2;
		magazines[] = {"Stinger_Mag_19_xj400","Stinger_Mag_23_xj400","Stinger_Mag_26_xj400","Stinger_Mag_30_xj400"};
	};
	class StingerT_Wep_xj400: Stinger_Wep_xj400 {
		count = 1;
		magazineReloadTime = 4;
	};
	class Strela_Wep_xj400: Strela_xj400 {
		scopeWeapon = 2; scopeMagazine = 0;
		magazineReloadTime = 2;
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