// Car
	class QUAD_xj400: Car {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5; // Seems not high enough value will make vehicles like shilka easy to recognize it and not attack.
		displayName = "QUAD"; nameSound = "car"; side = 3; cost = 400000; type = 1; // Raise cost to make shilka attack it.
		
		model = "\GST_KawaP\GST_KawaP";
		picture = "\GST_KawaP\KPpict";
		icon = "\GST_KawaP\KPicon";
		crew = "Civilian6";
		armor = 20;
		irTarget = 0; // 4.0.0 design. No display on radar.

		unloadInCombat = 1;
		maxSpeed = 90;
		fuelCapacity = 50;
		
		weapons[] = {"SportCarHorn"};
		magazines[] = {};
		
		driverAction = "ManActJAWADriver";
		cargoAction[] = {"ManActJAWACoDriver"};
		
		transportSoldier = 0;
		transportAmmo = 0
		extCameraPosition[] = {0.5,1,-5};
		driverCanSee = "2+8+16";
		terrainCoef = 1;
		turnCoef = 2;
		brakeDistance = 5;
		precision = 8;
		preferRoads = 0;
		unitInfoType = "UnitInfoCar";
		hideUnitInfo = 0;
		armorWheels = 0.1;
		armorEngine = 0.5;
		damperSize = 0.1;
		damperForce = 20;
		predictTurnSimul = 2.0;
		predictTurnPlan = 2.0;
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = 270;
			min = 0;
			max = 170/ 4.8;
		};
		class UserActions {
			class Unflip {
				displayName = "Unflip Quad";
				position = "pos driver";
				priority = 3;
				radius = 12;
				condition = "alive this";
				statement = "[this] exec {Player\Action\UnflipVehicle.sqs}";
			};
		};
	};

	class Jeep_xj400: Jeep {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		
		model = "\TZK_Model_4_0_3\Jeep_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_mutt_backg.pac, tex_mutt_bottom.pac, tex_mutt_frontg.pac, tex_mutt_kapotag.pac, tex_mutt_kolog.pac, tex_mutt_koloog.pac, tex_mutt_palubkmg.pac, tex_mutt_podanteng.pac, tex_mutt_podlahg.pac, tex_mutt_podpaka.pac, tex_mutt_radiog.pac, tex_mutt_sedoperg.pac, tex_mutt_sedsedg.pac, tex_mutt_sideg.pac, tex_mutt_sklog.pac, tex_mutt_trubka.pac, tex_mutt_volant.paa, tex_mutt_pristrtga.paa
			, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Car.sqs}";};
	};
	class JeepMG_xj400: JeepMG {
		scope = protected; vehicleClass = "TZK_Units_400";
		class HitGun { armor = 3; material = 52; name = "gun"; passThrough = 1; }; armorGun = 3;
		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
		};
		
		model = "\TZK_Model_4_0_3\Jeep_MG_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_mutt_backg.pac, tex_mutt_bottom.pac, tex_mutt_frontg.pac, tex_mutt_kapotag.pac, tex_mutt_kolog.pac, tex_mutt_koloog.pac, tex_mutt_palubkmg.pac, tex_mutt_podanteng.pac, tex_mutt_podlahg.pac, tex_mutt_podpaka.pac, tex_mutt_radiog.pac, tex_mutt_sedoperg.pac, tex_mutt_sedsedg.pac, tex_mutt_sideg.pac, tex_mutt_sklog.pac, tex_mutt_trubka.pac, tex_mutt_volant.paa, tex_mutt_pristrtga.paa
			, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Car.sqs}";};
	};
	class HMMWV_xj400: Jeep {
		scope = protected; vehicleClass = "TZK_Units_400";
		displayName = "$STR_DN_HMMV"; cost = 100000; type = 1;
		
	//	model = "\humr\HMMWV.p3d";
		model = "\TZK_Model_4_0_0\HMMWV_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_hmmwv_frntbck.pac, tex_hmmwv_in_sidlr.pac, tex_hmmwv_in_zadek.pac, tex_hmmwv_kapota.pac, tex_hmmwv_kogif.pac, tex_hmmwv_kolog.pac, tex_hmmwv_predni_sklo.pac, tex_hmmwv_sedacky.pac, tex_hmmwv_sid1.pac, tex_hmmwv_sid2.pac, tex_hmmwv_side_tga.paa, tex_hmmwv_strecha.pac, tex_hmmwv_strecha2.pac, tex_hmmwv_windshield.paa, tex_hmmwv_windshield.pac, tex_mutt_kologi.pac, tex_mutt_koloog.pac, tex_mutt_svetlag.pac
			, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\HMMWV.sqs}";};
		picture = "\humr\ihmmwv.paa";
		armor = 80;
		
		dammageHalf[]= { "jeep4x4_glass.paa","jeep4x4_glassB.paa", "jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa", "jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa", "scud_sklo.paa","scud_skloB.paa", "scud_sklo2.paa","scud_sklo2B.paa", "scud_sklo3.paa","scud_sklo3B.paa", "scud_sklo4.paa","scud_sklo4B.paa" };
		dammageFull[]= { "jeep4x4_glass.paa","jeep4x4_glassB.paa", "jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa", "jeep_kab_sklo2.paa","jeep_kab_sklo2B.paa", "scud_sklo.paa","scud_skloB.paa", "scud_sklo2.paa","scud_sklo2B.paa", "scud_sklo3.paa","scud_sklo3B.paa", "scud_sklo4.paa","scud_sklo4B.paa" };
		armorGlass = 0.5;
		armorWheels = 0.1;
		soundEngine[] = {"\humr\HMMWVengine", db-25, 1.25};
		typicalCargo[] = {"Soldier", "Soldier", "SoldierLAW", "Officer"};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class UAZ_xj400: UAZ {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		
		model = "\TZK_Model_4_0_3\uaz_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_jeep_kab_sklo1.paa, tex_jeep_kab_sklo2.paa, tex_jeep_kolo_side.pac, tex_mutt_bottom.pac, tex_mutt_kolog.pac, tex_mutt_koloog.pac, tex_uaz_ige_front.paa, tex_uaz_kapota_top.pac, tex_uaz_zasterka.pac, tex_uazbck.pac, tex_uazfrt.pac, tex_uazkolo.pac, tex_uazside1.pac, tex_uazside2.pac, tex_uaztop.pac
			, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Car.sqs}";};
	};
	class BRDM_xj400: LandVehicle {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "$STR_DN_BRMD"; nameSound = "APC"; side = 0; cost = 100000; type = 1; threat[] = {0.5,0.5,0.1};
		
	//	model = "\brmd\brmd.p3d";
		model = "\TZK_Model_4_0_3\BRDM_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_brmd_detaily.pac, tex_brmd_haubna.pac, tex_brmd_predek1.pac, tex_brmd_predek2.pac, tex_brmd_strana1.pac, tex_brmd_strana2.pac, tex_brmdkolo.paa, tex_brmdkolo.pac, tex_brmdkolo2.pac, tex_brmdkolokolo.pac, tex_brmdsvetla.pac, tex_brmdvrch1.pac, tex_brmdvrch2.pac, tex_brmdzadek.pac
			, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\BRDM.sqs}";};
		
		picture = "\brmd\ibrmd.paa";
		icon = "bmp";
		armor = 80;
		
		weapons[] = {"CarHorn"};
		magazines[] = {};
		
		unloadInCombat = 1;
		fuelCapacity = 100;
		
		crew = "SoldierEB";
		
		transportSoldier = 3;
		transportAmmo = 0;
		maxSpeed = 100;
		preferRoads = 1;
		unitInfoType = "UnitInfoCar";
		hideUnitInfo = 1;
		cargoAction[] = {"ManActUazCoDriver","ManActCargo"};
		cargoIsCoDriver[] = {1,0};
		soundEngine[] = {"Vehicles\OldIdle1",0.316228,1.25};
		class ViewPilot {
			initAngleX = 10;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -240;
			min = 0;
			max = 40;
		};
		class IndicatorSpeed2 {
			selection = "ukaz_rychlo2";
			axis = "osa_rychlo2";
			angle = -240;
			min = 0;
			max = 16.67;
		};
		class IndicatorRPM {
			selection = "ukaz_rpm";
			axis = "osa_rpm";
			angle = -170;
			min = 0;
			max = 1;
		};

		soundGear[] = {"Vehicles\Gear_Trans1",0.001,1};
		soundCrash[] = {"Vehicles\crash_small2",0.316228,1};
		soundEnviron[] = {"Objects\noise",0.00316228,0.25};
		
		canFloat = 1;
		simulation = "car";
		hasDriver = 1; hasGunner = 0; hasCommander = 0;
		hideProxyInCombat = 0;
		wheelCircumference = 4.513;
		turnCoef = 6;
		driverAction = "ManActV3SDriver";
		dammageHalf[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
		dammageFull[] = {"jeep_kab_sklo1.paa","jeep_kab_sklo1B.paa"};
		armorGlass = 0.5;
		armorWheels = 0.15;
		terrainCoef = 2;
		damperSize = 0.1;
		damperForce = 30;
		armorBody = 0.4;
		armorFuel = 1.4;
		armorLights = 0.4;
		scudLaunch = "";
		scudStart = "";
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","Officer"};
		class HitEngine {
			armor = 1.2;
			material = 60;
			name = engine;
			passThrough = 1;
		};
		formationX = 20;
		formationZ = 20;
		precision = 10;
		brakeDistance = 10;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		sensitivity = 0.6;
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};

	class Truck5t_xj400: Truck5t {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		
		model = "\TZK_Model_4_0_3\Truck5t_TZK.p3d";
		hiddenSelections[] = {ammo, tzk_tex_00, 
			tex_5t_kab_detaily1.pac, tex_5t_kab_detaily2.pac, tex_5t_kab_haubna.pac, tex_5t_kab_maska.pac, tex_5t_kab_predek.pac, tex_5t_kab_strana.pac, tex_5t_kab_zadni.pac, tex_5t_kolo_okolo.pac, tex_5t_kolo_predni.pac, tex_5t_kolo_vnitrek.pac, tex_5t_kolo_zadni.pac, tex_5t_plachta_hor.pac, tex_5t_plachta_pre.pac, tex_5t_plachta_str.pac, tex_5t_plachta_zad.pac, tex_5t_pod_bok.pac, tex_5t_pod_odpru.pac, tex_5t_zasterky.pac, tex_truck_kisna_top.pac
			, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Truck.sqs}";};
	};
	class Truck5tRepair_xj400: Truck5tRepair {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class AttachInVehicle_Truck : UA_AttachInVehicle_Truck {}; class AttachOnFoot_Truck : UA_AttachOnFoot_Truck {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		
		model = "\TZK_Model_4_0_3\Truck5tRepair_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_5t_kab_detaily1.pac, tex_5t_kab_detaily2.pac, tex_5t_kab_haubna.pac, tex_5t_kab_maska.pac, tex_5t_kab_predek.pac, tex_5t_kab_strana.pac, tex_5t_kab_zadni.pac, tex_5t_kolo_okolo.pac, tex_5t_kolo_predni.pac, tex_5t_kolo_vnitrek.pac, tex_5t_kolo_zadni.pac, tex_5t_plachta_hor.pac, tex_5t_plachta_pre.pac, tex_5t_plachta_str.pac, tex_5t_plachta_zad.pac, tex_5t_pod_bok.pac, tex_5t_pod_odpru.pac, tex_5t_zasterky.pac, tex_truck_kisna_top.pac
			, tex_truck_kis_bck.pac, tex_truck_kis_frnt.pac, tex_truck_kisna_side.pac
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Truck.sqs}";};
	};
	class Truck5tRefuel_xj400: Truck5tRefuel {
		scope = protected; vehicleClass = "TZK_Units_400";
		
		model = "\TZK_Model_4_0_3\Truck5tfuel_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_5t_kab_detaily1.pac, tex_5t_kab_detaily2.pac, tex_5t_kab_haubna.pac, tex_5t_kab_maska.pac, tex_5t_kab_predek.pac, tex_5t_kab_strana.pac, tex_5t_kab_zadni.pac, tex_5t_kolo_okolo.pac, tex_5t_kolo_predni.pac, tex_5t_kolo_vnitrek.pac, tex_5t_kolo_zadni.pac, tex_5t_plachta_hor.pac, tex_5t_plachta_pre.pac, tex_5t_plachta_str.pac, tex_5t_plachta_zad.pac, tex_5t_pod_bok.pac, tex_5t_pod_odpru.pac, tex_5t_zasterky.pac, tex_truck_kisna_top.pac
			, tex_5t_fuel1.pac, tex_5t_fuel2.pac, tex_truck_cist_front.pac, tex_truck_cist_side.pac, tex_truck_cist_top.pac
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Truck.sqs}";};
	};

	class Ural_xj400: Ural {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		
		model = "\TZK_Model_4_0_3\ural_TZK.p3d";
		hiddenSelections[] = {ammo, tzk_tex_00, 
			tex_5t_pod_bok.pac, tex_black_sum.pac, tex_ural_blatniky.pac, tex_ural_blatniky_new.pac, tex_ural_green.pac, tex_ural_kapota_new.pac, tex_ural_kisna_b.pac, tex_ural_kisna_f.pac, tex_ural_kisna_s.pac, tex_ural_kisna_t.pac, tex_ural_kolo.pac, tex_ural_kolo_okolo.pac, tex_ural_kolo_vnitrek.pac, tex_ural_maska_new.pac, tex_ural_nadrz.pac, tex_ural_naraznik_new.pac, tex_ural_opak_new.pac, tex_ural_side_new.pac, tex_ural_skloram2_new.pac, tex_ural_strecha_new.pac, tex_ural_zadek.pac
			, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Car.sqs}";};
	};
	class UralRepair_xj400: UralRepair {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class AttachInVehicle_Truck : UA_AttachInVehicle_Truck {}; class AttachOnFoot_Truck : UA_AttachOnFoot_Truck {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
				
		model = "\TZK_Model_4_0_3\uralRepair_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_5t_pod_bok.pac, tex_black_sum.pac, tex_ural_blatniky.pac, tex_ural_blatniky_new.pac, tex_ural_green.pac, tex_ural_kapota_new.pac, tex_ural_kisna_b.pac, tex_ural_kisna_f.pac, tex_ural_kisna_s.pac, tex_ural_kisna_t.pac, tex_ural_kolo.pac, tex_ural_kolo_okolo.pac, tex_ural_kolo_vnitrek.pac, tex_ural_maska_new.pac, tex_ural_nadrz.pac, tex_ural_naraznik_new.pac, tex_ural_opak_new.pac, tex_ural_side_new.pac, tex_ural_skloram2_new.pac, tex_ural_strecha_new.pac, tex_ural_zadek.pac
			, tex_ural_repair_bck.pac, tex_ural_repair_frt.pac, tex_ural_repair_side.pac, tex_ural_repair_top.pac
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Car.sqs}";};
	};
	class UralRefuel_xj400: UralRefuel {
		scope = protected; vehicleClass = "TZK_Units_400";
		
		model = "\TZK_Model_4_0_3\uralfuel_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_5t_pod_bok.pac, tex_black_sum.pac, tex_ural_blatniky.pac, tex_ural_blatniky_new.pac, tex_ural_green.pac, tex_ural_kapota_new.pac, tex_ural_kisna_b.pac, tex_ural_kisna_f.pac, tex_ural_kisna_s.pac, tex_ural_kisna_t.pac, tex_ural_kolo.pac, tex_ural_kolo_okolo.pac, tex_ural_kolo_vnitrek.pac, tex_ural_maska_new.pac, tex_ural_nadrz.pac, tex_ural_naraznik_new.pac, tex_ural_opak_new.pac, tex_ural_side_new.pac, tex_ural_skloram2_new.pac, tex_ural_strecha_new.pac, tex_ural_zadek.pac
			, tex_ural_fuel_side.pac, tex_ural_fuel_top.pac, tex_ural_fuel_zadek.pac
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Car.sqs}";};
	};

	// Car with weapons. Car can't shoot bullets whose simulation is shotRocket or shotMissile. Besides, vehicles simutaion "car" or "motorcycle" will crash game, if equipping some weapons while no magazines, but in CTI the rearm system removes all magazines of a vehicle while remaining its weapons. Thus their weapon must be defined in a special way.
	
	// HMMWV units of "fk_hmmwv.pbo" is well designed. That AddOn probably applied "MCAR Project" to make car shooting "guided" missile. Its trick is to design several proxy cargo for the unit and move "Logic" in the cargo seat. Those logics' position can indicate the car's direction, "up" vector and turret's direction/elevation. These vectors can be applied for initialize missiles and search lock-able targets.
	// TZK design another method for cars to shooting missile. In CONFIG here another units are defined. Models' texture path are replaced. If wish to apply their own design, search original PBO please.
	class HMMWV_M2wS_xj400: jeepMG {
		scope = protected; vehicleClass = "TZK_Units_400";
	//	accuracy = 1.5;
		displayName = "HMMWV M2"; cost = 100000; type = 1;
		
		model = "\TZK_Model_4_0_0\hmmwv_m2wS_FK_HMMWV.p3d";
		picture = "\TZK_Texture_4_0_0\icon\iHMMWV_M2wS.paa";
		armor = 80;
		
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[] = {"Browning_xj400"}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.

		hiddenSelections[] = {"IFF_Hood","IFF_Door1","IFF_Door2","StuffA1","StuffA2","StuffB1","StuffC1","StuffD1","StuffD2","StuffD3","StuffE1"};

		maxSpeed = 100;
		preferRoads = 1;

		soundEngine[] = {"\humr\HMMWVengine", db-25, 1.25};

		armorGlass = 1.5
		armorWheels = 0.5

		transportSoldier = 3;
		hideWeaponsDriver = 1;
		hideWeaponsGunner = 1;
		hideWeaponsCargo = 0;
		cargoAction[] = {"ManActHmmwvCargo01","ManActHmmwvCargo02","ManActHmmwvCargo03","ManActJeepDriver"};
		gunnerAction = "ManActHmmwvGunner01";

		class TurretBase {};
		class Turret: TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"",1.0};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			
			minElev = -10; 
			maxElev = +20;
			minTurn = -180; 
			maxTurn = +180;

			body = "OtocVez";
			gun = "OtocHlaven";
		};
		ejectDeadGunner = 0;
		hasCommander = 0;
		driverIsCommander = 1;

		class UserActions {
			class EquipM2 : UA_EquipM2 {};
			
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		class EventHandlers {
			Init = "[_this select 0] exec ""\TZK_Objects\Scripts\FK_HMMWV\IFF_show.sqs"", [_this select 0] exec ""\TZK_Objects\Scripts\FK_HMMWV\Stuff_show.sqs"";  _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs};  ";
		};
	};
	class HMMMV_TOW2A_xj400 : JeepMG {
		scope = protected; vehicleClass = "TZK_Units_400";
	//	accuracy = 1.5;
		displayName = "HMMWV (TOW-2A)"; threat[] = {0.4, 1, 0.2};
		
		model = "\TZK_Model_4_0_0\hmmwv_tow2_FK_HMMWV.p3d";
		picture = "\TZK_Texture_4_0_0\icon\iHMMWV_TOW2A.paa";
		
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[] = {"Browning_xj400"}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.

		gunnerAction="ManActHmmwvGunner02";
		cargoAction[]={"ManActHmmwvCargo01","ManActHmmwvCargo03","ManActHmmwvCargo02","ManActJeepDriver"};
		
		unitInfoType = "UnitInfoShip";
		hideUnitInfo = 0;
		camouflage = 2;
		audible = 3;
		sensitivity = 3;
		sensitivityEar = 0.0175;
		maxSpeed = 90;
		
		getInRadius = 3.5;
		fuelCapacity = 400;
		irScanRangeMin = 100; irScanRangeMax = 3000; irScanToEyeFactor = 0.616; irScanGround = 1;
		driverCanSee = 31; gunnerCanSee = 31;
		gunnerHasOptics = 1;
		castGunnerShadow = 1;
		hideProxyInCombat = 0;
		ejectDeadDriver = 0;
		ejectDeadGunner = 0;
		ejectDeadCommander = 0;
		ejectDeadCargo = 0;
		castDriverShadow = 0;
		hasCommander = 0;
		driverIsCommander = 1;
		nightVision = 1;
		cost = 100000;
		formationX = 20;
		formationZ = 30;
		formationTime = 30;
		transportSoldier = 3;
		
		transportMaxWeapons = 4;
		transportMaxMagazines = 20;

		hiddenSelections[] = {"IFF_Hood","IFF_Door1","IFF_Door2","StuffA1","StuffA2","StuffB1","StuffC1","StuffD1","StuffD2","StuffD3","StuffE1"};

		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "otocvez";
			gun = "otochlaven";

			minElev = -9;
			maxElev= 45;
			minTurn = -360;
			maxTurn= 360;
			soundServo[] = {"",0,0};
		};
		class ViewOpticsBase {};
		class ViewOptics: ViewOpticsBase {
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = +30;
			initAngleY = 70;
			minAngleY = -100;
			maxAngleY = +100;
			initFov = 0.18;
			minFov = 0.18;
			maxFov = 0.18;
		};
		class ViewGunner {
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.700000;
			minFov = 0.420000;
			maxFov = 0.850000;
		};
		gunnerOpticsModel = "optika_LAW";
		class MGunClouds: WeaponFireMGun {};

		class UserActions {
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			
			class EquipLAW: UA_EquipLAW {};
			class EquipCarlGustav: UA_EquipCarlGustav {};
			class EquipGrenade: UA_EquipGrenade {};
			class EquipMortar: UA_EquipMortar {};
			class EquipMG: UA_EquipMG {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		class EventHandlers {
			Init = "[_this select 0] exec ""\TZK_Objects\Scripts\FK_HMMWV\IFF_show.sqs"", [_this select 0] exec ""\TZK_Objects\Scripts\FK_HMMWV\Stuff_show.sqs""; _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}";
		};
	};
	
	class BRDM_PK_xj400: BRDM {
		scope = protected; vehicleClass = "TZK_Units_400";
	//	accuracy = 1.5;
		displayName = "BRDM PK"; cost = 100000; type = 1; threat[] = {0.8, 0.2, 0.6};
		
		model = "\TZK_Model_4_0_0\BRDM_PK_BAS.p3d";
		picture = "\TZK_Texture_4_0_0\icon\iBRDMPK.paa";

		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[] = {"Browning_xj400"}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.

		armor = 120;
		destrType = "DestructEngine";
		
		extCameraPosition[] = {0,1,-10};

		unitInfoType = UnitInfoSoldier;
		hideUnitInfo = 0;

		hasGunner = 1;
		gunnerAction = "ManActBAS_RUSGunner";
		gunnerCanSee = CanSeeRadarC+CanSeeOptics+CanSeeEar;
		irScanRangeMin = 50; irScanRangeMax = 1000;
		irScanToEyeFactor = 0.616; irScanGround = 1;
		driverIsCommander = 1;
		driverCanSee = CanSeeRadarC+CanSeeEar;
		gunnerOpticsModel = "optika_empty";
		castGunnerShadow = 1;

		transportSoldier = 4;

		driverAction = "ManActV3SDriver";
		cargoAction[] = {"ManActCargo"};

		class WeaponCloudsGun {};
		class WeaponCloudsMGun: WeaponCloudsGun {};
		class MGunClouds: WeaponCloudsMGun {
			access = ReadOnlyVerified;
			cloudletDuration = 0.2;
			cloudletAnimPeriod = 0.4;
			cloudletSize = 4.0;
			cloudletAlpha = 0.3;
			cloudletGrowUp = 0.05;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0.1;
			cloudletAccY = 0.4;
			cloudletMinYSpeed = 0.2;
			cloudletMaxYSpeed = 0.6;
			cloudletShape = "missileSmoke";
			cloudletColor[] = {0.6, 0.6, 0.6, 0.25};
			interval = 0.02;
			size = 1;
			sourceSize = 0.5;
			timeToLive = 0.1;
			initT = 0;
			deltaT = 0;
			class Table {
				class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
			}
		};
		class TurretBase {};
		class Turret: TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] =  {};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -20;
			maxElev = 55;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class ViewGunner {
			initAngleX = 5; minAngleX = -30; maxAngleX = +30;
			initAngleY = 0; minAngleY = 0; maxAngleY = 0;
			initFov = 0.7; minFov = 0.42; maxFov = 0.85;
		};
		class ViewOpticsBase {};
		class ViewOptics: ViewOpticsBase {
			initFov = 0.3; minFov = 0.07; maxFov = 0.35;
			initAngleX = 5; minAngleX = -30; maxAngleX = 80;
			initAngleY = 0; minAngleY = -180; maxAngleY = 180;
		};
		
		class UserActions {
			class EquipPKT : UA_EquipPKT {};
			
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		class EventHandlers { Init = " _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}; "; };
	};
	// The BRDM with weapon uses model from MNF_BRDM2.
	class BRDM2_MNF_xj400: BRDM_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 0.3;
		displayName = "BRDM Gaskin"; type = 0; threat[] = {0.8,0.2,0.5};
		
		hiddenSelections[] = {"n1","n2","n3","t1","t2","t3","t4","emb","flag"};
		model = "\TZK_Model_4_0_0\BRDM2_MNF.p3d";
		picture = "\TZK_Texture_4_0_0\icon\ibrdm2.paa";
		crew ="soldierECrew";
		soundEngine[] = {"\TZK_Sounds_4_0_0\MNF_BRDM2\engine.ogg",1.0,1.0};
		
		weapons[] = {}; // Car with weapon should better not equip weapon. But editors shouldn't make them haven't any magazines as well.
		magazines[] = {"Browning_xj400"}; // Magazines must be empty for cars or game may crash in some situation, but they should be removed but not define an empty array here.
		
		dammageHalf[] = {\TZK_Texture_4_0_0\MNF_BRDM2\in5okno.paa,\TZK_Texture_4_0_0\MNF_BRDM2\in5okno_d.paa};
		dammageFull[] = {\TZK_Texture_4_0_0\MNF_BRDM2\in5okno.paa,\TZK_Texture_4_0_0\MNF_BRDM2\in5okno1.paa,\TZK_Texture_4_0_0\MNF_BRDM2\smotr2snar.paa,\TZK_Texture_4_0_0\MNF_BRDM2\smotr2snar1.paa};
		
		armor = 200;
		armorstructural = 1;
		armorBody = 1.0;
		armorFuel = 4.4;
		armorLights = 0.01;
		armorWheels = 2;
		armorGlass = 0.6;
		destrType = "destructengine";
		
		maxSpeed = 80;
		turnCoef = 5.0;
		fuelCapacity = 65;
		extCameraPosition[] = {0,1,-10};
		unitInfoType = "UnitInfoShip";
		hideUnitInfo = false;
		hideWeaponsCargo = 1;

		cargoIsCoDriver[] = {1}; 
		cargoAction[] = {"ManActven_brdm2_codriver","ManActven_brdm2_codriver"};
		transportSoldier = 2;                             
		driverIsCommander = 1;
		driverAction = "ManActven_brdm2_driver";
		drivercansee= 31;
		ejectDeadDriver = 0;

		hasGunner = true;
		gunnerAction = "ManActven_brdm2_gunner";
		gunnerCanSee = 31;
		gunnerhasoptics = 1;
	//	gunnerOpticsModel = "optika_zsu_gunner";
		gunnerOpticsModel = "optika_LAW";
		castGunnerShadow = false;
		
		irScanRangeMin = 50; irScanRangeMax = 1000;
		irScanToEyeFactor = 0.616; irScanGround = 1;

		transportMaxMagazines = 28;
		transportMaxWeapons = 8;
		class MGunClouds:WeaponCloudsMGun {};

		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -250;
			min = 0;
			max = "120 / 3.6";
		};
		class Animations {
			class tumbler {
				type = "rotation";
				animperiod = 0.5;
				selection = "tumb";
				axis = "osa_tumb";
				angle0 = 0;
				angle1 = 0;
			};
			class luk {
				type ="rotation";
				animPeriod =1.0;
				selection ="luk";
				axis ="osa_luk";
				angle0 =0;
				angle1 =1.00;
			};
			class ruch_luk {
				type ="rotation";
				animPeriod =1.0;
				selection ="ruch_luk";
				axis ="osa_ruch_luk";
				angle0 =0;
				angle1 =1.00;
			};
			class levy_p {
				type ="rotation";
				animPeriod =2.5;
				selection ="levy_p";
				axis ="osa_kolesa";
				angle0 =0;
				angle1 =0.016;
			};
			class pravy_p {
				type ="rotation";
				animPeriod =2.5;
				selection ="pravy_p";
				axis ="osa_kolesa";
				angle0 =0;
				angle1 =0.016;
			};
		};
		class TurretBase {};
		class Turret: TurretBase  {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"\TZK_Sounds_4_0_0\MNF_Scripts\servo1.wss", 0.00316228, 1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -5; maxElev = +30;
			minTurn = -360; maxTurn = +360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class ViewGunner {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = +30;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		class ViewOptics {
			initAngleX = 0
			minAngleX = 0
			maxAngleX = 0
			initAngleY = 0
			minAngleY = 0
			maxAngleY = 0
			initFov = 0.057;
			minFov = 0.035;
			maxFov = 0.057;
		};
		class UserActions {
			class open_window {
				displayName = "$STR_ACT_MNF_CloseWindow1"; 
				position = pos;
				radius = 1;
				condition = "local this && this animationPhase ""luk"" < 0.9";
				statement = [this, ["luk", "ruch_luk"], 1] exec {\TZK_Objects\Scripts\SwitchSelections.sqs};
			};
			class close_window {
				displayName = "$STR_ACT_MNF_OpenWindow1"; 
				position = pos;
				radius = 1;
				condition = "local this && this animationPhase ""luk"" >= 0.9";
				statement = [this, ["luk", "ruch_luk"], 0] exec {\TZK_Objects\Scripts\SwitchSelections.sqs};
			};
			class down_kolesa {
				displayName = "$STR_ACT_MNF_LowerWheels"; 
				position = pos;
				radius = 1;
				condition = "local this && this animationPhase ""pravy_p"" < 0.9";
				statement = [this, ["levy_p", "pravy_p"], 1] exec {\TZK_Objects\Scripts\SwitchSelections.sqs};
			};
			class up_kolesa {
				displayName = "$STR_ACT_MNF_RaiseWheels"; 
				position = pos;
				radius = 1;
				condition = "local this && this animationPhase ""pravy_p"" >= 0.9";
				statement = [this, ["levy_p", "pravy_p"], 0] exec {\TZK_Objects\Scripts\SwitchSelections.sqs};
			};
		};
		class EventHandlers {
			  Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\BRDM2_MNF.sqs}, [_vehicle, {\TZK_Texture_4_0_0\MNF_BRDM2\RNum\R\}, {n}, {}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs}, _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs};
		};
	};

