	// !! IMPORTANT. It seems maxControlRange is a useless parameter for "canlock == 2" missile, and the thrustTime decides decisively the max range.
	class Stinger_xj400: AA {};
	class Stinger_Base_xj406: Stinger_xj400 {
		hit = 150; indirectHit = 0; indirectHitRange = 1; maxControlRange = 1000;
	};
	class Stinger_19_xj406: Stinger_Base_xj406 {
		maxRange = 1900;
		thrustTime = 3.2;
	};
	class Stinger_23_xj406: Stinger_Base_xj406 {
		maxRange = 2300;
		thrustTime = 3.8;
	};
	class Stinger_26_xj406: Stinger_Base_xj406 {
		maxRange = 2600;
		thrustTime = 4.25;
	};
	class Stinger_30_xj406: Stinger_Base_xj406 {
		maxRange = 3000;
		thrustTime = 4.85;
	};
	class Strela_xj400: Stinger_xj400 {};
	class Strela_Base_xj406: Strela_xj400 {
		hit = 150; indirectHit = 0; indirectHitRange = 1; maxControlRange = 1000;
	};
	class Strela_19_xj406: Strela_Base_xj406 {
		maxRange = 1900;
		thrustTime = 3.2;
	};
	class Strela_23_xj406: Strela_Base_xj406 {
		maxRange = 2300;
		thrustTime = 3.8;
	};
	class Strela_26_xj406: Strela_Base_xj406 {
		maxRange = 2600;
		thrustTime = 4.25;
	};
	class Strela_30_xj406: Strela_Base_xj406 {
		maxRange = 3000;
		thrustTime = 4.85;
	};

	class RedTop_26_xj400: AA {
		thrustTime = 5; // Don't know why but in this class demical like 5.1 will be reset as its interger part automatically
	};
	class RedTop_30_xj400: RedTop_26_xj400 {
		thrustTime = 6.3;
	};
	class RedTop_40_xj400: RedTop_26_xj400 {
		thrustTime = 8.2;
	};
	// Add range-extended missile.
	class RedTop_45_xj400: RedTop_26_xj400 {
		maxRange = 4500;
		thrustTime = 9.1;
	};
	class RedTop_48_xj400: RedTop_26_xj400 {
		maxRange = 4800;
		thrustTime = 9.6;
	};
	class 9M311_26_xj400: RedTop_26_xj400 {
		thrustTime = 5; // Keep same as redtop
		thrust = 600;
		maxSpeed = 900;
		sideAirFriction = 1;
	};
	class 9M311_30_xj400: 9M311_26_xj400 {
		thrustTime = 6.3;
	};
	class 9M311_40_xj400: 9M311_26_xj400 {
		thrustTime = 8.2;
	};
	// Add range-extended missile.
	class 9M311_45_xj400: 9M311_26_xj400 {
		maxRange = 4500;
		thrustTime = 9.1;
	};
	class 9M311_48_xj400: 9M311_26_xj400 {
		maxRange = 4800;
		thrustTime = 9.6;
	};
	// Add special missile using small hit to attack little armor units only.
	class RedTop_26_TZK_xj400: RedTop_26_xj400 {
		thrustTime = 5.5;
		hit = 4;
	};
	class RedTop_30_TZK_xj400: RedTop_30_xj400 {
		hit = 4;
		maxRange = 3000;
	};
	class RedTop_40_TZK_xj400: RedTop_40_xj400 {
		hit = 4;
		maxRange = 4000;
	};
	class RedTop_45_TZK_xj400: RedTop_45_xj400 {
		hit = 4;
		maxRange = 4500;
	};
	class RedTop_48_TZK_xj400: RedTop_48_xj400 {
		hit = 4;
		maxRange = 4800;
	};
	class 9M311_26_TZK_xj400: 9M311_26_xj400 {
		thrustTime = 5.5;
		hit = 4;
	};
	class 9M311_30_TZK_xj400: 9M311_30_xj400 {
		hit = 4;
		maxRange = 3000;
	};
	class 9M311_40_TZK_xj400: 9M311_40_xj400 {
		hit = 4;
		maxRange = 4000;
	};
	class 9M311_45_TZK_xj400: 9M311_45_xj400 {
		hit = 4;
		maxRange = 4500;
	};
	class 9M311_48_TZK_xj400: 9M311_48_xj400 {
		hit = 4;
		maxRange = 4800;
	};