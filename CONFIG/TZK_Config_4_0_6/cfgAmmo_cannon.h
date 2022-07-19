	class Bullet4x20_xj400: Bullet4x20 {};
	class Bullet4x20_4xAA_xj406: Bullet4x20_xj400 {
		maxRange = 1300; // For 4xAA using both missile and cannon
	};
	class Bullet4x20_xj406: Bullet4x20_xj400 {
		indirectHitRange = 1;
		maxRange = 3000;
	};
	class Bullet4x23_xj400: Bullet4x23 {};
	class Bullet4x23_xj406: Bullet4x23_xj400 {
		indirectHitRange = 1;
	};