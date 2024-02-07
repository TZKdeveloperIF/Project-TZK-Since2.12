class CfgPatches {
	class TZK_CONFIG_406_Patch3 {
		name = "TZK_CONFIG_406_Patch3";
		author = "IF";
		units[] = {};
		requiredAddons[] = {"TZK_CONFIG_406_Patch2"}; // IMPORTANT!
		requiredVersion = 1.99;
	};
};

class CfgAmmo {
	class Default {};
	class Shell: Default {};
	class Heat: Shell {};
	class Heat73: Heat {};
	class Heat105: Heat73 {};
	class Heat120: Heat105 {};

	class Shrapnel_W_xj400: Heat120 {
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};
	class Shrapnel_E_xj400: Heat120 {
		timeToLive = 60; // For Artillery shotShell only (invalid to missile/rocket). Default value is 20.
	};
};

class CfgWeapons {
	class Default {};
	class MGun: Default {};
	class MachineGun7_6: MGun {};
	class MachineGun12_7: MachineGun7_6 {};
	class MachineGun12_7_xj400: MachineGun12_7 {};
	class PLAMG_Origin_xj400: MachineGun12_7_xj400 {
		sound[] = {"\TZK_Sounds_4_0_0\jiqiang.wss",3.1622777,1};
	};
};

class CfgVehicles {
	class All {
		class ViewGunnerBase {};
		class ViewOpticsBase {}; // for gunner aiming?
		class ViewCommanderBase {};
		class ViewPilotBase {};
	};
	class AllVehicles: All{};
	class Land: AllVehicles{};
	class LandVehicle: Land {};
	class Tank: LandVehicle {
		class TurretBase {};
	};
	class Tank_xj400: Tank {};
	class M1Abrams_Base_xj400: Tank_xj400 {};
	class TZK_HeavyWestTank_Base_xj400: M1Abrams_Base_xj400 {};
	class M1A1_xj400: TZK_HeavyWestTank_Base_xj400 {
		weapons[] = {"M1Gun_xj400","M1MG_xj400"};
		magazines[] = {"M1Sabot_xj400","M1Heat_xj400", "CoaxW_xj400"};
	};
	class M1A2_INQ_xj400: TZK_HeavyWestTank_Base_xj400 {
		weapons[] = {"M12Gun_xj400","M1MG_xj400"};
		magazines[] = {"M12Sabot_xj400","M12Heat_xj400", "CoaxW_xj400"};
	};
	class Leo2A6_xj400: TZK_HeavyWestTank_Base_xj400 {
		weapons[] = {"LeoGun_xj400","LeoMG_xj400"};
		magazines[] = {"LeoSabot_xj400","LeoHeat_xj400","LeoMG_xj400"};
	};
	class RussianTank_xj400: Tank_xj400 {};
	class T72_Base_xj400: RussianTank_xj400 {};
	class T80_Base_xj400: T72_Base_xj400 {};
	class TZK_HeavyEastTank_Base_xj400: T80_Base_xj400 {};
	class T80_xj400: TZK_HeavyEastTank_Base_xj400 {
		weapons[] = {"T80Gun_xj400","MachineGun12_7_xj400"};
		magazines[] = {"T80Sabot_xj400","T80Heat_xj400","MachineGun12_7_xj400","MachineGun12_7_xj400"};
	};
	class T90_xj400: TZK_HeavyEastTank_Base_xj400 {
		weapons[] = {"T90Gun_xj400","MachineGun12_7_xj400"};
		magazines[] = {"T90Sabot_xj400","T90Heat_xj400","MachineGun12_7_xj400","MachineGun12_7_xj400"};
	};
	class ZTZ99_xj400: TZK_HeavyEastTank_Base_xj400 {
		weapons[] = {"PLAGun_xj400","PLAMG_Origin_xj400"};
		magazines[] = {"PLASabot_xj400","PLAHeat_xj400","PLAMG_Origin_xj400","PLAMG_Origin_xj400"};
	};
	class M60_Base_xj400: Tank_xj400 {};
	class M60_xj400: M60_Base_xj400 {
		weapons[] = {"Gun105","MachineGun7_6_xj400"};
		magazines[] = {"Heat105","Shell105","MachineGun7_6_xj400"};
	};
	class T72_xj400: T72_Base_xj400 {
		weapons[] = {"Gun120","MachineGun7_6_xj400"};
		magazines[] = {"Heat120","Shell120","MachineGun7_6_xj400"};
	};
	class M60_120S_xj400: M60_xj400 {
		weapons[] = {"Gun120","M1MG_xj400"};
		magazines[] = {"Heat120","Shell120","CoaxW_xj400"};
	};
	class T55_Base_xj400: Tank_xj400 {}
	class T55G_xj400: T55_Base_xj400 {
		weapons[] = {"Gun105","MachineGun7_6_xj400"};
		magazines[] = {"Heat105","Shell105","MachineGun7_6_xj400"};
	};
	class T55E_xj400: T55_Base_xj400 {
		weapons[] = {"Gun105","MachineGun7_6_xj400"};
		magazines[] = {"Heat105","Shell105","MachineGun7_6_xj400"};
	};
	class ResistanceTank_xj400: Tank_xj400 {};
	class T80Res_Base_xj406: ResistanceTank_xj400 {
		weapons[] = {"Gun120","MachineGun12_7"};
		magazines[] = {"Heat120","Shell120","MachineGun12_7"};
	};
	class AMX10RC_OFrP_xj400: M1Abrams_Base_xj400 {
		weapons[] = {"105RC_OFrP_xj400", "MachineGun7_6_xj400"};
		magazines[] = {
			"105RCSabot_OFrP_xj400", "105RCHE_OFrP_xj400",
			"MachineGun7_6_xj400", "MachineGun7_6_xj400", "MachineGun7_6_xj400", "MachineGun7_6_xj400", "MachineGun7_6_xj400"
		};
	};
	class 2S25_mfm_xj400: T55_Base_xj400 {
		weapons[] = {"Sprut_2A75_xj400", "MachineGun7_6_xj400"};
		magazines[] = {"Sprut_3VBM17_xj400","Sprut_3VBK25_xj400", "MachineGun7_6_xj400"};
	};

