//Ammos used mainly by tanks.

	class M1Sabot_xj400: Shell120 {
		hit = 575; indirectHit = 10; indirectHitRange = 5;
		minRange = 1; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.95;
		soundHit[] = {"Explosions\expl4",100, 1};
	};
	class M1Heat_xj400: Heat120 {
		airLock = 0;
		hit = 350; indirectHit = 150; indirectHitRange = 8;
		minRange = 5; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.95;
		soundHit[] = {"Explosions\expl4",100, 1};
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};
	class T80Sabot_xj400: Shell120 {
		hit = 575; indirectHit = 10; indirectHitRange = 5;
		minRange = 1; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.95;
		soundHit[] = {"Explosions\expl4",100, 1};
	};
	class T80Heat_xj400: Heat120 {
		airLock = 0;
		hit = 350; indirectHit = 150; indirectHitRange = 8;
		minRange = 5; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.95;
		soundHit[] = {"Explosions\expl4",100, 1};
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};

	class LeoSabot_xj400: Shell120 {
		hit = 575; indirectHit = 10; indirectHitRange = 5;
		minRange = 1; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 5000; maxRangeProbab = 0.95;
		soundHit[] = {"Explosions\expl4",100, 1};
		soundFly[] = {"\TZK_Sounds_4_0_0\Leo2A6\fly.wss",25, 0.8};
		model = "\TZK_Model_4_0_0\wp\DM63.p3d";
	};
	class LeoHeat_xj400: Heat120 {
		airLock = 0;
		hit = 350; indirectHit = 150; indirectHitRange = 8;
		minRange = 5; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 5000; maxRangeProbab = 0.95;
		soundHit[] = {"Explosions\explosion_large1.wss",15, 1};
		soundFly[] = {"\TZK_Sounds_4_0_0\Leo2A6\fly.wss",25, 0.8};
		model = "\TZK_Model_4_0_0\wp\DM63.p3d";
	};
	class M12Sabot_xj400: M1Sabot_xj400 {
		soundHit[] = {"Explosions\explosion_large1",100, 1};
		soundFly[] = {"\TZK_Sounds_4_0_0\inq_m1\shellfly.wss",8, 1.0};
		soundHit2[] = {"\TZK_Sounds_4_0_0\Shellground.wss",10, 1};
		hitGround[] = {soundHit2,1};
		soundHit3[] = {"\TZK_Sounds_4_0_0\Shellground.wss",10, 1};
		hitBuilding[] = {soundHit3,1};
	};
	class M12Heat_xj400: M1Heat_xj400 {
		soundHit[] = {"Explosions\explosion_large1",100, 1};
		soundFly[] = {"\TZK_Sounds_4_0_0\inq_m1\shellfly.wss",8, 1.0};
		soundHit2[] = {"\TZK_Sounds_4_0_0\Shellground.wss",10, 1};
		soundHit3[] = {"\TZK_Sounds_4_0_0\Shellground.wss",10, 1};
		soundHit4[] = {"\TZK_Sounds_4_0_0\Heat-Hit.wss",10, 1};
		hitArmor[] = {soundHit4,1};
		soundHit5[] = {"\TZK_Sounds_4_0_0\Explosion4.wss",10, 1};
		hitGround[] = {soundHit5,1};
		soundHit6[] = {"\TZK_Sounds_4_0_0\Explosion3.wss",10, 1};
		hitBuilding[] = {soundHit6,1};
	};

	class PLASabot_xj400: Shell120 {
		hit = 575; indirectHit = 10; indirectHitRange = 5;
		minRange = 1; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.95;
		soundHit[] = {"\TZK_Sounds_4_0_0\VME\e.wss", 100,1};
		soundHitArmor1[] = {"\TZK_Sounds_4_0_0\VME\e2.wss", 100,1};
		soundHitArmor2[] = {"\TZK_Sounds_4_0_0\VME\e3.wss", 100,1};
		soundHitArmor3[] = {"\TZK_Sounds_4_0_0\VME\e4.wss", 100,1};
		hitGround[] = {"soundHit",1};
		hitArmor[] = {"soundHitArmor1",0.35,"soundHitArmor2",0.35,"soundHitArmor3",0.3};
		soundFly[] = {"\TZK_Sounds_4_0_0\VME\s.ogg",1,0};
	};
	class PLAHeat_xj400: Heat120 {
		airLock = 0;
		hit = 350; indirectHit = 150; indirectHitRange = 8;
		minRange = 5; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.95;
		soundHit[] = {"Explosions\expl4",100, 1};
		soundHitArmor1[] = {"\TZK_Sounds_4_0_0\VME\sabot1.wss",100,1};
		soundHitArmor2[] = {"\TZK_Sounds_4_0_0\VME\sabot2.wss",100,1};
		hitArmor[] = {"soundHitArmor1",0.5,"soundHitArmor2",0.5};
		soundFly[] = {"\TZK_Sounds_4_0_0\VME\s.ogg",1,0};
	};

	class 9M112_xj400: AA {
		hit = 250;
		indirectHit = 10;
		indirectHitRange = 2.500000;
		minRange = 100;
		minRangeProbab = 0.500000;
		midRange = 400;
		midRangeProbab = 0.950000;
		maxRange = 5000;
		maxRangeProbab = 0.500000;
		model = "AT1";
		simulation = "shotmissile";
 		simulationStep = 0.050000;
		cost = 5000;
		soundFly[] = {"\TZK_Sounds_4_0_0\icp_t72s\missilefly.ogg",2,0.7};
		soundHit[] = {"\TZK_Sounds_4_0_0\icp_t72s\explosion.wss",31.622778,1};
		soundEngine[] = {"\TZK_Sounds_4_0_0\icp_t72s\noise.wss",0.001,1};
		maxSpeed = 300;
		airLock = 1;
		irLock = 1;
		laserlock = 1;
		manualControl = 1;
		maxControlRange = 2500;
		initTime = 0.150000;
		thrustTime = 10;
		thrust = 600;
		maneuvrability = 5;
	};
	class 9M120_xj400: AA {
		hit = 500;
		indirectHit = 70;
		indirectHitRange = 2.500000;
		minRange = 100;
		minRangeProbab = 0.500000;
		midRange = 400;
		midRangeProbab = 0.950000;
		maxRange = 5000;
		maxRangeProbab = 0.500000;
		model = "AT1";
		simulation = "shotmissile";
 		simulationStep = 0.050000;
		cost = 5000;
		soundFly[] = {"\TZK_Sounds_4_0_0\icp_t72s\missilefly.ogg",2,0.7};
		soundHit[] = {"\TZK_Sounds_4_0_0\icp_t72s\explosion.wss",31.622778,1};
		soundEngine[] = {"\TZK_Sounds_4_0_0\icp_t72s\noise.wss",0.001, 1};
		maxSpeed = 350;
		irLock = 1;
		airlock = 0;
		laserlock = 1;
		manualControl = 1;
		maxControlRange = 2500;
		initTime = 0.150000;
		thrustTime = 15;
		thrust = 700;
		maneuvrability = 10;
	};
	class PLA_ATGM125_xj400: AT3 {
		hit = 1400;indirectHit = 1200;indirectHitRange = 2.0;
		minRange = 1000;
		minRangeProbab = 0.500000;
		midRange = 2000;
		midRangeProbab = 0.950000;
		maxRange = 5000;
		maxRangeProbab = 0.750000;
		maxSpeed = 500;
		laserlock = true;
		soundHit[] = {"\TZK_Sounds_4_0_0\VME\AA2.wav",100,1};
		soundHitArmor1[] = {"\TZK_Sounds_4_0_0\VME\AA.wav",100,1};
		soundHitArmor2[] = {"\TZK_Sounds_4_0_0\VME\AA3.wav",100,1};
		soundHitArmor3[] = {"\TZK_Sounds_4_0_0\VME\AA4.wav",100,1};
		hitGround[] = {"soundHit",1,};
		hitArmor[] = {"soundHitArmor1",0.35,"soundHitArmor2",0.35,"soundHitArmor3",0.3};
		soundFly[] = {"\TZK_Sounds_4_0_0\VME\towfly.ogg",10,1};
		maxControlRange = 2500;
		initTime = 0.150000;
		thrustTime = 15;
		thrust = 700;
		maneuvrability = 10;
	};
	class 9M120_t90ms_xj400: AT3 {
		hit = 650;
		indirectHit = 70;
		indirectHitRange = 2.500000;
		minRange = 100;
		minRangeProbab = 0.500000;
		midRange = 400;
		midRangeProbab = 0.950000;
		maxRange = 5000;
		maxRangeProbab = 0.500000;
		model = "AT1";
		simulation = "shotmissile";
 		simulationStep = 0.050000;
		cost = 5000;
		soundFly[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\missilefly.ogg",2,0.7};
		soundHit[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\explosion.wav",31.622778,1};
		soundEngine[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\noise.wss",0.001, 1};
		maxSpeed = 350;
		irLock = 1;
        airlock = 0;
		//laserlock = 1;
		//manualControl = 1;
		maxControlRange = 2500;
		initTime = 0.150000;
		thrustTime = 15;
		thrust = 700;	
		maneuvrability = 4;
	};
	class 3OF26_t90ms_xj400: Shell125 {
	//	hit = 200; indirectHit = 170; indirectHitRange = 9;
		hit = 350; indirectHit = 150; indirectHitRange = 8;
        minRange = 10; minRangeProbab = 1;
    	midRange = 1500; midRangeProbab = 0.9;
    	maxRange = 2500; maxRangeProbab = 0.7;
		cost = 500;
	};
	class 3BK29M_t90ms_xj400: Heat125 {
		hit = 500; indirectHit = 16; indirectHitRange = 5;
		minRange = 10; minRangeProbab = 1;
    	midRange = 1500; midRangeProbab = 0.95;
    	maxRange = 2500; maxRangeProbab = 0.7;
		cost = 800;
		soundFly[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\125fly.ogg",1,3};
	};
	class 3BM42_t90ms_xj400: Heat125 {
	//	hit = 900; indirectHit = 8; indirectHitRange = 2;
		hit = 575; indirectHit = 10; indirectHitRange = 5;
		minRange = 20; minRangeProbab = 1;
		midRange = 1500; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.6;
		soundFly[] = {"\TZK_Sounds_4_0_0\mfm_cfg_t90ms\125fly.ogg",1,3};
		cost = 1000;
	};	


	class CoaxW_xj400: Bullet7_6 {
		hit = 6; cost = 5;
		tracerColor[] = {1,0.25000,0.12500,0.5};
		minRange = 1; minRangeProbab = 1;
		midRange = 800; midRangeProbab = 0.5;
		maxRange = 1600; maxRangeProbab = 0.1;
	};
	class 50calW_xj400: Bullet12_7 {
		airLock = 1; hit = 19; cost = 10;
		tracerColor[] = {1,0.25000,0.12500,1};
		minRange = 1; minRangeProbab = 1;
		midRange = 1000; midRangeProbab = 0.5;
		maxRange = 2000; maxRangeProbab = 0.1;
	};
	class CoaxE_xj400: Bullet7_6 {
		hit = 6; cost = 5;
		tracerColor[] = {0.12500,0.25000,1,0.5};
		minRange = 1; minRangeProbab = 1;
		midRange = 800; midRangeProbab = 0.5;
		maxRange = 1600; maxRangeProbab = 0.1;
	};
	class 50calE_xj400: Bullet12_7 {
		airLock = 1; hit = 19; cost = 10;
		tracerColor[] = {0.12500,0.25000,1,1};
		minRange = 1; minRangeProbab = 1;
		midRange = 1000; midRangeProbab = 0.5;
		maxRange = 2000; maxRangeProbab = 0.1;
	};

	// M109 Paladin from CoC
	class HEAT155_DKMM_xj400: Heat125 {
		airLock = 0; irlock = 1; laserlock = 1;
		hit = 950; indirectHit = 490; indirectHitRange = 20;
		minRange = 50; 	minRangeProbab = 1;
		midRange = 2000; 	midRangeProbab = 0.9;
		maxRange = 4000; 	maxrangeprobab = 0.75;
		
		model = "\TZK_Model_4_0_0\wp\heat155.p3d";
		
		tracerColor[] = {1,0.25000,0.12500,1};
		soundFly[] = {"\TZK_Sounds_4_0_0\COC\155mmFly.wss", 0.05, 1};
		soundHit[] = {"\TZK_Sounds_4_0_0\COC\impact.wss",db+40,1};
		
		explosive = 1;
		visibleFire = 32; audibleFire = 32; visibleFireTime = 6;
		cost = 500;
		recoil = {1.00,3.5,1.0};
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};
	class AP155_DKMM_xj400: HEAT155_DKMM_xj400 {
		hit = 1500; indirectHit = 200; indirectHitRange = 5;
		minRange = 30; minRangeProbab = 0.5;
	};
	// TOS from DKM.
	class FAE220_DKMM_xj400: Shell125 {
		hit = 200; indirectHit = 0; indirectHitRange = 0; explosive = 0; // Power required or AI vehicle won't fire it.
		minRange = 250;	minRangeProbab = 0.50;
		midRange = 1500;	midRangeProbab = 0.95;
		maxRange = 3500;	maxRangeProbab = 0.50;
		cost = 1;
		
		soundHit[] = {"",1,1};
		hitGround[] = {"soundHit",1}; hitMan[] = {"soundHit",1}; hitArmor[] = {"soundHit",1}; hitBuilding[] = {"soundHit",1};
		
		soundFly[] = {"\TZK_Sounds_4_0_0\DKM\miss_air.wss", db+20, 1};
		model = "\TZK_Model_4_0_0\wp\FAE220_DKMM.p3d";
		airLock = 0; irLock = 1; laserLock = 1;
		visibleFire = 32; audibleFire = 32; visibleFireTime = 8;

		simulation = "shotShell";
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	//	proxyShape = "\TZK_Model_4_0_0\TOS_Rocket.p3d";
	};
	class M26_CoC_xj400: FAE220_DKMM_xj400 {
		minRange = 150;	minRangeProbab = 0.99;
		midRange = 2000;	midRangeProbab = 0.99;
		maxRange = 10000;	maxRangeProbab = 0.99;
		
		soundFly[] = {"\TZK_Sounds_4_0_0\DKM\miss_air.wss", db+20, 1};
		
		model = "\TZK_Model_4_0_0\wp\FAE220_DKMM.p3d";
		recoil = "155maingun";

		visibleFire = 12; audibleFire = 2; visibleFireTime = 2;
		cost = 1;
	};
	class FAE220_SubBomb_xj400:	Shell125 {
		hit = 120; indirectHit = 60; indirectHitRange = 10;
		
		soundFly[] = {"",1,1}; soundEngine[] = {"",1,1}; soundHit[] = {"",1,1};
		hitGround[] = {"soundHit",1}; hitMan[] = {"soundHit",1}; hitArmor[] = {"soundHit",1}; hitBuilding[] = {"soundHit",1};
		
		cost = 1;
		explosive = 0 ;
	};
	class M26_SubBomb_xj400: FAE220_SubBomb_xj400{};
	class FAE220_Sound_xj400: Shell125 {
		hit = 1; indirectHit = 20; indirectHitRange = 85; explosive = 0;
		// Zero-detect
		visibleFire = 0; audibleFire = 0; visibleFireTime = 0;
		// Zero-feel
		tracerColor[] = {0,0,0,0}; tracerColorR[] = {0,0,0,0};
		soundFly[] = {"",1,1}; soundEngine[] = {"",1,1}; 
		
		soundHit[] = {"\TZK_Sounds_4_0_0\DKM\fae220_deton.wss", 100, 1};
		hitGround[] = {"soundHit",1}; hitMan[] = {"soundHit",1}; hitArmor[] = {"soundHit",1}; hitBuilding[] = {"soundHit",1};
		cost = 0;
	};
	class M26_Sound_xj400: FAE220_Sound_xj400 { soundHit[] = {"\TZK_Sounds_4_0_0\m29064mm\xpl.wss", 100, 1}; };
	
	// 2S25 Sprut-SD from mfm
	class Sprut_3BM42_xj400: T80Sabot_xj400 {
		soundFly[] = {"\TZK_Sounds_4_0_0\2S25\125fly.ogg",1,3};
	};
	class Sprut_3OF26_xj400: T80Heat_xj400 {
		soundFly[] = {"\TZK_Sounds_4_0_0\2S25\125fly.ogg",1,3};
	};
	// M101/M55 from CoC. Seems not well designed.
	class HE155_CoC_xj400: Heat125 {
		model = "shell";
		hit = 980; indirectHit = 490; indirectHitRange = 11;
		minRange = 50; 	minRangeProbab = 1;
		midRange = 2000; 	midRangeProbab = 0.9;
		maxRange = 4000; 	maxrangeprobab = 0.75;
		tracerColor[] = {1,0.25000,0.12500,1};
		soundFly[] = {"\TZK_Sounds_4_0_0\COC\155mmFly.wss", 0.05, 1};
		soundHit[] = {"",db+40,1};
		
		explosive = 1;
		airLock = 0;  irlock = 1; laserlock = 0;
		sideAirFriction = 0;
		visibleFire = 32; // how much is visible when this weapon is fired
		audibleFire = 32;
		visibleFireTime = 6;
		
		maxControlRange = 100000;
		maneuvrability = 0.0;
		maxSpeed = 5000;
		initTime = 0;
		thrustTime = 0;
		thrust = 2400;
		
		cost = 500;
		recoil = "155maingun";
		simulation = "shotMissile";
	};
	class HE152_CoC_x200: HE155_CoC_xj400{};
	class HE105_CoC_xj400: HE155_CoC_xj400 {
		hit = 490; indirectHit = 250; indirectHitRange = 9;
		cost = 250;
		soundFly[] = {"\TZK_Sounds_4_0_0\DKM\shellfly.wss", db-22, 0.9};
		soundHit[] = {"\TZK_Sounds_4_0_0\COC\impact.wss",db+430,1};
	};

	class AAShell_xj400: Shell120 {
		airLock = 1;
	};

// Structure. 

	// Mortar
	class Mortar4Ammo_xj400: MortarShell {
		hit = 600; indirectHit = 200; indirectHitRange = 20;
		minRange = 75; 		minRangeProbab = 0.950000;
		midRange = 500; 	midRangeProbab = 0.950000;
		maxRange = 1000; 	maxRangeProbab = 0.950000;
		soundHit[] = {"\TZK_Objects\Sound\Pack_Mortar\exp.ogg",db60,1};
		soundFly[] = {"objects\bulletnoise",0.251189,0.700000};
		soundHit1[] = {"\TZK_Objects\Sound\Pack_Mortar\grenade1.ogg",38.333333,1};
		soundHit2[] = {"\TZK_Objects\Sound\Pack_Mortar\grenade2.ogg",38.333333,1};
		soundHit3[] = {"\TZK_Objects\Sound\Pack_Mortar\grenade3.ogg",38.333333,1};
		hitGround[] = {"soundHit1",0.330000,"soundHit2",0.330000,"soundHit3",0.330000};
		hitArmor[] = {"soundHit1",0.330000,"soundHit2",0.330000,"soundHit3",0.330000};
		hitBuilding[] = {"soundHit1",0.330000,"soundHit2",0.330000,"soundHit3",0.330000};
		hitMan[] = {"soundHit1",0.300000,"soundHit2",0.300000,"soundHit3",0.300000};
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};
	class Mortar_500m_xj400: Mortar4Ammo_xj400 {
		minRange = 75; 		minRangeProbab = 0.950000;
		midRange = 300; 	midRangeProbab = 0.950000;
		maxRange = 550; 	maxRangeProbab = 0.950000;
	};
	class Mortar_1000m_xj400: Mortar_500m_xj400 {
		minRange = 75; 		minRangeProbab = 0.950000;
		midRange = 500; 	midRangeProbab = 0.950000;
		maxRange = 1000; 	maxRangeProbab = 0.950000;
	};
	class Mortar_1500m_xj400: Mortar_1000m_xj400 {
		minRange = 75; 		minRangeProbab = 0.950000;
		midRange = 800; 	midRangeProbab = 0.950000;
		maxRange = 1500; 	maxRangeProbab = 0.950000;
	};

	class AP105_xj400: Shell {
		hit = 450; indirectHit = 150; indirectHitRange = 1;
		minRange = 10;
		minRangeProbab = 0.5;
		midRange = 700;
		midRangeProbab = 1;
		maxRange = 1200;
		maxRangeProbab = 1;
		
		cost = 500;
		soundFly[] = {"\TZK_Sounds_4_0_0\M101\Shell_flyby.wss",db+2,1};
		soundHit[] = {"\TZK_Sounds_4_0_0\M101\Shell_expl.wss",100,1};
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};
	class HE105_xj400: AP105_xj400 {
		hit = 150; indirectHit = 110; indirectHitRange = 8;
		minRange = 50;
		minRangeProbab = 0.5;
		midRange = 2000;
		midRangeProbab = 1;
		maxRange = 4500;
		maxRangeProbab = 1;
		
		cost = 300;
	};
	class AP122_xj400: Shell {
		hit = 460; indirectHit = 40; indirectHitRange = 2;
		minRange = 10;
		minRangeProbab = 0.6;
		midRange = 1000;
		midRangeProbab = 0.9;
		maxRange = 4000;
		maxRangeProbab = 0.6;
		
		cost = 800;
		explosive = 1;

		soundHit[] = {"\TZK_Sounds_4_0_0\D30\gun.wss",100,1};
		soundFly[] = {"\TZK_Sounds_4_0_0\D30\fly.wss",1,0};
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};
	class HE122_xj400: AP122_xj400 {
		hit = 250; indirectHit = 159; indirectHitRange = 8.4;
		minRange = 15;
		minRangeProbab = 0.3;
		midRange = 1000;
		midRangeProbab = 1.0;
		maxRange = 5000;
		maxRangeProbab = 0.8;
		
		cost = 500;
	};
	class AP130_xj400: Heat73 {
	//	hit = 700; indirectHit = 50; indirectHitRange = 4; // Original power defined in dkmm_m46
		hit = 730; indirectHit = 40; indirectHitRange = 4; // Value calculated by linear interpolation depending on 125 and 155 ammo.
		soundFly[] = {"\TZK_Sounds_4_0_0\DKM\ShellFly.wss","db+2",1};
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 3;
		cost = 600;
		model = "\TZK_Model_4_0_0\wp\HEAT130.p3d";
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};
	class HE130_xj400: shell73 {
	//	hit = 190; indirectHit = 60; indirectHitRange = 11; // Original power defined in dkmm_m46
		hit = 450; indirectHit = 205; indirectHitRange = 10; // Value calculated by linear interpolation depending on 125 and 155 ammo.
		soundFly[] = {"\TZK_Sounds_4_0_0\DKM\ShellFly.wss","db+2",4};
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 3;
		cost = 300;
		model = "\TZK_Model_4_0_0\wp\HEAT130.p3d";
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};


//EOF