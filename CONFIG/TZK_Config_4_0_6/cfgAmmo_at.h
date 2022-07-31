	class AT3_xj400: AT3 {
		// calculated value (m/s): velocity is 710 on thrust end and 1487 on 10s
		midRange = 710;
		maxRange = 1480;
	};

	class GuidedAT_APC_xj400: AT3 {
		irLock = 1; laserLock = 1;

		hit = 750;
		indirectHitRange = 4;
		// calculated value (m/s): velocity is 821 on thrust end and 1541 on 10s
		midRange = 821;
		maxRange = 1500;
		maneuvrability = 2.5;
	};
	class LaserAT_APC_xj400: GuidedAT_APC_xj400 {
		irLock = 0; laserLock = 1;
	};
	class GuidedAT_P18_xj400: GuidedAT_APC_xj400 {
		hit = 650;
	};
	class GuidedAT_Heli_xj400: GuidedAT_APC_xj400 {
		hit = 1225; indirectHit = 600; indirectHitRange = 4;
	};
	class GuidedAT_Heli_P40_xj400: GuidedAT_Heli_xj400 {
		hit = 1175; indirectHitRange = 4;
		thrustTime = 10;
	};
	class GuidedAT_Cobra_P40_xj400: GuidedAT_Heli_P40_xj400 {
		proxyShape = "\TZK_Model_4_0_0\wp\hellfirecobra_proxy.p3d";
	};
	class GuidedAT_AT6_P40_xj400: GuidedAT_Heli_P40_xj400 {
		proxyShape = "\TZK_Model_4_0_0\wp\RHS_AT6a_Proxy.p3d";
	};
	class Maverick_P50_xj400: Maverick {
		hit = 1250; indirectHit = 600; indirectHitRange = 4;
	};
	class Maverick_14_xj400: Maverick {
		thrustTime = 1.9;
	};
	class Maverick_16_xj400: Maverick_14_xj400 {
		thrustTime = 2.2;
	};
	class Maverick_18_xj400: Maverick_14_xj400 {
		thrustTime = 2.5;
	};
	class Maverick_20_xj400: Maverick_14_xj400 {
		thrustTime = 2.75;
	};
	class Ch29T_P50_xj400: Ch29T {
		hit = 1250; indirectHit = 600; indirectHitRange = 4;
		model = "\Su25\Ch_29T_shine";
		proxyShape = "\Su25\Ch_29T";
	};
	class Ch29T_14_xj400: Ch29T {
		thrustTime = 1.9;
	};
	class Ch29T_16_xj400: Ch29T_14_xj400 {
		thrustTime = 2.2;
	};
	class Ch29T_18_xj400: Ch29T_14_xj400 {
		thrustTime = 2.5;
	};
	class Ch29T_20_xj400: Ch29T_14_xj400 {
		thrustTime = 2.75;
	};