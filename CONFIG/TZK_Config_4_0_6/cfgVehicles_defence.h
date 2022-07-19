	// Remove soundEngine/soundEnviron
	class m119_xj400: M2StaticMG {
		soundEngine[] = {"",0,1};
		soundEnviron[] = {"",0,1};
	};
	class D30_xj400: M2StaticMG {
		soundEngine[] = {"",0,1};
		soundEnviron[] = {"",0,1};
	};
	class M252Mortar_TZK_xj400: M2StaticMG {
		soundEngine[] = {"",0,1};
		soundEnviron[] = {"",0,1};
	};

	class M2StaticMG_xj400: M2StaticMG {
		camouflage = 2;
	};
	class M2StaticMG_W_xj400: M2StaticMG_xj400 {};
	class M2StaticMG_E_xj400: M2StaticMG_xj400 {};
	class M2_tripod_una_xj400: M2StaticMG_W_xj400 {
		displayName = "M2 tripod";

		model = "\TZK_Model_4_0_6\m2_tripod.p3d";
		gunnerOpticsModel = "optika_empty.p3d";
		gunnerAction = "ManActUNA_MK19gl_Gunner";
		gunnerInAction = "ManActUNA_MK19gl_Gunner";

		weapons[] = {"MG_12_7_xj400"};
		magazines[] = {"MG_12_7_xj400", "MG_12_7_xj400"};

		class Turret: TurretBase {
			minElev = -5;
			maxElev = +15;
			minTurn = -180;
			maxTurn = +180;
		};
	};
	class NSV_ICP_xj400: M2StaticMG_E_xj400 {
		displayName = "NSV 12.7 UTES";
		cost = 15000;

		model = "\TZK_Model_4_0_6\ICP_NSV.p3d";
		gunnerAction = "ManActICP_Mgunner";
		gunnerInAction = "ManActICP_Mgunner";

		weapons[] = {"MG_12_7_xj400"};
		magazines[] = {"MG_12_7_xj400", "MG_12_7_xj400"};

		picture = "\tzk_texture_4_0_6\icp\icon.paa";
		icon = "\tzk_texture_4_0_6\icp\EDnsv.paa";
		mapSize = 8;

		nightVision = 1;

		hideProxyInCombat = false;
		secondaryExplosion = -1;

		class Turret: TurretBase {
			minElev = -10;
			maxElev = +30;
			minTurn = -180;
			maxTurn = +180;
		};
	};
	class M220TOW_una_xj400: M2StaticMG_W_xj400 {
		displayName = "M220-Tow Launcher";
		threat[] = {0.1, 0.5, 0.9};

		model = "\TZK_Model_4_0_6\una_tow_m220.p3d";
		gunnerOpticsModel = "optika_stinger";

		weapons[] = {"VehAA_xj400"};
		magazines[] = {"VehAA_xj400"};

		gunnerAction = "ManActUNA_MK19gl_Gunner";
		gunnerInAction = "ManActUNA_MK19gl_Gunner";

		picture = "\tzk_texture_4_0_6\rcwc\town_220.paa";
		mapSize = 1;
	};
	class Metis_rcwc_xj400: M2StaticMG_E_xj400 {
		displayName = "ATGM Metis";
		cost = 10000;
		threat[] = {0.1, 0.5, 0.9};

		model = "\TZK_Model_4_0_6\AT7s.p3d";
		gunnerOpticsModel = "optika_strela";
		gunnerOpticsColor[] = {0.3, 0.3 ,0.0, 1};

		weapons[] = {"Veh9k32_xj400"};
		magazines[] = {"Veh9k32_xj400"};

		hideProxyInCombat = 0;
		nightVision = 1;
		castGunnerShadow = 0;

		gunnerAction = "ManActUpLying";
		gunnerInAction = "ManActUpLying";

		picture = "\tzk_texture_4_0_6\rcwc\town_220.paa";

		class Turret: TurretBase {
			minElev = -7.5;
			maxElev = +35;
			minTurn = -180;
			maxTurn = +180;
		};
	};