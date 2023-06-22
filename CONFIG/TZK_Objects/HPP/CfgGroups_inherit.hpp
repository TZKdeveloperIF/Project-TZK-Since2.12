class CfgGroups {
	class West {
		name = "$STR_WEST";
		class TZK_Tank {
			name = "TZK_West_Tanks";
			class TZK_Heavy_Tanks {
				name = "Heavy_Tanks";
				class Unit0 {
					side = 1;
					vehicle = "M1A1_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "M1A2_INQ_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "Leo2A6_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "M109A6G_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
			};
		};
		class TZK_Air {
			name = "TZK_West_Aircraft";
			class Gunships {
				name = "Gunships";
				class Unit0 {
					side = 1;
					vehicle = "AH1_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "AH1W_Vit_AT_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "AH64_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "AH64_MPIV_AT_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 1;
					vehicle = "Tiger_HOT3_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit5 {
					side = 1;
					vehicle = "Tiger_PARS3_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
			};
			class Planes {
				name = "Planes";
				class Unit0 {
					side = 1;
					vehicle = "A10_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "A10_FFAR_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "A10_LGB_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "A10_Buster_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 1;
					vehicle = "A10_Tomahawk_xj400";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 1;
					vehicle = "A10_Support_xj400";
					rank = "CORPORAL";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 1;
					vehicle = "C130_xj400";
					rank = "CORPORAL";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 1;
					vehicle = "C130_Support_xj400";
					rank = "CORPORAL";
					position[] = {15,0,0};
				};
			};
		};
		class TZK_Infantry {
			name = "TZK_Group_Soldiers";
			class TZK_Soldiers_LSR {
				name = "TZK_Soldiers_LSR";
				class Unit0 {
					side = 1;
					vehicle = "TZKInf_M24_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "TZKInf_M82_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "TZKInf_Grenade_W_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "TZKInf_Vest_W_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 1;
					vehicle = "TZKInf_M240_M145_xj400";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 1;
					vehicle = "TZKInf_M60e4_xj400";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 1;
					vehicle = "TZKInf_M249SPW_ACOG_xj400";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 1;
					vehicle = "TZKInf_M249SPW_ACOG_SD_xj400";
					rank = "Private";
					position[] = {15,0,0};
				};
				class Unit8 {
					side = 1;
					vehicle = "TZKInf_SG551W_xj400";
					rank = "Private";
					position[] = {17,0,0};
				};
			};
			class TZK_Soldiers_AT {
				name = "TZK_Soldiers_AT";
				class Unit0 {
					side = 1;
					vehicle = "TZKInf_SMAW_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 1;
					vehicle = "TZKInf_Javelin_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 1;
					vehicle = "TZKInf_Javelin_Weak_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 1;
					vehicle = "TZKInf_W_AT_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
			};
		};
	};
	class East {
		name = "$STR_EAST";
		class TZK_Tank {
			name = "TZK_East_Tanks";
			class TZK_Heavy_Tanks {
				name = "Heavy_Tanks";
				class Unit0 {
					side = 0;
					vehicle = "T80_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "T90ms_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "ZTZ99_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "PLZ05_TZK_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
			};
		};
		class TZK_Air {
			name = "TZK_East_Aircraft";
			class Gunships {
				name = "Gunships";
				class Unit0 {
					side = 0;
					vehicle = "Mi24_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "Mi24_AT_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "Mi24_RHS_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "Mi24_RHS_AT_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 0;
					vehicle = "Ka50_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit5 {
					side = 0;
					vehicle = "Ka50_AT_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
			};
			class Planes {
				name = "Planes";
				class Unit0 {
					side = 0;
					vehicle = "Su25_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "Su25_Rocket_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "Su25_LGB_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "Su25_Buster_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 0;
					vehicle = "Su25_Raduga_xj400";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 0;
					vehicle = "Su25_Support_xj400";
					rank = "CORPORAL";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 0;
					vehicle = "AN72_xj400";
					rank = "CORPORAL";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 0;
					vehicle = "AN72_Support_xj400";
					rank = "CORPORAL";
					position[] = {15,0,0};
				};
			};
		};
		class TZK_Infantry {
			name = "TZK_Group_Soldiers";
			class TZK_Soldiers_C8XICP {
				name = "TZK_Soldiers_C8XICP";
				class Unit0 {
					side = 0;
					vehicle = "TZKInf_Grenade_E_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "TZKInf_Vest_E_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 0;
					vehicle = "TZKInf_RPK74_1P29_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 0;
					vehicle = "TZKInf_RPK74_1P29_SD_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4 {
					side = 0;
					vehicle = "TZKInf_mVSSE_xj400";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5 {
					side = 0;
					vehicle = "TZKInf_SVDS_xj400";
					rank = "CORPORAL";
					position[] = {11,0,0};
				};
				class Unit6 {
					side = 0;
					vehicle = "TZKInf_VALPSOE_xj400";
					rank = "CORPORAL";
					position[] = {13,0,0};
				};
				class Unit7 {
					side = 0;
					vehicle = "TZKInf_PKM_1P29_xj400";
					rank = "CORPORAL";
					position[] = {15,0,0};
				};
				class Unit8 {
					side = 0;
					vehicle = "TZKInf_KSVK_xj400";
					rank = "CORPORAL";
					position[] = {17,0,0};
				};
			};
			class TZK_Soldiers_AT {
				name = "TZK_Soldiers_AT";
				class Unit0 {
					side = 0;
					vehicle = "TZKInf_RPG16d_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 0;
					vehicle = "TZKInf_E_AT_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
			};
		};
	};
	class GUER {
		name = "$STR_GUERRILA";
		class TZK_Tank {
			name = "TZK_Resistance_Tanks";
			class Colorful_T80 {
				name = "T80 Res";
				class Unit0 {
					side = 2;
					vehicle = "T80Res_TZK_xj400";
					rank = "Sergeant";
					position[] = {0,5,0};
				};
				class Unit1 {
					side = 2;
					vehicle = "T80Res_Purple_xj400";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2 {
					side = 2;
					vehicle = "T80Res_Orange_xj400";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3 {
					side = 2;
					vehicle = "T80Res_Green_xj400";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
			};
		};
	};
};

// EOF