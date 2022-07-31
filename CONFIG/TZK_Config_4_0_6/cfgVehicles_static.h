	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class HeliH: NonStrategic {};
	class Target_TZK_xj400: HeliH {
		model = "\TZK_Config_4_0_6\Model\TZK_Target_New0.p3d";
	};
	class Container_TZK_xj400: HeliH { // Vehicle container
		model = "\TZK_Model_4_0_6\container.p3d";
		armor = 100000;
	};
	class Strategic: Building {};
	class Camp: Strategic {};
	class Mash: Camp {};
	class Mash_TZK_xj400: Mash {
		attendant = 0;
	};
	class ReammoBox: Strategic {};
	class ReammoBoxWest: ReammoBox {};
	class ReammoBoxEast: ReammoBox {};
	class ReammoBoxW_TZK_xj400: ReammoBoxWest {
		class TransportMagazines {};
	};
	class ReammoBoxE_TZK_xj400: ReammoBoxEast {
		class TransportMagazines {};
	};

	class House: NonStrategic {};
	class House_Base_xj400: House {};
	class AirF_xj400: House_Base_xj400 {
		model = "\TZK_Model_4_0_6\Struct\Hangar02_Baracken.p3d";
		class UserActions {
			class Au04{displayName = "";position = ""; radius = 0;
				 condition = "false";
				 statement = "";
			};
			class Zu04{displayName = "";position = ""; radius = 0;
				 condition = "false";
				 statement = "";
			};
		};
	};
	class AirF_Grey_xj400: AirF_xj400 { model = "\TZK_Model_4_0_6\Struct\Grey_Hangar03_Baracken.p3d"; };
	class AirF_Green_xj400: AirF_xj400 { model = "\TZK_Model_4_0_6\Struct\Green_Hangar02_Baracken.p3d"; };