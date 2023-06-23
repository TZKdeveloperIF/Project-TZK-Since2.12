// Introduce definitions and models of Baracken, CTI_Objects_02 and DVD_V2.

	class StromHaus1_xj400: Fence {
		scope = protected;
		displayName = "Radar Tower";
		model = "\TZK_Model_4_0_0\Struct\StromHaus1_Baracken.p3d";

		armor = 200;irTarget = 0;

		animated = 1;
		class Animations {
			class Trigger{type = "rotation";animPeriod = 1;selection = "Trigger";axis = "Achse1";angle0 = 0;angle1 = -2;};
			class Window{type = "rotation";animPeriod = 1;selection = "Window";axis = "Achse2";angle0 = 0;angle1 = -2;};
		};
	};
	class Dach1_xj400: Fence {
		displayName = "Shipyard";
		model = "\TZK_Model_4_0_0\Struct\Dach1.p3d";
		
		armor = 200;irTarget = 0;
	};

	class House_Base_xj400: House {
		scope = 1;
		camouflage = 0.1;
	};
	class AirF_xj400: House_Base_xj400 {
		displayName = "Aircraft Factory";
		model = "\TZK_Model_4_0_0\Struct\Hangar02_Baracken.p3d";
		armor = 300;
		class Animations {
			class TorL{type = "rotation";animPeriod = 5;selection = "TorL";axis = "Achse2";angle0 = 0;angle1 = -2.5;};
			class TorR{type = "rotation";animPeriod = 5;selection = "TorR";axis = "Achse3";angle0 = 0;angle1 = +2.5;};
			class DoorB{type = "rotation";animPeriod = 2;selection = "DoorB";axis = "Achse4";angle0 = 0;angle1 = -1.570795;};
		};
		class UserActions {
		/*	class Au02{displayName = "Open Gate";position = "Auf01";radius = 3;
				condition = "this animationPhase ""TorL"" < 0.5";
				statement = "this animate [""TorL"", 1];this say ""JOF_Tor2_xj400""";
			};
			class Zu02{displayName = "Close Gate";position = "Zu01";radius = 3;
				condition = "this animationPhase ""TorL"" >= 0.5";
				statement = "this animate [""TorL"", 0];this say ""JOF_Tor2_xj400""";
			};
			class Au03{displayName = "Open Gate";position = "Auf01";radius = 3;
				condition = "this animationPhase ""TorR"" < 0.5";
				statement = "this animate [""TorR"", 1];this say ""JOF_Tor2_xj400""";
			};
			class Zu03{displayName = "Close Gate";position = "Zu02";radius = 3;
				 condition = "this animationPhase ""TorR"" >= 0.5";
				 statement = "this animate [""TorR"", 0];this say ""JOF_Tor2_xj400""";
			};*/
			class Au04{displayName = "Open Door";position = "Achse4";radius = 3;
				 condition = "this animationPhase ""DoorB"" < 0.5";
				 statement = "this animate [""DoorB"", 1];this say ""JOF_Tur_auf_xj400""";
			};
			class Zu04{displayName = "Close Door";position = "Achse4";radius = 3;
				 condition = "this animationPhase ""DoorB"" >= 0.5";
				 statement = "this animate [""DoorB"", 0];this say ""JOF_Tur_zu_xj400""";
			};
		};
	};
	class HF_xj400: House_Base_xj400 {
		displayName = "Heavy Factory";
		model = "\TZK_Model_4_0_0\Struct\heavyfac_dvd_v2.p3d";
		armor = 300;
	};
	class Bar_xj400: House_Base_xj400 {
		displayName = "Barracks";
		model = "\TZK_Model_4_0_0\Struct\Green_Wach_Baracke_Baracken.p3d";
		armor = 150;
		class Animations {
			class door2{type = "rotation";animPeriod = 1;selection = "door2";axis = "Achse2";angle0 = 0;angle1 = -1.500000;};
		};
		class UserActions {
			class Au02 {
				displayName = "Open Door";
				position = "Achse2";
				radius = 3;
				condition = "this animationPhase ""door2"" < 0.5";
				statement = "this animate [""door2"", 1];this say ""JOF_Tur_auf_xj400""";
			};
			class Zu02: Au02 {
				displayName = "Close Door";
				condition = "this animationPhase ""door2"" >= 0.5";
				statement = "this animate [""door2"", 0];this say ""JOF_Tur_zu_xj400""";
			};
		};
	};
	class CC_xj400: House_Base_xj400 {
		displayName = "Control Center";
		model = "\TZK_Model_4_0_0\Struct\Green_Baracke02_Baracken.p3d";
		armor = 150;
		class Animations {
			class door1{type = "rotation";animPeriod = 1;selection = "door1";axis = "Achse1";angle0 = 0;angle1 = -2;};
			class door2{type = "rotation";animPeriod = 1;selection = "door2";axis = "Achse2";angle0 = 0;angle1 = +2;};
		};
		class UserActions {
			class Au02{displayName = "Open Door";position = "Achse1";radius = 3;
				condition = "this animationPhase ""door1"" < 0.5";
				statement = "this animate [""door1"", 1];this say ""JOF_Tur_auf_xj400""";
			};
			class Zu02{displayName = "Close Door";position = "Achse1";radius = 3;
				condition = "this animationPhase ""door1"" >= 0.5";
				statement = "this animate [""door1"", 0];this say ""JOF_Tur_zu_xj400""";
			};
			class Au03{displayName = "Open Door";position = "Achse2";radius = 3;
				condition = "this animationPhase ""door2"" < 0.5";
				statement = "this animate [""door2"", 1];this say ""JOF_Tur_auf_xj400""";
			};
			class zu03{displayName = "Close Door";position = "Achse2";radius = 3;
				condition = "this animationPhase ""door2"" >= 0.5";
				statement = "this animate [""door2"", 0];this say ""JOF_Tur_zu_xj400""";
			};
		};
	};
	class LF_xj400: House_Base_xj400 {
		scope = protected;
		displayName = "Light Factory";
		model = "\TZK_Model_4_0_0\Struct\Green_Baracke03_Baracken.p3d";
		armor = 150;
		class Animations {
			class Component02{type = "rotation";animPeriod = 1;selection = "Component02";axis = "Achse1";angle0 = 0;angle1 = -1.600000;};
			class Component03{type = "rotation";animPeriod = 3;selection = "Component03";axis = "Achse2";angle0 = 0;angle1 = -1.900000;};
			class Component04{type = "rotation";animPeriod = 3;selection = "Component04";axis = "Achse3";angle0 = 0;angle1 = +1.900000;};
		};
		class UserActions {
			class Au02{displayName = "Open Door";position = "Achse1";radius = 3;
				condition = "this animationPhase ""Component02"" < 0.5";
				statement = "this animate [""Component02"", 1];this say ""JOF_Tur_auf_xj400""";
			};
			class Zu02{displayName = "Close Door";position = "Achse1";radius = 3;
				condition = "this animationPhase ""Component02"" >= 0.5";
				statement = "this animate [""Component02"", 0];this say ""JOF_Tur_zu_xj400""";
			};
		/*	class Au03{displayName = "Open Gate";position = "Achse2";radius = 4;
				condition = "this animationPhase ""Component03"" < 0.5";
				statement = "this animate [""Component03"", 1];this say ""JOF_Tur_auf_xj400""";
			};
			class Zu03{displayName = "Close Gate";position = "Achse2";radius = 4;
				condition = "this animationPhase ""Component03"" >= 0.5";
				statement = "this animate [""Component03"", 0];this say ""JOF_Tur_zu_xj400""";
			};
			class Au04{displayName = "Open Gate";position = "Achse3";radius = 4;
				condition = "this animationPhase ""Component04"" < 0.5";
				statement = "this animate [""Component04"", 1];this say ""JOF_Tur_auf_xj400""";
			};
			class Zu04{displayName = "Close Gate";position = "Achse3";radius = 4;
				condition = "this animationPhase ""Component04"" >= 0.5";
				statement = "this animate [""Component04"", 0];this say ""JOF_Tur_zu_xj400""";
			}; */
		};
	};
	

	class WoodTower_xj400: House_Base_xj400 {
		displayName = "Wood Tower";
		model = "\TZK_Model_4_0_0\Struct\Green_Turm_Baracken.p3d";
		ladders[] = {{"start","end"}};
		armor = 600;
		accuracy = 300;
	};
	class ConcreteTower_xj400: House_Base_xj400 {
		displayName = "Concrete Tower";
		model = "\TZK_Model_4_0_0\Struct\tower_dvd_v2.p3d";
		ladders[] = {{"start","end"}};
		armor = 600;
		accuracy = 300;
	};
	class fort_xj400: House_Base_xj400 {
		displayName = "Fortress";
		model = "\TZK_Model_4_0_2\Struct\fort.p3d";
		armor = 600;
	};
	class sandbag_xj400: House_Base_xj400 {
		displayName = "Sandbag";
		model = "\TZK_Model_4_0_2\Struct\sandbag.p3d";
		armor = 50;
	};
	class roof_xj400: House_Base_xj400 {
		displayName = "Roof";
		model = "\TZK_Model_4_0_0\Struct\roof.p3d";
		armor = 600;
	};
 	class wall_xj400: House_Base_xj400 {
		displayName = "Wall";
		model = "\TZK_Model_4_0_0\Struct\wall.p3d";
		armor = 600;
	};
	class trench_xj400: House_Base_xj400 {
		displayName = "Tank Trench";
		model = "\TZK_Model_4_0_0\Struct\trench.p3d";
		armor = 600;
	};

	class gunfort_east_xj400: t55g {
		scope = 1;
		side = 0;
        displayName = "Gun Fort East";
		model = "\TZK_Model_4_0_0\Struct\gunfort.p3d";
		armor = 1000;

		maxSpeed = 1;
		fuelCapacity = 0;
		crew = "SoldierECrew";
		hasDriver = false;
		hasGunner = true;
		hasCommander = false;
		forceHideGunner = true;
		forceHideDriver = true;
		forceHideCommander = true;
		transportSolider = 0;
		gunnerCanSee = 31 - 1;
		commanderCanSee = 31 - 1;
		class Reflectors {};
	};
	class gunfort_west_xj400: gunfort_east_xj400 {
		side = 1;
		displayName = "Gun Fort West";
		crew = "SoldierWCrew";
	};


	class HF_Grey_xj400: HF_xj400 { model = "\TZK_Model_4_0_2\Struct\heavyfac_grey_dvd_v2.p3d"; };
	class HF_Desert_xj400: HF_xj400 { model = "garaz_s_tankem"; };
