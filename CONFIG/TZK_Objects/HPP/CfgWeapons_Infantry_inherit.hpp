// Weapons used mainly by soldiers.
// Some notes are listed in the bottom of this file.

	// NVG from ECP
	class NVG_Base_xj400: NVGoggles {
		// redefined to make sure "isBinocular" and "isNVG" assigned. It's necessary to redefine picture parameter once name changed.
		displayName = "$STR_DN_NV_GOGGLES";
		showEmpty = 0;
		valueWeapon = 5;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		modelOptics = "optika_night";
		model = "nvg_proxy";
		isBinocular = 0;
		isNVG = 1;
		picture = "\dtaExt\equip\w\w_nvgoggles.paa";
	};
	class NVG_clear_xj400: NVG_Base_xj400 {
		// clear NV screen
		modelOptics = "\TZK_Objects\Model\ECP_NVG\optics_nv_clear.p3d";
		displayName = "NVG clear";
	};
	class NVG_mono_xj400: NVG_Base_xj400 {
		// Monocular NV screen(for realism maniacs)
		modelOptics = "\TZK_Objects\Model\ECP_NVG\optics_nv_mono.p3d";
		displayName = "NVG mono";
	};
	class NVG_shad_xj400: NVG_Base_xj400 {
		// NV screen with sharp edge shadow and no statics
		modelOptics = "\TZK_Objects\Model\ECP_NVG\optics_nv_shad.p3d";
		displayName = "NVG shad";
	};
	class NVG_shadF_xj400: NVG_Base_xj400 {
		// NV screen with faded edge shadow and no statics
		modelOptics = "\TZK_Objects\Model\ECP_NVG\optics_nv_shadF.p3d";
		displayName = "NVG shadF";
	};
	class NVG_stat_xj400: NVG_Base_xj400 {
		// NV screen with statics and sharp edge shadow
		modelOptics = "\TZK_Objects\Model\ECP_NVG\optics_nv_stat.p3d";
		displayName = "NVG stat";
	};
	class NVG_stat_ns_xj400: NVG_Base_xj400 {
		// clear NV screen with statics
		modelOptics = "\TZK_Objects\Model\ECP_NVG\optics_nv_stat_ns.p3d";
		displayName = "NVG statC";
	};
	class NVG_statF_xj400: NVG_Base_xj400 {
		// NV screen with statics and faded edge shadow
		// personal favorite
		modelOptics = "\TZK_Objects\Model\ECP_NVG\optics_nv_statF.p3d";
		displayName = "NVG statF";
	};

