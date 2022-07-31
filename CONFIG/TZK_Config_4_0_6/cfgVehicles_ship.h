	class Ship: AllVehicles {};
	class SmallShip: Ship {};
	class BoatW: SmallShip {};
	class BoatE: SmallShip {};
	class PCSFWjetski_xj400: BoatW {
		maxSpeed = 150;
	};
	class PCSFEjetski_xj400: BoatE {
		maxSpeed = 150;
	};
	class GunBoat_xj400: BoatW {};
	class GunBoatW_xj400: GunBoat_xj400 {};
	class GunBoatW_Auto_xj400: GunBoatW_xj400 {
		hasGunner = 0;
		hasCommander = 0;
		driverIsGunner = 1;
	};
	class GunBoatE_xj400: GunBoat_xj400 {};
	class GunBoatE_Auto_xj400: GunBoatE_xj400 {
		hasGunner = 0;
		hasCommander = 0;
		driverIsGunner = 1;
	};

	class BigShip: Ship {};
	class LST_Base_xj400: BigShip {
		scope = private; vehicleClass = "TZK_Units_400";
		cost = 200000000;
		threat[] = {0.6, 0.9, 0.2};

		model = "\TZK_Model_4_0_6\newport.p3d";
		hiddenSelections[] = {"BoardL", "BoardR", "BoardH"};
		class EventHandlers {
			Init = _veh = _this select 0, {_veh setObjectTexture [_x, "\tzk_texture_4_0_6\contex.paa"]} forEach [2];
		}

		picture = "\tzk_texture_4_0_6\ui\iLst.paa";
		icon = "\tzk_texture_4_0_6\ui\iLst.paa";
		armor = 1000;

		weapons[] = {};
		magazines[] = {"Heat120"}; // having magazines can make AI attack it

		maxSpeed = 50;
		fuelCapacity = 700;

		class Animations {
			class BoardL {
				type = "rotation";
				animperiod = 10;
				selection = "boardL";
				axis = "osaBoardL";
				angle0= 0;
				angle1= - 3.14 * 10 / 18;
			};
			class BoardR {
				type = "rotation";
				animperiod = 10;
				selection = "boardR";
				axis = "osaBoardR";
				angle0= 0;
				angle1= + 3.14 * 10 / 18;
			};
			class BoardH {
				type = "rotation";
				animperiod = 10;
				selection = "boardH";
				axis = "osaBoardH";
				angle0= 0;
				angle1= 3.14 / 2;
			};
		};
		class UserActions {
			class LST_Attach {
				displayName = "<Load Vehicle>";
				position = "uaDriver";
				radius = 5;
				condition = "true";
				statement = "this exec localize {TZK_FUNC_LST_ATTACH}";
			};
			class LST_DetachL: LST_Attach {
				displayName = "<Unload at Left>";
				statement = "[this, {L}] exec localize {TZK_FUNC_LST_DETACH}";
			};
			class LST_DetachR: LST_DetachL {
				displayName = "<Unload at Right>";
				statement = "[this, {R}] exec localize {TZK_FUNC_LST_DETACH}";
			};
			class LST_Support {
				displayName = "<Support>";
				position = "uaDriver";
				radius = 5;
				condition = "true";
				statement = "this exec localize {TZK_FUNC_LST_SUPPORT}";
			};
		};
		transportSoldier = 50 + 15 + 3; // 3 place holder
		cargoAction[] = {"ManActJeepCoDriver","ManActJeepCoDriver","ManActJeepCoDriver","ManActCargo"};
		transportAmmo = 0;
		transportVehiclesCount = 15; // useless parameter in OFP. However in 2.01 vehicle parameters can be read in-game
		class TransportMagazines {};
	};
	class LST_W_xj400: LST_Base_xj400 {
		scope = protected;
		crew = "SoldierWB";
		side = 1;
		displayName = "Tank Landing Ship";
		accuracy = 0.5;
	};
	class LST_E_xj400: LST_Base_xj400 {
		scope = protected;
		crew = "SoldierEB";
		side = 0;
		displayName = "Landing Craft Tank";
		accuracy = 0.5;
	};