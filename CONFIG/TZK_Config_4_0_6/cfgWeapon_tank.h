	class Gun106_htr_xj400: Gun120 {
		displayName = "106mm HEAT";
		reloadSound[] = {"\TZK_Sounds_4_0_6\m151a1c\106reload.wss", 0.5, 1};
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
		sound[] = {"\TZK_Sounds_4_0_6\m151a1c\106shot.wss", db+20, 1};
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
		drySound[] = {"\TZK_Sounds_4_0_6\fdf\mg_dry.wss",0.000316,1};
		reloadMagazineSound[] = {"\TZK_Sounds_4_0_6\fdf\mg_reload_manual.wss",0.000316,1};
		reloadSound[] = {"\TZK_Sounds_4_0_6\fdf\musti_reload.wss",0.000316,1};
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
		sound[] = {"\TZK_Sounds_4_0_6\fdf\spg9.wss", db+20, 1};
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
		sound[] = {"\TZK_Sounds_4_0_6\AMX10\tir10RC.wss", 10, 1.0};
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
		sound[] = {"\TZK_Sounds_4_0_6\AMX10\tir10RC.wss", 10, 1.0};
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