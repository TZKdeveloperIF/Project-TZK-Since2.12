	class Man: Land {};
	class Soldier: Man {};
	class SoldierWB: Soldier {};
	class SoldierWB_xj400: SoldierWB {};
	class LeaderW_xj400: SoldierWB_xj400 {};
	class LeaderW_Info_xj400: LeaderW_xj400 {
		accuracy = 1000;
		unitInfoType = 7;
		hideUnitInfo = 0;
	};
	class LeaderW_5HP_xj400: LeaderW_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class LeaderW_Info_5HP_xj400: LeaderW_Info_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class SoldierEB: Soldier {};
	class SoldierEB_xj400: SoldierEB {};
	class LeaderE_xj400: SoldierEB_xj400 {};
	class LeaderE_Info_xj400: LeaderE_xj400 {
		accuracy = 1000;
		unitInfoType = 7;
		hideUnitInfo = 0;
	};
	class LeaderE_5HP_xj400: LeaderE_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class LeaderE_Info_5HP_xj400: LeaderE_Info_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class OfficerW: SoldierWB {};
	class OfficerW_xj400: OfficerW {};
	class CommanderW_xj400: OfficerW_xj400 {};
	class CommanderW_Info_xj400: CommanderW_xj400 {
		accuracy = 1000;
		unitInfoType = 7;
		hideUnitInfo = 0;
	};
	class CommanderW_5HP_xj400: CommanderW_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class CommanderW_Info_5HP_xj400: CommanderW_Info_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class OfficerE: SoldierEB {};
	class OfficerE_xj400: OfficerE {};
	class CommanderE_xj400: OfficerE_xj400 {};
	class CommanderE_Info_xj400: CommanderE_xj400 {
		accuracy = 1000;
		unitInfoType = 7;
		hideUnitInfo = 0;
	};
	class CommanderE_5HP_xj400: CommanderE_xj400 {
		accuracy = 1000;
		armor = 5;
	};
	class CommanderE_Info_5HP_xj400: CommanderE_Info_xj400 {
		accuracy = 1000;
		armor = 5;
	};

	class SoldierWMedic: SoldierWB {};
	class SoldierWMedic_xj400: SoldierWMedic {};
	class SoldierWMedic_xj406: SoldierWMedic_xj400 { attendant = 0; };
	class SoldierEMedic: SoldierEB {};
	class SoldierEMedic_xj400: SoldierEMedic {};
	class SoldierEMedic_xj406: SoldierEMedic_xj400 { attendant = 0; };

	class SoldierWSniper: SoldierWB {};
	class SoldierESniper: SoldierEB {};
	class SoldierGB: Soldier {};
	class SoldierGSniper: SoldierGB {};
	class SoldierWSniper_xj400: SoldierWSniper {};
	class SoldierESniper_xj400: SoldierESniper {};
	class SoldierGSniper_xj400: SoldierGSniper {};
	class SoldierWSniperHeavy_xj400: SoldierWSniper_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "Heavy Sniper";

		weaponSlots = "1 + 16 + 10 * 256 + 2 * 4096 + 2 + 4 * 32";
		weapons[] = {"M24_xj400"};
		magazines[] = {"M24_Mag_xj400", "M24_Mag_xj400", "M24_Mag_xj400", "M24_Mag_xj400", "M24_Mag_xj400"
			, "M24_Mag_xj400", "M24_Mag_xj400", "M24_Mag_xj400", "M24_Mag_xj400", "M24_Mag_xj400"};
	};
	class SoldierESniperHeavy_xj400: SoldierESniper_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "Heavy Sniper";

		weaponSlots = "1 + 16 + 10 * 256 + 2 * 4096 + 2 + 4 * 32";
		weapons[] = {"SVDS_xj400"};
		magazines[] = {"SVDS_Mag_xj400", "SVDS_Mag_xj400", "SVDS_Mag_xj400", "SVDS_Mag_xj400", "SVDS_Mag_xj400"
			, "SVDS_Mag_xj400", "SVDS_Mag_xj400", "SVDS_Mag_xj400", "SVDS_Mag_xj400", "SVDS_Mag_xj400"};
	};
	class SoldierGSniperHeavy_xj400: SoldierGSniper_xj400 {
		weaponSlots = "1 + 16 + 10 * 256 + 2 * 4096 + 2 + 4 * 32";
	};
	class SoldierWSupport_xj400: SoldierWB_xj400 {
		vehicleClass = "TZK_Units_400";
		displayName = "Support Carrier";

		weapons[] = {"SupportBox_xj400"};
		magazines[] = {"SupportMag_xj400","SupportMag_xj400","SupportMag_xj400","SupportMag_xj400"};
	};
	class SoldierESupport_xj400: SoldierEB_xj400 {
		vehicleClass = "TZK_Units_400";
		displayName = "Support Carrier";

		weapons[] = {"SupportBox_xj400"};
		magazines[] = {"SupportMag_xj400","SupportMag_xj400","SupportMag_xj400","SupportMag_xj400"};
	};
	class SoldierWCrew: SoldierWB {};
	class SoldierWCrew_xj400: SoldierWCrew {};
	class SoldierWCrewAA_xj400: SoldierWCrew_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "AA Crew";

		weapons[] = {"M4","NVGoggles","Throw_xj400","Put", "AA_TZK_xj400"};
		magazines[] = {"M4","M4","M4","M4", "AALauncher"};
	};
	class SoldierECrew: SoldierEB {};
	class SoldierECrew_xj400: SoldierECrew {};
	class SoldierECrewAA_xj400: SoldierECrew_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "AA Crew";

		weapons[] = {"AK74SU","NVGoggles","Throw_xj400","Put", "9k32_TZK_xj400"};
		magazines[] = {"AK74","AK74","AK74","AK74", "9K32Launcher"};
	};

	class SoldierWB_I_xj400: SoldierWB_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "Reserved Soldier";
	};
	class SoldierEB_I_xj400: SoldierEB_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "Reserved Soldier";
	};
	class SoldierWB_II_xj400: SoldierWB_I_xj400 {
		displayName = "Conscript Soldier";
	};
	class SoldierEB_II_xj400: SoldierEB_I_xj400 {
		displayName = "Conscript Soldier";
	};
	class SoldierWB_III_xj400: SoldierWB_I_xj400 {
		displayName = "Regular Soldier";

		weapons[] = {"SG551_xj400","Throw_xj400","Put","NVG_stat_xj400", "LAW_TZK_xj400"};
		magazines[] = {
			"SG551_Mag_xj400","SG551_Mag_xj400","SG551_Mag_xj400","SG551_Mag_xj400", 
			"LAW_1slot_xj400","LAW_1slot_xj400","LAW_1slot_xj400", "RKG3M_xj400","RKG3M_xj400", "PipeBomb"};
	};
	class SoldierEB_III_xj400: SoldierEB_I_xj400 {
		displayName = "Regular Soldier";

		weapons[] = {"mVSS_xj400","Throw_xj400","Put","NVG_stat_xj400", "RPG_TZK_xj400"};
		magazines[] = {
			"mVSS_Mag_xj400","mVSS_Mag_xj400","mVSS_Mag_xj400","mVSS_Mag_xj400", 
			"RPG_1slot_xj400","RPG_1slot_xj400","RPG_1slot_xj400", "RKG3M_xj400","RKG3M_xj400", "PipeBomb"};
	};
	class SoldierWB_IV_xj400: SoldierWB_I_xj400 {
		displayName = "Special Soldier";

		weapons[] = {"M249SPW_ACOG_SD_xj400","Throw_xj400","Put","NVG_stat_xj400", "LAW_TZK_xj400"};
		magazines[] = {
			"M249SPW_SD_Mag_xj400","M249SPW_SD_Mag_xj400", 
			"LAW_1slot_xj400","LAW_1slot_xj400","LAW_1slot_xj400", "RKG3M_xj400","RKG3M_xj400", "PipeBomb"};
	};
	class SoldierEB_IV_xj400: SoldierEB_I_xj400 {
		displayName = "Special Soldier";

		weapons[] = {"RPK74M_1P29_SD_xj400","Throw_xj400","Put","NVG_stat_xj400", "RPG_TZK_xj400"};
		magazines[] = {
			"RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400","RPK74_SD_Mag_xj400", 
			"RPK74_SD_Pistol_Mag_xj400","RPK74_SD_Pistol_Mag_xj400","RPK74_SD_Pistol_Mag_xj400","RPK74_SD_Pistol_Mag_xj400", 
			"RPG_1slot_xj400","RPG_1slot_xj400","RPG_1slot_xj400", "RKG3M_xj400","RKG3M_xj400", "PipeBomb"};
	};
	class SoldierWB_RKG_xj400: SoldierWB_I_xj400 {
		accuracy = 1000;
		displayName = "Reserved RKG Soldier";
		weapons[] = {"M16","Throw_xj400","Put"};
		magazines[] = {"M16","M16","M16","RKG3M_xj400","RKG3M_xj400","RKG3M_xj400","RKG3M_xj400","RKG3M_xj400","RKG3M_xj400","RKG3M_xj400"};
	}
	class SoldierEB_RKG_xj400: SoldierEB_I_xj400 {
		accuracy = 1000;
		displayName = "Reserved RKG Soldier";
		weapons[] = {"AK74","Throw_xj400","Put"};
		magazines[] = {"AK74","AK74","AK74","RKG3M_xj400","RKG3M_xj400","RKG3M_xj400","RKG3M_xj400","RKG3M_xj400","RKG3M_xj400","RKG3M_xj400"};
	}

	class SoldierWMG: SoldierWB {};
	class SoldierEMG: SoldierEB {};
	class SoldierWMG_xj400: SoldierWMG {};
	class SoldierEMG_xj400: SoldierEMG {};
	class SoldierWMG_I_xj400: SoldierWMG_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "Reserved MG";

		weapons[] = {"M249SPW_ACOG_xj400","Throw_xj400","Put"};
		magazines[] = {"M249SPW_Mag_xj400","M249SPW_Mag_xj400","M249SPW_Mag_xj400","M249SPW_Mag_xj400","M249SPW_Mag_xj400"};
	};
	class SoldierEMG_I_xj400: SoldierEMG_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "Reserved MG";

		weapons[] = {"RPK74M_1P29_xj400","Throw_xj400","Put"};
		magazines[] = {"RPK74_Mag_xj400","RPK74_Mag_xj400","RPK74_Mag_xj400","RPK74_Mag_xj400","RPK74_Mag_xj400",
			"RPK74_Mag_xj400","RPK74_Mag_xj400","RPK74_Mag_xj400","RPK74_Mag_xj400","RPK74_Mag_xj400"};
	};
	class SoldierWMG_II_xj400: SoldierWMG_I_xj400 {
		displayName = "Conscript MG";
		weapons[] = {"M60_TZK_xj400","Throw_xj400","Put"};
		magazines[] = {"M60","M60","M60","M60","M60"};
	};
	class SoldierEMG_II_xj400: SoldierEMG_I_xj400 {
		displayName = "Conscript MG";
		weapons[] = {"PK_TZK_xj400","Throw_xj400","Put"};
		magazines[] = {"PK","PK","PK","PK","PK"};
	};
	class SoldierWMG_III_xj400: SoldierWMG_I_xj400 {
		displayName = "Regular MG";
		weapons[] = {"M60_TZK_xj400","Throw_xj400","Put", "LAW_TZK_xj400"};
		magazines[] = {"M60","M60","M60","M60", "LAW_1slot_xj400","LAW_1slot_xj400"};
	};
	class SoldierEMG_III_xj400: SoldierEMG_I_xj400 {
		displayName = "Regular MG";
		weapons[] = {"PK_TZK_xj400","Throw_xj400","Put", "RPG_TZK_xj400"};
		magazines[] = {"PK","PK","PK","PK", "RPG_1slot_xj400","RPG_1slot_xj400"};
	};
	class SoldierWMG_IV_xj400: SoldierWMG_I_xj400 {
		displayName = "Special MG";
		weapons[] = {"M60e4_xj400","Throw_xj400","Put", "LAW_TZK_xj400"};
		magazines[] = {"M60_Mag_xj400","M60_Mag_xj400","M60_Mag_xj400","M60_Mag_xj400", "LAW_1slot_xj400","LAW_1slot_xj400"};
	};
	class SoldierEMG_IV_xj400: SoldierEMG_I_xj400 {
		displayName = "Special MG";
		weapons[] = {"PKM_1P29_xj400","Throw_xj400","Put", "RPG_TZK_xj400"};
		magazines[] = {"PKM_Mag_xj400","PKM_Mag_xj400","PKM_Mag_xj400","PKM_Mag_xj400", "RPG_1slot_xj400","RPG_1slot_xj400"};
	};

	class SoldierWLAW: SoldierWB {};
	class SoldierELAW: SoldierEB {};
	class SoldierWAT: SoldierWLAW {};
	class SoldierEAT: SoldierELAW {};
	class SoldierWAT_xj400: SoldierWAT {};
	class SoldierEAT_xj400: SoldierEAT {};
	class SoldierWAT_I_xj400: SoldierWAT_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "Reserved AT";

		weapons[] = {"M16","Throw_xj400","Put", "Carl_TZK_xj400"};
		magazines[] = {"M16","M16","M16","M16", "Carl_I_1_TZK_xj400","PipeBomb"};
	};
	class SoldierEAT_I_xj400: SoldierEAT_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "Reserved AT";

		weapons[] = {"AK74","Throw_xj400","Put", "AT4_TZK_xj400"};
		magazines[] = {"AK74","AK74","AK74","AK74", "AT4_I_1_TZK_xj400","PipeBomb"};
	};
	class SoldierWAT_II_xj400: SoldierWAT_I_xj400 {
		displayName = "Conscript AT";
		weapons[] = {"M16","Throw_xj400","Put", "Carl_TZK_xj400"};
		magazines[] = {"M16","M16","M16","M16", "Carl_II_1_TZK_xj400","PipeBomb"};
	};
	class SoldierEAT_II_xj400: SoldierEAT_I_xj400 {
		displayName = "Conscript AT";
		weapons[] = {"AK74","Throw_xj400","Put", "AT4_TZK_xj400"};
		magazines[] = {"AK74","AK74","AK74","AK74", "AT4_II_1_TZK_xj400","PipeBomb"};
	};
	class SoldierWAT_III_xj400: SoldierWAT_I_xj400 {
		displayName = "Regular AT";
		weapons[] = {"G36a","Throw_xj400","Put", "Carl_TZK_xj400"};
		magazines[] = {"G36aMag","G36aMag","G36aMag","G36aMag", "Carl_III_1_TZK_xj400","PipeBomb"};
	};
	class SoldierEAT_III_xj400: SoldierEAT_I_xj400 {
		displayName = "Regular AT";
		weapons[] = {"KEGAK107_xj400","Throw_xj400","Put", "AT4_TZK_xj400"};
		magazines[] = {"KEGAK107_Mag_xj400","KEGAK107_Mag_xj400","KEGAK107_Mag_xj400","KEGAK107_Mag_xj400", "AT4_III_1_TZK_xj400","PipeBomb"};
	};
	class SoldierWAT_IV_xj400: SoldierWAT_I_xj400 {
		displayName = "Special AT";
		weapons[] = {"SG551_xj400","Throw_xj400","Put", "Carl_TZK_xj400"};
		magazines[] = {"SG551_Mag_xj400","SG551_Mag_xj400","SG551_Mag_xj400","SG551_Mag_xj400", "Carl_IV_1_TZK_xj400","Carl_IV_1_TZK_xj400"};
	};
	class SoldierEAT_IV_xj400: SoldierEAT_I_xj400 {
		displayName = "Special AT";
		weapons[] = {"mVSS_xj400","Throw_xj400","Put", "AT4_TZK_xj400"};
		magazines[] = {"mVSS_Mag_xj400","mVSS_Mag_xj400","mVSS_Mag_xj400","mVSS_Mag_xj400", "AT4_IV_1_TZK_xj400","AT4_IV_1_TZK_xj400"};
	};

	class SoldierWAA: SoldierWLAW {};
	class SoldierEAA: SoldierELAW {};
	class SoldierWAA_xj400: SoldierWAA {};
	class SoldierEAA_xj400: SoldierEAA {};
	class SoldierWAA_Commando_III_xj400: SoldierWAA_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "Regular AA Commando";

		weapons[] = {"M21","Throw_xj400","Put", "AA_TZK_xj400"};
		magazines[] = {"M21","M21","M21","M21", "AA_II_TZK_xj400","PipeBomb"};
	};
	class SoldierEAA_Commando_III_xj400: SoldierEAA_xj400 {
		vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "Regular AA Commando";

		weapons[] = {"RFSVUa_xj400","Throw_xj400","Put", "9k32_TZK_xj400"};
		magazines[] = {"RFSVUA_Mag_xj400","RFSVUA_Mag_xj400","RFSVUA_Mag_xj400","RFSVUA_Mag_xj400", "9K32_II_TZK_xj400","PipeBomb"};
	};
	class SoldierWAA_Commando_IV_xj400: SoldierWAA_Commando_III_xj400 {
		displayName = "Special AA Commando";
		weapons[] = {"M21","Throw_xj400","Put", "AA_TZK_xj400"};
		magazines[] = {"M21","M21","M21","M21", "AA_II_TZK_xj400","AA_II_TZK_xj400"};
	};
	class SoldierEAA_Commando_IV_xj400: SoldierEAA_Commando_III_xj400 {
		displayName = "Special AA Commando";
		weapons[] = {"RFSVUa_xj400","Throw_xj400","Put", "9k32_TZK_xj400"};
		magazines[] = {"RFSVUA_Mag_xj400","RFSVUA_Mag_xj400","RFSVUA_Mag_xj400","RFSVUA_Mag_xj400", "9K32_II_TZK_xj400","9K32_II_TZK_xj400"};
	};