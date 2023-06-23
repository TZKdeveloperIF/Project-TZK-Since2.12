	//Basic Machine-Gun redefinations, sounds copied from "MOHsnd.pbo"
	class MachineGun7_6_xj400: MachineGun7_6 {
		sound[] = {"\TZK_Sounds_4_0_0\MOH_mk48_s1.wss",3.1622777,1};
		soundContinuous = 0;
		displayName = "7.62mm MGun";
		displayNameMagazine = "7.62mm MG";
		shortNameMagazine = "7.62mm";
	};
	class MachineGun12_7_xj400: MachineGun12_7 {
		sound[] = {"\TZK_Sounds_4_0_0\MOH_pkt_s1.wss",3.1622777,1};
		soundContinuous = 0;
		displayName = "12.7mm MGun";
		displayNameMagazine = "12.7mm MG";
		shortNameMagazine = "12.7mm";
		ammo = "Bullet12_7_xj400";
	};
	class Browning_xj400: MachineGun12_7 {
		ammo = "Bullet12_7";
		sound[] = {"\TZK_Sounds_4_0_0\MOH_m249_s1.wss",31.622778,1};
		soundContinuous = 0;
	};
	
	class CommanderMG_xj400: MachineGun12_7_xj400 {
	// Failure.
		muzzlePos = "MG Start";
		muzzleEnd = "MG End";
		cartridgePos = "MG cartridge Start";
		cartridgeVel = "MG cartridge End";
	//	shotFromTurret = 1; // Useless. MG will shot from turret. It's possible to create MG by EH in 2.01, but abandoned here.
	};

	//Main Heavy Tank Weapons
	class M1Gun_xj400: Gun120 {
		displayName = "M256 120mm Smoothbore";
		reloadSound[] = {"\TZK_Objects\Sound\Tank1_2N\gunreload.ogg",0.5,0.8};
		magazines[] = {"M1Sabot_xj400","M1Heat_xj400"};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		opticsZoomMin = 0.333333;
		opticsZoomMax = 0.1;
	};
	class M1Sabot_xj400: Shell120 {
		displayName = "M256 120mm APFSDS";
		displayNameMagazine = "M829 APFSDS";
		shortNameMagazine = "M829 120mm Sabot";
		ammo = "M1Sabot_xj400";
		count = 35;
		initSpeed = 1500;
		nameSound = "heat";
		reloadTime = 8;
		sound[] = {"\TZK_Objects\Sound\Tank1_2N\maingun.ogg",10.000000,1};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class M1Heat_xj400: Heat120 {
		displayName = "M256 120mm HEAT";
		displayNameMagazine = "M830 HEAT";
		shortNameMagazine = "M830 120mm HEAT";
		ammo = "M1Heat_xj400";
		count = 35;
		initSpeed = 1500;
		nameSound = "shell";
		reloadTime = 8;
		sound[] = {"\TZK_Objects\Sound\Tank1_2N\maingun.ogg",10.000000,1};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class M1MG_xj400: MachineGun12_7 {
		magazines[] = {"MachineGun12_7_xj400", "CoaxW_xj400"};
	};
	class M12Gun_xj400: M1Gun_xj400 {
	//	reloadSound[] = {"Weapons\missload",0.5,1}; // Not to redefine reloadSound.
		magazines[] = {"M12Sabot_xj400","M12Heat_xj400"};
	};
	class M12Sabot_xj400: M1Sabot_xj400 {
	//	ammo = "M12Sabot_xj400"; // Not to use redefined ammo which is only modified sounds.
		displayName = "M829A3 APFSDS-T";
		displayNameMagazine = "M829A3 APFSDS-T";
		shortNameMagazine = "M829A3 APFSDS-T";
	//	sound[] = {"\TZK_Sounds_4_0_0\Gun120.wss",10,1};
	};
	class M12Heat_xj400: M1Heat_xj400 {
	//	ammo = "M12Heat_xj400";
		displayName = "M830A1 MPAT-T";
		displayNameMagazine = "M830A1 MPAT-T";
		shortNameMagazine = "M830A1 MPAT-T";
	//	sound[] = {"\TZK_Sounds_4_0_0\Gun120.wss",10,1};
	};
	
	class T80Gun_xj400: Gun120 {
		displayName = "2A46 120mm Smoothbore";
		reloadSound[] = {"\TZK_Objects\Sound\Tank1_2N\gun2reload.ogg",0.25,1};
		magazines[] = {"T80Sabot_xj400","T80Heat_xj400","9K112_xj400","9K119_xj400"};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		opticsZoomMin = 0.27777;
		opticsZoomMax = 0.08333;
	};
	class T80Sabot_xj400: Shell120 {
		displayName = "2A46 120mm APFSDS";
		displayNameMagazine = "BM-42M APFSDS";
		shortNameMagazine = "BM-42M APFSDS";
		ammo = "T80Sabot_xj400";
		count = 35;
		initSpeed = 1500;
		nameSound = "heat";
		reloadTime = 8;
		sound[] = {"\TZK_Objects\Sound\Tank1_2N\125mm.ogg",10.000000,1};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class T80Heat_xj400: Heat120 {
		displayName = "2A46 120mm HEAT";
		displayNameMagazine = "BK-27 HEAT";
		shortNameMagazine = "BK-27 HEAT";
		ammo = "T80Heat_xj400";
		count = 35;
		initSpeed = 1500;
		nameSound = "shell";
		reloadTime = 8;
		sound[] = {"\TZK_Objects\Sound\Tank1_2N\125mm.ogg",10.000000,1};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class 9K112_xj400: AT3Launcher {
	   	ammo = "9M112_xj400";
		displayName = "9K112 ATGM";
		displayNameMagazine = "9K112";
		shortNameMagazine = "9K112";
		initSpeed = 80;
		reloadtime = 8;
		sound[] = {"\TZK_Sounds_4_0_0\icp_t72s\launch.ogg",12.727272,1};
		count = 4;
		canLock = 2;
		autoReload = 1;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 0;
	};
	
	class LeoGun_xj400: Gun120 {
		reloadSound[] = {"\TZK_Sounds_4_0_0\Leo2A6\reload.wss",0.5,1};
		magazines[] = {"LeoSabot_xj400","LeoHeat_xj400"};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		opticsZoomMin = 0.333333;
		opticsZoomMax = 0.1;
	};
	class LeoSabot_xj400: Shell120 {
		displayname = "DM63 APFSDS-T";
		displaynameMagazine = "DM63 APFSDS-T";
		shortnameMagazine = "DM63 APFSDS-T";
		ammo = "LeoSabot_xj400";
		count = 35;
		initSpeed = 1750;
		nameSound = "heat";
		reloadTime = 8;
		sound[] = {"\TZK_Sounds_4_0_0\Leo2A6\fire.wss",10,1};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class LeoHeat_xj400: Heat120 {
		displayName = "DM22 HE-MP-T";
		displayNameMagazine = "DM22 HE-MP-T";
		shortNameMagazine = "DM22 (HE)";
		ammo = "LeoHeat_xj400";
		count = 35;
		initSpeed = 1750;
		nameSound = "shell";
		reloadTime = 8;
		sound[] = {"\TZK_Sounds_4_0_0\Leo2A6\fire.wss",10,1};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class LeoMG_xj400: MachineGun12_7 {
		scopeWeapon = 2;
		scopeMagazine = 2;
		displayName = "MG3A1";
		dispersion = 0.0005;
		reloadTime = 0.065;
		initSpeed = 800;
		count = 4750;
		sound[] = {"\TZK_Sounds_4_0_0\mg3_fire.wss",3.1622777,1};
		soundContinuous = 0;
	//	magazineReloadTime = 5;
	};

	class PLAGun_xj400: Gun120 {
		displayName = "Gun125";
		reloadSound[] = {"\TZK_Sounds_4_0_0\VME\aa1.wav",0.25,1};
		magazines[] = {"PLASabot_xj400","PLAHeat_xj400","ATGM125_xj400"};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		opticsZoomMin = 0.27777;
		opticsZoomMax = 0.08333;
	};
	class PLASabot_xj400: Shell120 {
		displayName = "FSAPDS125";
		displayNameMagazine = "FSAPDS125";
		shortNameMagazine = "FSAPDS125";
		ammo = "PLASabot_xj400";
		count = 35;
		nameSound = "heat";
		initSpeed = 1500;
		reloadTime = 8;
		sound[] = {"\TZK_Sounds_4_0_0\VME\fire2.wav",10,0};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class PLAHeat_xj400: Heat120 {
		count = 35;
		initSpeed = 1500;
		ammo = "PLAHeat_xj400";
		displayName = "Heat125";
		displayNameMagazine = "Heat125";
		shortNameMagazine = "Heat125";
		nameSound = "shell";
		reloadTime = 8;
		sound[] = {"\TZK_Sounds_4_0_0\VME\fire2.wav",10,0};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
	};
	class ATGM125_xj400: AT3Launcher {
		ammo = "PLA_ATGM125_xj400";
	//	model = "\TZK_Model_4_0_0\wp\PSDD.P3D";
		displayName = "ATGM125";
		displayNameMagazine = "ATGM125";
		shortNameMagazine = "ATGM125";
		count = 4;
		reloadTime = 8;
		reloadSound[] = {"\TZK_Sounds_4_0_0\VME\r.wav",db-40,0};
		sound[] = {"\TZK_Sounds_4_0_0\VME\tow1.wav",12.727272,1};
		
		initSpeed = 400;
		aiRateOfFire = 1.0;
		aiRateOfFireDistance = 5000;
	};	
	class PLAMG_xj400: MachineGun12_7_xj400 {
		sound[] = {"\TZK_Sounds_4_0_0\jiqiang.wss",3.1622777,1};
	};
	
	class T90Gun_xj400: T80Gun_xj400 {
	//	reloadSound[] = {"\TZK_Sounds_4_0_0\icp_t72s\loader.wss",0.25,1};
		magazines[] = {"T90Sabot_xj400","T90Heat_xj400","9K112_xj400","9K119_xj400"};
	};
	class T90Sabot_xj400: T80Sabot_xj400 {
		displayName = "3BM42 APFSDS";
		displayNameMagazine = "3BM42";
		shortNameMagazine = "3BM42";
		sound[] = {"\TZK_Sounds_4_0_0\icp_t72s\125mm.wss",10.000000,1};
	};
 	class T90Heat_xj400: T80Heat_xj400 {
		displayName = "3OF26 HE-FRAG";
		displayNameMagazine = "3OF26";
		shortNameMagazine = "3OF26";
		ffMagnitude = 1;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		sound[] = {"\TZK_Sounds_4_0_0\icp_t72s\125mm.wss",10.000000,1};
	};	
	class T90MG_xj400: MachineGun12_7 {
		magazines[] = {"MachineGun12_7_xj400", "MachineGun7_6_xj400"};
	};	
	class 9K119_xj400: AT3Launcher {
	   	ammo = "9M120_xj400";
		displayName = "9K119 (9M120) ATGM";
		displayNameMagazine = "9K119";
		shortNameMagazine = "9K119";
		initSpeed = 80;
		reloadtime = 8;
		sound[] = {"\TZK_Sounds_4_0_0\icp_t72s\launch.ogg",12.727272,1};
		count = 4;
		canLock = 2;
		autoReload = 1;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 0;
	};
	// Weapon from mfm_cfg_t90ms
	class t90ms_PKT_xj400: MachineGun7_6 {
		displayName = "$STR_t90ms_pkt";
		reloadMagazineSound[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\mgreload.wss",1,1};
		
		displayNameMagazine = "$STR_t90ms_pkts";
		shortNameMagazine = "$STR_t90ms_pkts";
		count = 2000;
		
		sound[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\pkt.ogg",3,1};
		soundcontinuous = 0;
	};
 	class t90ms_3VOF36_xj400: Shell125 {
		displayNameMagazine = "$STR_t90ms_3VOF36s";
		shortNameMagazine = "$STR_t90ms_3VOF36s";
		nameSound = "shell";
		initSpeed = 1200; //1200
		
		ammo = "3OF26_t90ms_xj400";
		displayName = "$STR_t90ms_3VOF36";
        sound[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\125mm_3p.wss", 10,1};
	};

 	class t90ms_3VBK25_xj400: Heat125 {
		displayNameMagazine = "$STR_t90ms_3VBK25s";
		shortNameMagazine = "$STR_t90ms_3VBK25s";
		nameSound = "heat";
		initSpeed = 1500; //1500
		
		ammo = "3BK29M_t90ms_xj400";
		displayName = "$STR_t90ms_3VBK25";
        sound[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\125mm_3p.wss", 10,1};
	};
	class t90ms_3VBM17_xj400: Heat125 {
		displayNameMagazine = "$STR_t90ms_3BM42s";
		shortNameMagazine = "$STR_t90ms_3BM42s";
		namesound = "heat";
		initSpeed = 1700; //2000
		
		ammo = "3BM42_t90ms_xj400";
		displayName = "$STR_t90ms_3BM42";
		sound[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\125mm_3p.wss", 10,1};
	};
	class t90ms_9K119_xj400: AT3Launcher {
		displayNameMagazine = "$STR_t90ms_9K119s";
		shortNameMagazine = "$STR_t90ms_9K119s";
		initspeed = 60; //80
		count = 6;
		canLock = 2;
		autoReload = 1;
		
	   	ammo = "9M120_t90ms_xj400";
		displayName = "$STR_t90ms_9K119";
		sound[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\launch.ogg",12.727272,1};
		reloadtime = 8; //8;
	};
	class T90msGun_xj400: T90Gun_xj400 {
		reloadSound[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\125mmreload.wss",0.1,0.9};
		magazines[] = {"t90ms_3VBM17_xj400","t90ms_3VOF36_xj400","t90ms_3VBK25_xj400","t90ms_9K119_xj400"};
	};

	


	// BackUp for M1A2/T90 gun. The sound of fire, hit and reload about M1A2/T90 is not good thus plan to keep same with M1A1/T80. However players may wish to use old sounds defined in TZK_2.00, so it's necessary to remain a backuup define to make it possible to recover it in CTI mission scripts.
	class M12Gun_Backup_xj400: M1Gun_xj400 {
		reloadSound[] = {"Weapons\missload",0.5,1};
		magazines[] = {"M12Sabot_xj400","M12Heat_xj400"};
	};
	class M1A2Sabot_Backup_xj400: M1Sabot_xj400 {
		ammo = "M12Sabot_xj400";
		displayName = "M829A3 APFSDS-T";
		displayNameMagazine = "M829A3 APFSDS-T";
		shortNameMagazine = "M829A3 APFSDS-T";
		sound[] = {"\TZK_Sounds_4_0_0\Gun120.wss",10,1};
	};
	class M1A2Heat_Backup_xj400: M1Heat_xj400 {
		ammo = "M12Heat_xj400";
		displayName = "M830A1 MPAT-T";
		displayNameMagazine = "M830A1 MPAT-T";
		shortNameMagazine = "M830A1 MPAT-T";
		sound[] = {"\TZK_Sounds_4_0_0\Gun120.wss",10,1};
	};
	class T90Gun_Backup_xj400: Gun120 {
		displayName = "2A46 120mm Smoothbore";
		reloadSound[] = {"\TZK_Sounds_4_0_0\icp_t72s\loader.wss",0.25,1};
		reloadTime = 8;
		magazines[] = {"T90Sabot_xj400","T90Heat_xj400","9K112_xj400","9K119_xj400"};
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		opticsZoomMin = 0.27777;
		opticsZoomMax = 0.08333;
	};
	class T90Sabot_Backup_xj400: T80Sabot_xj400 {
		displayName = "3BM42 APFSDS";
		displayNameMagazine = "3BM42";
		shortNameMagazine = "3BM42";
		sound[] = {"\TZK_Sounds_4_0_0\icp_t72s\125mm.wss",10.000000,1};
	};
 	class T90Heat_Backup_xj400: T80Heat_xj400 {
		displayName = "3OF26 HE-FRAG";
		displayNameMagazine = "3OF26";
		shortNameMagazine = "3OF26";
		ffMagnitude = 1;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		sound[] = {"\TZK_Sounds_4_0_0\icp_t72s\125mm.wss",10.000000,1};
	};	
	
	class CoaxW_xj400: MachineGun7_6 {
		ammo = "CoaxW_xj400";
		displayName = "M240 7.62mm Co-ax";
		displayNameMagazine = "Co-ax";
		shortNameMagazine = "7.62mm M240 Ammo";
		count = 11400;
		reloadTime = 0.075;
		sound[] = {"\TZK_Objects\Sound\Tank1_2N\gun.ogg",3.1622777,1};
		soundContinuous = 0;
		initSpeed = 1000;
		flash = "gunfire";
		flashSize = 0.900000;
		dispersion = 0.00065;
		maxLeadSpeed = 50;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		autoFire = 1;
		optics = 1;
	};
	class CoaxE_xj400: MachineGun7_6 {
		ammo = "CoaxE_xj400";
		displayName = "PKT 7.62mm Coax";
		displayNameMagazine = "PKT Coax";
		shortNameMagazine = "PKT Coax";
		count = 1000;
		reloadTime = 0.075;
		sound[] = {"\TZK_Objects\Sound\Tank1_2N\emg.ogg",3.1622777,1};
		soundContinuous = 0;
		initSpeed = 1000;
		flctipc = "gunfire";
		flctipcSize = 0.900000;
		dispersion = 0.00065;
		maxLeadSpeed = 50;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		autoFire = 1;
		optics = 1;
	};	
	class 50calW_xj400: MachineGun12_7 {
		ammo = "50calW_xj400";
		displayName = "M2 12.7mm MG";
		displayNameMagazine = "M2 AA MG";
		shortNameMagazine = "M2 AA MG";
		count = 50;
		reloadTime = 0.11;
		reloadSound[] = {"",1,1};
		sound[] = {"\TZK_Objects\Sound\Tank1_2N\mg.ogg",4,1};
		reloadMagazineSound[] = {"\TZK_Objects\Sound\Tank1_2N\mgreload.ogg",0.3,1};
		soundContinuous = 0;
		initSpeed = 1300;
		flash = "gunfire";
		flashSize = 1.500000;
		dispersion = 0.00125;
		maxLeadSpeed = 50;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		autoFire = 1;
		optics = 1;
		autoReload = 1;
		magazineReloadTime = 1;
	};
	class 50calE_xj400: MachineGun12_7 {
		ammo = "50calE_xj400";
		displayName = "NSVT 12.7mm MG";
		displayNameMagazine = "NSVT AA MG";
		shortNameMagazine = "NSVT AA MG";
		count = 50;
		reloadTime = 0.11;
		reloadSound[] = {"",1,1};
		sound[] = {"\TZK_Objects\Sound\Tank1_2N\nsvt.ogg",4,1};
		reloadMagazineSound[] = {"\TZK_Objects\Sound\Tank1_2N\nsvtreload.ogg",0.3,1};
		soundContinuous = 0;
		initSpeed = 1300;
		flctipc = "gunfire";
		flctipcSize = 1.500000;
		dispersion = 0.00125;
		maxLeadSpeed = 50;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 0;
		autoFire = 1;
		optics = 1;
		autoReload = 1;
		magazineReloadTime = 1
	};

	//M109 Paladin weapon from CoC
	class Gun155_xj400: shell125 {
		displayName = "155mm Gun";
		
		backgroundReload = 1;
		reloadSound[] = {"\TZK_Sounds_4_0_0\SIG_MN\breech.wss",db-20,1};
		optics = 1;
		opticsZoomMin = 0.2;
		opticsZoomMax = 0.9;
		// position and direction of muzzle
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		// position and velocity of outgoing empty cartridge
		//cartridgePos = "nabojnicestart";
		//cartridgeVel = "nabojniceend";
		canLock = 2;
		maxLeadSpeed = 400;
		magazines[] = {"AP155_0930_xj400","HE155_0930_xj400","AP155_0827_xj400","HE155_0827_xj400","HE155_0080_xj400","HE155_0120_xj400","HE155_0180_xj400","HE155_0300_xj400","HE155_0400_xj400","HE155_0500_xj400","HE155_0600_xj400","HE155_0700_xj400"};
	};
	class HE155_0827_xj400: shell125 {
		displayNameMagazine = "155mm HE"; shortNameMagazine = "HE";
		count = 30;
		initSpeed = 827;
		
		displayName = "155mm HE (827m/s)";
		ammo = "HEAT155_DKMM_xj400";
		sound[] = {"\TZK_Sounds_4_0_0\COC\m109f_b.wss",15,1};
		reloadTime = 12;
		flash = "gunfire";
		flashSize = 10.000000;
		dispersion = 0.00055;
		autoFire = 0;
		aiRateOfFire = 0.06; aiRateOfFireDistance = 10000;
	};
	class AP155_0827_xj400: HE155_0827_xj400 {
		displayName = "155mm AP";
		displayNameMagazine = "155mm AP"; shortNameMagazine = "AP";
		ammo = "AP155_DKMM_xj400";
	};
	// PLZ05 Weapon from PLA3.5
	class HE155_0930_xj400: HE155_0827_xj400 {
		displayName = "155mm HE (930m/s)";
		sound[] = {"\TZK_Sounds_4_0_0\VME\PLZ89.wss",15,1};
		initSpeed = 930;
	//	ammo = "LAW_TZK";
	};
	class AP155_0930_xj400: AP155_0827_xj400 {sound[] = {"\TZK_Sounds_4_0_0\VME\PLZ89.wss", 15, 1}; initSpeed = 930; };
	// initSpeed Modified 155 Magazines for Curved Trajectory (Artillery Support)
	class HE155_0080_xj400: HE155_0827_xj400 {initSpeed = 80;  displayName = "155mm HE (80m/s)";  };
	class HE155_0120_xj400: HE155_0827_xj400 {initSpeed = 120; displayName = "155mm HE (120m/s)"; };
	class HE155_0180_xj400: HE155_0827_xj400 {initSpeed = 180; displayName = "155mm HE (180m/s)"; };
	class HE155_0300_xj400: HE155_0827_xj400 {initSpeed = 300; displayName = "155mm HE (300m/s)"; };
	class HE155_0400_xj400: HE155_0827_xj400 {initSpeed = 400; displayName = "155mm HE (400m/s)"; };
	class HE155_0500_xj400: HE155_0827_xj400 {initSpeed = 500; displayName = "155mm HE (500m/s)"; };
	class HE155_0600_xj400: HE155_0827_xj400 {initSpeed = 600; displayName = "155mm HE (600m/s)"; };
	class HE155_0700_xj400: HE155_0827_xj400 {initSpeed = 700; displayName = "155mm HE (700m/s)"; };

	// TOS weapon from DKM
	class NoGun_xj400: MachineGun12_7  {
		displayNameMagazine = "Unable to fire";
		shortNameMagazine = "Unable to fire";
		
		reloadTime = 20;
		ammo = "";
		displayName = "Unable to fire";
		sound[] = {"",0,0};
		recoil = "empty";
	};
	class FAE220Launcher_xj400: MachineGun12_7 {
		displayName = "9M27K-TB Launcher";
		scopeWeapon = 2; scopeMagazine = 0;
		
		optics = 1;
		opticsZoomMin = 0.1;
		opticsZoomMax = 0.9;
		reloadSound[] = {"",db0,1};
		flash = "gunfire";
		flashSize = 10.000000;
		canLock = 2;
		maxLeadSpeed = 400;
		magazines[] = {"FAE220_DKMM_0080_xj400", "FAE220_DKMM_0120_xj400", "FAE220_DKMM_0180_xj400", "FAE220_DKMM_0300_xj400", "FAE220_DKMM_0400_xj400", "FAE220_DKMM_0500_xj400", "FAE220_DKMM_0600_xj400", "FAE220_DKMM_0700_xj400", "FAE220_DKMM_0800_xj400", "FAE220_DKMM_0900_xj400", "FAE220_DKMM_1000_xj400"};
		backgroundReload = 1;
		autoReload = 1; // Muzzle parameter. If set 0, "setObjectTexture" will work on the last rocket. But AI will still auto reload, thus it's the script that should be adjust.
	};
	class FAE220_DKMM_0080_xj400: FAE220Launcher_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "9M27K-TB";
		shortNameMagazine = "FAE220";
		count = 30;
		initSpeed = 80; // Rocket's initSpeed are always 20m/s.
		
		displayName = "9M27K-TB(80m/s)";
		ammo = "FAE220_DKMM_xj400";
		sound[] = {"\TZK_Sounds_4_0_0\2S6\missfly.ogg", 10, 0.6};
		soundcontinuous = 0;
		reloadTime = 0.25;
		aiRateOfFire = 0.9;
		aiRateOfFireDistance = 1000;
		recoil = "empty";
	};
	class FAE220_DKMM_0120_xj400: FAE220_DKMM_0080_xj400 { displayName = "9M27K-TB(120m/s)"; initSpeed = 120; };
	class FAE220_DKMM_0180_xj400: FAE220_DKMM_0080_xj400 { displayName = "9M27K-TB(180m/s)"; initSpeed = 180; };
	class FAE220_DKMM_0300_xj400: FAE220_DKMM_0080_xj400 { displayName = "9M27K-TB(300m/s)"; initSpeed = 300; };
	class FAE220_DKMM_0400_xj400: FAE220_DKMM_0080_xj400 { displayName = "9M27K-TB(400m/s)"; initSpeed = 400; };
	class FAE220_DKMM_0500_xj400: FAE220_DKMM_0080_xj400 { displayName = "9M27K-TB(500m/s)"; initSpeed = 500; };
	class FAE220_DKMM_0600_xj400: FAE220_DKMM_0080_xj400 { displayName = "9M27K-TB(600m/s)"; initSpeed = 600; };
	class FAE220_DKMM_0700_xj400: FAE220_DKMM_0080_xj400 { displayName = "9M27K-TB(700m/s)"; initSpeed = 700; };
	class FAE220_DKMM_0800_xj400: FAE220_DKMM_0080_xj400 { displayName = "9M27K-TB(800m/s)"; initSpeed = 800; };
	class FAE220_DKMM_0900_xj400: FAE220_DKMM_0080_xj400 { displayName = "9M27K-TB(900m/s)"; initSpeed = 900; };
	class FAE220_DKMM_1000_xj400: FAE220_DKMM_0080_xj400 { displayName = "9M27K-TB(1000m/s)"; initSpeed = 1000; };
	
	class M26Launcher_xj400: FAE220Launcher_xj400 {
		displayName = "M26 Rockets";
		
		magazines[] = {"M26_COC_0080_xj400", "M26_COC_0120_xj400", "M26_COC_0180_xj400", "M26_COC_0300_xj400", "M26_COC_0400_xj400", "M26_COC_0500_xj400", "M26_COC_0600_xj400", "M26_COC_0700_xj400", "M26_COC_0800_xj400", "M26_COC_0900_xj400", "M26_COC_1000_xj400", "M26_COC_1200_xj400", "M26_COC_1500_xj400"};
	};
	class M26_COC_0080_xj400: M26Launcher_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		displayNameMagazine = "M26 Mag";
		shortNameMagazine = "M26 Mag";
		count = 12;
		initSpeed = 80; // Rocket's initSpeed are always 20m/s.
		
		displayName = "M26 Rocket(80m/s)";
		ammo = "M26_CoC_xj400";
		sound[] = {"\TZK_Sounds_4_0_0\M29064mm\launch.wss", 10, 1};
		soundcontinuous = 0;
		reloadTime = 0.25;
		aiRateOfFire = 0.9;
		aiRateOfFireDistance = 1000;
		recoil = "empty";
	};
	class M26_COC_0120_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(120m/s)"; initSpeed = 120; };
	class M26_COC_0180_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(180m/s)"; initSpeed = 180; };
	class M26_COC_0300_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(300m/s)"; initSpeed = 300; };
	class M26_COC_0400_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(400m/s)"; initSpeed = 400; };
	class M26_COC_0500_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(500m/s)"; initSpeed = 500; };
	class M26_COC_0600_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(600m/s)"; initSpeed = 600; };
	class M26_COC_0700_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(700m/s)"; initSpeed = 700; };
	class M26_COC_0800_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(800m/s)"; initSpeed = 800; };
	class M26_COC_0900_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(900m/s)"; initSpeed = 900; };
	class M26_COC_1000_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(1000m/s)"; initSpeed = 1000; };	
	class M26_COC_1200_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(1200m/s)"; initSpeed = 1200; };	
	class M26_COC_1500_xj400: M26_COC_0080_xj400 { displayName = "M26 Rocket(1500m/s)"; initSpeed = 1500; };	
	
	class CorrectionMG_xj400: MachineGun12_7 {
		magazineReloadTime = 0;
		
		displayName = "Correction MG";
		displayNameMagazine = "Correction MG";
		shortNameMagazine = "Correction MG";
		count = 1000;
		initSpeed = 10;
		
		ammo = "NoGravityBullet_xj400";
		reloadTime = 0.1;
		sound[] = {"", 0, 1};
		soundContinuous = 0;
	};

	// 2S25 Sprut-SD Weapon from mfm
	class Sprut_3VBM17_xj400: Heat125 {
		ammo = "Sprut_3BM42_xj400";
		displayName = "$STR_Sprut_3BM42";
		displayNameMagazine = "$STR_Sprut_3BM42s";
		shortNameMagazine = "$STR_Sprut_3BM42s";
		namesound = "sabot";
		count = 30;
		initSpeed = 1800; //2000
		sound[] = {"\TZK_Sounds_4_0_0\2S25\125mm_3p.wav",15,1};
		reloadTime = 12;
		aiRateOfFire = 0.06;
		aiRateOfFireDistance = 10000;
	};
	class Sprut_3VBK25_xj400: Heat125 {
		ammo = "Sprut_3OF26_xj400";
		displayName = "$STR_Sprut_3VBK25";
		displayNameMagazine = "$STR_Sprut_3VBK25s";
		shortNameMagazine = "$STR_Sprut_3VBK25s";
		count = 30;
		nameSound = "heat";
		initSpeed = 1500; //1500
		reloadTime = 12;
		aiRateOfFire = 0.06;
		aiRateOfFireDistance = 10000;
        sound[] = {"\TZK_Sounds_4_0_0\2S25\125mm_3p.wav",15,1};
	};
	class Sprut_2A75_xj400: Gun125 {
		reloadSound[] = {"\TZK_Sounds_4_0_0\2S25\125mmreload.wav",0.1,0.9};
		reloadTime = 12; //8
		magazines[] = {"Sprut_3VBM17_xj400","Sprut_3VBK25_xj400"};
	};

	// M101, M55 weapon from Coc
	class Howi155HE_CoC_xj400: Default {
		displayNameMagazine = "HE";
		shortNameMagazine = "HE";
		scopeMagazine = 2; scopeWeapon = 0;
		count = 6;
		initSpeed = 400; // Not defined in CoC. Redefine as 400 here, a very low thus inaccurate value.
		
		displayName = "155mm HE";
		ammo = "HE155_CoC_xj400";
		nameSound = "heat";
		reloadTime = 12;
		sound[] = {"",0,1};
		ffCount = 1;
		dispersion = 0;
		autoFire = 1;
		aiRateOfFire = 1.00;
		aiRateOfFireDistance = 10000;
	};
	class Howi155_CoC_xj400: Howi155HE_CoC_xj400 {
		displayName = "155mm Cannon";
		scopeWeapon = 2; scopeMagazine = 0;
		weaponType = 65536;
		
		optics = 1;
		opticsZoomMin = 0.2;
		opticsZoomMax = 0.9;
		flash = "gunfire";
		flashSize = 10;
		maxLeadSpeed = 40;
		canLock = 2;
		magazines[] = {"Howi155HE_CoC_xj400"};
	};
	class Howi152HE_CoC_xj400: Howi155HE_CoC_xj400 {
		initSpeed = 300;
		
		ammo = "HE152_CoC_x200";
		reloadTime = 12;	
		displayName = "152mm HE";
	};
	class Howi152_CoC_xj400: Howi155_CoC_xj400 {
		displayName = "152mm Cannon";
		magazines[] = {"Howi152HE_CoC_xj400"};
	};
	class Howi105HE_CoC_xj400: Howi155HE_CoC_xj400 {
		displayNameMagazine = "HE";
		shortNameMagazine = "HE";
		sound[] = {"\CoC_Arty\M109\maingun.wss",db+20,1};
		count = 6;
		initSpeed = 300;

		displayName = "105mm HE";
		ammo = "HE105_CoC_xj400";
		reloadTime = 6;
	};
	class Howi105_CoC_xj400: Howi155_CoC_xj400 {
		displayName = "105mm Cannon";
		magazines[] = {"Howi105HE_CoC_xj400"};
	};	
	
	class AAShell_xj400: Shell120 {
		ammo = "AAShell_xj400";
	};
	class AAGun_xj400: Gun120 {
		displayName = "AAGun";
		magazines[] = {"AAShell_xj400"};
	};


	class LAW_TZK: AT3Launcher {
		count = 200;
		ammo = LAW_TZK;
		displayName = "LAW_TZK";
		displayNameMagazine = "LAW_TZK";
		shortNameMagazine = "LAW_TZK";
		reloadTime = 0.2;
	};

	// Mortar Structure Weapon
	class M252Launcher: Gun120 {
		displayName = "M252 Mortar"; // Weapon, Muzzle and Mode parameter.
		scopeWeapon = 2; scopeMagazine = 0;
		
		backgroundReload = 1;
		reloadSound[] = {"\TZK_Objects\Sound\Pack_Mortar\mortar_reload.ogg",0.0316,1};
		canLock = 0; // Muzzle parameter
		magazineReloadTime = 5;
		primary = 10; // Default value. Probably no use. Refer to https://forums.bohemia.net/forums/topic/135694-primary-in-configcpp-regarding-weapons/
		magazines[] = {"Mortar_0200_xj400", "Mortar_0201_xj400", "Mortar_0202_xj400", "Mortar_0080_xj400", "Mortar_0120_xj400", "Mortar_0180_xj400"}; // Use one of itself as its magazine.
	};
	class Mortar_0200_xj400: M252Launcher {
		displayName = "Mortar (500m for AI)"; // Weapon, Muzzle and Mode parameter.
		scopeWeapon = 0; scopeMagazine = 2;
		
		displayNameMagazine = "Mortar (500m for AI)"; // Magazine parameter
		shortNameMagazine = "Mortar";
		count = 25;
		initSpeed = 200; // This value will allow AI use it normally, and its range is a little more than 1500, quite ideal.
		
		ammo = "Mortar_500m_xj400"; // Mode parameter
		autoReload = 1;
		autoFire = 1;
		ffMagnitude = 0;
		ffFrequency = 1;
		reloadTime = 3;
		aiRateOfFire = 0.7;
		aiRateOfFireDistance = 2000;
		sound[] = {"\TZK_Objects\Sound\Pack_Mortar\mortar_fire.ogg",db+30,1};
		
		enableAttack = 1;
	};
	class Mortar_0201_xj400: Mortar_0200_xj400 {
		displayName = "Mortar (1000m for AI)";
		displayNameMagazine = "Mortar (1000m for AI)"; // Magazine parameter
		shortNameMagazine = "Mortar";
		ammo = "Mortar_1000m_xj400"; // Mode parameter
		initSpeed = 201;
	};
	class Mortar_0202_xj400: Mortar_0200_xj400 {
		displayName = "Mortar (1500m for AI)";
		displayNameMagazine = "Mortar (1500m for AI)"; // Magazine parameter
		shortNameMagazine = "Mortar";
		ammo = "Mortar_1500m_xj400"; // Mode parameter
		initSpeed = 202;
	};
	class Mortar_0080_xj400: Mortar_0200_xj400 {
		displayName = "Mortar (500m)";
		displayNameMagazine = "Mortar (500m)";
		shortNameMagazine = "Mortar";
		initSpeed = 80;
	};
	class Mortar_0120_xj400: Mortar_0080_xj400 {
		displayName = "Mortar (1000m)";
		displayNameMagazine = "Mortar (1000m)";
		initSpeed = 120;
	};
	class Mortar_0180_xj400: Mortar_0080_xj400 {
		displayName = "Mortar (1500m)";
		displayNameMagazine = "Mortar (1500m)";
		initSpeed = 180;
	};

	// Weapon for Howitzer. The parameter "magazineReloadTime" of "Default" and "Gun..." is (and should be, for artillery function) 0.
	class Gun105_xj400: Gun73 {
		displayName = "Gun105";
		weaponType = 65536;
		
		reloadSound[] = {"\TZK_Sounds_4_0_0\M101\105_reload.wss",db-18,1};
		reloadMagazineSound[] = {"Weapons\missload","db-70",1};
		optics = 1;
		opticsZoomMin = 0.25;
		opticsZoomMax = 0.25;
		canLock = 2;
		magazines[] = {"AP105_xj400","HE105_0080_xj400","HE105_0120_xj400","HE105_0180_xj400","HE105_0300_xj400","HE105_0400_xj400","HE105_0500_xj400","HE105_0600_xj400","HE105_0712_xj400"};
		backgroundReload = 1;
		aiDispersionCoefX = 1;
		aiDispersionCoefY = 1;

		ffMagnitude = 1;
		ffFrequency = 5;
		ffCount = 1;
	};
	class AP105_xj400: Shell120 { 
		displayNameMagazine = "105mm AP"; shortNameMagazine = "AP";
		count = 35;
		initSpeed = 712;
	
		ammo = "AP105_xj400";
		displayName = "105mm AP";
		sound[] = {"\TZK_Sounds_4_0_0\M101\105_fire.wss",db40,1};
		reloadTime = 8;
		dispersion = 0.01;
		aiRateOfFireDistance = 1500;
		airateoffire = 10;
		autoFire = 0;
		soundContinuous = 0;
	};
	class HE105_0080_xj400: AP105_xj400 {
		displayNameMagazine = "105mm HE"; shortNameMagazine = "HE";
		nameSound = "heat";
		initSpeed = 80;
		
		ammo = "HE105_xj400";
		displayName = "105mm HE (80m/s)";
		aiRateOfFireDistance = 5500;
		airateoffire = 20;
	};
	class HE105_0120_xj400: HE105_0080_xj400 {initSpeed = 120; displayName = "105mm HE (120m/s)"; };
	class HE105_0180_xj400: HE105_0080_xj400 {initSpeed = 180; displayName = "105mm HE (180m/s)"; };
	class HE105_0300_xj400: HE105_0080_xj400 {initSpeed = 300; displayName = "105mm HE (300m/s)"; };
	class HE105_0400_xj400: HE105_0080_xj400 {initSpeed = 400; displayName = "105mm HE (400m/s)"; };
	class HE105_0500_xj400: HE105_0080_xj400 {initSpeed = 500; displayName = "105mm HE (500m/s)"; };
	class HE105_0600_xj400: HE105_0080_xj400 {initSpeed = 600; displayName = "105mm HE (600m/s)"; };
	class HE105_0712_xj400: HE105_0080_xj400 {initSpeed = 712; displayName = "105mm HE (712m/s)"; };

	class Gun122_xj400: Gun73 {
		displayName = "Gun122";
		weaponType = 65536;
		
		reloadSound[] = {"\TZK_Sounds_4_0_0\D30\rel_gun",db-50,1};
		reloadMagazineSound[] = {"Weapons\missload","db-70",1};
		optics = 1;
		opticsZoomMin = 0.25;
		opticsZoomMax = 0.25;
		canLock = 2;
		magazines[] = {"AP122_xj400","HE122_0080_xj400","HE122_0120_xj400","HE122_0180_xj400","HE122_0300_xj400","HE122_0400_xj400","HE122_0500_xj400","HE122_0600_xj400","HE122_0690_xj400"};
		backgroundReload = 1;
		aiDispersionCoefX = 1;
		aiDispersionCoefY = 1;

		ffMagnitude = 1;
		ffFrequency = 5;
		ffCount = 1;
	};
	class AP122_xj400: AP105_xj400 {
		displayNameMagazine = "122mm AP"; shortNameMagazine = "AP";
		initSpeed = 690;

		ammo = "AP122_xj400";
		displayName = "122mm AP";
		sound[] = {"Weapons\gun125",10.000000,1};
	};
	class HE122_0080_xj400: HE105_0080_xj400 {
		displayNameMagazine = "122mm HE"; shortNameMagazine = "HE";
		nameSound = "heat";
		initSpeed = 80;
		
		ammo = "HE122_xj400";
		displayName = "122mm HE (80m/s)";
		sound[] = {"Weapons\gun125",10.000000,1};
	};
	class HE122_0120_xj400: HE122_0080_xj400 {initSpeed = 120; displayName = "122mm HE (120m/s)"; };
	class HE122_0180_xj400: HE122_0080_xj400 {initSpeed = 180; displayName = "122mm HE (180m/s)"; };
	class HE122_0300_xj400: HE122_0080_xj400 {initSpeed = 300; displayName = "122mm HE (300m/s)"; };
	class HE122_0400_xj400: HE122_0080_xj400 {initSpeed = 400; displayName = "122mm HE (400m/s)"; };
	class HE122_0500_xj400: HE122_0080_xj400 {initSpeed = 500; displayName = "122mm HE (500m/s)"; };
	class HE122_0600_xj400: HE122_0080_xj400 {initSpeed = 600; displayName = "122mm HE (600m/s)"; };
	class HE122_0690_xj400: HE122_0080_xj400 {initSpeed = 690; displayName = "122mm HE (690m/s)"; };
	// M46(from DKMM) Weapon
	class AP130_xj400: Default {
		weaponType = 65536;
		scopeMagazine = 2;
		
		nameSound = "shell";
		displayNameMagazine = "SABOT 130";
		shortNameMagazine = "SABOT";
		count = 20;
	//	initSpeed = 1500;
		initSpeed = 930; // Value from website.
		
		reloadTime = 8;
		ammo = "AP130_xj400";
		displayName = "SABOT 130";
		sound[] = {"Weapons\gun73","db20",1};
		flash = "gunfire";
		flashSize = 12.0;
		dispersion = 0.00055;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 1400;
		autoFire = 0;
		autoReload = 1;
	};
	class HE130_xj400: AP130_xj400 {
		displayNameMagazine = "HE 130";
		shortNameMagazine = "HE";
		namesound = "heat";
		count = 16;
		
		ammo = "HE130_xj400";
		displayName = "HE 130";
	};
	class Gun130_xj400: Gun73 {
		displayName = "Gun130";
		weaponType = 65536;
		
		reloadSound[] = {"Weapons\reload","db-60",1};
		reloadMagazineSound[] = {"Weapons\missload","db-70",1};
		optics = 1;
		opticsZoomMin = 0.2;
		opticsZoomMax = 0.9;
		canLock = 2;
		magazines[] = {"AP130_xj400","HE130_xj400"};
		backgroundReload = 1;
	};

//EOF