	class APC: Tank {
		class TurretBase {};
	};
	class M113: APC {};
	class M2StaticMG: M113 {};
	class M2StaticMG_xj400: M2StaticMG {};
	class M2StaticMG_W_xj400: M2StaticMG_xj400 {};
	class M2_tripod_una_xj400: M2StaticMG_W_xj400 {
		class Turret: TurretBase { // same as NSV_ICP_xj400
			minElev = -10;
			maxElev = +30;
			minTurn = -180;
			maxTurn = +180;
		};
	};

	class M113Ambul: M113 {};
	class M113Ambul_xj400: M113Ambul {};
	class MHQW_xj400: M113Ambul_xj400 {};
    class MHQW_C_xj400: MHQW_xj400 {
        model = "M113_ambulance";

        hiddenSelections[] = {};
        class EventHandlers {
            Init = "";
        };
    };
    class MHQW_G_xj400: MHQW_C_xj400 {
        model = "\TZK_Patch2_4_0_6\Model\M113_Ambu_G.p3d";
    };

	class BMP: APC {};
	class BMPAmbul: BMP {};
	class BMPAmbul_xj400: BMPAmbul {};
	class MHQE_xj400: BMPAmbul_xj400 {};
    class MHQE_C_xj400: MHQE_xj400 {
        model = "bmp_Ambu";

        hiddenSelections[] = {};
        class EventHandlers {
            Init = "";
        };
    };
    class MHQE_G_xj400: MHQE_C_xj400 {
        model = "\TZK_Patch2_4_0_6\Model\BMP_Ambu_TZK_G.p3d";
    };
};

// EOF