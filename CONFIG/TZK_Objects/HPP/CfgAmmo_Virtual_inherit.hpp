// Virtual bullet used to create missiles for car/ship, and create tracer effects.
// Those vehicles whose simulation is "car" or "ship" can't shot missiles thus shoulde use Fired-EH instead.
// Global tracer effects requiring reading bullet's position and velocity in high frequency. When reading remote bullet this will cause severe desync. With the help of 2.01 by [4RTech] the command "createShell" and "setVectorDirAndUp" can be used to imitate trajectory by a local, zero-power bullet.

	class EffectBullet0_xj400: BulletSingle {
	// Can be applied to those light shots.
		simulation = "shotBullet"; // Bullet will be detonated, but no more one better simulation.
		// Zero-power
		hit = 0; indirectHit = 0; indirectHitRange = 0; explosive = 0;
		// Zero-detect
		visibleFire = 0; audibleFire = 0; visibleFireTime = 0;
		// Zero-feel
		tracerColor[] = {0,0,0,0}; tracerColorR[] = {0,0,0,0};
		soundFly[] = {"",1,1}; soundEngine[] = {"",1,1}; soundHit[] = {"",1,1};
		hitGround[] = {"soundHit",1}; hitMan[] = {"soundHit",1}; hitArmor[] = {"soundHit",1}; hitBuilding[] = {"soundHit",1};
		cost = 0;
	};
	class NoGravityBullet_xj400: EffectBullet0_xj400 {
		coefGravity = 0; // Test the angel in game. The direction of velocity won't change without gravity.
	};

	class VirtualLAW_xj400: LAW {
		simulation = "shotBullet";
	};
	class VirtualRPG_xj400: RPG {
		simulation = "shotBullet";
	};
	class VirtualCarlGustavNoGuide_xj400: CarlGustav {
		simulation = "shotBullet";
	};
	class VirtualAT4NoGuide_xj400: AT4 {
		simulation = "shotBullet";
	};
	class CarlGustavNoGuide: CarlGustav {
		maxControlRange = 0; // Should be zero or missile will turn round.
	};
	class AT4NoGuide: AT4 {
		maxControlRange = 0; // Should be zero or missile will turn round.
	};
	class VirtualZuni_xj400: Zuni {
		simulation = "shotBullet";
	};

	class VirtualGrenade_xj400: Grenade {
		simulation = "shotBullet";
	};
	class VirtualMortarShell_xj400: MortarShell {
		simulation = "shotBullet";
	};


	class VirtualAT_APC: Bullet7_6 {};
	class VirtualAT_Heli: Bullet7_6 {};
	class VirtualStinger: Bullet7_6 {};
	class VirtualStrela: Bullet7_6 {};

// EOF