// Man using new animations.
	class SoldierWB_xj400: SoldierWB {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWG_xj400: SoldierWG {
		moves = "CfgMovesMC_xj400";
	};
	class HeavyGW_xj400: HeavyGW {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWMG_xj400: SoldierWMG {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWSniper_xj400: SoldierWSniper {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWMortar_xj400: SoldierWMortar {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWLAW_xj400: SoldierWLAW {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWAT_xj400: SoldierWAT {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWAA_xj400: SoldierWAA {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWSaboteurDay_xj400: SoldierWSaboteurDay {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWMiner_xj400: SoldierWMiner {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWMedic_xj400: SoldierWMedic {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWCrew_xj400: SoldierWCrew {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierWPilot_xj400: SoldierWPilot {
		moves = "CfgMovesMC_xj400";
	};
	class OfficerW_xj400: OfficerW {
		moves = "CfgMovesMC_xj400";
	};

	class SoldierEB_xj400: SoldierEB {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierEG_xj400: SoldierEG {
		moves = "CfgMovesMC_xj400";
	};
	class HeavyGrenadier_xj400: HeavyGrenadier {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierEMG_xj400: SoldierEMG {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierESniper_xj400: SoldierESniper {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierELAW_xj400: SoldierELAW {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierEAT_xj400: SoldierEAT {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierEAA_xj400: SoldierEAA {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierESaboteurBizon_xj400: SoldierESaboteurBizon {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierEMiner_xj400: SoldierEMiner {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierEMedic_xj400: SoldierEMedic {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierECrew_xj400: SoldierECrew {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierEPilot_xj400: SoldierEPilot {
		moves = "CfgMovesMC_xj400";
	};
	class OfficerE_xj400: OfficerE {
		moves = "CfgMovesMC_xj400";
	};
	
	class SoldierGB_xj400: SoldierGB {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierGG_xj400: SoldierGG {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierGMG_xj400: SoldierGMG {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierGSniper_xj400: SoldierGSniper {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierGLAW_xj400: SoldierGLAW {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierGAT_xj400: SoldierGAT {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierGAA_xj400: SoldierGAA {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierGMedic_xj400: SoldierGMedic {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierGCrew_xj400: SoldierGCrew {
		moves = "CfgMovesMC_xj400";
	};
	class SoldierGPilot_xj400: SoldierGPilot {
		moves = "CfgMovesMC_xj400";
	};
	class OfficerG_xj400: OfficerG {
		moves = "CfgMovesMC_xj400";
	};
	
// Player
	class LeaderW_xj400: SoldierWB_xj400 {
		scope = protected;
		canHideBodies = 1;
		canDeactivateMines = 1;
		class UserActions {
			class MHQBuildMenu : UA_MHQBuildMenu {
				statement="[utMHQ0,150] exec {Player\Dialog\BuildMenu.sqs}";
			};
			class MCVBuildMenu : UA_MCVBuildMenu {
				statement="[utMCVW,150] exec {Player\Dialog\BuildMenu.sqs}";
			};
			class SupBuildMenu : UA_SupBuildMenu {
				statement="[-1,50] exec {Player\Dialog\BuildMenu.sqs}";
			};
			
			class SelfMedic: UA_SelfMedic {};
		};
	};
	class LeaderE_xj400: SoldierEB_xj400 {
		scope = protected;
		canHideBodies = 1;
		canDeactivateMines = 1;
		class UserActions {
			class MHQBuildMenu : UA_MHQBuildMenu {
				statement="[utMHQ1,150] exec {Player\Dialog\BuildMenu.sqs}";
			};
			class MCVBuildMenu : UA_MCVBuildMenu {
				statement="[utMCVE,150] exec {Player\Dialog\BuildMenu.sqs}";
			};
			class SupBuildMenu : UA_SupBuildMenu {
				statement="[-1,50] exec {Player\Dialog\BuildMenu.sqs}";
			};
			
			class SelfMedic: UA_SelfMedic {};
		};
	};
	class CommanderW_xj400: OfficerW_xj400 {
		scope = protected;
		canHideBodies = 1;
		canDeactivateMines = 1;
		class UserActions {
			class MHQBuildMenu : UA_MHQBuildMenu {
				statement="[utMHQ0,150] exec {Player\Dialog\BuildMenu.sqs}";
			};
			class MCVBuildMenu : UA_MCVBuildMenu {
				statement="[utMCVW,150] exec {Player\Dialog\BuildMenu.sqs}";
			};
			class SupBuildMenu : UA_SupBuildMenu {
				statement="[-1,50] exec {Player\Dialog\BuildMenu.sqs}";
			};
			
			class SelfMedic: UA_SelfMedic {};
		};
	};
	class CommanderE_xj400: OfficerE_xj400 {
		scope = protected;
		canHideBodies = 1;
		canDeactivateMines = 1;
		class UserActions {
			class MHQBuildMenu : UA_MHQBuildMenu {
				statement="[utMHQ1,150] exec {Player\Dialog\BuildMenu.sqs}";
			};
			class MCVBuildMenu : UA_MCVBuildMenu {
				statement="[utMCVE,150] exec {Player\Dialog\BuildMenu.sqs}";
			};
			class SupBuildMenu : UA_SupBuildMenu {
				statement="[-1,50] exec {Player\Dialog\BuildMenu.sqs}";
			};
			
			class SelfMedic: UA_SelfMedic {};
		};
	};

	class LeaderW_Vanilla_xj400: LeaderW_xj400 {
		moves = "CfgMovesMC";
	};
	class LeaderE_Vanilla_xj400: LeaderE_xj400 {
		moves = "CfgMovesMC";
	};
	class CommanderW_Vanilla_xj400: CommanderW_xj400 {
		moves = "CfgMovesMC";
	};
	class CommanderE_Vanilla_xj400: CommanderE_xj400 {
		moves = "CfgMovesMC";
	};

// TZK_Soldiers
	// Abandoned LAW/AT Sniper
	class LAWSniperW_xj400: SoldierWSniper {
		scope = protected; vehicleClass = "TZK_Units_400";
		displayName="LAW Sniper";
		weaponSlots="1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		weapons[]={"M21","LAWLauncher","Throw","Put","NVG_stat_xj400"};
		magazines[]={"M21","M21","M21","M21","LAWLauncher","LAWLauncher","LAWLauncher"};
		threat[]={1,0.9,0.1};
	};
	class ATSniperW_xj400: LAWSniperW_xj400 {
		displayName="AT Sniper";
		weapons[]={"M21","CarlGustavLauncher","Throw","Put","NVG_stat_xj400"};
		magazines[]={"M21","M21","M21","M21","CarlGustavLauncher"};
	};
	class RPGSniperW_xj400: SoldierESniper {
		scope = protected; vehicleClass = "TZK_Units_400";
		displayName="RPG Sniper";
		weaponSlots="1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		weapons[]={"SVDDragunov","RPGLauncher","Throw","Put","NVG_stat_xj400"};
		magazines[]={"SVDDragunov","SVDDragunov","SVDDragunov","SVDDragunov","RPGLauncher","RPGLauncher","RPGLauncher"};
		threat[]={1,0.9,0.1};
	};
	class ATSniperE_xj400: RPGSniperW_xj400 {
		displayName="AT Sniper";
		weapons[]={"SVDDragunov","AT4Launcher","Throw","Put","NVG_stat_xj400"};
		magazines[]={"SVDDragunov","SVDDragunov","SVDDragunov","SVDDragunov","AT4Launcher"};
	};

	// Mortar
	class TZKInf_M16Mortar_xj400: SoldierWMortar_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"M16MortarLauncher_TZK_xj400","Throw","Put"};
		magazines[]={"M16","M16","M16MortarLauncher_TZK_xj400","M16MortarLauncher_TZK_xj400","M16MortarLauncher_TZK_xj400","M16MortarLauncher_TZK_xj400"};
	};
	class TZKInf_AK74Mortar_xj400: TZKInf_M16Mortar_xj400 {
		side = TEast;
		weapons[] = {"AK74MortarLauncher_TZK_xj400","Throw","Put"};
		magazines[]={"AK74","AK74","AK74MortarLauncher_TZK_xj400","AK74MortarLauncher_TZK_xj400","AK74MortarLauncher_TZK_xj400","AK74MortarLauncher_TZK_xj400"};
	};
	class TZKInf_AK47Mortar_xj400: TZKInf_AK74Mortar_xj400 {
		side = TGuerrila;
		weapons[] = {"AK47MortarLauncher_TZK_xj400","Throw","Put"};
		magazines[]={"AK47","AK47","AK47MortarLauncher_TZK_xj400","AK47MortarLauncher_TZK_xj400","AK47MortarLauncher_TZK_xj400","AK47MortarLauncher_TZK_xj400"};
	};
	// Grenade Soldier
	class TZKInf_Grenade_W_xj400: SoldierWG_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		displayName = "Grenadier";
		weapons[] = {"M4_M203_ACOG_SD_xj400","Throw","Put"};
		magazines[] = {"M4_SD_Mag_xj400","M4_SD_Mag_xj400","M203_Grenade_xj400","M203_Grenade_xj400","GrenadeLauncher","GrenadeLauncher"};
	};
	class TZKInf_Vest_W_xj400: TZKInf_Grenade_W_xj400 {
		displayName = "Grenadier Vest";
		weapons[] = {"M4_M203_ACOG_SD_xj400","Throw","Put"};
		magazines[] = {"M4_SD_Mag_xj400","M4_SD_Mag_xj400","M4_SD_Mag_xj400","M203_Grenade_xj400","M203_Grenade_xj400","M203_Vest_xj400"};
	};
	class TZKInf_Grenade_E_xj400: SoldierEG_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		displayName = "Grenadier";
		weapons[] = {"AK74M_GP25_1P29_SD_xj400","Throw","Put"};
		magazines[] = {"AK74_SD_Mag_xj400","AK74_SD_Mag_xj400","GP25_Grenade_xj400","GP25_Grenade_xj400","GrenadeLauncher","GrenadeLauncher"};
	};
	class TZKInf_Vest_E_xj400: TZKInf_Grenade_E_xj400 {
		displayName = "Grenadier Vest";
		weapons[] = {"AK74M_GP25_1P29_SD_xj400","Throw","Put"};
		magazines[] = {"AK74_SD_Mag_xj400","AK74_SD_Mag_xj400","AK74_SD_Mag_xj400","GP25_Grenade_xj400","GP25_Grenade_xj400","GP25_Vest_xj400"};
	};

	class TZKInf_GL_W_xj400: TZKInf_Grenade_W_xj400 {
		displayName = "GL Soldier";
		weapons[] = {"M16GrenadeLauncher_TZK_xj400","Throw","Put"};
		magazines[] = {"M16","M16","M16","M16GrenadeLauncher_TZK_xj400","M16GrenadeLauncher_TZK_xj400","M16GrenadeLauncher_TZK_xj400"};
	};
	class TZKInf_GL_E_xj400: TZKInf_Grenade_E_xj400 {
		displayName = "GL Soldier";
		weapons[] = {"AK74GrenadeLauncher_TZK_xj400","Throw","Put"};
		magazines[] = {"AK74","AK74","AK74","AK74GrenadeLauncher_TZK_xj400","AK74GrenadeLauncher_TZK_xj400","AK74GrenadeLauncher_TZK_xj400"};
	};
	class TZKInf_GL_G_xj400: SoldierGG_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		displayName = "GL Soldier";
		weapons[] = {"AK47GrenadeLauncher_TZK_xj400","Throw","Put"};
		magazines[] = {"AK47","AK47","AK47","AK47GrenadeLauncher_TZK_xj400","AK47GrenadeLauncher_TZK_xj400","AK47GrenadeLauncher_TZK_xj400"};
	};
	// Sniper
	class TZKInf_M24_xj400: SoldierWSniper_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"M24_xj400","Throw","Put"};
		magazines[]={"M24_Mag_xj400","M24_Mag_xj400","M24_Mag_xj400","M24_Mag_xj400"};
	};
	class TZKInf_SVDS_xj400: SoldierESniper_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"SVDS_xj400","Throw","Put"};
		magazines[]={"SVDS_Mag_xj400","SVDS_Mag_xj400","SVDS_Mag_xj400","SVDS_Mag_xj400"};
	}
	class TZKInf_M82_xj400: TZKInf_M24_xj400 {
		weapons[] = {"M82A1_xj400","Throw","Put"};
		magazines[]={"M82A1_Mag_xj400","M82A1_Mag_xj400","M82A1_Mag_xj400","M82A1_Mag_xj400"};
		threat[] = {1,0.9,0.1};
	};
	class TZKInf_KSVK_xj400: TZKInf_SVDS_xj400 {
		weapons[] = {"KSVK_xj400","Throw","Put"};
		magazines[]={"KSVK_Mag_xj400","KSVK_Mag_xj400","KSVK_Mag_xj400","KSVK_Mag_xj400"};
	};
	// Extend Sniper
	class TZKInf_SniperEx_W_xj400: SoldierWSniper_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		displayName="Sniper";
		weaponSlots="1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		weapons[]={"M21","Throw","Put","NVG_stat_xj400"};
		magazines[]={"M21","M21","M21","M21"};
	};
	class TZKInf_SG551W_xj400: TZKInf_SniperEx_W_xj400 {
		weapons[]={"SG551_xj400","Throw","Put","NVG_stat_xj400"};
		magazines[]={"SG551_Mag_xj400","SG551_Mag_xj400","SG551_Mag_xj400","SG551_Mag_xj400"};
	};
	class TZKInf_SniperEx_E_xj400: SoldierESniper_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		displayName="Sniper";
		weaponSlots="1	 + 	16	 + 10*		256	 + 2*	4096	 + 	2	 + 4*	32";
		weapons[]={"SVDDragunov","Throw","Put","NVG_stat_xj400"};
		magazines[]={"SVDDragunov","SVDDragunov","SVDDragunov","SVDDragunov"};
	};
	class TZKInf_mVSSE_xj400: TZKInf_SniperEx_E_xj400 {
		weapons[]={"mVSS_xj400","Throw","Put","NVG_stat_xj400"};
		magazines[]={"mVSS_Mag_xj400","mVSS_Mag_xj400","mVSS_Mag_xj400","mVSS_Mag_xj400"};
	};
	class TZKInf_VALPSOE_xj400: TZKInf_mVSSE_xj400 {
		weapons[]={"VALPSO_xj400","Throw","Put","NVG_stat_xj400"};
		magazines[]={"VAL_Mag_xj400","VAL_Mag_xj400","VAL_Mag_xj400","VAL_Mag_xj400"};
	};
	// Class MG
	class TZKInf_M249SPW_ACOG_xj400: SoldierWMG_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"M249SPW_ACOG_xj400","Throw","Put"};
		magazines[]={"M249SPW_Mag_xj400","M249SPW_Mag_xj400","M249SPW_Mag_xj400","M249SPW_Mag_xj400","M249SPW_Mag_xj400"};
	};	
	class TZKInf_M249SPW_ACOG_SD_xj400: TZKInf_M249SPW_ACOG_xj400 {
		weapons[] = {"M249SPW_ACOG_SD_xj400","Throw","Put"};
		magazines[]={"M249SPW_SD_Mag_xj400","M249SPW_SD_Mag_xj400","M249SPW_SD_Mag_xj400","M249SPW_SD_Mag_xj400","M249SPW_SD_Mag_xj400"};
	};	
	class TZKInf_RPK74_1P29_xj400: SoldierEMG_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"RPK74M_1P29_xj400","Throw","Put"};
		magazines[]={"RPK74_Mag_xj400","RPK74_Mag_xj400","RPK74_Mag_xj400","RPK74_Mag_xj400","RPK74_Mag_xj400"};
	};	
	class TZKInf_RPK74_1P29_SD_xj400: TZKInf_RPK74_1P29_xj400 {
		weapons[] = {"RPK74M_1P29_SD_xj400","Throw","Put"};
		magazines[]={"RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400"};
	};	
	// General MG
	class TZKInf_M240_M145_xj400: SoldierWMG_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"M240_M145_xj400","Throw","Put"};
		magazines[]={"M240_Mag_xj400","M240_Mag_xj400","M240_Mag_xj400","M240_Mag_xj400","M240_Mag_xj400"};
	};	
	class TZKInf_M60e4_xj400: TZKInf_M240_M145_xj400 {
		weapons[] = {"M60e4_xj400","Throw","Put"};
		magazines[]={"M60_Mag_xj400","M60_Mag_xj400","M60_Mag_xj400","M60","M60"};
	};	
	class TZKInf_PKM_1P29_xj400: SoldierEMG_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"PKM_1P29_xj400","Throw","Put"};
		magazines[]={"PKM_Mag_xj400","PKM_Mag_xj400","PKM_Mag_xj400","PKM_Mag_xj400","PKM_Mag_xj400"};
	};

	// Extend AT
	class TZKInf_SMAW_xj400: SoldierWLAW_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"M249SPW_ACOG_SD_xj400","SMAWLauncher_xj400","Throw","Put"};
		magazines[]={"M249SPW_SD_Mag_xj400","M249SPW_SD_Mag_xj400","SMAW_AT_xj400","SMAW_HE_xj400","SMAW_HE_xj400","SMAW_HE_xj400"};
	};
	class TZKInf_RPG16d_xj400: SoldierELAW_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"RPK74M_1P29_SD_xj400","RPG16dLauncher_xj400","Throw","Put"};
		magazines[]={"RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400","RPG16d_AT_xj400","RPG16d_HE_xj400","RPG16d_HE_xj400","RPG16d_HE_xj400"};
	};
	
	class TZKInf_Javelin_xj400: TZKInf_SMAW_xj400 {
		weapons[] = {"M249SPW_ACOG_SD_xj400","JavelinLauncher_xj400","Throw","Put"};
		magazines[]={"M249SPW_SD_Mag_xj400","M249SPW_SD_Mag_xj400","JavelinLauncher_Mag_xj400"};
	};
	class TZKInf_Javelin_Weak_xj400: TZKInf_Javelin_xj400 {
		weapons[] = {"M249SPW_ACOG_SD_xj400","JavelinLauncher_xj400","Throw","Put"};
		magazines[]={"M249SPW_SD_Mag_xj400","M249SPW_SD_Mag_xj400","JavelinLauncher_Weak_Mag_xj400","JavelinLauncher_Weak_Mag_xj400"};
	};
	
	class TZKInf_W_AT_xj400: SoldierWAT_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"M249SPW_ACOG_SD_xj400","HyperLauncher_xj400","Throw","Put"};
		magazines[]={"M249SPW_SD_Mag_xj400","CarlGustavIn4_xj400","AAIn4_xj400"};
	};
	class TZKInf_E_AT_xj400: SoldierEAT_xj400 {
		scope = protected; vehicleClass = "TZK_Testing_200";
		weapons[] = {"RPK74M_1P29_SD_xj400","HyperLauncher_xj400","Throw","Put"};
		magazines[]={"RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400","AT4In4_xj400","9k32In4_xj400"};
	};
		
	

// EOF