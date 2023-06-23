// Game-Logic.
	class Logic: All {};
	class Logic_xj400: Logic {
		scope = protected; // Hide in Mission Editor
	};

	// Using non-physical logic-objects to broadcast position data for killed-tank-effect.
	// The command "CreateVehicle" here is better than "publicVariable" because the latter may cause bandwidth problem.
	class KilledTankLogic_M1A1_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M1A1_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M1A2_INQ_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M1A2_INQ_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_Leo2A6_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {Leo2A6_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M1A1_Art_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M1A1_Art_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	
	class KilledTankLogic_T80_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T80_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T80_TZK_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T80_TZK_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T90_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T90_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_ZTZ99_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {ZTZ99_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T80_Art_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T80_Art_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	
	class KilledTankLogic_M60_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M60_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T72_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T72_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M60_120S_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M60_120S_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T55G_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T55G_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T55E_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T55E_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};

	class KilledTankLogic_M109_Paladin_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M109_Paladin_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M109_Art_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M109_Art_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_PLZ05_TZK_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {PLZ05_TZK_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_PLZ05_Art_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {PLZ05_Art_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M109A6G_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M109A6G_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M109A6G_Art_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M109A6G_Art_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};

	class KilledTankLogic_T80Res_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T80Res_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T80Res_TZK_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T80Res_TZK_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T80Res_Orange_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T80Res_Orange_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T80Res_Yellow_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T80Res_Yellow_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T80Res_Purple_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T80Res_Purple_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T80Res_Green_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T80Res_Green_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	
	
	class KilledTankLogic_M113_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M113_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M113_AA_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M113_AA_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M113Ambul_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M113Ambul_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_MHQW_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {MHQW_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_MCVW_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {MCVW_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};

	class KilledTankLogic_Vulcan_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {Vulcan_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_Bradley_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {Bradley_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M2A2_AA_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M2A2_AA_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M2A2_AA_Town_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M2A2_AA_Town_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};

	class KilledTankLogic_BMP_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {BMP_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_BMPAmbul_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {BMPAmbul_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_MHQE_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {MHQE_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_MCVE_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {MCVE_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	
	class KilledTankLogic_ZSU_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {ZSU_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_BMP2_AA_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {BMP2_AA_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_BMP2_AA_Town_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {BMP2_AA_Town_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};

	class KilledTankLogic_M1A1_TZK_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M1A1_TZK_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_M1A2_TZK_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {M1A2_TZK_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T80U_TZK_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T80U_TZK_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_T90_TZK_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {T90_TZK_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};
	class KilledTankLogic_ZTZ99_TZK_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {ZTZ99_TZK_xj400}] exec {Player\Effect\KilledVehicleBurning_Init_Logic.sqs}";
		};
	};



	class ExplodeLogic_130Shell_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {130Shell}] exec {Player\Effect\Explode.sqs}";
		};
	};
	class ExplodeLogic_155Shell_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {155Shell}] exec {Player\Effect\Explode.sqs}";
		};
	};
	class ExplodeLogic_FAE220_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {FAE220}] exec {Player\Effect\Explode.sqs}";
		};
	};
	class ExplodeLogic_Rocket_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {Rocket}] exec {Player\Effect\Explode.sqs}";
		};
	};
	class ExplodeLogic_Buster_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {Buster}] exec {Player\Effect\Explode.sqs}";
		};
	};
	class ExplodeLogic_Nuclear_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "[_this select 0, {Nuclear}] exec {Player\Effect\Explode.sqs}";
		};
	};
	
	
	class FireTargetLogic_0_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "_this exec {Player\Effect\Target.sqs}";
		};
	};
	class FireTargetLogic_1_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "_this exec {Player\Effect\Target.sqs}";
		};
	};
	class FireTargetLogic_2_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "_this exec {Player\Effect\Target.sqs}";
		};
	};
	class FireTargetLogic_3_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "_this exec {Player\Effect\Target.sqs}";
		};
	};
	class FireTargetLogic_4_xj400 : Logic_xj400 {
		class EventHandlers {
			Init = "_this exec {Player\Effect\Target.sqs}";
		};
	};
	
	
//EOF