// Grenade Launcher. In order to fit "Need-Rearm-Condition" in CTI, the names of Grenade's muzzle are set same as the gun.
	// M4 M203 ACOG SD from LSR
	class M4_SD_Mag_xj400: M16 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "5.56 30 rd. SD Mag";
		shortNameMagazine = "5.56 30 rd. SD Mag";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_ar15sd.paa";
		count = 30;
		initSpeed = 874;
		modes[]={"Single","FullAuto"};
		class Single {
			ammo = "Bullet_M4_SD_Single_xj400";
			multiplier = 1; burst = 1;
			displayName = "5.56x45 SD Semi";
			dispersion = 0.0003;
			sound[] = {"\TZK_Sounds_4_0_0\LSR\M4fireSD.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.075;
			ffCount = 1;
			recoil = "M4_Single_Recoil_LSR";
			autoFire = 0;
			aiRateOfFire = 0.85;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo = "Bullet_M4_SD_Full_xj400";
			multiplier = 1; burst = 1;
			displayName = "5.56x45 SD Auto";
			dispersion = 0.0008;
			sound[] = {"\TZK_Sounds_4_0_0\LSR\M4fireSD.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.075;
			ffCount = 30;
			recoil = "M4_Full_Recoil_LSR";
			autoFire = 1;
			aiRateOfFire = 0.85;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
	};
	class M4_ACOG_SD_xj400: Riffle {
		displayName = "M4 SOPMOD SD";
		scopeWeapon = 2; scopeMagazine = 0;
		drysound[] = {"weapons\M16dry",db-40,1};
		model = "\TZK_Weapon_4_0_0\LSR_uswp\lsr_m4_m203_acog_sd.p3d";
		modelOptics = "\TZK_Weapon_4_0_0\LSR_uswp\opt_acog.p3d";
		optics = 1;
		opticsFlare = 0;
		opticsZoomMin = 0.16;
		opticsZoomMax = 0.16;
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\w_m4sopmodsd.paa";
		modes[]={"this","this"};
		magazines[]={"M4_SD_Mag_xj400"};
		reloadMagazineSound[]={"\LSR_uswp\sounds\M16reload.wss",0.010316,1};
	};
	class M4_M203_ACOG_SD_xj400: GrenadeLauncher {
		displayName = "M4 ACOG SD/M203";
		scopeWeapon = 2; scopeMagazine = 0;
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\w_m4acogm203sd.paa";
		weaponType = WeaponSlotPrimary;
		model = "\TZK_Weapon_4_0_0\LSR_uswp\lsr_m4_m203_acog_sd.p3d";
		uipicture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\igrenadier.paa";
		muzzles[] = {"M4SDMuzzle", "M4_M203_ACOG_SD_xj400"};
		class M4SDMuzzle: M4_ACOG_SD_xj400 {};
		class M4_M203_ACOG_SD_xj400: GrenadeLauncher {
			displayName = "M203";
			modelOptics = "\TZK_Weapon_4_0_0\LSR_uswp\opt_m203.p3d";
			optics = 1;
			opticsZoomMin = 0.4;
			opticsZoomMax = 0.4;
			drysound[] = {"weapons\M16dry",db-40,1};
			magazines[]={"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow","M203_Grenade_xj400","M203_Vest_xj400"};
			reloadMagazinesound[] = {"\TZK_Sounds_4_0_0\LSR\M203_reload.wss",0.010316,1};
		};
		canDrop = 1;
	};
	class M203_Grenade_xj400: GrenadeLauncher {
		cursor = "t_select.paa";
		scopeMagazine = 2;
		weaponType = 0;
		magazineType = "256";
		ammo = "M203_Grenade_xj400";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_m203grenade.paa";
		displayName = "M203 Grenade Launcher";
		displayNameMagazine = "M203 Grenade";
		shortNameMagazine = "M203 Grenade";
		count = 1;
		initSpeed = 85;
		reloadTime = 0;
		sound[] = {"\TZK_Sounds_4_0_0\LSR\m203_fire.wss",1,1};
		reloadMagazinesound[] = {"\TZK_Sounds_4_0_0\LSR\M203_reload.wss",0.010316,1};
		canDrop = 1;
	};
	class M203_Vest_xj400: M203_Grenade_xj400 {
		magazineType = "5 * 256";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_m203vest.paa";
		displayNameMagazine = "M203 Vest";
		shortNameMagazine = "M203 Vest";
		count = 24;
		reloadTime = 5;
	};
	// AK74M GP25 1P29 SD from C8X
	class AK74_SD_Mag_xj400: AK74 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "AK74m SD Mag";
		shortNameMagazine = "AK74m SD Mag";
		picture = "\TZK_Texture_4_0_0\Picture\c8x_russ\ak74Mag.paa";
		count = 30;
		initSpeed = 764
		modes[]={"Single","FullAuto"};
		class Single {
			ammo = "Bullet_AK74m_SD_Single_xj400";
			multiplier = 1; burst = 1;
			displayName = "AK74m SD Semi";
			dispersion = 0.00027075;
			sound[]={"\TZK_Sounds_4_0_0\C8X\AK74SDFire.wss",db-25,1};
			soundContinuous = 0;
			reloadTime = 0.092;
			ffCount = 1;
			recoil = AK74m_Recoil_C8X;
			autoFire = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo = "Bullet_AK74m_SD_Auto_xj400";
			multiplier = 1; burst = 1;
			displayName = "AK74m SD Auto";
			dispersion = 0.001083;
			sound[]={"\TZK_Sounds_4_0_0\C8X\AK74SDFire.wss",db-25,1};
			soundContinuous = 0;
			reloadTime = 0.092;
			ffCount = 30;
			recoil = AK74m_Full_Recoil_C8X;
			autoFire = true;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
	};
	class AK74M_1P29_SD_xj400: Riffle {
		displayName = "AK74M 1P29 SD";
		scopeWeapon = 2; scopeMagazine = 0;
		model = "\TZK_Weapon_4_0_0\C8X_russ\C8XAK74M1P29_sd.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\c8x_russ\ak74m1P29_sd.paa";

		reloadMagazineSound[]={"\TZK_Sounds_4_0_0\C8X\ak74reload.wss",0.010316,1};
		drySound[]={"weapons\AK74Dry",db-40,1};
		modelOptics = "\TZK_Weapon_4_0_0\C8X_russ\optic_1P29_sd.p3d";
		optics = 1;
		opticsZoomMin = 0.16;
		opticsZoomMax = 0.16;
		opticsFlare = 0;
		magazines[]={"AK74_SD_Mag_xj400"};
		modes[]={"this","this"};
	};
	class AK74M_GP25_1P29_SD_xj400: GrenadeLauncher {
		displayName = "AK74M/GP25 1P29 SD";
		scopeWeapon = 2; scopeMagazine = 0;
		weaponType = 1;
		picture = "\TZK_Texture_4_0_0\Picture\c8x_russ\ak74m1P29gp25_sd.paa";
		uiPicture = "igrenadier";
		model = "\TZK_Weapon_4_0_0\C8X_russ\C8XAK74MGP251P29_sd.p3d";
		muzzles[] = {"AK74MMuzzle", "AK74M_GP25_1P29_SD_xj400"};
		class AK74MMuzzle: AK74M_1P29_SD_xj400 {};
		class AK74M_GP25_1P29_SD_xj400: GrenadeLauncher {
			displayName = "GP25";
			modelOptics = "\TZK_Weapon_4_0_0\C8X_russ\optic_gl.p3d";
			optics = 1;
			opticsZoomMin = 0.4;
			opticsZoomMax = 0.4;
			reloadMagazineSound[]={"\TZK_Sounds_4_0_0\C8X\east_g_reload.wss",0.010316,1};
			drySound[]={"weapons\AK74Dry",db-40,1};
			magazines[]={"GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow","GP25_Grenade_xj400","GP25_Vest_xj400"};
		}
		canDrop = 1;
	};
	class GP25_Grenade_xj400: GrenadeLauncher {
		cursor = "t_select.paa";
		scopeMagazine = 2; weaponType = 0;
		magazineType = "256";
		ammo = "GP25_Grenade_xj400";
		picture = "\TZK_Texture_4_0_0\Picture\c8x_russ\gp25grenade.paa";
		displayNameMagazine = "GP25 Grenade";
		shortNameMagazine = "GP25 Grenade";
		count = 1;
		initSpeed = 85;
		canDrop = 1;

		displayName = "GP25 Grenade Launcher";
		sound[] = {"\TZK_Sounds_4_0_0\C8X\east_g_fire.wss",1,1};
		reloadTime = 0;
	};
	class GP25_Vest_xj400: GP25_Grenade_xj400 {
		magazineType = 5 * 256;
		picture = "\TZK_Texture_4_0_0\Picture\c8x_russ\vogvest.paa";
		displayNameMagazine = "GP25 Vest";
		shortNameMagazine = "GP25 Vest";
		count = 24;
		initSpeed = 85;
		canDrop = 1;
		reloadMagazinesound[] = {"\TZK_Sounds_4_0_0\C8X\east_gvest_reload.wss",0.010316,1}; // Invalid. This parameter should be defined in muzzle but nowhere else.

		displayName = "GP25 Grenade Launcher";
		sound[] = {"\TZK_Sounds_4_0_0\C8X\east_g_fire.wss",1,1};
		reloadTime = 5;
		reloadsound[] = {"\TZK_Sounds_4_0_0\C8X\east_gvest_reload.wss",0.010316,1};
	};
// Special Sniper Riffle
	// SG551 from JahSG551
	class SG551_xj400: Riffle {
		// Weapon and muzzle here.
		displayName = "SG551";
		scopeWeapon = 2; scopeMagazine = 0;
		model = "\TZK_Weapon_4_0_0\JahSG551\sg551_proxy.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\w_sg551.pac";
		uiPicture = "\misc\isniper_new.paa";

		drysound[] = {"weapons\M16Dry",0.003162,1};
		magazines[]={"SG551_Mag_xj400"};
		modes[]= {"this","this","this"};
		modelOptics = "\TZK_Weapon_4_0_0\JahSG551\sg551_optika.p3d";
		opticsFlare= 1;
		opticsZoomMin = 0.04;
		opticsZoomMax = 0.12;
		distanceZoomMin = 400;
		distanceZoomMax = 80;
		flash = "gunfire";
		flashSize = 5;
	};
	class SG551_Mag_xj400: SG551_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "SG551 Mag";
		shortNameMagazine = "SG551";
		picture = "\TZK_Texture_4_0_0\Picture\m_sg551.pac";
		initSpeed = 938;
		modes[]= {"Single","Burst","Full"};
		class Single {
			ammo = "Bullet_SG551_SingleW_xj400";
			multiplier = 1; burst = 1;
			displayName = "SG551";
			dispersion = 0.0002;
			sound[] = {"\TZK_Sounds_4_0_0\JahSG551\sg551fire.wss",1,1};
			soundContinuous = 0;
			ffCount = 1;
			reloadTime = 0.1;
			recoil = "riffleSilenced";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 200;
			useAction = 0; useActionTitle = "";
		};
		class Burst {
			ammo = "Bullet_SG551_BurstW_xj400";
			multiplier =  1; burst= 3;
			displayName = "SG551 Burst";
			dispersion = 0.0002;
			sound[] = {"\TZK_Sounds_4_0_0\JahSG551\sg551fireb.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = riffleSilenced;
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 200;
			useAction = 0; useActionTitle = "";
		};
		class Full {
			ammo = "Bullet_SG551_BurstW_xj400";
			multiplier =  1; burst= 1;
			displayName =  "SG551 Full Auto";
			dispersion = 0.0008;
			sound[] = {"\TZK_Sounds_4_0_0\JahSG551\sg551fire.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "riffleSilenced";
			autoFire = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 200;
			useAction = 0; useActionTitle = "";
		};
	};
	// VSS from mVSS
	class mVSS_xj400: SVDDragunov {
		// Weapon and muzzle here.
		displayName = "VSS";
		scopeWeapon = 2; scopeMagazine = 0;
		model = "\TZK_Weapon_4_0_0\mVSS\mVSS.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\vss.jpg";

		drysound[] = {"weapons\AK74Dry",0.003162,1};
	//	magazines[]={"mVSS_Mag_xj400"};
		magazines[]={"mVSS_Mag_xj400","VAL_Mag_xj400","VSS_Mag_xj400"}; // Allow they share magazines.
		modes[]= {"this","this"};
		modelOptics = "\TZK_Weapon_4_0_0\mVSS\mVSS_optika.p3d";
		optics = 1;
		opticsZoomMin = 0.08;
		opticsZoomMax = 0.08;
		distanceZoomMin = 400;
		distanceZoomMax = 400;
		flashSize = 0;
	};
	class mVSS_Mag_xj400: mVSS_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
	//	displayNameMagazine = "VSS Mag";
	//	shortNameMagazine = "VSS";
		displayNameMagazine = "9mm Magazine";
		shortNameMagazine = "9mm Mag"; // Pretend this is a VAL magazine.
		picture = "\TZK_Texture_4_0_0\Picture\vssmag.jpg";
	//	count = 10;
		count = 20; // Use VAL as magazine to gain more rounds.
	//	initSpeed = 520; // This value refers to the setting in ICP. However 520 too low and make the optics inaccuracy.
		initSpeed = 938;
		modes[]={"Single","Fullauto"};
		class Single {
			ammo = "Bullet_SP6_SingleE_xj400";
			multiplier = 1; burst = 1;
		//	displayName = "VSS";
			displayName = "9x39 mm Semi";
			dispersion = 0.002;
			sound[] = {"\TZK_Sounds_4_0_0\mVSS\vss.wss",0.000316,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSilenced";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 50;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo = "Bullet_SP6_BurstE_xj400";
			multiplier = 1; burst = 1;
			dispersion = 0.004;
		//	displayName = "VSS Auto";
			displayName = "9x39 mm Auto";
			sound[] = {"\TZK_Sounds_4_0_0\mVSS\vss.wss",0.000316,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "riffleBurst3";
			autoFire = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 100;
			useAction = 0; useActionTitle = "";
		};
	};
	// VAL, VSS from ICP
	class VAL_Mag_xj400: Riffle {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "9mm Magazine";
		shortNameMagazine = "9mm Mag";
		count = 20;
	//	initSpeed = 520; // This value is in 9mmSubSonic bullet defined in ICP as CfgAmmo parameter. However InitSpeed should be magazine's parameter.
		picture = "\TZK_Texture_4_0_0\Picture\ICP_rfwp\m_val.paa";
		InitSpeed = 900; // Default value in class Riffle(MGun)
		modes[]={"Single","Fullauto"};
		class Single  { 
			ammo = "Bullet_9mmsubsonic_SingleE_xj400";
			multiplier = 1; burst = 1;
			displayName = "9x39 mm Semi";
			dispersion = 0.0003;
			sound[]={"\TZK_Sounds_4_0_0\ICP_rfwp\valfire.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto  { 
			ammo = "Bullet_9mmsubsonic_BurstE_xj400";
			multiplier = 1; burst = 1;
			dispersion = 0.001;
			displayName = "9x39 mm Auto";
			sound[]={"\TZK_Sounds_4_0_0\ICP_rfwp\valfire.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 20;
			recoil = "riffleSingle";
			autoFire = 1;
			aiRateOfFire = 0.7;
			aiRateOfFireDistance = 100;
			useAction = 0;  useActionTitle = "";
		};  
	};
	class VAL_xj400: VAL_Mag_xj400 { 
		displayName = "AS VAL";
		scopeWeapon = 2; scopeMagazine = 0;
		model = "\TZK_Weapon_4_0_0\ICP_rfwp\icp_val.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\ICP_rfwp\w_val.paa";

		reloadMagazineSound[]={"\TZK_Sounds_4_0_0\ICP_rfwp\valreload.wss",0.010316,1};
		modelOptics = "\TZK_Weapon_4_0_0\ICP_rfwp\opt_val.p3d";
		optics = 1;
      	opticsZoomMin = 0.28;
		opticsZoomMax = 0.28;
      	distanceZoomMin = 400;
		distanceZoomMax = 400;
		flashSize = 0;
		drySound[]={"weapons\AK74Dry",1,1};
	//	magazines[]={"VAL_Mag_xj400"};
		magazines[]={"mVSS_Mag_xj400","VAL_Mag_xj400","VSS_Mag_xj400"}; // Allow they share magazines.
	};
	class VALPSO_xj400: VAL_xj400 { 
		displayName = "AS VAL/PSO-1";
		model = "\TZK_Weapon_4_0_0\ICP_rfwp\icp_valpso.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\ICP_rfwp\w_valpso.paa";
		modelOptics = "\TZK_Weapon_4_0_0\ICP_rfwp\opt_vss.p3d";

      	opticsZoomMin = 0.05;
		opticsZoomMax = 0.05;
      	distanceZoomMin = 600;
		distanceZoomMax = 600;
	};
	class VSS_Mag_xj400: Riffle {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "9mm Magazine";
		shortNameMagazine = "9mm Mag";
		picture = "\TZK_Texture_4_0_0\Picture\ICP_rfwp\m_vss.paa";
		count = 10;
	//	initSpeed = 520; // This value is in 9mmSubSonic bullet defined in ICP as CfgAmmo parameter. However InitSpeed should be magazine's parameter.
		modes[]={"Single","Fullauto"};
		class Single { 
			ammo = "Bullet_9mmsubsonic_SingleE_xj400";
			multiplier = 1; burst = 1;
			displayName = "9x39 mm Semi";
			dispersion = 0.0003;
			sound[]={"\TZK_Sounds_4_0_0\ICP_rfwp\valfire.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto  { 
			ammo = "Bullet_9mmsubsonic_BurstE_xj400";
			multiplier = 1; burst = 1;
			dispersion = 0.001;
			displayName = "9x39 mm Auto";
			sound[]={"\TZK_Sounds_4_0_0\ICP_rfwp\valfire.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 10;
			recoil = "riffleSingle";
			autoFire = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 200;
			useAction = 0; useActionTitle = "";
		};  
	};
	class VSS_xj400: VSS_Mag_xj400 {
		displayName = "VSS Vintorez";
		scopeWeapon = 2; scopeMagazine = 0;
		model = "\TZK_Weapon_4_0_0\ICP_rfwp\icp_vss.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\ICP_rfwp\w_vss.paa";
		modelOptics = "\TZK_Weapon_4_0_0\ICP_rfwp\opt_vss.p3d";

		reloadMagazineSound[]={"\TZK_Sounds_4_0_0\ICP_rfwp\valreload.wss",0.010316,1};
		optics = 1;
      	opticsZoomMin = 0.05;
		opticsZoomMax = 0.05;
      	distanceZoomMin = 600;
		distanceZoomMax = 600;
		flashSize = 0;

		drySound[]={"weapons\AK74Dry",1,1};
	//	magazines[]={"VSS_Mag_xj400"};
		magazines[]={"mVSS_Mag_xj400","VAL_Mag_xj400","VSS_Mag_xj400"}; // Allow they share magazines.
	};
	// M24 from LSR
	class M24_xj400: M21 {
		displayName = "M24 SWS";
		scopeWeapon = 2; scopeMagazine = 0;
		model = "\TZK_Weapon_4_0_0\LSR_uswp\LSR_m24.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\w_m24.paa";
		uipicture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\isniper.paa";
		modelOptics = "\TZK_Weapon_4_0_0\LSR_uswp\opt_m24.p3d";
		optics = 1;
		opticsZoomMin = 0.07;
		opticsZoomMax = 0.07;

		drysound[] = {"weapons\m16dry",db-70,1};
		reloadSound[] = {"\TZK_Sounds_4_0_0\LSR\m24boltload.wss",0.010316,1};
		backgroundReload = 1;
		maxLeadSpeed = 50;
		magazines[]={"M24_Mag_xj400","HuntingRifleMag"};
		modes[] =  {"Single"};
		reloadMagazineSound[] = {"\TZK_Sounds_4_0_0\LSR\m24reload.wss",0.010316,1};
		canDrop = 1;
	};
	class M24_Mag_xj400: M24_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "7.62x51 5 rd. Clip";
		shortNameMagazine = "7.62x51 5 rd. Clip";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_M24.paa";
   		initspeed = 950;
		count = 5;
		modes[] =  {"Single"};
		class Single {
			ammo = "Bullet_M24_xj400";
			multiplier = 1; burst = 1;
			displayName = "7.62x51 Match";
			soundContinuous =  0;
			sound[] = {"\TZK_Sounds_4_0_0\LSR\M24Fire.wss",db+10,1};
			ffCount = 1;
			dispersion = 0.00003;
			reloadTime = 1.1;
			autofire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
			recoil = "sniperSingle";
		};

	};
	// SVDS from ICP
	class SVDS_Mag_xj400: SVDDragunov {
		displayNameMagazine = "7.62x54R (SVD) Mag";
		shortNameMagazine = "7.62x54R";
		scopeWeapon = 0; scopeMagazine = 2;
		picture = "\TZK_Texture_4_0_0\Picture\ICP_rfwp\m_svd.paa";
   		initspeed = 1650;
		modes[]={"Single"};
		class Single {
			ammo = "Bullet_SVD_xj400";
			multiplier = 1; burst = 1;
			displayName = "7.62x54R";
			dispersion = 0.00002;
			sound[]={"\TZK_Sounds_4_0_0\ICP_rfwp\svdfire.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.4;
			ffCount = 1;
			recoil = "sniperSingle";
			recoilFixed = "sniperSingle";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			useAction = 0; useActionTitle = "";
		};
	};
	class SVDS_xj400: SVDS_Mag_xj400 {
		displayName = "SVD-S";
		scopeWeapon = 2; scopeMagazine = 0;
		model = "\TZK_Weapon_4_0_0\ICP_rfwp\ICP_svds.p3d";
		modelOptics = "\TZK_Weapon_4_0_0\ICP_rfwp\opt_svd.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\ICP_rfwp\w_svds.paa";

		optics = 1;
		opticsZoomMin = 0.05;
		opticsZoomMax = 0.05;
		distanceZoomMin = 600;
		distanceZoomMax = 600;
		drySound[]={"weapons\AK74Dry",1,1};
		reloadMagazineSound[]={"\TZK_Sounds_4_0_0\ICP_rfwp\svdreload.wss",1,1};
		modes[]={"Single"};
		magazines[]={"SVDS_Mag_xj400"};
	};
	// M82 from LSR
	class M82A1_xj400: M21 {
		displayName = "M82A1";
		scopeWeapon = 2; scopeMagazine = 0;
		drysound[] = {"weapons\M16dry",db-40,1};
		model = "\TZK_Weapon_4_0_0\LSR_uswp\lsr_m82.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\w_m82a1.paa";
		modelOptics = "\TZK_Weapon_4_0_0\LSR_uswp\opt_mildot_sd.p3d";
		optics = 1;
		opticsFlare = 0;
		opticsZoomMin = 0.0205;
		opticsZoomMax = 0.0205;
		magazines[]={"M82A1_AP_Mag_xj400","M82A1_IT_Mag_xj400", "M82A1_Mag_xj400"};
		reloadMagazinesound[] = {"\TZK_Sounds_4_0_0\LSR\M16reload.wss",0.010316,1};
	//	modes[]={"Single"};
		modes[]={"AP", "IT"};
	};
	class M82A1_AP_Mag_xj400: M82A1_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "12.7 BMG 10 rd. AP Mag";
		shortNameMagazine = "12.7 BMG 10 rd. AP Mag";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_m82.paa";
		count = 10;
		initSpeed = 1555;
	//	modes[]={"Single"};
		modes[]={"Single","Single"};
		class Single {
			ammo = "Bullet_M82_AP_xj400";
			multiplier = 1; burst = 1;
			displayName = "12.7x99 AP Round";
			dispersion = 0.0000005;
			sound[] = {"\TZK_Sounds_4_0_0\LSR\m82fire.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.175;
			ffCount = 1;
			recoil = "M82_Recoil_LSR";
			autoFire = 0;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			useAction = 0; useActionTitle = "";
		};
	};
	class M82A1_IT_Mag_xj400: M82A1_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "12.7 BMG 10 rd. IT Mag";
		shortNameMagazine = "12.7 BMG 10 rd. IT Mag";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_m82.paa";
		count = 10;
		initSpeed = 1555;
	//	modes[]={"Single"};
		modes[]={"Single","Single"};
		class Single {
			ammo = "Bullet_M82_IT_xj400";
			multiplier = 1; burst = 1;
			displayName = "12.7x99 IT Round";
			dispersion = 0.0000005;
			sound[] = {"\TZK_Sounds_4_0_0\LSR\m82fire.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.175;
			ffCount = 1;
			recoil = "M82_Recoil_LSR";
			autoFire = 0;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			useAction = 0; useActionTitle = "";
		};
	};
	class M82A1_Mag_xj400: M82A1_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "12.7 BMG 10 rd. Mag";
		shortNameMagazine = "12.7 BMG 10 rd. Mag";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_m82.paa";
		count = 10;
		initSpeed = 1555;
		modes[]={"AP","IT"};
		class AP {
			ammo = "Bullet_M82_AP_xj400";
			multiplier = 1; burst = 1;
			displayName = "12.7x99 AP Round";
			dispersion = 0.0000005;
			sound[] = {"\TZK_Sounds_4_0_0\LSR\m82fire.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.175;
			ffCount = 1;
			recoil = "M82_Recoil_LSR";
			autoFire = 0;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			useAction = 0; useActionTitle = "";
		};
		class IT {
			ammo = "Bullet_M82_IT_xj400";
			multiplier = 1; burst = 1;
			displayName = "12.7x99 IT Round";
			dispersion = 0.0000005;
			sound[] = {"\TZK_Sounds_4_0_0\LSR\m82fire.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.175;
			ffCount = 1;
			recoil = "M82_Recoil_LSR";
			autoFire = 0;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			useAction = 0; useActionTitle = "";
		};
	};
	// KSVK from KSVK(pbo)
	class KSVK_xj400: SniperRiffle {
		displayName = "KSVK 12.7";
		scopeWeapon = 2; scopeMagazine = 0;
		weaponType = "1";
		model = "\TZK_Weapon_4_0_0\KSVK\KSVK.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\KSVK.paa";

		modelOptics = "\TZK_Weapon_4_0_0\KSVK\KSVKscope.p3d";
		optics = 1;
		opticsZoomMin = 0.02; 
		opticsZoomMax = 0.1;
		distanceZoomMin = 400;
		distanceZoomMax = 400;
	//	flashSize = 2.5;
		aiDispersionCoefX = 0.000009;
		aiDispersionCoefY = 0.000007;
		magazineReloadTime = 2.5;
		magazines[]={"KSVK_Mag_xj400"};
		autoReload = 0;
		drySound[]={"weapons\AK74Dry",1,1};

		division = 1; // Strange definition. Only in KozliceShell can one see this parameter. And no references in BIKI.
		maxLeadSpeed = 870; // Not sure this parameter for which grade of weapon yet.
		enableAttack = 1;
	};
	class KSVK_Mag_xj400: KSVK_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "KSVKmag";
		shortNameMagazine = "KSVKmag";
		picture = "\TZK_Texture_4_0_0\Picture\KSVKmag.paa";
		count = 5;
		initSpeed = 870;

		ammo = "Bullet_KSVK_xj400";
		multiplier = 1; burst = 1;
		displayName = "KSVK 12.7";
		dispersion = 0.0007;
		sound[]={"\TZK_Sounds_4_0_0\KSVK\ksvksingle.wss",1,1};
		soundContinuous = 0;
		reloadTime = 1.7;
		recoil = "KSVK_Recoil_KSVK";
		autoFire = 0;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1100;
		useAction = 0; useActionTitle = "";
	};
// MachineGun
	// M249SPW ACOG (SD) from LSR
	class M249SPW_ACOG_xj400: MachineGun7_6Manual {
		displayName = "M249 SPW ACOG";
		weaponType = 1;
		scopeWeapon = 2; scopeMagazine = 0;
		model = "\TZK_Weapon_4_0_0\LSR_uswp\LSR_m249spw_acog.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\w_spw.paa";
		uipicture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\ismg.paa";

		modelOptics = "\TZK_Weapon_4_0_0\LSR_uswp\opt_acog.p3d";
		optics = 1;
		opticsFlare = 0;
		opticsZoomMin = 0.16;
		opticsZoomMax = 0.16;
		reloadSound[] = {"\TZK_Sounds_4_0_0\LSR\m240belt.wss",0.010316,1};
		backgroundReload = 1;
		magazines[]={"M249SPW_Mag_xj400"};
		modes[] = {"Fullauto"};
		reloadMagazinesound[] = {"\TZK_Sounds_4_0_0\LSR\m249reload.wss",0.010316,1};
	};
	class M249SPW_Mag_xj400: M249SPW_ACOG_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "5.56x45 200 rd. box";
		shortNameMagazine = "5.56x45 200 rd. box";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_m249.paa";
		magazineType = "2 * 256";
		count = 200;
		modes[] = {"Fullauto"};
		class Fullauto {
			ammo = "Bullet_M249_xj400";
			multiplier = 1; burst = 1;
			displayName = "5,56x45";
			sound[] = {"\TZK_Sounds_4_0_0\LSR\M249Fire.wss",db7,1};
			soundContinuous = 0;
			reloadTime = 0.085;
			ffCount = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			dispersion = 0.0025;
			aiDispersionCoefX = 5; // dispersion used to simulate horizontal burst
			maxLeadSpeed = 300;
			recoil = "M249_750_Recoil_LSR";
			autoFire = 1;
			useAction = 0; useActionTitle = "";
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
	};
	class M249SPW_ACOG_SD_xj400: M249SPW_ACOG_xj400 {
		displayName = "M249 SPW ACOG SD";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\w_spw_sd.paa";

		// It's possible to ask M249SPW and M249SPW_SD using same model with make use of hiddenSelections[], including some part of zasleh.
		model = "\TZK_Weapon_4_0_0\LSR_uswp\LSR_m249spw_acog_sd.p3d";
		opticsFlare = 0;
		magazines[]={"M249SPW_SD_Mag_xj400"};
		modes[] = {"Fullauto"};
	};
	class M249SPW_SD_Mag_xj400: M249SPW_ACOG_SD_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "5.56x45 SD 200 rd. box";
		shortNameMagazine = "5.56x45 SD 200 rd. box";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_m249sd.paa";
		magazineType = "2 * 256";
		count = 200;
		modes[] = {"Fullauto"};
		class Fullauto {
			ammo = "Bullet_M249_SD_xj400";
			multiplier = 1; burst = 1;
			displayName = "5,56x45 SD";
			sound[] = {"\TZK_Sounds_4_0_0\LSR\M4fires.wss",db7,1};
			soundContinuous = 0;
			reloadTime = 0.085;
			ffCount = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			dispersion = 0.0025;
			aiDispersionCoefX = 5; // dispersion used to simulate horizontal burst
			maxLeadSpeed = 300;
			recoil = "M249_750_Recoil_LSR";
			autoFire = 1;
			useAction = 0; useActionTitle = "";
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
		};
	};
	// RPK74 1P29 (SD) from C8X
	class RPK74_Mag_xj400: AK74 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "RPK74 Mag";
		shortNameMagazine = "RPK74 Mag";
		picture = "\TZK_Texture_4_0_0\Picture\c8x_russ\rpk74Mag.paa";
		count = 45;
		initSpeed = 899;

		modes[]={"Single","FullAuto"};
		class Single {
			ammo = "Bullet_RPK74_Single_xj400";
			multiplier = 1; burst = 1;
			displayName = "RPK74 Semi";
			dispersion = 0.0004;
			sound[]={"\TZK_Sounds_4_0_0\C8X\AK74Fire.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.092;
			ffCount = 1;
			recoil = RPK74_Recoil_C8X;
			autoFire = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo = "Bullet_RPK74_Full_xj400";
			multiplier = 1; burst = 1;
			displayName = "RPK74 Auto";
			dispersion = 0.001;
			sound[]={"\TZK_Sounds_4_0_0\C8X\AK74Fire.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.092;
			ffCount = 30;
			recoil = RPK74_Full_Recoil_C8X;
			autoFire = true;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
	};
	class RPK74M_1P29_xj400: Riffle {
		displayName = "RPK74M 1P29";
		scopeWeapon = 2; scopeMagazine = 0;
		model = "\TZK_Weapon_4_0_0\C8X_russ\C8XRPK74M1P29.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\c8x_russ\rpk741P29.paa";
		uiPicture = "ismg";

		reloadMagazineSound[]={"\TZK_Sounds_4_0_0\C8X\rpk74reload.wss",0.010316,1};
		drySound[]={"weapons\AK74Dry",db-40,1};
		modelOptics = "\TZK_Weapon_4_0_0\C8X_russ\optic_1P29_def.p3d";
		optics = 1;
		opticsZoomMin = 0.16;
		opticsZoomMax = 0.16;
		opticsFlare = 0;
		magazines[]={"RPK74_Mag_xj400"};
		modes[]={"Single","FullAuto"};
	};
	class RPK74_SD_Mag_xj400: RPK74_Mag_xj400 {
		displayNameMagazine = "RPK74 SD Mag";
		shortNameMagazine = "RPK74 SD Mag";

		modes[]={"Single","FullAuto"};
		class Single {
			ammo = "Bullet_RPK74_SD_Single_xj400";
			multiplier = 1; burst = 1;
			displayName = "RPK74 SD Semi";
			dispersion = 0.0004;
			sound[]={"\TZK_Sounds_4_0_0\C8X\AK74SDFire.wss",db-25,1};
			soundContinuous = 0;
			reloadTime = 0.092;
			ffCount = 1;
			recoil = RPK74_Recoil_C8X;
			autoFire = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo = "Bullet_RPK74_SD_Full_xj400";
			multiplier = 1; burst = 1;
			displayName = "RPK74 SD Auto";
			dispersion = 0.001;
			sound[]={"\TZK_Sounds_4_0_0\C8X\AK74SDFire.wss",db-25,1};
			soundContinuous = 0;
			reloadTime = 0.092;
			ffCount = 30;
			recoil = RPK74_Full_Recoil_C8X;
			autoFire = true;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
	};
	class RPK74M_1P29_SD_xj400: RPK74M_1P29_xj400 {
		displayName = "RPK74M 1P29 SD";
		model = "\TZK_Weapon_4_0_0\C8X_russ\C8XRPK74M1P29_sd.p3d";

		magazines[]={"RPK74_SD_Mag_xj400"};
		modes[]={"Single","FullAuto"};
	};
	// M240 from LSR
	class M240_M145_xj400: MachineGun7_6Manual {
		displayName = "M240B/M145";
		weaponType = "1 + 16";
		scopeWeapon = 2; scopeMagazine = 0;
		model = "\TZK_Weapon_4_0_0\LSR_uswp\LSR_m240_m145.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\w_m240opt.paa";
		uipicture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\ismg.paa";
		modelOptics = "\TZK_Weapon_4_0_0\LSR_uswp\opt_m145.p3d";
		optics = 1;
		opticsFlare = 0;
		opticsZoomMin = 0.2;
		opticsZoomMax = 0.2;
		distanceZoomMin = 300;
		distanceZoomMax = 300;

		reloadSound[] = {"\TZK_Sounds_4_0_0\LSR\m240belt.wss",0.010316,1};
		backgroundReload = 1;
		magazines[]={"M240_Mag_xj400"};
		modes[] = {"Fullauto"};
		reloadMagazinesound[] = {"\TZK_Sounds_4_0_0\LSR\m249reload.wss",0.010316,1};
	};
	class M240_Mag_xj400: M240_M145_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "7.62x51 100 rd. box";
		shortNameMagazine = "7.62x51 100 rd. box";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_m240.paa";
		magazineType = "2 * 256";
		count = 100;
		modes[] = {"Fullauto"};
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
			dispersion = 0.0025;
			aiDispersionCoefX = 5; // dispersion used to simulate horizontal burst
			maxLeadSpeed = 300;
			recoil = "M249_750_Recoil_LSR";
			autoFire = 1;
			useAction = 0; useActionTitle = "";
			aiRateOfFire = 0.075;
			aiRateOfFireDistance = 1000;
		};
	};
	// M60e4(ACOG) from LSR
	class M60e4_xj400: MachineGun7_6Manual {
		displayName = "M60e4";
		scopeWeapon = 2; scopeMagazine = 2;
		model = "\TZK_Weapon_4_0_0\LSR_uswp\LSR_m60e4.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\w_m60e4.paa";
		uipicture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\ismg.paa";

		modelOptics = "\TZK_Weapon_4_0_0\LSR_uswp\opt_acog_m60e4.p3d";
		optics = 1;
		opticsFlare = 0;
		opticsZoomMin = 0.16;
		opticsZoomMax = 0.16;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		reloadSound[] = {"\TZK_Sounds_4_0_0\LSR\m240belt.wss",0.010316,1};
		backgroundReload = 1;
		magazines[]={"M60_Mag_xj400","M60"};
		modes[] = {"Fullauto"};
		reloadMagazinesound[] = {"\TZK_Sounds_4_0_0\LSR\m249reload.wss",0.010316,1};
	};
	class M60_Mag_xj400: M60e4_xj400 {
		displayNameMagazine = "7.62x51 100 rd. box";
		shortNameMagazine = "7.62x51 100 rd. box";
		picture = "\TZK_Texture_4_0_0\Picture\LSR_uswp\m_m60.paa";
		magazineType = "2 * 256";
		count = 100;
		modes[] = {"Fullauto"};
		class Fullauto {
			ammo = "Bullet_M240_xj400";
			multiplier = 1; burst = 1;
			displayName = "7,62x51";
			sound[] = {"\TZK_Sounds_4_0_0\LSR\M60fire.wss",db7,1};
			soundContinuous = 0;
			reloadTime = 0.109;
			ffCount = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			dispersion = 0.0025;
			aiDispersionCoefX = 5;// dispersion used to simulate horizontal burst
			maxLeadSpeed = 300;
			recoil = "M249_750_Recoil_LSR";
			autoFire = 1;
			aiRateOfFire = 0.075;
			aiRateOfFireDistance = 1000;
			useAction= 0; useActionTitle = "";
		};
	};
	// PKM(1P29) from ICP
	class PKM_Mag_xj400: MachineGun7_6Manual {
		scopeWeapon = 0; scopeMagazine = 2;
		magazineType = "2 * 256";
		displayNameMagazine = "PKM Box";
		shortNameMagazine = "PKM";
		picture = "\TZK_Texture_4_0_0\Picture\ICP_rfwp\m_pk.paa";
		count = 200;
		canDrop = 1;
		// Mode parameters
		displayName = "7.62x54"; 
		ammo = "Bullet_PKM_xj400";
		sound[]={"\TZK_Sounds_4_0_0\ICP_rfwp\pkfire.wss",2,1};
		soundContinuous = 0;
		initspeed = 1100;
		reloadTime = 0.08;
		recoil = "PKM_Recoil_ICP";
		autoFire = true;
		aiRateOfFire = 0.015;
		aiRateOfFireDistance = 1000;
		useAction = 0;
		useActionTitle = "";
	};
	class PKM_1P29_xj400: PKM_Mag_xj400 {
		displayName = "PKM 1P29";
		scopeWeapon = 2; scopeMagazine = 0;
		weaponType = "1 + 16";
		picture = "\TZK_Texture_4_0_0\Picture\ICP_rfwp\w_pkm.paa";
		uiPicture = "ismg";
		model = "\TZK_Weapon_4_0_0\ICP_rfwp\ICP_pkm_1p29.p3d";
		muzzles[]={"PKM_1P29_xj400"};
		canDrop = 1;

		class PKM_1P29_xj400: PKM_Mag_xj400 {
			drySound[]={"weapons\AK74dry",db-40,1};
			reloadMagazineSound[]={"\TZK_Sounds_4_0_0\ICP_rfwp\pkreload.wss",0.05,1};
		//	modelOptics = "\TZK_Weapon_4_0_0\ICP_rfwp\opt_pkm.p3d";
			modelOptics = "\TZK_Weapon_4_0_0\C8X_russ\optic_1P29_def.p3d";
			optics = 1;
			opticsZoomMin = 0.16;
			opticsZoomMax = 0.16;
   			distanceZoomMin = 400;
   			distanceZoomMax = 400;
			magazines[]={"PKM_Mag_xj400","PK"};
		};
	};


	// 4*Mag's AT/AA Magazine(Mode) & Launcher(Muzzle)
	class CarlGustavIn4_xj400: CarlGustavLauncher {
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_carlgustavlauncher.paa";
		displayNameMagazine = "Carl Gustav*";
		shortNameMagazine = "Carl Gustav*";

		displayName = "Carl Gustav*";
	};
	class AT4In4_xj400: AT4Launcher {
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_at4launcher.paa";
		displayNameMagazine = "AT4*";
		shortNameMagazine = "AT4*";

		displayName = "AT4*";
	};
	class AAIn4_xj400: AALauncher {
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_aalauncher.paa";
		displayNameMagazine = "AA*";
		shortNameMagazine = "AA*";

		displayName = "AA*";
	};
	class 9k32In4_xj400: 9K32Launcher {
		magazineType = "4 * 256";
		picture = "\dtaExt\equip\m\m_9k32launcher.paa";
		displayNameMagazine = "9k32 Strela*";
		shortNameMagazine = "9k32*";

		displayName = "9k32*";
	};
	class HyperLauncher_xj400: CarlGustavLauncher {
		displayName = "Hyper Launcher";
		magazines[]={"CarlGustavIn4_xj400","AAIn4_xj400","AT4In4_xj400","9k32In4_xj400","CarlGustavLauncher","AALauncher","AT4Launcher","9K32Launcher","LAWLauncher","RPGLauncher"};
		picture = "\dtaExt\equip\w\w_carlgustavlauncher.paa";
		canlock = 2;
	};
	// SMAW and RPG16d from SUCH
	class SMAWLauncher_xj400: LAWLauncher {
		displayName = "SMAW";
		model = "\TZK_Weapon_4_0_0\SUCH\SUCHsmawE.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\SUCHSMAW\gear1.paa";
		uipicture = "\TZK_Texture_4_0_0\Picture\SUCHSMAW\logosmaw.paa";
		
		modelOptics = "\TZK_Weapon_4_0_0\SUCH\SUCHsmawO.p3d";
		reloadMagazineSound[]={"\TZK_Sounds_4_0_0\SUCHSMAW\smaw_reload.wss",0.010316,1};
		magazines[]={"SMAW_AT_xj400","SMAW_HE_xj400"};
		
		shortNameMagazine = "SMAW"; // magazine parameters
	// 	initSpeed = 57;  // Mako - Disabled to use default LAW values
		sound[]={"\TZK_Sounds_4_0_0\SUCHSMAW\smaw_fire.wss",db17,1}; // Mode parameters
	};
	class SMAW_AT_xj400: SMAWLauncher_xj400 {
		modelSpecial = "\TZK_Weapon_4_0_0\SUCH\SUCHsmawLOAD.p3d";
		modelMagazine = "\TZK_Weapon_4_0_0\SUCH\SUCHtube.p3d";		
		picture = "\TZK_Texture_4_0_0\Picture\SUCHSMAW\geard2.paa";
		magazineType = "3 * 256";
		displayNameMagazine = "SMAW (HEAA AT)";
		
		ammo = "SMAW_Ammo_xj400";
		displayName = "SMAW (HEAA AT)";
	};
	class SMAW_HE_xj400: SMAWLauncher_xj400 {
		modelSpecial = "\TZK_Weapon_4_0_0\SUCH\SUCHsmawLOAD.p3d";
		modelMagazine = "\TZK_Weapon_4_0_0\SUCH\SUCHtube.p3d";		
		picture = "\TZK_Texture_4_0_0\Picture\SUCHSMAW\geard3.paa";
		magazineType = "1 * 256";
		displayNameMagazine = "SMAW (HEDP HE)";
		
		ammo = "SMAW_Ammo_HE_xj400";
		displayName = "SMAW (HEDP HE)";
	};
	class RPG16dLauncher_xj400: LAWLauncher {
		displayName = "RPG-16d";
		model = "\TZK_Weapon_4_0_0\SUCH\SUCHrpg16dE.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\SUCHRPG16d\geard1.paa";
		uipicture = "\TZK_Texture_4_0_0\Picture\SUCHRPG16d\logorpg16d.paa";
		
		
		modelOptics = "\TZK_Weapon_4_0_0\SUCH\SUCHrpg16O.p3d";
		reloadMagazineSound[]={"\TZK_Sounds_4_0_0\SUCHRPG16d\rpg_reload.wss",0.010316,1};
		magazines[]={"RPG16d_AT_xj400","RPG16d_HE_xj400"};
		canDrop = 1;		
		
		shortNameMagazine = "RPG Tandem Missle"; // Magazine parameters
	// 	initSpeed = 58; // Mako - Disabled to use default LAW values
		
		sound[]={"\TZK_Sounds_4_0_0\SUCHRPG16d\fire.wss",db18,1}; // Mode parameters
	};
	class RPG16d_AT_xj400: RPG16dLauncher_xj400 {
		modelSpecial = "\TZK_Weapon_4_0_0\SUCH\SUCHrpg16d.p3d";
		modelMagazine = "\TZK_Weapon_4_0_0\SUCH\SUCHRocket.p3d";		
		picture = "\TZK_Texture_4_0_0\Picture\SUCHRPG16d\geard2.paa";
		magazineType = "3 * 256";
		displayNameMagazine = "RPG-16d (AT Rocket)";
		
		ammo = "RPG16d_Ammo_xj400";
		displayName = "RPG-16d (AT Rocket)";
	};
	class RPG16d_HE_xj400: RPG16dLauncher_xj400 {
		modelSpecial = "\TZK_Weapon_4_0_0\SUCH\SUCHrpg16dHE.p3d";
		modelMagazine = "\TZK_Weapon_4_0_0\SUCH\SUCHRocketHE.p3d";		
		picture = "\TZK_Texture_4_0_0\Picture\SUCHRPG16d\geard3.paa";
		magazineType = "1 * 256";
		displayNameMagazine = "RPG-16d (HE Rocket)";
		
		ammo = "RPG16d_Ammo_HE_xj400";
		displayName = "RPG-16d (HE Rocket)";
		canLock = 2;
	};

	// Javelin from SUCH
	class JavelinLauncher_xj400: AALauncher {
		model = "\TZK_Weapon_4_0_0\SUCH\SUCHjavelinE.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\SUCHSJAV\gear1.paa";
		uipicture = "\TZK_Texture_4_0_0\Picture\SUCHSJAV\javelinlogo.paa";

		displayName = "Javelin Launcher";

		modelOptics = "\TZK_Weapon_4_0_0\SUCH\optic_jav.p3d";
		canDrop = 1;
		reloadMagazineSound[]={"\TZK_Sounds_4_0_0\SUCHSJAV\jav_reload.wss",0.010316,1};
		magazines[]={"JavelinLauncher_Mag_xj400","JavelinLauncher_Weak_Mag_xj400"};
		dexterity = 0.9;  // Mako - Makes AI slow at Aiming
		opticsZoomMin = 0.04;
		opticsZoomMax = 0.12;
		distanceZoomMin = 40; // experiment to make AI fire it up
		distanceZoomMax = 80;

		maxLeadSpeed = 1000;
	};
	class JavelinLauncher_Mag_xj400: JavelinLauncher_xj400 {
		modelSpecial = "\TZK_Weapon_4_0_0\SUCH\SUCHjavelin.p3d";
		modelMagazine = "\TZK_Weapon_4_0_0\SUCH\SUCHjavG.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\SUCHSJAV\gear2.paa";
		displayNameMagazine = "Javelin Missile";
		shortNameMagazine = "Javelin";
		count = 1;
		initSpeed = 10;

		ammo = "Javelin_Ammo_xj400";
		displayName = "Javelin Launcher";
		magazineType = "6 * 256";
		sound[]={"\TZK_Sounds_4_0_0\SUCHSJAV\javelin_fire.wss",db17,1};
		aiRateOfFire = 20; // Slow Rate of Fire for AI.
		aiRateOfFireDistance = 0;
	};
	class JavelinLauncher_Weak_Mag_xj400: JavelinLauncher_Mag_xj400 {
		ammo = "Javelin_Ammo_Weak_xj400";
		magazineType = "3 * 256";
	};


	// Modified Mortar and GrenadeLauncher(For AI Only. Players surely know how to use them hence unnecessary to modify for player)
	class MortarRapid_xj400: Mortar {
		picture = "\dtaExt\equip\m\m_mortar.paa";
	//	InitSpeed = 300; // accuracy too low with InitSpeed = 300 and aiDispersionCoefY = 1
		InitSpeed = 200;
		modes[] = {"this"};
	};
	class MortarM16_xj400: Mortar {
		// For M16 with only 1 modes.
		picture = "\dtaExt\equip\m\m_mortar.paa";
		modes[] = {"this"};
	};
	class MortarAK74_xj400: Mortar {
		// For AK74
		modelSpecial = "ak_74_mortar_proxy"; // Magazine Parameter.
		picture = "\dtaExt\equip\m\m_mortar.paa";
		modes[] = {"this"};
	};
	class MortarAK47_xj400: MortarAK74_xj400 {
		modelSpecial = "ak_47_mortar_proxy"; // Magazine Parameter.
	};
/*	class M16MortarLauncher {
		isBinocular = 0;
		isNvg = 0;
		scopeWeapon = 2;
		scopeMagazine = 0;
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "M16 Mortar";
		model = "m16_proxy";
		picture = "\dtaExt\equip\w\w_m16.paa";
		uiPicture = "ivojak";
		muzzles[] = {"M16Muzzle","MortarMuzzle"};
		canDrop = 1;
		class M16Muzzle: M16 {
			magazines[]={"M16"};
		};
		class MortarMuzzle: M16 {
			displayName = "Mortar Launcher";
			aiDispersionCoefY = 2;
			magazines[]={"MortarRapid_xj400","Mortar"};
			modes[] = {"this"};
		};
	};	*/
	// Classes following as Mortar/GrenadeLauncher are defined in form that, it's className used as weapon, muzzle, magazine's name.
	class M16MortarLauncher_TZK_xj400: MortarRapid_xj400 {
		isBinocular = 0;
		isNvg = 0;
		scopeWeapon = 2; // Is Weapon
		scopeMagazine = 2; // Is Magazine
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "M16 Mortar"; // Weapon Name
		model = "m16_proxy";
	//	picture = "\dtaExt\equip\m\m_mortar.paa";
		picture = ""; // MOD used modified DTA\DTAEXT
		uiPicture = "ivojak";
		muzzles[] = {"M16Muzzle","M16MortarLauncher_TZK_xj400"};
		canDrop = 1;
		class M16Muzzle: M16 {
			magazines[]={"M16"};
		};
		class M16MortarLauncher_TZK_xj400: M16 {
			displayName = "Mortar Launcher"; // Muzzle Name
			aiDispersionCoefY = 2;
			magazines[]={"M16MortarLauncher_TZK_xj400","MortarM16_xj400"};
			modes[] = {"this"}; // Launcher has only 1 mode.
		};
	};
	class AK47MortarLauncher_TZK_xj400: MortarRapid_xj400 {
		isBinocular = 0;
		isNvg = 0;
		scopeWeapon = 2; // Is Weapon
		scopeMagazine = 2; // Is Magazine
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "AK47 Mortar"; // Weapon Name
		model = "AK_47_proxy";
	//	picture = "\dtaExt\equip\m\m_mortar.paa";
		picture = ""; // MOD used modified DTA\DTAEXT
		uiPicture = "ivojak";
		muzzles[] = {"AK47Muzzle","AK47MortarLauncher_TZK_xj400"};
		canDrop = 1;
		class AK47Muzzle: AK47 {
			magazines[]={"AK47"};
		};
		class AK47MortarLauncher_TZK_xj400: AK47 {
			displayName = "Mortar Launcher"; // Muzzle Name
			aiDispersionCoefY = 2;
			magazines[]={"AK47MortarLauncher_TZK_xj400","MortarAK47_xj400"};
			modes[] = {"this"}; // Launcher has only 1 mode.
		};
		modelSpecial = "ak_47_mortar_proxy"; // Magazine Parameter.
	};
	class AK74MortarLauncher_TZK_xj400: MortarRapid_xj400 {
		isBinocular = 0;
		isNvg = 0;
		scopeWeapon = 2; // Is Weapon
		scopeMagazine = 2; // Is Magazine
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "AK74 Mortar"; // Weapon Name
		model = "AK_74_proxy";
	//	picture = "\dtaExt\equip\m\m_mortar.paa";
		picture = ""; // MOD used modified DTA\DTAEXT
		uiPicture = "ivojak";
		muzzles[] = {"AK74Muzzle","AK74MortarLauncher_TZK_xj400"};
		canDrop = 1;
		class AK74Muzzle: AK74 {
			magazines[]={"AK74"};
		};
		class AK74MortarLauncher_TZK_xj400: AK74 {
			displayName = "Mortar Launcher"; // Muzzle Name
			aiDispersionCoefY = 2;
			magazines[]={"AK74MortarLauncher_TZK_xj400","MortarAK74_xj400"};
			modes[] = {"this"}; // Launcher has only 1 mode.
		};
		modelSpecial = "ak_74_mortar_proxy"; // Magazine Parameter.
	};

	class M16GrenadeLauncher_TZK_xj400: GrenadeLauncher {
		isBinocular = 0;
		isNvg = 0;
		scopeWeapon = 2; // Is Weapon
		scopeMagazine = 2; // Is Magazine
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_M16_GRENADE"; // Weapon Name
		model = "m16_granatomet_proxy";
		picture = ""; // MOD used modified DTA\DTAEXT
		uiPicture = "ivojak";
		muzzles[] = {"M16Muzzle","M16GrenadeLauncher_TZK_xj400"};
		canDrop = 1;
		class M16Muzzle: M16 {
			magazines[]={"M16"};
		};
		class M16GrenadeLauncher_TZK_xj400: GrenadeLauncher {
			displayName = "$STR_DN_M203"; // Muzzle Name
			aiDispersionCoefY = 2;
			magazines[]={"M16GrenadeLauncher_TZK_xj400","GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
			sound[] = {"weapons\M16GrenadeLaunch",0.0003162,1};
		};
	};
	class AK47GrenadeLauncher_TZK_xj400: GrenadeLauncher {
		isBinocular = 0;
		isNvg = 0;
		scopeWeapon = 2; // Is Weapon
		scopeMagazine = 2; // Is Magazine
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_AK47_GRENADE"; // Weapon Name
		model = "ak_47_granatomet_proxy";
		picture = ""; // MOD used modified DTA\DTAEXT
		uiPicture = "ivojak";
		muzzles[] = {"AK47Muzzle","AK47GrenadeLauncher_TZK_xj400"};
		canDrop = 1;
		class AK47Muzzle: AK47 {
			magazines[]={"AK47"};
		};
		class AK47GrenadeLauncher_TZK_xj400: GrenadeLauncher {
			displayName = "Grenade Launcher"; // Muzzle Name
			aiDispersionCoefY = 2;
			magazines[]={"AK47GrenadeLauncher_TZK_xj400","GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
		};
	};
	class AK74GrenadeLauncher_TZK_xj400: GrenadeLauncher {
		isBinocular = 0;
		isNvg = 0;
		scopeWeapon = 2; // Is Weapon
		scopeMagazine = 2; // Is Magazine
		weaponType = 1;
		valueWeapon = 2;
		valueMagazine = 2;
		displayName = "$STR_DN_AK74_GRENADE"; // Weapon Name
		model = "ak_74_granatomet_proxy";
		picture = ""; // MOD used modified DTA\DTAEXT
		uiPicture = "ivojak";
		muzzles[] = {"AK74Muzzle","AK74GrenadeLauncher_TZK_xj400"};
		canDrop = 1;
		class AK74Muzzle: AK74 {
			magazines[]={"AK74"};
		};
		class AK74GrenadeLauncher_TZK_xj400: GrenadeLauncher {
			displayName = "Grenade Launcher"; // Muzzle Name
			aiDispersionCoefY = 2;
			magazines[]={"AK74GrenadeLauncher_TZK_xj400","GrenadeLauncher","Flare","FlareGreen","FlareRed","FlareYellow"};
		};
	};


	// Medkit(Only for Player), Satchel and Mine occupying handgun slot
	class Medkit_xj400: Default {
		access = 2;
		valueWeapon = 4;
		valueMagazine = 2;
		scopeWeapon = 0;
		scopeMagazine = 2;
		weaponType = 2;
		magazineType = 32;
		enableAttack = 0;
		ammo = "";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		picture = "\data\sanita_02.paa";
		displayName = "Medkit";
		displayNameMagazine = "Medkit";
		shortNameMagazine = "Medkit";
	};
	class PipeBomb_Pistol_xj400: PipeBomb {
		// This magazine will stuck the game. Remain unknown reason.
		magazineType = 32;
		picture = "\dtaExt\equip\m\m_pipebomb.paa";
	};
	class Mine_Pistol_xj400: Mine {
		magazineType = 32;
		picture = "\dtaExt\equip\m\m_mine.paa";
	};
	class Put_xj400: Put {
		magazines[] = {"TimeBomb","PipeBomb","Mine","MineE", "Medkit_xj400", "Mine_Pistol_xj400"};
	};

	// Kasap
	class KasaThrow_xj400: Throw {
		magazines[]={"SmokeShell", "SmokeShellRed", "SmokeShellGreen", "Kasap_xj400", "Handgrenade"};
	};
	class Kasap_xj400: GrenadeLauncher {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "Kasapanos 5kg";
		shortNameMagazine = "kasap";
		count = 1;
		picture = "\TZK_Texture_4_0_0\Picture\kyl_kasapanos.jpg";
		initSpeed = 22;
		maxLeadSpeed = 6; // This should be muzzle's parameter thus no use here.
		
		ammo = "Kasap_Ammo_xj400";
		displayName = "Kasapanos 5kg";
		reloadTime = 3;
		sound[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Throw.ogg",db-60,1};
	};
	// MP5 of EU Defence mod
	class EUDEF_MP5SD6_xj400: Riffle {
		displayName = "MP5SD6";
		scopeWeapon = 2; scopeMagazine = 0;
		weaponType = 1;
		model ="\TZK_Weapon_4_0_0\EUDMP5\mp5.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\w_MP5SD6.paa";
		
		modelOptics = "\TZK_Weapon_4_0_0\EUDMP5\optik.p3d";
		optics = 1;
		opticsZoomMin = 0.35;
		opticsZoomMax = 0.35;
		drysound[] = {"weapons\M16dry",db-40,1};
		reloadMagazinesound[] = {"\TZK_Sounds_4_0_0\EUDEF_MP5SD6\Reload.wss",db-40,1};
		magazines[]={"EUDEF_MP5SD6_MAG_xj400"};
		modes[]={"Single","Three","FullAuto"};
		class Single {
			ammo =  "Bullet_MP5SD6_xj400";
			multiplier = 1; burst = 1;
			displayName = "Semi MP5SD6";
			dispersion = 0.003;
			sound[] = {"\TZK_Sounds_4_0_0\EUDEF_MP5SD6\Singleshot.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.0857142;
			ffCount = 1;
			recoil = "riffleSilenced";
			autoFire = 0;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class Three {
			ammo =  "Bullet_MP5SD6_xj400";
			multiplier =  1; burst= 3;
			displayName = "Burst MP5SD6";
			dispersion = 0.005;
			sound[] = {"\TZK_Sounds_4_0_0\EUDEF_MP5SD6\Burstshot.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.0857142;
			ffCount = 1;
			recoil = "riffleSilenced";
			autoFire = 0;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo = "Bullet_MP5SD6_xj400";
			multiplier = 1; burst = 1;
			displayName = "Auto MP5SD6";
			dispersion = 0.005;
			sound[] = {"\TZK_Sounds_4_0_0\EUDEF_MP5SD6\Autoshot.wss",db0,1};
			soundContinuous = 0;
			reloadTime = 0.0857142;
			ffCount = 1;
			recoil = "riffleSilenced";
			autoFire = 1;
			aiRateOfFire = 0.01;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
	};
	class EUDEF_MP5SD6_MAG_xj400: EUDEF_MP5SD6_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "MP5SD6 Mag";
		shortNameMagazine = "EUDEF_MP5SD6_MAG";
		picture = "\dtaExt\equip\m\m_hk.paa";
	};
	// Groza
	class VNgroza1sscope_xj400: Riffle {
		displayName = "Groza-1 SD + scope";
		scopeWeapon = 2; scopeMagazine = 2;
		model = "\TZK_Weapon_4_0_0\Gro\grozasscope.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\w_grozasscope.paa";
		
		modelOptics = "\TZK_Weapon_4_0_0\Gro\scope.p3d";
		optics = 1;
		opticsZoomMin = 0.25;
		opticsZoomMax = 0.25;
		drysound[] = {"\Sound\weapons\M16dry.wss",0.01,1};
		magazines[]={"VNgroza1s_Mag_xj400"};
		
		modes[]={"Single","Burst","FullAuto"};
		class Single {
			ammo = "Bullet_Groza1SD_xj400";
			multiplier = 1; burst = 1;
			displayName = "Groza-1 SD";
			dispersion = 0.0028;
			sound[] = {"\TZK_Sounds_4_0_0\VNGroza\grozas.wss",0.05,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class Burst {
			ammo = "Bullet_Groza1SD_xj400";
			multiplier =  1; burst= 3;
			displayName = "Groza-1 SD Burst";
			dispersion = 0.0034;
			sound[] = {"\TZK_Sounds_4_0_0\VNGroza\grozasb.wss",0.05,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "riffleBurst3";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo = "Bullet_Groza1SD_xj400";
			multiplier = 1; burst = 1;
			displayName = "Groza-1 SD Auto";
			dispersion = 0.0051;
			sound[] = {"\TZK_Sounds_4_0_0\VNGroza\grozas.wss",0.05,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "riffleBurst3";
			autoFire = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
	};
	class VNgroza1s_Mag_xj400: VNgroza1sscope_xj400 {
		picture = "\TZK_Texture_4_0_0\Picture\m_groza.paa";
		displayNameMagazine = "Groza-1 SD Mag";
		shortNameMagazine = "Groza1SDmag";
	};
	// AK107
	class KEGAK107_Base_xj400: Riffle {
		displayName = "AK107";
		scopeWeapon = 2; scopeMagazine = 2;
		model = "\TZK_Weapon_4_0_0\KEGak107\KEGak107.p3d";
		
		modelOptics = "\TZK_Weapon_4_0_0\KEGak107\KEGak107_sight.p3d";
		optics = 1;
		opticsZoomMin = 0.28;
		opticsZoomMax = 0.28;
		drysound[] = {"weapons\AK74Dry",1,1};
		magazines[]={"KEGAK107_Mag_xj400"};
		
		displayNameMagazine = "AK107 Mag";
		shortNameMagazine = "AK107";
		modes[]={"Single","Burst","FullAuto"};
		class Single {
			ammo = "BulletSingleE";
			multiplier = 1; burst = 1;
			displayName = "AK107";
			dispersion = 0.00011;
			sound[] = {"\TZK_Sounds_4_0_0\KEGak107\single.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class Burst {
			ammo = "BulletBurstE";
			multiplier =  1; burst= 3;
			displayName = "AK107 Burst";
			dispersion = 0.000875;
			sound[] = {"\TZK_Sounds_4_0_0\KEGak107\burst.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 3;
			recoil = "KEGriffleBalanced";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo = "BulletFullAutoE";
			multiplier = 1; burst = 1;
			displayName = "AK107 Full Auto";
			dispersion = 0.0018;
			sound[] = {"\TZK_Sounds_4_0_0\KEGak107\single.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.0667;
			ffCount = 30;
			recoil = "KEGriffleBalanced";
			autoFire = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
	};
	class KEGAK107_xj400: KEGAK107_Base_xj400 {
		picture = "\TZK_Texture_4_0_0\Picture\KEG_ak107\gear1.paa";
		scopeWeapon = 2; scopeMagazine = 0;
	};
	class KEGAK107_Mag_xj400: KEGAK107_Base_xj400 {
		picture = "\TZK_Texture_4_0_0\Picture\KEG_ak107\gear2.paa";
		scopeWeapon = 0; scopeMagazine = 2;
	};
	// SVU-A
	class RFSVUa_xj400:SVDDragunov {
		displayName = "SVU-A";
		model = "\TZK_Weapon_4_0_0\RFSVUA\RFSVUa.p3d";
		picture = "\TZK_Texture_4_0_0\Picture\SVU.jpg";
		
		modelOptics = "\TZK_Weapon_4_0_0\RFSVUA\optika.p3d";
		drysound[] = {"weapons\AK74Dry",1,1};
		reloadMagazinesound[] = {"\TZK_Sounds_4_0_0\RFSVUa\reload.wss",2,1};
		magazines[]={"RFSVUA_Mag_xj400"};
		
		displayNameMagazine = "SVUa Mag";
		shortNameMagazine = "SVUa";
		count = 20;
		modes[]={"Single","FullAuto"};
		class Single {
			ammo = "BulletSniperE";
			multiplier = 1; burst = 1;
			displayName = "SVU-A";
			dispersion = 0.00011;
			sound[] = {"\TZK_Sounds_4_0_0\RFSVUa\single.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.13;
			ffCount = 1;
			recoil = "riffleSingle";
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
		class FullAuto {
			ammo = "BulletSniperE";
			multiplier = 1; burst = 1;
			displayName = "SVU-A Full Auto";
			dispersion = 0.0008;
			sound[] = {"\TZK_Sounds_4_0_0\RFSVUa\single.wss",1,1};
			soundContinuous = 0;
			reloadTime = 0.1;
			ffCount = 30;
			recoil = "riffleBurst3";
			autoFire = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			useAction = 0; useActionTitle = "";
		};
	};
	class RFSVUA_Mag_xj400: RFSVUa_xj400 {
		picture = "\TZK_Texture_4_0_0\Picture\SVUmag.jpg";
		scopeWeapon = 0; scopeMagazine = 2;
	};





// Infantry weapons must define their "picture" parameter, unless their name is same as in original BIN\CONFIG, or editor edited DTA\DTAEXT as well.
// reloadMagazinesound[] should be difined in muzzles, neither weapons nor magazines.

// It's recommend to make one muzzle same-name with its weapon, to fit the rearm-condition in CTI(using "ammo" command, which MUST use muzzleName as parameter).

// distanceZoom seems no use, it is opticsZoom that decide the Optics's range. Maybe distanceZoom available for AI? distanceZoom seems not relating to the speed of Optics's movement.
// Not clearly that maxLeadSpeed is for which grade of weapon yet.

//EOF