// Ship
	class PCSFWjetski_xj400: BoatW {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1.0;
		displayName = "PCSFWjetski"; nameSound = "ship"; side = 1; cost = 100000; type = 1; threat[] = {0.5, 0.9, 0.6};
		
		armor = 60;
		model = "\TZK_Model_4_0_0\PCSFWjetski.p3d";
		picture = "\TZK_Texture_4_0_0\icon\iJetSki.paa";
		icon = "ship";
		
		weapons[] = {"Browning", "MachineGun30"};
		magazines[] = {"Browning", "MachineGun30", "MachineGun30"};
		
		audible = 6;
		irTarget = 0; // 4.0.0 design. No display on radar.
		
		crew = "SoldierWSaboteur";
		soundEngine[] = {"Vehicles\mediumcar",0.0316228,2}; // Use 0.0316228 the original OFP value to take place of noisy db-30.
		
		hasGunner = 0; hasCommander = 0; driverIsGunner = 1;
		fuelCapacity = 5000;

		maxSpeed = 120;
		transportSoldier = 2;

		formationX = 5; formationZ = 5;
		precision = 25;
		brakeDistance = 1;
		formationTime = 10;
		steerAheadSimul = 1.000000;
		steerAheadPlan = 1.000000;
		predictTurnSimul = 1.000000;
		predictTurnPlan = 1.000000;
		
		getInRadius = 5.5; // Enlarge this range. 1.5 too low to get in.
		getInAction = "ManActGetOutCar";
		getOutAction = "ManActGetOutCar";
		driverAction = "ManActJeepDriver";
		cargoAction[] = {"ManActCargo"};
		extCameraPosition[] = {0,1,-10};

		armorEngine = 1.2;
		class HitEngine {armor = 1.2;material = 60;name = engine;passThrough = 1;}

		dammageHalf[] = {};
		dammageFull[] = {};

		armorBody = 0.05;
		armorFuel = 1.4;
		armorLights = 0.4;
		armorWheels = 0.1;
		armorGlass = 0.05;

		class IndicatorSpeed  {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -250;
			min = 0;
			max = 90;
		};
		class Reflectors {
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 3;
				brightness = 1.50;
			};
		};	
};
	class PCSFEjetski_xj400: BoatE {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1.0;
		displayName = "PCSFWjetski"; nameSound = "ship"; side = 0; cost = 100000; type = 1; threat[] = {0.5, 0.9, 0.6};
		
		armor = 60;
		model = "\TZK_Model_4_0_0\PCSFjetski.p3d";
		picture = "\TZK_Texture_4_0_0\icon\iJetSki.paa";
		icon = "ship";
		
		weapons[] = {"Browning", "MachineGun30"};
		magazines[] = {"Browning", "MachineGun30", "MachineGun30"};
		
		audible = 6;
		irTarget = 0; // 4.0.0 design. No display on radar.
		
		crew = "SoldierESaboteurPipe";
		soundEngine[] = {"Vehicles\mediumcar",0.0316228,2}; // Use 0.0316228 the original OFP value to take place of noisy db-30.
		
		hasGunner = 0; hasCommander = 0; driverIsGunner = 1;
		fuelCapacity = 5000;

		maxSpeed = 120;
		transportSoldier = 2;

		formationX = 5; formationZ = 5;
		precision = 25;
		brakeDistance = 1;
		formationTime = 10;
		steerAheadSimul = 1.000000;
		steerAheadPlan = 1.000000;
		predictTurnSimul = 1.000000;
		predictTurnPlan = 1.000000;
		
		getInRadius = 5.5; // Enlarge this range. 1.5 too low to get in.
		getInAction = "ManActGetOutCar";
		getOutAction = "ManActGetOutCar";
		driverAction = "ManActJeepDriver";
		cargoAction[] = {"ManActCargo"};
		extCameraPosition[] = {0,1,-10};

		armorEngine = 1.2;
		class HitEngine {armor = 1.2;material = 60;name = engine;passThrough = 1;}

		dammageHalf[] = {};
		dammageFull[] = {};

		armorBody = 0.05;
		armorFuel = 1.4;
		armorLights = 0.4;
		armorWheels = 0.1;
		armorGlass = 0.05;

		class IndicatorSpeed  {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -250;
			min = 0;
			max = -210;
		};
		class Reflectors {
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 3;
				brightness = 1.50;
			};
		};	
};

	class CWKZodiac_xj400: BoatW {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "Zodiac - Grey"; side = 1;
		
		model = "\CWKZodiac\CWKZodiac.p3d"
		picture = "\cwkzodiac\icon.paa";
		icon ="\cwkzodiac\zod.paa";
		weapons[] = {};
		magazines[] = {};
		
		crew = "SoldierWB";
		simulation = "ship";
		soundEngine[] = {"\cwkzodiac\motor.wav", db-44, 1};
		driverAction= "manactCWKZodiacDriverA_xj400";
		hasGunner = 0; hasCommander = 0;
		maxSpeed = 70;
		
		transportSoldier = 6;
		
		precision = 1;
		fuelCapacity = 40;
		brakeDistance = 0.00001;
	};
	class Zodiac_xj400: CWKZodiac_xj400 {
		displayName = "Zodiac"; side = 3; cost = 10000; threat[] = {0.1, 0.1, 0.1};
		irTarget = 0; // 4.0.0 design. No display on radar.
		armor = 20;
		fuelCapacity = 100;
		typicalCargo[] = {};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
	};
	class ZodiacW_xj400: Zodiac_xj400 {
		scope = protected;
		displayName = "Zodiac West"; side = 1;
	};
	class ZodiacE_xj400: Zodiac_xj400 {
		scope = protected;
		displayName = "Zodiac East"; side = 0;
	};
	class GunBoat_xj400: BoatW {
		scope = private; vehicleClass = "TZK_Units_400";
	//	accuracy = 0.5;
		displayName = "GunBoat"; side = 3; cost = 100000; threat[] = {0.9, 0.4, 0.8};
		
		fuelCapacity = 1000;
		
		weapons[] = {Cannon_20HE_xj400, Cannon_20AP_xj400};
		magazines[] = {Mag_20HE_800_03_xj400, Mag_20AP_200_03_xj400};
		typicalCargo[] = {};
		
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			
			class AttachInVehicleCenter : UA_AttachInVehicle_Center {};
			class AttachInVehicleRight : UA_AttachInVehicle_Right {};
			class AttachInVehicleLeft : UA_AttachInVehicle_Left {};
			class AttachOnFootCenter : UA_AttachOnFoot_Center {};
			class AttachOnFootRight : UA_AttachOnFoot_Right {};
			class AttachOnFootLeft : UA_AttachOnFoot_Left {};
			
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
		};
	};
	class GunBoatW_xj400: GunBoat_xj400 {
		scope = protected;
		displayName = "GunBoat West"; side = 1;
		armor = 500;
	};
	class GunBoatW_Custom_xj400: GunBoatW_xj400 {
		scope = protected;
		armor = 600;
		weapons[] = {}; // Unnecessary for ship to set weapons/magazines like this. Make uniform with car only.
		magazines[] = {"Browning_xj400"};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			
			class AttachInVehicleCenter : UA_AttachInVehicle_Center {};
			class AttachInVehicleRight : UA_AttachInVehicle_Right {};
			class AttachInVehicleLeft : UA_AttachInVehicle_Left {};
			class AttachOnFootCenter : UA_AttachOnFoot_Center {};
			class AttachOnFootRight : UA_AttachOnFoot_Right {};
			class AttachOnFootLeft : UA_AttachOnFoot_Left {};
			
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			
			class EquipLAW: UA_EquipLAW {
				condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 30 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
			};
			class EquipCarlGustav: UA_EquipCarlGustav {
				condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 28 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
			};
			class EquipGrenade: UA_EquipGrenade {
				condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 30 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
			};
			class EquipMortar: UA_EquipMortar {
				condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 30 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
			};
			class EquipMG: UA_EquipMG {
				condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 30 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
			};
		};
		class EventHandlers {
			Init = " _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}";
		};
	};
	class GunBoatE_xj400: GunBoat_xj400 {
		scope = protected;
		displayName = "GunBoat East"; side = 0;
		armor = 500;
		
		weapons[] = {CannonE_20HE_xj400, CannonE_20AP_xj400};
		magazines[] = {Mag_20HE_800_03_xj400, Mag_20AP_200_03_xj400};
		transportSoldier = 10;
	};
	class GunBoatE_Custom_xj400: GunBoatE_xj400 {
		scope = protected;
		armor = 600;
		weapons[] = {}; // Unnecessary for ship to set weapons/magazines like this. Make uniform with car only.
		magazines[] = {"Browning_xj400"};
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			
			class AttachInVehicleCenter : UA_AttachInVehicle_Center {};
			class AttachInVehicleRight : UA_AttachInVehicle_Right {};
			class AttachInVehicleLeft : UA_AttachInVehicle_Left {};
			class AttachOnFootCenter : UA_AttachOnFoot_Center {};
			class AttachOnFootRight : UA_AttachOnFoot_Right {};
			class AttachOnFootLeft : UA_AttachOnFoot_Left {};
			
			class SwitchToDriverLand : UA_SwitchToDriverLand {}; class SwitchToGunnerLand : UA_SwitchToGunnerLand {};
			
			class EquipRPG: UA_EquipRPG {
				condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 30 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
			};
			class EquipAT4: UA_EquipAT4 {
				condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 28 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
			};
			class EquipGrenade: UA_EquipGrenade {
				condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 30 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
			};
			class EquipMortar: UA_EquipMortar {
				condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 30 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
			};
			class EquipMG: UA_EquipMG {
				condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 30 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
			};
		};
		class EventHandlers {
			Init = " _this exec {\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs}";
		};
	}

// Scud. Abandoned units.
	class ScudW_xj400: Scud {
		scope = protected; vehicleClass = "TZK_Units_400";
		side = TWest;
		class UserActions {
			class Introduction {
				displayName = "Introduction";
				radius = 3;
				position = "pos driver";
				hideOnUse = 0;
				condition = "player in (crew this)";
				statement = "this groupchat ""The Scud-D will assault co8. Please make sure co8 is set at the correct position before launch.""";
			};
		};
	};
	class ScudE_xj400: ScudW_xj400 {
		side = TEast;
	};

// Cycle
	class Motorcycle: LandVehicle {};
	class Kolo: Motorcycle {};
	class Kolo_xj400: Kolo {
		scope = protected;
		irTarget = 0;
	};
	class Jawa: Motorcycle {};
	class Jawa_xj400: Jawa {
		scope = protected;
		irTarget = 0;
	};

//EOF