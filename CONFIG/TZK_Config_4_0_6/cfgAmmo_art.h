	class Shrapnel_W_xj400: Heat120 {
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2.5;
		soundHit[] = {"Explosions\explosion_at3",31.622778,1};
		soundFly[] = {"objects\noise",0.0001,4};
		// ================ above same as LAW ================
		simulation = "shotShell";
		model = "\TZK_Model_4_0_6\warhead02.p3d";
		// displayName = "M483A1"; // manazine name
		// 弹头个数			12
		// 单个弹头伤害		0.12
		// 散布半径			12
		// 发射载具			M109
	};
	class Shrapnel_E_xj400: Heat120 {
		hit = 540;
		indirectHit = 150;
		indirectHitRange = 2.5;
		soundHit[] = {"Explosions\explosion_at3",31.622778,1};
		soundFly[] = {"objects\noise",0.0001,4};
		// ================ above same as LAW ================
		simulation = "shotShell";
		model = "\TZK_Model_4_0_6\warhead02.p3d";
		// displayName =	"3-O-13"; // manazine name
		// 弹头个数			8
		// 单个弹头伤害		0.16
		// 散布半径			9
		// 发射载具			PLZ05
	};

	// Fix 155mm shell model error
	class HEAT155_DKMM_xj400: Heat125 {
		model = "\TZK_Model_4_0_6\wep\heat155.p3d";
		soundFly[] = {"\TZK_Sounds_4_0_0\COC\155mmFly.wss", db-30, 1};
	};
	// 120/122 mm howitzer shell
	class HE120_Coc_xj400: HEAT155_DKMM_xj400 {
		hit = 200; indirectHit = 150; indirectHitRange = 9.5;
		soundFly[] = {"\TZK_Sounds_4_0_6\Coc\shellfly.wss", db-30, 0.9};
		cost = 300;
	};
	class HE122_VME_xj400: HEAT155_DKMM_xj400 {
		hit = 250; indirectHit = 200; indirectHitRange = 12;
		soundHit1[] = {"\TZK_Sounds_4_0_0\VME\sabot1.wss", 100, 1};
		soundHit2[] = {"\TZK_Sounds_4_0_0\VME\sabot2.wss", 100, 1};
		soundHitArmor1[] = {"\TZK_Sounds_4_0_0\VME\sabot1.wss", 100, 1};
		soundHitArmor2[] = {"\TZK_Sounds_4_0_0\VME\sabot2.wss", 100, 1};
		hitGround[]={"soundHit1",0.5,"soundHit2",0.5};
		hitArmor[]={"soundHitArmor1",0.5,"soundHitArmor2",0.5};
	};

	// MLRS ammo. Useless tbh
	class FAE220_DKMM_xj400: Shell125 {};
	class FAE220_Rocket_xj400: FAE220_DKMM_xj400 {
		simulation = "shotRocket";
		thrustTime = 0;
		thrust = 0;
	};
	class FAE220_Bullet_xj400: FAE220_DKMM_xj400 {
		simulation = "shotBullet";
	};
	class M26_CoC_xj400: FAE220_DKMM_xj400 {};
	class M26_Rocket_xj400: M26_CoC_xj400 {
		simulation = "shotRocket";
		thrustTime = 0;
		thrust = 0;
	};
	class M26_Bullet_xj400: M26_CoC_xj400 {
		simulation = "shotBullet";
	};