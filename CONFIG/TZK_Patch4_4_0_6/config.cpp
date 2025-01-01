class CfgPatches {
	class TZK_CONFIG_406_Patch4 {
		name = "TZK_CONFIG_406_Patch4";
		author = "IF";
		units[] = {};
		requiredAddons[] = {"TZK_CONFIG_406_Patch3"}; // IMPORTANT!
		requiredVersion = 1.99;
	};
};

class CfgWeapons {
	class Default {};
	class MGun: Default {};
	class Riffle: MGun {};

	// =============================================== Support Box ===============================================
	class SupportMag_xj400: Riffle {
		canDrop = 1;

		displayNameMagazine = "Support Mag";
		shortNameMagazine = "Support Mag";
	};
	class SupportBox_xj400: SupportMag_xj400 {
		canDrop = 1;

		magazines[] = {"SupportMag_xj400"};
		muzzles[] = {"this"};

		displayName = "Support Box";
	};
};

// =============================================== UA base classes ===============================================
// To remain the extend ability, we should overwrite the attributes but not redefine the whole class
// Undefine/remove some redundant UserActions. It seems no way to remove defined classes thus set all
// 	attributes to "invalid state". The empty "position" will be treat as zero vector.
class UA_SpoofMissileON {};
class UA_SpoofMissileOFF {};

class CfgVehicles {
	class All {
		class ViewOpticsBase {}; // for gunner aiming
	};
	class AllVehicles: All{};
	class Land: AllVehicles{};
	class LandVehicle: Land {};
	class Tank: LandVehicle {
		class TurretBase {};
	};
	class APC: Tank {};
	class M113: APC {};
	class M2StaticMG: M113 {};

	class Tank_xj400: Tank {};
	class M1Abrams_Base_xj400: Tank_xj400 {};
	class RussianTank_xj400: Tank_xj400 {};
	class T72_Base_xj400: RussianTank_xj400 {};

	// =============================================== Artillerys ===============================================
	// Adjust gunnerCanSee. Allow see compass
	// Adjust gunnerOpticsModel and its color
	// Adjust Turret::maxElev. BTW this param can't be defined by expression. Use value directly
	// Adjust ViewOptics::fovs. When fov value become small, in optics view the max elevation degree will be limited.
	// 	Most of art objects now use Tank values. They should have their own value. Min as tank and init/max as human

	class Grkpbv_Coc_xj400: M1Abrams_Base_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\Grkpbv_Coc.p3d";

		hiddenSelections[] = {
			"flash1","flash2","flash3","flash4","flash5","flash6"
			, "tzkGunL00", "tzkGunL01", "tzkGunL02", "tzkGunR00", "tzkGunR01", "tzkGunR02"
			, "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"
		};

		class Turret: TurretBase {
			maxElev = 68; // same as M109
		};

		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\ViewGunner_Grad.p3d";
		GunnerOpticsColor[] = {0, 0, 0, 1};

