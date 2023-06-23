// Virtual bullet used to create missiles for car/ship
// Those vehicles whose simulation is "car" or "ship" can't shot missiles thus shoulde use Fired-EH instead.
	class VirtualCountMag_xj400: MachineGun7_6 {};
	class VirtualEquipSwitchMag_xj400: MachineGun7_6 {};

	class VirtualLAW_xj400: LAWLauncher {
		ammo = "VirtualLAW_xj400";
		InitSpeed = 350;
		magazineType = 0;
	};
	class VirtualRPG_xj400: RPGLauncher {
		ammo = "VirtualRPG_xj400";
		InitSpeed = 350;
		magazineType = 0;
	};
	class VirtualCarlGustav_xj400: CarlGustavLauncher {
		ammo = "VirtualCarlGustavNoGuide_xj400";
		InitSpeed = 300;
		magazineType = 0;
	};
	class VirtualAT4_xj400: AT4Launcher {
		ammo = "VirtualAT4NoGuide_xj400";
		InitSpeed = 300;
		magazineType = 0;
	};
	class VirtualAA_xj400: AALauncher {
		ammo = "VirtualAA";
		magazineType = 0;
	};
	class Virtual9K32_xj400: 9K32Launcher {
		ammo = "Virtual9K32";
		magazineType = 0;
	};
	class VirtualGrenade_xj400: GrenadeLauncher {
		count = 6;
		ammo = "VirtualGrenade_xj400";
		magazineType = 0;
	};
	class VirtualMortar_xj400: MortarRapid_xj400 {
		ammo = "VirtualMortarShell_xj400";
		magazineType = 0;
	};
	
	class VirtualWeaponInfantry_xj400: AT3Launcher {
		canlock = 2;
		magazineReloadTime = 3;
		magazines[] = {"VirtualLAW_xj400", "VirtualRPG_xj400", "VirtualCarlGustav_xj400", "VirtualAT4_xj400", "VirtualAA_xj400", "Virtual9K32_xj400", "VirtualGrenade_xj400", "VirtualMortar_xj400", "Mag_12mm7_100_xj400"};
	};
	
	
	/*
	class VirtualInfLauncher_xj400: MachineGun7_6 {
		count = 1;
		reloadTime = 3;
		sound[] = {"Weapons\at_launch",0.01,1};
		initSpeed = 30;
	};
	class VirtualInfWeapons_xj400: VirtualInfLauncher_xj400 {
		magazines[]={"Mag_12mm7_100", "VirtualLAW_xj400", "VirtualRPG_xj400", "VirtualCarlGustav_xj400", "VirtualAT4_xj400", "VirtualAA", "Virtual9K32", "VirtualGrenade_xj400", "VirtualMortar"};
		magazineReloadTime = 3;
		reloadMagazineSound[] = {"Weapons\at_load",0.00031622773,1};
		aiDispersionCoefX=8;
		aiDispersionCoefY=8;
	};
	
	class VirtualVehLauncher_xj400: MachineGun7_6 {
		sound[] = {"Weapons\missile",0.0031622774,1};
		reloadSound[] = {"Weapons\missload",0.00031622773,1};
		aiRateOfFire = 0.4;
		aiRateOfFireDistance = 1000;
	};
	class VirtualZuni_xj400: VirtualVehLauncher_xj400 {
		count = 2;
		ammo = "VirtualZuni_xj400";
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		displayName = "$STR_DN_FFAR";
		displayNameMagazine = "$STR_MN_FFAR";
		shortNameMagazine = "$STR_SN_FFAR";
		autoFire = 1;
	};
	
	class VirtualVehWeapons_xj400: VirtualVehLauncher_xj400 {
		magazines[]={"VirtualZuni_xj400",  };
		aiDispersionCoefX=8;
		aiDispersionCoefY=8;
	};
	
	class VirtualAT_APC_xj400: VirtualInfLauncher_xj400 {};
	class VirtualAT_Heli_xj400: VirtualInfLauncher_xj400 {};
	class VirtualStinger_xj400: VirtualInfLauncher_xj400 {};
	class VirtualStrela_xj400: VirtualInfLauncher_xj400 {};
	*/
	
// EOF