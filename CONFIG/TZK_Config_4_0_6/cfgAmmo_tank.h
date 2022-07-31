	class Sabot106_htr_xj400: Bullet12_7 {
		airLock = 0;
		hit = 650; indirectHit = 250; indirectHitRange = 1;
		minRange = 5; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.95;
		soundHit[] = {"Explosions\expl4", 100, 1};
		soundFly[] = {"objects\bulletnoise",0.0316228,4};
		simulation = "shotBullet";
		timeToLive = 60; // Useless for shotBullet

		explosive = 1;
		cost = 300;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 10;
		tracerColor[] = {0, 0, 0, 0};
	};
	class PG9HEAT_fdf_xj400: Bullet12_7 {
		airLock = 0;
		hit = 490; indirectHit = 100; indirectHitRange = 4;
		minRange = 5; minRangeProbab = 0.95;
		midRange = 1000; midRangeProbab = 0.95;
		maxRange = 2500; maxRangeProbab = 0.95;
		soundFly[] = {"\TZK_Sounds_4_0_6\fdf\tank_shell_fly.wss", 1, 1}; //FDF - Goeth 10.1.2004
		soundHit1[] = {"\TZK_Sounds_4_0_6\fdf\spg9_expl.wss", 100, 1};
		soundHit2[] = {"\TZK_Sounds_4_0_6\fdf\spg9_expl.wss", 100, 1};
		soundHit3[] = {"\TZK_Sounds_4_0_6\fdf\spg9_expl.wss", 100, 1};
		soundHitArmor1[] = {"\TZK_Sounds_4_0_6\fdf\spg9_expl.wss", 100, 1};
		soundHitArmor2[] = {"\TZK_Sounds_4_0_6\fdf\spg9_expl.wss", 100, 1};
		soundHitMan1[] = {"\TZK_Sounds_4_0_6\fdf\spg9_expl.wss", 100, 1};
		soundHitMan2[] = {"\TZK_Sounds_4_0_6\fdf\spg9_expl.wss", 100, 1};
		soundHitBuilding1[] = {"\TZK_Sounds_4_0_6\fdf\spg9_expl.wss", 100, 1};
		soundHitBuilding2[] = {"\TZK_Sounds_4_0_6\fdf\spg9_expl.wss", 100, 1};
		hitGround[] = {soundHit1, 0.33, soundHit2, 0.33, soundHit3, 0.33};
		hitArmor[] = {soundHitArmor1, 0.5, soundHitArmor2, 0.5};
		hitMan[] = {soundHitMan1, 0.5, soundHitMan2, 0.5};
		hitBuilding[] = {soundHitBuilding1, 0.5, soundHitBuilding2, 0.5};

		explosive = 1;
		cost = 270;
		visibleFire = 16;
		audibleFire = 16;
		visibleFireTime = 10;
		tracerColor[] = {1, 0, 0, 0};
	};

	class 105RCSabot_OFrP_xj400: Heat105 {
		hit = 700; indirectHit = 300; indirectHitRange = 1;
		minRange = 10;
		soundFly[] = {"\TZK_Sounds_4_0_6\AMX10\PrjtlFlg.wss",db-20,1.0};
		cost = 800;
	};
	class 105RCHE_OFrP_xj400: Shell105 {
		hit = 150; indirectHit = 100; indirectHitRange = 8;
		soundFly[] = {"\TZK_Sounds_4_0_6\AMX10\PrjtlFlg.wss",db-20,1.0};
		minRange = 50; minRangeProbab = 0.5;
		midRange = 1050; midRangeProbab = 0.99;
		maxRange = 2000; maxRangeProbab = 0.75;
		cost = 200;
	};