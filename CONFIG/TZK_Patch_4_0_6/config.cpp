class CfgPatches {
	class TZK_CONFIG_406_Patch {
		name = "TZK_CONFIG_406_Patch";
		author = "IF";
		units[] = {};
		requiredAddons[] = {"TZK_CONFIG_406_Release_2"}; // IMPORTANT!
		requiredVersion = 1.99;
	};
};

class CfgVehicles {
	class All {};
		
	class Thing: All {};
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class HeliH: NonStrategic {};
	
	class ViewBlocker_xj400: HeliH {
		vehicleClass = "TZK_Units_400";
		scope = 1;
		model = "\TZK_Patch_4_0_6\TZK_View_Blocker.p3d";
	};
	class GapGenerator_Base_xj400: HeliH { // Gap Generator
		vehicleClass = "TZK_Units_400";
		scope = 0;
		irTarget = 1;
		displayName = "Gap Generator";
		model = "\TZK_Patch_4_0_6\Megalith_CoC.p3d";
		armor = 500;
	};
	class GapGenerator_W_xj400: GapGenerator_Base_xj400 { // Gap Generator
		scope = 1;
		displayName = "West Gap Generator";
	};
	class GapGenerator_E_xj400: GapGenerator_Base_xj400 { // Gap Generator
		scope = 1;
		displayName = "East Gap Generator";
	};

	class AllVehicles: All{};
	class Land: AllVehicles{};
	class LandVehicle: Land {};
	class Tank: LandVehicle {};
	class APC: Tank {};
	class BMP: APC {};
	class M113: APC {};

	class Man: Land {};
	class Soldier: Man {};
	class SoldierWB: Soldier {};
	class SoldierEB: Soldier {};

	class Car: LandVehicle {};
	class Truck: Car {};
	class Ural: Truck {};
	
	class Air: AllVehicles {};
	class Helicopter: Air {};
	class AH64: Helicopter {};
	class Mi24: Helicopter {};

	// provide no cost to make player obtain no extra score.
	class M113ScoreConfuser_xj400: M113 {
		vehicleClass = "TZK_Units_400";
		scope = 1;
		displayName = "Score Confuser M113";

		cost = 0;
	};
	class BMPScoreConfuser_xj400: BMP {
		vehicleClass = "TZK_Units_400";
		scope = 1;
		displayName = "Score Confuser BMP";

		cost = 0;
	};
	class SoldierWScoreConfuser_xj400: SoldierWB {
		vehicleClass = "TZK_Units_400";
		scope = 1;
		displayName = "Score Confuser Soldier";

		cost = 0;
	};
	class SoldierEScoreConfuser_xj400: SoldierEB {
		vehicleClass = "TZK_Units_400";
		scope = 1;
		displayName = "Score Confuser Soldier";

		cost = 0;
	};
	class TruckScoreConfuser_xj400: Truck {
		vehicleClass = "TZK_Units_400";
		scope = 1;
		displayName = "Score Confuser Truck";

		cost = 0;
	};
	class UralScoreConfuser_xj400: Ural {
		vehicleClass = "TZK_Units_400";
		scope = 1;
		displayName = "Score Confuser Ural";

		cost = 0;
	};
	class AH64ScoreConfuser_xj400: AH64 {
		vehicleClass = "TZK_Units_400";
		scope = 1;
		displayName = "Score Confuser AH64";

		cost = 0;
	};
	class Mi24ScoreConfuser_xj400: Mi24 {
		vehicleClass = "TZK_Units_400";
		scope = 1;
		displayName = "Score Confuser Mi24";

		cost = 0;
	};
};

// EOF