		class ViewOptics: ViewOpticsBase {
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.85;
		};
	};
	class PLZ89_VME_Base_xj400: T72_Base_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\PLZ89.p3d";

		hiddenSelections[] = {
			"n1", "n2", "n3"
			, "tzkGun00", "tzkGun01", "tzkGun02", "tzkGun03"
			, "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"
		};

		GunnerOpticsColor[] = {0, 0, 0, 1};

		class ViewOptics: ViewOpticsBase {
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.85;
		};

		class Turret: TurretBase {
			maxElev = 65; // same as PLZ05
		};
	};

	class M109A6G_Base_xj400: M1Abrams_Base_xj400 {};
	class M109A6G_xj400: M109A6G_Base_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\M109A6_DKMM.p3d";

		GunnerOpticsColor[] = {0, 0, 0, 1};

		class ViewOptics: ViewOpticsBase {
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.85;
		};
	};

	class PLZ05_VME_Base_xj400: T72_Base_xj400 {};
	class PLZ05_TZK_xj400: PLZ05_VME_Base_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\PLZ05.p3d";

		GunnerOpticsColor[] = {0, 0, 0, 1};

		class ViewOptics: ViewOpticsBase {
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.85;
		};
	};

	class M270_M29064_xj400: M1Abrams_Base_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\M270_m29064.p3d";

		GunnerOpticsColor[] = {0, 0, 0, 1};

		class ViewOptics: ViewOpticsBase {
			initFov = 0.8;
			minFov = 0.8;
			maxFov = 2; // bigger maxFov seems useless (due to engine or model)
		};
	};
	class TOS1_TZK_xj400: T72_Base_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\TOS1_DKMM.p3d";

		GunnerOpticsColor[] = {0, 0, 0, 1};
	};

	class m119_xj400: M2StaticMG {
		model = "\TZK_Patch4_4_0_6\Model\m119.p3d";

		// Add cansee-compass
		gunnerCanSee = "2 + 8 + 16";

		GunnerOpticsColor[] = {0, 0, 0, 1};

		class ViewOptics: ViewOpticsBase {
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.85;
		};
	};
	class D30_xj400: M2StaticMG {
		model = "\TZK_Patch4_4_0_6\Model\D30.p3d";

		class ViewOptics: ViewOpticsBase {
			initFov = 0.7;
			minFov = 0.07;
			maxFov = 0.85;
		};
	};
	class M252Mortar_TZK_xj400: M2StaticMG {
		model = "\TZK_Patch4_4_0_6\Model\Mortar81_TZK.p3d";

		// Add cansee-compass
		gunnerCanSee = "2 + 8 + 16";

		GunnerOpticsColor[] = {0, 0, 0, 1};

		class Turret: TurretBase {
			maxElev = 70;
		};
	};
	class PP87_TZK_xj400: M252Mortar_TZK_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\PP87_TZK.p3d";

		GunnerOpticsColor[] = {0, 0, 0, 1};

		class Turret: TurretBase {
			maxElev = 70; // can't be defined with an expression
		};
	};

	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class House: NonStrategic {};
	// =============================================== Brdige ===============================================
	// The "Bridge" class is defined in 2.01 config only. Need custom definition in addons for CWA_CE
	class HousesDatadisk_xj406: House {
		access = 2;
		scope = 1;
		armor = 2000;
		icon = "\TZK_Patch4_4_0_6\ARES\i\house.paa";
		accuracy = 1000;
	};
	class House57_xj400: HousesDataDisk_xj406 {
		scope = 1;
		DisplayName = "$STR_DN_BridgePart";
		model = "\O\Hous\most_stred30.p3d";
	};
	class Bridge_xj400: House57_xj400 {
		scope = 1; // don't display in mission editor
	};
	class Bridge2_xj400: Bridge_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\most_stred30.p3d";
	};

	class House_Base_xj400: House {};
	// =============================================== Wall ===============================================
 	class wall_xj400: House_Base_xj400 {};
 	class wall_desert_3x1_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_desert_3x1.p3d";
	};
 	class wall_desert_3x2_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_desert_3x2.p3d";
	};
 	class wall_desert_3x3_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_desert_3x3.p3d";
	};
 	class wall_desert_3x4_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_desert_3x4.p3d";
	};
 	class wall_green_3x1_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_green_3x1.p3d";
	};
 	class wall_green_3x2_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_green_3x2.p3d";
	};
 	class wall_green_3x3_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_green_3x3.p3d";
	};
 	class wall_green_3x4_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_green_3x4.p3d";
	};
 	class wall_grey_3x1_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_grey_3x1.p3d";
	};
 	class wall_grey_3x2_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_grey_3x2.p3d";
	};
 	class wall_grey_3x3_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_grey_3x3.p3d";
	};
 	class wall_grey_3x4_xj400: wall_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\wall_grey_3x4.p3d";
	};
	// =============================================== Separate Trench ===============================================
	class trench_xj400: House_Base_xj400 {};
	class trench_desert_F_xj400: trench_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\trench_desert_F.p3d";
	};
	class trench_desert_L_xj400: trench_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\trench_desert_L.p3d";
	};
	class trench_desert_R_xj400: trench_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\trench_desert_R.p3d";
	};
	class trench_green_F_xj400: trench_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\trench_green_F.p3d";
	};
	class trench_green_L_xj400: trench_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\trench_green_L.p3d";
	};
	class trench_green_R_xj400: trench_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\trench_green_R.p3d";
	};
	class trench_grey_F_xj400: trench_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\trench_grey_F.p3d";
	};
	class trench_grey_L_xj400: trench_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\trench_grey_L.p3d";
	};
	class trench_grey_R_xj400: trench_xj400 {
		model = "\TZK_Patch4_4_0_6\Model\s\trench_grey_R.p3d";
	};

	class Air: AllVehicles {};
	// =============================================== Plane ===============================================
	// Plane don't wish to have spoof ability. Undefine its spoof UA
	class Plane: Air {};
	class A10: Plane {};
	class A10_Base_xj400: A10 {};
	class A10_xj400: A10_Base_xj400 {
		class UserActions {
			class SpoofMissileON : UA_SpoofMissileON {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			}; 
			class SpoofMissileOFF : UA_SpoofMissileOFF {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			};
		};
	};
	class Su25_Base_xj400: Plane {};
	class Su25_xj400: Su25_Base_xj400 {
		class UserActions {
			class SpoofMissileON : UA_SpoofMissileON {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			}; 
			class SpoofMissileOFF : UA_SpoofMissileOFF {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			};
		};
	};
	class C130_Base_xj400: Plane {};
	class C130_xj400: C130_Base_xj400 {
		class UserActions {
			class SpoofMissileON : UA_SpoofMissileON {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			}; 
			class SpoofMissileOFF : UA_SpoofMissileOFF {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			};
		};
	};
	class An12_Base_xj400: Plane {};
	class An12_xj400: An12_Base_xj400 {
		class UserActions {
			class SpoofMissileON : UA_SpoofMissileON {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			}; 
			class SpoofMissileOFF : UA_SpoofMissileOFF {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			};
		};
	};
	class AN72_Base_xj400: Plane {};
	class AN72_xj400: AN72_Base_xj400 {
		class UserActions {
			class SpoofMissileON : UA_SpoofMissileON {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			}; 
			class SpoofMissileOFF : UA_SpoofMissileOFF {
				displayName = "";
				position = "";
				radius = 0;
				condition = "false";
				statement = "";
			};
		};
	};

	// =============================================== Motorcycle ===============================================
	class Motorcycle: LandVehicle {};
	class Jawa: Motorcycle {};
	class Jawa_xj400: Jawa {};
	class Jawa_xj406: Jawa_xj400 {
		cost = 400000; // raise to QUAD_xj400 level
		model = "\TZK_Patch4_4_0_6\Model\JAWA250.p3d"; // adjust zamerny to make it easier to be hit
	};

	// =============================================== Car/Truck ===============================================
	// New definitions without hiddenSelections and dynamic texture
	class Car: LandVehicle {};
	class Jeep: Car {};
	class Jeep_xj400: Jeep {};
	class Jeep_C_xj400: Jeep_xj400 {
		hiddenSelections[] = {tzk_tex_00, Box006};
		class EventHandlers {
			Init = "";
		};
	};
	class JeepMG: Jeep {};
	class JeepMG_xj400: JeepMG {};
	class JeepMG_C_xj400: JeepMG_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class Jeep_Radar_xj400: Jeep_xj400 {};
	class Jeep_Radar_C_xj400: Jeep_Radar_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class HMMWV_xj400: Jeep {};
	class HMMWV_C_xj400: HMMWV_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class UAZ: Car {};
	class UAZ_xj400: UAZ {};
	class UAZ_C_xj400: UAZ_xj400 {
		hiddenSelections[] = {tzk_tex_00, Box006};
		class EventHandlers {
			Init = "";
		};
	};
	class UAZ_Radar_xj400: UAZ_xj400 {};
	class UAZ_Radar_C_xj400: UAZ_Radar_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class BRDM_xj400: LandVehicle {};
	class BRDM_C_xj400: BRDM_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class Truck: Car {};
	class Truck5t: Truck {};
	class Truck5tRepair: Truck5t {};
	class Truck5tReammo: Truck5t {};
	class Truck5tRefuel: Truck5t {};
	class Truck5t_xj400: Truck5t {};
	class Truck5t_C_xj400: Truck5t_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class Truck5tRepair_xj400: Truck5tRepair {};
	class Truck5tRepair_C_xj400: Truck5tRepair_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class Truck5tRefuel_xj400: Truck5tRefuel {};
	class Truck5tRefuel_C_xj400: Truck5tRefuel_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class Ural: Truck {};
	class UralRepair: Ural {};
	class UralReammo: Ural {};
	class UralRefuel: Ural {};
	class Ural_xj400: Ural {};
	class Ural_C_xj400: Ural_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class UralRepair_xj400: UralRepair {};
	class UralRepair_C_xj400: UralRepair_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class UralRefuel_xj400: UralRefuel {};
	class UralRefuel_C_xj400: UralRefuel_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};

	// =============================================== Light Tank ===============================================
	// New definitions without hiddenSelections
	class M60_Base_xj400: Tank_xj400 {};
	class M60_xj400: M60_Base_xj400 {};
	class M60_C_xj400: M60_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class M60_120S_xj400: M60_xj400 {};
	class M60_120S_C_xj400: M60_120S_xj400 {
		hiddenSelections[] = {tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
	class T55_Base_xj400: Tank_xj400 {};
	class T55E_xj400: T55_Base_xj400 {};
	class T55E_C_xj400: T55E_xj400 {
		hiddenSelections[] = {pruh_FIA, tzk_tex_00};
		class EventHandlers {
			Init = _vehicle = _this select 0, _vehicle setObjectTexture [(typeOf _vehicle GetVehicleParamArray {hiddenSelections}) find {pruh_FIA}, {east_01.paa}];
		};
	};
	class T72_xj400: T72_Base_xj400 {};
	class T72_C_xj400: T72_xj400 {
		hiddenSelections[] = {"pruh", tzk_tex_00};
		class EventHandlers {
			Init = "";
		};
	};
};

class CfgMarkers {
	class UnknownVehicle_Marker_xj400 {};
	class MineAPE_Marker_xj400: UnknownVehicle_Marker_xj400 {
		icon = "\TZK_Patch4_4_0_6\ARES\i\mine.paa";
	};
	class SmallFlag_Marker_xj400: UnknownVehicle_Marker_xj400 {
		icon = "\TZK_Patch4_4_0_6\ARES\i\flag.paa";
	};
	class Sign_Marker_xj400: UnknownVehicle_Marker_xj400 {
		icon = "\TZK_Patch4_4_0_6\ARES\i\sign.paa";
	};
	class Tower_Marker_xj400: UnknownVehicle_Marker_xj400 {
		icon = "\TZK_Patch4_4_0_6\ARES\i\watchtower.paa";
	};
};
// EOF