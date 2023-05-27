	// According to game practice, "preferRoads = 0" doesn't improve AI performance
	// Remain this setting only for radar car and AT car
	class Jeep_xj400: Jeep {
		preferRoads = 1;
	};
	class JeepMG_xj400: JeepMG { preferRoads = 1; };
	class HMMWV_xj400: Jeep { preferRoads = 1; };
	class UAZ_xj400: UAZ {
		preferRoads = 1;
	};
	class BRDM_xj400: LandVehicle { preferRoads = 1; };
	class Truck5t_xj400: Truck5t { preferRoads = 1; };
	class Truck5tRepair_xj400: Truck5tRepair { preferRoads = 1; };
	class Truck5tRefuel_xj400: Truck5tRefuel { preferRoads = 1; };
	class Ural_xj400: Ural { preferRoads = 1; };
	class UralRepair_xj400: UralRepair { preferRoads = 1; };
	class UralRefuel_xj400: UralRefuel { preferRoads = 1; };

	class Jeep_Radar_xj400: Jeep_xj400 {
		preferRoads = 0;
	};
	class UAZ_Radar_xj400: UAZ_xj400 {
		preferRoads = 0;
	};

	class HMMMV_TOW2A_xj400: JeepMG {
		preferRoads = 1;
	};
	class BRDM2_MNF_xj400: BRDM_xj400 {
		preferRoads = 1;
	};

	class HMMWV_M2wS_xj400: jeepMG {
		preferRoads = 1;
	};
	class BRDM_PK_xj400: BRDM {
		preferRoads = 1;
	};

	class M151A1C_htr_xj400: JeepMG_xj400 {
		preferRoads = 0;
	};
	class UAZ_SPG_FDF_xj400: JeepMG_xj400 {
		preferRoads = 0;
	};