// For "contex.paa", the green version using texture of dvd_v2, the grey version appliys ctiobjects02's and the yellow version uses data\beton_preklad_opak.pac.
	class ArtPlain_xj400: House_Base_xj400 {
		displayName = "Attack Plain";
		model = "\TZK_Model_4_0_2\Struct\Green_ArtPlain.p3d";
		armor = 600;
	};
	class ArtPlain_Grey_xj400: ArtPlain_xj400 { model = "\TZK_Model_4_0_2\Struct\Grey_ArtPlain.p3d"; };
	class ArtPlain_Desert_xj400: ArtPlain_xj400 { model = "\TZK_Model_4_0_2\Struct\Desert_ArtPlain.p3d"; };

	class ConcreteTower_desert_xj400: House_Base_xj400 {
		displayName = "Concrete Tower";
		model = "\TZK_Model_4_0_2\Struct\tower_desert_dvd_v2.p3d";
		ladders[] = {{"start","end"}};
		armor = 600;
		accuracy = 300;
	};
	class roof_desert_xj400: House_Base_xj400 {
		displayName = "Roof";
		model = "\TZK_Model_4_0_2\Struct\roof_desert.p3d";
		armor = 600;
	};
 	class wall_desert_xj400: House_Base_xj400 {
		displayName = "Wall";
		model = "\TZK_Model_4_0_2\Struct\wall_desert.p3d";
		armor = 600;
	};
	class trench_desert_xj400: House_Base_xj400 {
		displayName = "Tank Trench";
		model = "\TZK_Model_4_0_2\Struct\trench_desert.p3d";
		armor = 600;
	};
	class gunfort_east_desert_xj400: t55g {
		scope = 1;
		side = 0;
        displayName = "Gun Fort East";
		model = "\TZK_Model_4_0_2\Struct\gunfort_desert.p3d";
		armor = 1000;

		maxSpeed = 1;
		fuelCapacity = 0;
		crew = "SoldierECrew";
		hasDriver = false;
		hasGunner = true;
		hasCommander = false;
		forceHideGunner = true;
		forceHideDriver = true;
		forceHideCommander = true;
		transportSolider = 0;
		gunnerCanSee = 31 - 1;
		commanderCanSee = 31 - 1;
		class Reflectors {};
	};
	class gunfort_west_desert_xj400: gunfort_east_desert_xj400 {
		side = 1;
		displayName = "Gun Fort West";
		crew = "SoldierWCrew";
	};
	class ConcreteTower_grey_xj400: House_Base_xj400 {
		displayName = "Concrete Tower";
		model = "\TZK_Model_4_0_2\Struct\tower_grey_dvd_v2.p3d";
		ladders[] = {{"start","end"}};
		armor = 600;
		accuracy = 300;
	};
	class roof_grey_xj400: House_Base_xj400 {
		displayName = "Roof";
		model = "\TZK_Model_4_0_2\Struct\roof_grey.p3d";
		armor = 600;
	};
 	class wall_grey_xj400: House_Base_xj400 {
		displayName = "Wall";
		model = "\TZK_Model_4_0_2\Struct\wall_grey.p3d";
		armor = 600;
	};
	class trench_grey_xj400: House_Base_xj400 {
		displayName = "Tank Trench";
		model = "\TZK_Model_4_0_2\Struct\trench_grey.p3d";
		armor = 600;
	};
	class gunfort_east_grey_xj400: t55g {
		scope = 1;
		side = 0;
        displayName = "Gun Fort East";
		model = "\TZK_Model_4_0_2\Struct\gunfort_grey.p3d";
		armor = 1000;

		maxSpeed = 1;
		fuelCapacity = 0;
		crew = "SoldierECrew";
		hasDriver = false;
		hasGunner = true;
		hasCommander = false;
		forceHideGunner = true;
		forceHideDriver = true;
		forceHideCommander = true;
		transportSolider = 0;
		gunnerCanSee = 31 - 1;
		commanderCanSee = 31 - 1;
		class Reflectors {};
	};
	class gunfort_west_grey_xj400: gunfort_east_grey_xj400 {
		side = 1;
		displayName = "Gun Fort West";
		crew = "SoldierWCrew";
	};

