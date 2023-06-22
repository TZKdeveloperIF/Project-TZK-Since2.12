	// Original Gunships' Missile
	class Hellfire_xj400: Hellfire {
		hit = 1050;
	};
	class HellfireCobra_xj400: Hellfire_xj400 {
		proxyShape = "\TZK_Model_4_0_0\wp\hellfirecobra_proxy.p3d";
	};
	class HellfireApach_xj400: Hellfire_xj400 {
		model = "\Apac\hellfire";
		proxyShape = "\Apac\Hellfire_proxy";
	};
	class AT6_xj400: AT6 {
		hit = 800;
		laserLock = 1;
	};
	class AT6a_RHS_xj400: AT6_xj400 {
		model = "\TZK_Model_4_0_0\wp\RHS_AT6.p3d";
		proxyShape = "\TZK_Model_4_0_0\wp\RHS_AT6a_Proxy.p3d";
	};
	class AT6b_RHS_xj400: AT6a_RHS_xj400 {
		proxyShape = "\TZK_Model_4_0_0\wp\RHS_AT6b_Proxy.p3d";
	};
	class AT6c_RHS_xj400: AT6a_RHS_xj400 {
		proxyShape = "\TZK_Model_4_0_0\wp\RHS_AT6c_Proxy.p3d";
	};
	class AT6d_RHS_xj400: AT6a_RHS_xj400 {
		proxyShape = "\TZK_Model_4_0_0\wp\RHS_AT6d_Proxy.p3d";
	};
		
	// Rocket
	class Zuni_MaverickLike_xj400 : Zuni {
		simulation = "shotMissile";
		simulationStep = 0.05;
		maxControlRange = 100;
	};
	class SNEB70_xj400 : Zuni {
		model = "\TZK_Model_4_0_0\wp\rocket_sneb70.p3d";
	};
	
	// Vehicle AA Missile
	class Stinger_xj400: AA {
		hit = 80; indirectHit = 40; indirectHitRange = 5;
		minRange = 20;minRangeProbab = 0.9;
		midRange = 1000;midRangeProbab = 0.9;
		maxRange = 3000;maxRangeProbab = 0.9;
		airLock = 1;
		cost = 1000;
		maxControlRange = 3000;
		maneuvrability = 5.0;
		maxSpeed = 800;
		initTime = 0;
		thrustTime = 3.0;
		thrust = 1000;
		soundFly[] = {"objects\noise",db-20,1};
		soundEngine[] = {"objects\noise",db-10,1};
		visibleFire = 32; audibleFire = 32; visibleFireTime = 4;
	};
	class Strela_xj400: Stinger_xj400 {};
	class RedTop_26_xj400 : AA {
		model ="\TZK_Objects\Model\wep\hunt_redtop_Mesh.p3d";
		proxyshape = "\TZK_Objects\Model\wep\hunt_redtop_Mesh.p3d";
		hit = 170;indirectHit = 100;indirectHitRange = 10;
		minRange = 50; minRangeProbab = 0.7;
		midRange = 2000; midRangeProbab = 0.95;
		maxRange = 2600; maxRangeProbab = 0.6;
		maneuvrability = 50;
		airLock = 1;
		initTime = 0.4;
		thrustTime = 500;
		maxControlRange = 2600;
		thrust = 600;
		maxSpeed = 900;
		
		cost = 200; // This value should be low to make AI use it attack aircraft.
	};
	class RedTop_30_xj400 : RedTop_26_xj400 {
		maxRange = 3000;
		maxControlRange = 3000;
	};
	class RedTop_40_xj400 : RedTop_26_xj400 {
		maxRange = 4000;
		maxControlRange = 4000;
	};

	class 9M311_26_xj400: RedTop_26_xj400 {
		// Refer to DKMM Tunguska and rkthunter.
		hit = 240;indirectHit = 160;indirectHitRange = 7;
		minRange = 15; minRangeProbab = 0.9;
		midRange = 2000; midRangeProbab = 0.95;
		maxRange = 2600; maxRangeProbab = 0.85;
		airLock = 1; irLock = 1;
		maxControlRange = 2600;
		maxSpeed = 900;
		
	//	model = "dkmm_9m311.p3d"; // This model is lacking of texture. Use original OFP model instead.
	//	model = "AT1"; // This model is better than law, but still not good.
	//	model = "\TZK_Model_4_0_0\DKMM_9M311.p3d";
	//	model = "\TZK_Model_4_0_0\law_MLOD.p3d";
	
		thrustTime = 10;
		inittime = 0.2;
		thrust = 1800;
		sideAirFriction = 0.5;
		cost = 200;
		visibleFire = 12; audibleFire = 2; visibleFireTime = 3;
	};
	class 9M311_30_xj400 : 9M311_26_xj400 {
		maxRange = 3000;
		maxControlRange = 3000;
	};
	class 9M311_40_xj400 : 9M311_26_xj400 {
		maxRange = 4000;
		maxControlRange = 4000;
	};
	class 9M311_60_xj400 : 9M311_26_xj400 {
		maxRange = 6000;
		maxControlRange = 6000;
	};


	// Guided AT
	class GuidedAT_APC_xj400: AT3 {
		hit = 780; indirectHit = 300; indirectHitRange = 2;
		minRange = 50;minRangeProbab = 0.9;
		midRange = 1000;midRangeProbab = 0.9;
		maxRange = 1500;maxRangeProbab = 0.6;
		cost = 1000
		manualControl = false
		maxControlRange = 1000
		maxSpeed = 300
		thrustTime = 3.0
		thrust = 300
		maneuvrability = 3.0
		soundFly[]={objects\noise,db0,db-30,1};
		soundEngine[]={objects\noise,db-20,1};

		visibleFire = 32; audibleFire = 32; visibleFireTime = 4
	};
	class GuidedAT_Heli_xj400: GuidedAT_APC_xj400 {
		hit = 1275; indirectHit = 600; indirectHitRange = 2;
		minRange = 100;minRangeProbab = 0.9;
		maneuvrability = 5.0;
		proxyShape = "\Apac\Hellfire_proxy";
	};
	class GuidedAT_Cobra_xj400: GuidedAT_Heli_xj400 {
		proxyShape = "\TZK_Model_4_0_0\wp\hellfirecobra_proxy.p3d";
	};
	class GuidedAT_AT6_xj400: GuidedAT_Heli_xj400 {
		proxyShape = "\TZK_Model_4_0_0\wp\RHS_AT6a_Proxy.p3d";
	};

	class HOT3Rocket_xj400: HellfireCobra_xj400 {
		minRange = 50;
		minRangeProbab = 0.50;
		midRange = 2500;
		midRangeProbab = 0.95;
		maxRange = 5000;
		maxRangeProbab = 0.50;
		maxSpeed = 350;
		cost = 20000;
		irLock = 1;
		laserLock = 1;
		manualControl = 1;
		maxControlRange = 4000;
		maneuvrability = 8.0;
		thrustTime = 20.0;
		thrust = 500;
		model = "\TZK_Model_4_0_0\wp\rocket_hot3.p3d";
	};
	class PARS3Rocket_xj400: GuidedAT_Heli_xj400 {
		irLock = 1;
		laserLock = 1;
		manualControl = 1;
		maneuvrability = 8.0;
		thrustTime = 20.0;
		thrust = 500;
		model = "\TZK_Model_4_0_0\wp\rocket_pars3.p3d";
	};
	
	class tomahawk_xj400: Maverick {
		hit = 5000;
		indirectHit = 5000;
		indirectHitRange = 35;
		maxSpeed = 50
		initTime = 0.2;
		thrustTime = 10;
		thrust = 350
		maneuvrability = 30.0;
		laserLock = 1;
		soundHit[]={"\TZK_Objects\Sound\nuke.wss",db+200,1};
		model = "\TZK_Objects\Model\wep\Tomahawk.p3d";
		proxyShape = "\TZK_Objects\Model\wep\Tomahawk.p3d";
	};
	class Scud_Cluster_xj400 : Grenade {
		hit = 5000; indirectHit = 5000; indirectHitRange = 35;
		soundHit[]={"",1,1};
	};
	
	// Bomb
	class LaserGuidedBomb_xj400: Default {
		hit = 5000; indirectHit = 3500; indirectHitRange = 15;
		minRange = 50; minRangeProbab = 0.5;
		midRange = 300; midRangeProbab = 0.95;
		maxRange = 1500; maxRangeProbab = 0.5;
		soundHit[] = {"\LaserGuided\expl2",100,1};
		cost = 20000;
		model = "Snake";
		proxyShape = "Snake";
		irLock = 0;
		laserLock = 1;
		maxControlRange = 100000;
		maneuvrability = 16;
		sideAirFriction = 0.1;
		simulation = "shotMissile";
		maxSpeed = 100;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
	};
	class RKTHunter_Bomb_xj400 : LaserGuidedBomb_xj400 {
		hit = 1500; indirectHit = 450; indirectHitRange = 15;
		minRange = 500; minRangeProbab = 0.9;
		midRange = 800; midRangeProbab = 0.95;
		maxRange = 1500; maxRangeProbab = 0.9;
		model = "\TZK_Objects\Model\wep\hunt_bomb_mesh.p3d";
		proxyshape = "\TZK_Objects\Model\wep\hunt_bomb_mesh.p3d";
		sideAirFriction = 0.25;
		irLock = 1;
		laserLock = 0;
		maneuvrability = 50.0;
		cost = 2000;
	};

	// For Test
	class LAW_TZK: Zuni {
	//	simulationStep = 11; // what's this? seems to be the frequency OFP check the trajectory. Not test it.
		initTime = 0;
		thrustTime = 100; // if time up, the law of rocket is different.
		thrust = 2/sqrt(3)*9.8066;
	//	thrust = 1770;
		// model, and its mass, don't affect z-velocity.
		maneuvrability = 0;
		coefGravity = 10; // don't affect rockets. gravity of rocket is decided by sideAirFriction.
		timeToLive = 12; // For shotShell only. Default value 20.
		airFriction = -0.0005; // don't affect rockets.
		sideAirFriction = 10; // no sideAirFriction, rocket will fall very fast. if sideAirFriction = 0, acceleration of rocket is 9.8.
		// if sideAirFriction = 1, -2.67106 is stable z-velocity. No matter how much the the horizontal velocity is (and probably the direction either), z- is independent. The velocity 0,0,-1000, with 0 thrust, will cause about 55 meters move in 1 second, and has already reduce its velocity to -2.668278.
		// list of z-stable velocity and sideAirFriction: -1.77003, 2; -1.14365, 4; -0.609346,10; 
		// sideAirFriction = 100 will lead to abnormal.
		
		// sideAirFriction lead to a fixed falling velocity, independent to thrust and horizontal velocity. Probably don't affected by direction too.
		// Too large z-velocity will make acceleration too much, and the velocity will be set to 10 immediately.
	};
//EOF