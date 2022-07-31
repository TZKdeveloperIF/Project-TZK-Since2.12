	class Bullet_7_6_AI_xj400: Bullet7_6 {};
	class Bullet_7_6_Player_xj400: Bullet7_6 { midRange = 5; maxRange = 6; };
	class Bullet_12_7_AI_xj400: Bullet12_7 { hit = 12; };
	class Bullet_12_7_Player_xj400: Bullet12_7 { midRange = 5; maxRange = 6; } // cost = 600;
	class CoaxW_xj400: Bullet7_6 {};
	class CoaxW_AI_xj400: CoaxW_xj400 {};
	class CoaxW_Player_xj400: CoaxW_xj400 { midRange = 5; maxRange = 6; };
	class CoaxE_xj400: Bullet7_6 {};
	class CoaxE_AI_xj400: CoaxE_xj400 {};
	class CoaxE_Player_xj400: CoaxE_xj400 { midRange = 5; maxRange = 6; };
	class 50calW_xj400: Bullet12_7 {};
	class 50calW_AI_xj400: 50calW_xj400 { hit = 18; };
	class 50calW_Player_xj400: 50calW_xj400 { midRange = 5; maxRange = 6; };
	class 50calE_xj400: Bullet12_7 {};
	class 50calE_AI_xj400: 50calE_xj400 { hit = 18; };
	class 50calE_Player_xj400: 50calE_xj400 { midRange = 5; maxRange = 6; };

	class Gatling7_6_xj400: Bullet7_6 {
		hit = 6;
		indirectHit = 4;
		indirectHitRange = 0.1; // 1.5 in origin bas definition
		maxRange = 1600;
		cartridge = "FxCartridge"; // Same as BulletSingle actually. Explicitly define it
	};