// Baracken had prepared green/grey/brown versions.
// 1/3/5 well for green, brown and grey out.
	// holz6 for green barrack base, o\hous\hlidbud_panel.pac for desert barrack base, holz7 for grey barrack base.
	// o\hous\drevo_modre.pac for green barrack roof side. o\hous\drevo02.pac for grey and desert. 5,3 well should be better.
// 2 well for green and brown inside, 4 well for grey inside.
	// gitter1 for green window, gitter2 for brown and grey.
// blech3 for green/desert Air door, blech4 for grey air door.
// blech2 and ggg for green/desert Air hull. 	o\hous\benzina_asfalt.pac or better take replace of ggg. 	hanber03 for grey air.
	class StromHaus1_Grey_xj400: StromHaus1_xj400 { model = "\TZK_Model_4_0_2\Struct\Grey_StromHaus1_Baracken.p3d"; };
	class StromHaus1_Desert_xj400: StromHaus1_xj400 { model = "\TZK_Model_4_0_2\Struct\Desert_StromHaus1_Baracken.p3d"; };
	class Dach1_Grey_xj400: Dach1_xj400 { model = "\TZK_Model_4_0_2\Struct\Grey_Dach1.p3d"; };
	class Dach1_Desert_xj400: Dach1_xj400 { model = "\TZK_Model_4_0_2\Struct\Desert_Dach1.p3d"; };
	
	class AirF_Grey_xj400: AirF_xj400 { model = "\TZK_Model_4_0_2\Struct\Grey_Hangar03_Baracken.p3d"; };
	class AirF_Green_xj400: AirF_xj400 { model = "\TZK_Model_4_0_2\Struct\Green_Hangar02_Baracken.p3d"; };
	class Bar_Grey_xj400: Bar_xj400 { model = "\TZK_Model_4_0_2\Struct\Grey_Wach_Baracke_Baracken.p3d"; };
	class Bar_Desert_xj400: Bar_xj400 { model = "\TZK_Model_4_0_2\Struct\Desert_Wach_Baracke_Baracken.p3d"; };
	class CC_Grey_xj400: CC_xj400 { model = "\TZK_Model_4_0_2\Struct\Grey_Baracke02_Baracken.p3d"; };
	class CC_Desert_xj400: CC_xj400 { model = "\TZK_Model_4_0_2\Struct\Desert_Baracke02_Baracken.p3d"; };
	class LF_Grey_xj400: LF_xj400 { model = "\TZK_Model_4_0_2\Struct\Grey_Baracke03_Baracken.p3d"; };
	class LF_Desert_xj400: LF_xj400 { model = "\TZK_Model_4_0_2\Struct\Desert_Baracke03_Baracken.p3d"; };
	
	class WoodTower_Grey_xj400: LF_xj400 { model = "\TZK_Model_4_0_2\Struct\Grey_Turm_Baracken.p3d"; };
	class WoodTower_Desert_xj400: LF_xj400 { model = "\TZK_Model_4_0_2\Struct\Desert_Turm_Baracken.p3d"; };


	class Mash_xj400: Mash {
		attendant = 0;
	};
// EOF