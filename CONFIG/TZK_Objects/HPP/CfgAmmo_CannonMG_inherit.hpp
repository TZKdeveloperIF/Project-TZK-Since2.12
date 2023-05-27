// Cannon
	class Bullet4x23_xj400: Bullet4x23 {
		hit = 40;
		indirectHit = 20;
		indirectHitRange = 2;
		minRange = 20;
		minRangeProbab = 0.8;
		midRange = 500;
		midRangeProbab = 0.95;
		maxRange = 3000;
		maxRangeProbab = 0.05;
		cost = 30;
		tracerColor[] = {0.2,0.8,0.1,0.25};
		tracerColorR[] = {0.2,0.8,0.1,0.25};
	};
	class Bullet4x20_xj400: Bullet4x20 {
		// Since 2.01 ArmA:R and TZK_4 Bullet4x20 don't have to be redefined. This object has a little maxRange for vehicle to switch missile when shooting far.
		access = 2;
		hit = 30; indirectHit = 15; indirectHitRange = 2;
		minRange = 20; 		minRangeProbab = 0.8;
		midRange = 500; 	midRangeProbab = 0.95;
		maxRange = 900; 	maxRangeProbab = 0.2;
		cost = 30;
		tracerColor[] = {0.8,0.5,0.1,0.25};
		tracerColorR[] = {0.8,0.5,0.1,0.25};
	};
	class Tunguska_30mm_DKM_xj400: Bullet4x20 {
		tracerColor[] = {0,0,0,0};tracerColorR[]= {0,0,0,0}; // 
		hit = 74; indirecthit = 20; indirecthitrange = 1.5;
		minrange = 10; minrangeprobab = 0.99;
		midrange = 600; midrangeprobab = 0.8;
		maxrange = 1300; maxrangeprobab = 0.2;
		explosive = 0;
	//	irLock = 0; // Unreasonable. In OFP it's impossible to design a bullet with airLock true but irLock false.
		cost = 45;
	};
	class Cannon25HE_xj400: ExplosiveBullet {
		hit = 30
		indirectHit = 15
		indirectHitRange = 3
		minRange = 20
		minRangeProbab = 0.80;
		midRange = 500
		midRangeProbab = 0.95;
		maxRange = 3000
		maxRangeProbab = 0.05;
		cost = 200;
		soundHit[] = {"\m2a2\double_expl.wss",31.6228,1};
	};
	class Cannon30HE_BMP2_xj400: ExplosiveBullet {
		hit = 20
		indirectHit = 15
		indirectHitRange = 3
		minRange = 20
		minRangeProbab = 0.80;
		midRange = 500
		midRangeProbab = 0.95;
		maxRange = 3000
		maxRangeProbab = 0.05;
		soundHit[] = {"\bmp2\bmp2_expl.wss",31.6228,1};
		cost = 40;
	};
	class Cannon30AP_BMP2_xj400: BulletSingle {
		hit = 70
		indirectHit = 5
		indirectHitRange = 1
		minRange = 20
		minRangeProbab = 0.80;
		midRange = 500
		midRangeProbab = 0.95;
		maxRange = 3000
		maxRangeProbab = 0.05;
		soundHit[] = {"weapons\Big_Impact2",0.0316228,1};
		cost = 80;
	};

	class Cannon30HE_Kamov_xj400: ExplosiveBullet {
		hit = 20
		indirectHit = 10
		indirectHitRange = 3
		minRange = 20
		minRangeProbab = 0.80;
		midRange = 500
		midRangeProbab = 0.95;
		maxRange = 3000
		maxRangeProbab = 0.05;
		soundHit[] = {"\o\vehl\v80_expl.wss",31.622778,1};
		cost = 40
	};
	class Cannon30AP_Kamov_xj400: BulletSingle {
		hit = 90
		indirectHit = 5
		indirectHitRange = 1
		minRange = 20
		minRangeProbab = 0.80;
		midRange = 500
		midRangeProbab = 0.95;
		maxRange = 3000
		maxRangeProbab = 0.05;
		soundHit[] = {"weapons\Big_Impact2",0.031623,1};
		cost = 80
	};

	class Cannon_Heli_xj400: Bullet4x20 {
		hit = 30; indirectHit = 15; indirectHitRange = 2;
		minRange = 20; minRangeProbab = 0.80;
		midRange = 500;midRangeProbab = 0.95;
		maxRange = 3000; maxRangeProbab = 0.05;
		cost = 10;
		tracerColor[] = {0.7,0.7,0.5,0.25};tracerColorR[] = {0.7,0.7,0.5,0.25};
	};
	class Cannon_Heli_Rocket_xj400: Cannon_Heli_xj400 {
		simulation = "shotRocket";
		simulationStep = 0.05;
		initTime = 0; thrustTime = 0; thrust = 0; // "Rocket" type will always have 72km/h initSpeed no matter how many it's defined by magazine. And their airFriction design is different from bullet/shell. This is not a good design.
	};

	class Cannon_20HE_xj400: Cannon30HE_Kamov_xj400 {
		//Being defined in CR09
		hit = 20; indirectHit = 10; indirectHitRange = 3
		cost = 10;
		airLock = true;
		minRange = 20; minRangeProbab = 0.80;
		midRange = 500;midRangeProbab = 0.95;
		maxRange = 3000; maxRangeProbab = 0.05;
	};
	class Cannon_20AP_xj400: Cannon30AP_Kamov_xj400 {
		hit = 60; indirectHit = 6; indirectHitRange = 0.5;
		cost = 200;
		airLock = false;
		minRange = 20; minRangeProbab = 0.80;
		midRange = 500;midRangeProbab = 0.95;
		maxRange = 3000; maxRangeProbab = 0.05;

		soundFly[] = {objects\bulletnoise,db10,0.7};
		soundHit1[] = {weapons\bulletricochet1,db-20,1};
		soundHit2[] = {weapons\bulletricochet2,db-20,1};
		soundHit3[] = {weapons\bulletricochet3,db-20,1};
		soundHitMan1[] = {weapons\bullethitman1,db-28,1};
		soundHitMan2[] = {weapons\bullethitman2,db-28,1};
		soundHitArmor1[] = {weapons\small_impact1,db10,1};
		soundHitArmor2[] = {weapons\Big_Impact2,db10,1};
		soundHitBuilding1[] = {weapons\bulletricochet4,db-10,1};
		soundHitBuilding2[] = {weapons\bulletricochet5,db-10,1};
	};
	class Cannon_30APHE_xj400: Cannon_20HE_xj400 {
		hit = 200; indirectHit = 20; indirectHitRange = 2;
	};

	class BMKHE20_DVD_xj400: ExplosiveBullet {
		hit = 20;
		indirectHit = 15;
		indirectHitRange = 5;
		minRange = 5;
		minRangeProbab = 0.2;
		midRange = 200;
		midRangeProbab = 0.5;
		maxRange = 1000;
		maxRangeProbab = 0.05;
		soundHit4[] = {"\TZK_Sounds_4_0_0\DVD_Config\30mmmetal.wss",0.50,1};
		hitArmor[] = {soundHit4,1};
		
		soundHit1[] = {"\TZK_Sounds_4_0_0\DVD_Config\grenade1.wss",0.80,1};
		soundHit2[] = {"\TZK_Sounds_4_0_0\DVD_Config\grenade2.wss",0.80,1};
		soundHit3[] = {"\TZK_Sounds_4_0_0\DVD_Config\grenade3.wss",0.80,1};
		soundHit5[] = {"Explosions\expl4",8.0,1};
		hitGround[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit5",0.25};
		
		soundHit6[] = {"\TZK_Sounds_4_0_0\DVD_Config\30mmbuild.wss",0.20,1};
		hitBuilding[] = {soundHit6,1};
		
		cost = 12
	};
	class Mi24HEammo_DVD_xj400: BMKHE20_DVD_xj400 {
	//	hit = 30; indirectHit = 20; indirectHitRange = 3; // Original Power defined in DVD
		hit = 25; indirectHit = 15; indirectHitRange = 3; // Keep same with common HE
		minRange = 1;
		minRangeProbab = 1;
		midRange = 500;
		midRangeProbab = 0.7500;
		maxRange = 1000;
		maxRangeProbab = 0.5000;
	};
	class BMKAP30_DVD_xj400:Bullet30 {
	//	hit = 80; indirectHit = 10; indirectHitRange = 0.5; // Original Power defined in DVD
		hit = 80; indirectHit = 10; indirectHitRange = 0.5;
		minRange = 5;
		minRangeProbab = 0.2;
		midRange = 200;
		midRangeProbab = 0.5;
		maxRange = 1000;
		maxRangeProbab = 0.05;
		explosive = 0;
		soundHit4[] = {"\TZK_Sounds_4_0_0\DVD_Config\30mmmetal.wss",0.50,1};
		hitArmor[] = {soundHit4,1};
		
		soundHit5[] = {"\TZK_Sounds_4_0_0\DVD_Config\30mmAPground.wss",0.10,1};
		hitGround[] = {soundHit5,1};
		
		soundHit6[] = {"\TZK_Sounds_4_0_0\DVD_Config\30mmbuild.wss",0.20,1};
		hitBuilding[] = {soundHit6,1};
			
		cost = 15
	};
 	
	class Bullet30PlaneLGB_xj400 : Bullet30A10 {
		irLock = 0;
		laserLock = 1;
	};
	class RKT_Hunter_Bullet_xj400: ExplosiveBullet {
		hit=40;indirectHit=15;indirectHitRange=3;
		minRange=200;minRangeProbab=0.20;
		midRange=500;midRangeProbab=0.70;
		maxRange=1500;maxRangeProbab=0.05;
	};
// MG
	// M2StaticMG
	class Bullet12_7_xj400: Bullet12_7 {
	//	coefGravity = 0; // Test the angel in game. The direction of velocity won't change without gravity.
	};
	class Ammo_12mm7_xj400: Bullet12_7 {
		hit = 20; indirectHit = 2; indirectHitRange = 0.2;
		minRange = 1;minRangeProbab = 0.9;
		midRange = 250;midRangeProbab = 0.9;
		maxRange = 500;maxRangeProbab = 0.1;
		visibleFire = 32; audibleFire = 32; visibleFireTime = 2
		cost = 10;
	};
	// Car
	class MG3bullet_DVD_xj400: BulletSingle {
		hit = 11;
		indirectHit = 2;
		indirectHitRange = 0.15;

		minRange = 0.5;minRangeProbab = 0.9;
		midRange = 150;midRangeProbab = 0.5;
		maxRange = 275;maxRangeProbab = 0.05;

		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 10;

		soundHit1[] = {"\TZK_Sounds_4_0_0\C8X\hit_ground1.wss",0.011623,1};
		soundHit2[] = {"\TZK_Sounds_4_0_0\C8X\hit_ground2.wss",0.011623,1};
		soundHit3[] = {"\TZK_Sounds_4_0_0\C8X\hit_ground3.wss",0.011623,1};
		soundHit4[] = {"\TZK_Sounds_4_0_0\C8X\hit_ground4.wss",0.011623,1};
		soundHit5[] = {"\TZK_Sounds_4_0_0\C8X\hit_ground5.wss",0.011623,1};
		soundHit6[] = {"\TZK_Sounds_4_0_0\C8X\hit_ground6.wss",0.011623,1};
		soundHit7[] = {"\TZK_Sounds_4_0_0\C8X\hit_ground7.wss",0.011623,1};
		soundHit8[] = {"\TZK_Sounds_4_0_0\C8X\hit_ground8.wss",0.011623,1};

		soundHitMan1[] = {"\TZK_Sounds_4_0_0\C8X\hit_man1.wss",0.002589,1};
		soundHitMan2[] = {"\TZK_Sounds_4_0_0\C8X\hit_man2.wss",0.002589,1};
		soundHitMan3[] = {"\TZK_Sounds_4_0_0\C8X\hit_man4.wss",0.002589,1};
		soundHitMan4[] = {"\TZK_Sounds_4_0_0\C8X\hit_man5.wss",0.002589,1};
		soundHitMan5[] = {"\TZK_Sounds_4_0_0\C8X\hit_man6.wss",0.002589,1};
		soundHitMan6[] = {"\TZK_Sounds_4_0_0\C8X\hit_man7.wss",0.002589,1};

		soundHitArmor1[] = {"\TZK_Sounds_4_0_0\C8X\hit_metal1.wss",0.031623,1};
		soundHitArmor2[] = {"\TZK_Sounds_4_0_0\C8X\hit_metal2.wss",0.031623,1};
		soundHitArmor3[] = {"\TZK_Sounds_4_0_0\C8X\hit_metal3.wss",0.031623,1};
		soundHitArmor4[] = {"\TZK_Sounds_4_0_0\C8X\hit_metal4.wss",0.031623,1};
		soundHitArmor5[] = {"\TZK_Sounds_4_0_0\C8X\hit_metal5.wss",0.031623,1};
		soundHitArmor6[] = {"\TZK_Sounds_4_0_0\C8X\hit_metal6.wss",0.031623,1};
		soundHitArmor7[] = {"\TZK_Sounds_4_0_0\C8X\hit_metal7.wss",0.031623,1};
		soundHitArmor8[] = {"\TZK_Sounds_4_0_0\C8X\hit_metal8.wss",0.031623,1};

		soundHitBuilding1[] = {"\TZK_Sounds_4_0_0\C8X\ric1.wss",0.031623,1};
		soundHitBuilding2[] = {"\TZK_Sounds_4_0_0\C8X\ric2.wss",0.031623,1};
		soundHitBuilding3[] = {"\TZK_Sounds_4_0_0\C8X\ric3.wss",0.031623,1};
		soundHitBuilding4[] = {"\TZK_Sounds_4_0_0\C8X\ric4.wss",0.031623,1};
		soundHitBuilding5[] = {"\TZK_Sounds_4_0_0\C8X\ric5.wss",0.031623,1};
		soundHitBuilding6[] = {"\TZK_Sounds_4_0_0\C8X\ric6.wss",0.031623,1};
		soundHitBuilding7[] = {"\TZK_Sounds_4_0_0\C8X\ric7.wss",0.031623,1};
		soundHitBuilding8[] = {"\TZK_Sounds_4_0_0\C8X\ric8.wss",0.031623,1};
		soundHitBuilding9[] = {"\TZK_Sounds_4_0_0\C8X\ric9.wss",0.031623,1};
		soundHitBuilding10[] = {"\TZK_Sounds_4_0_0\C8X\ric10.wss",0.031623,1};
		soundHitBuilding11[] = {"\TZK_Sounds_4_0_0\C8X\ric11.wss",0.031623,1};
		soundHitBuilding12[] = {"\TZK_Sounds_4_0_0\C8X\ric12.wss",0.031623,1};
		soundHitBuilding13[] = {"\TZK_Sounds_4_0_0\C8X\ric13.wss",0.031623,1};

		hitGround[] = {"soundHit3",0.166667,"soundHit4",0.166667,"soundHit5",0.166667,"soundHit6",0.166667,"soundHit7",0.166667,"soundHit8",0.166667};
		hitMan[] = {"soundHitMan2",0.333334,"soundHitMan3",0.333334,"soundHitMan6",0.333334};
		hitArmor[] = {"soundHitArmor1",0.2,"soundHitArmor2",0.2,"soundHitArmor4",0.2,"soundHitArmor6",0.2,"soundHitArmor8",0.2};
		hitBuilding[] = {"soundHitBuilding1",0.166667,"soundHitBuilding2",0.166667,"soundHitBuilding4",0.166667,"soundHitBuilding5",0.166667,"soundHitBuilding7",0.166667,"soundHitBuilding13",0.166667};
	};
	class SG762ammo_DVD_xj400: MG3bullet_DVD_xj400 {
		hit = 11;
		minRange = 100;minRangeProbab = 0.10;
		midRange = 150;midRangeProbab = 0.38;
		maxRange = 350;maxRangeProbab = 0.04;

		cost = 0.7;
	};
	class MG3AAammo_DVD_xj400: SG762ammo_DVD_xj400 {
		hit = 27;
		airLock = 1;
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 10;
		cost = 10;
		minRange = 4;minRangeProbab = 1.0;
		midRange = 200;midRangeProbab = 0.5;
		maxRange = 600;maxRangeProbab = 0.05;
	};
	class MG3ammo_DVD_xj400: SG762ammo_DVD_xj400 {
		cost = 6;
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 10;
		minRange = 0.1;minRangeProbab = 1.0;
		midRange = 100;midRangeProbab = 0.5;
		maxRange = 450;maxRangeProbab = 0.05;
	}; 


//EOF