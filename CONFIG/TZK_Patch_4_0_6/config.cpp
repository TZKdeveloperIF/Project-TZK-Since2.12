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
};

// EOF