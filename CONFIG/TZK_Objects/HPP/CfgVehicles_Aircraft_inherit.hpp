// Helicopter
#define SpoofMagazines "SpoofSwitch_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400", "SpoofCount_xj400"
	// The precision enlarged for Helicopters in TZK_3.00 is recovered. Didn't spot something different.
	// Standard Transport Helicopter
	class Mi17_xj400: Mi17 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		irScanGround = 0; irTarget = 0; camouflage = 10; // Neither can irScan ground nor be detected by irScan. This design is for original UH60/Mi17 to against too strong AA in TZK.
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi17_MG_xj400: Mi17_xj400 {
		displayName = "Mi17 MG";
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
	};
	class Mi17_LGB_xj400: Mi17_xj400 {
		displayName = "Mi17 LGB";
		laserScanner = 1;
		weapons[] = {LGBLauncher_xj400};
		magazines[]={Mag_LGB_2_xj400, SpoofMagazines};
	};

/*	class Mi17_mcm_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "$STR_DN_MI17"; nameSound = "mi17"; side = 0; cost = 3000000; type = 2; threat[] = {0.6,1,0.4};
		armor = 50;

		model = "\TZK_Model_4_0_0\Mi17_rus2.p3d";
		hiddenSelections[] = {"cdln1","cdrn1","cdln2","cdrn2","zasleh2","zasleh3","zasleh4","zasleh5","ss_cms","ss_engine1","ss_engine2","ss_fuel","ss_gun","ss_transm","ss_weap","num_1","num_2","deslight"};
		picture = "imi17";


		crew = "SoldierEPilot";
		maxSpeed = 240;

		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\Slow4blade_Loop1",3.1622777,1};
		weapons[] = {"Rocket57x192"};
		magazines[]={"Rocket57x192", SpoofMagazines};
		driverAction = "ManActMi17Pilot"; gunnerAction = "ManActMi17Pilot";

		gunnerUsesPilotView = 0;
		transportSoldier = 12;
		transportAmmo = 0;
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorAltRadar2: IndicatorAltRadar {
			selection = "alt2";
			axis = "osa_alt2";
		};
		class IndicatorAltBaro2: IndicatorAltBaro {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
		};
		class IndicatorSpeed2: IndicatorSpeed {
			selection = "mph2";
			axis = "osa_mph2";
		};
		class IndicatorVertSpeed2: IndicatorVertSpeed {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
		};
		class IndicatorRPM2: IndicatorRPM {
			selection = "rpm2";
			axis = "osa_rpm2";
		};
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
	};
	class Mi17_mcm_xj400: Mi17_mcm_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi17_mcm_MG_xj400: Mi17_mcm_xj400 {
		displayName = "Mi17 MG";
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
	};
	class Mi17_mcm_LGB_xj400: Mi17_mcm_xj400 {
		displayName = "Mi17 LGB";
		laserScanner = 1;
		weapons[] = {LGBLauncher_xj400};
		magazines[]={Mag_LGB_2_xj400, SpoofMagazines};
	};	*/

	class Mi17_owp_ABC_xj400: Mi17 {
		rotorBig = "\TZK_Texture_4_0_0\OWP_Mi8\t\shared.pac";
		rotorBigBlend = "\TZK_Texture_4_0_0\OWP_Mi8\t\bigrotor.paa";
		rotorSmall = "\TZK_Texture_4_0_0\OWP_Mi8\t\shared.pac";
		rotorSmallBlend = "\TZK_Texture_4_0_0\OWP_Mi8\t\smallrotor.paa";

		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "$STR_DN_MI17"; nameSound = "mi17"; side = 0; cost = 3000000; type = 2; threat[] = {0.6,1,0.4};
		armor = 50;

		model = "\TZK_Model_4_0_0\Mi17_OWP.p3d";
		hiddenSelections[] = {cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight,  tzk_tex_00, 
			tex_body.pac, tex_decals.paa, tex_special.pac //, tex_dop.pac
			,  tzk_tex_99
		};
		picture = "imi17";

		insideSoundCoef = 0.004;

		gunnerUsesPilotView = false;
		DriverOpticsColor[] = {1,1,1,0,3};
		hideWeaponsDriver = false;
		hideWeaponsGunner = false;
		soundEngine[] = {"\TZK_Sounds_4_0_0\OWP_Mi8\Mi8.ogg", 3.1622777, 1};
		extCameraPosition[] = {0,1,-20};
		mainRotorSpeed = 0.7; // rotor animation parameters
		backRotorSpeed = 3.0;
		transportSoldier = 13;
		steerAheadSimul = 0.1;
		steerAheadPlan = 0.2;

		class ViewOpticsBase{};
		class ViewOptics : ViewOpticsBase {
			initAngleX = 0; minAngleX = -40; maxAngleX = 17;
			initAngleY = 0; minAngleY = -100; maxAngleY = 100;
			initFov = 0.2; minFov = 0.2; maxFov = 0.2;
		};
		class IndicatorAltBaro {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltBaro2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -320;
			min = 0;
			max = 320;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -340;
			min = 0;
			max = 130;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -340;
			min = 0;
			max = 130;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -330;
			min = 0;
			max = 11;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -330;
			min = 0;
			max = 11;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -360;
			min = -30;
			max = 30;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -360;
			min = -30;
			max = 30;
		};
		class Reflectors {
			class Left {
				color[] = {0.800000,0.800000,1.000000,1.000000};
				ambient[] = {0.070000,0.070000,0.070000,1.000000};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.600000;
				brightness = 1.000000;
			};
			class Right {
				color[] = {0.800000,0.800000,1.000000,1.000000};
				ambient[] = {0.070000,0.070000,0.070000,1.000000};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.600000;
				brightness = 1.000000;
			};
		};
		class CargoLight {
			color[] = {0, 1, 0, 0};
			ambient[] = {0.8, 0, 0.01, 1};
			brightness = 0.007;
		};

	};
	class Mi17_owp_Base_xj400: Mi17_owp_ABC_xj400 {
		picture = "\TZK_Texture_4_0_0\icon\iMi8_w.paa";
		class Animations {
			class Susp_R {
				type = "rotation";
				animPeriod = 0.1;
				selection = "R_susp";
				axis = "R_susp_osa";
				angle0 = 0;
				angle1 = 0.20;
			};
			class Susp_L {
				type = "rotation";
				animPeriod = 0.1;
				selection = "L_susp";
				axis = "L_susp_osa";
				angle0 = 0;
				angle1 = -0.20;
			};
			class Susp_RD {
				type = "rotation";
				animPeriod = 0.1;
				selection = "RD_susp";
				axis = "RD_susp_osa";
				angle0 = 0;
				angle1 = -0.08;
			};
			class Susp_LD {
				type = "rotation";
				animPeriod = 0.1;
				selection = "LD_susp";
				axis = "LD_susp_osa";
				angle0 = 0;
				angle1 = 0.08;
			};
			class OWP_Mi8_CDL {
				type = "rotation";
				animPeriod = 3;
				selection = "cdl";
				axis = "cdlosa";
				angle0 = 0;
				angle1= 1.0;
			};
			class OWP_Mi8_CDR {
				type = "rotation";
				animPeriod = 3;
				selection = "cdr";
				axis = "cdrosa";
				angle0 = 0;
				angle1= -1.0;
			};
			class OWP_Mi8_DOOR {
				type = "rotation";
				animPeriod = 1.5;
				selection = "door";
				axis = "door_osa";
				angle0 = 0;
				angle1= -0.05;
			};
			class OWP_Mi8_FLG {
				type = "rotation";
				animPeriod = 1.5;
				selection = "flg";
				axis = "flgosa";
				angle0 = 0;
				angle1= 0.075;
			};
			class OWP_Mi8_FRG {
				type = "rotation";
				animPeriod = 1.5;
				selection = "frg";
				axis = "frgosa";
				angle0 = 0;
				angle1 = -0.075;
			};
			class OWP_Mi8_lenta {
				type = "rotation";
				animPeriod = 0.1;
				selection = "kup";
				axis = "velka osa";
				angle0 = 0;
				angle1 = 0.1;

			};
		};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};

			class OpenMi8CargoBay {
				displayName = "$STR_OWP_Mi8_comm_Copen";
				position = "gtctrl";
				radius = 5;
				condition = "local this && this animationPhase ""OWP_Mi8_CDL"" < 0.01";
				statement = this animate ["OWP_Mi8_CDL",1], this animate ["OWP_Mi8_CDR",1];
			};
			class CloseMi8CargoBay {
				displayName = "$STR_OWP_Mi8_comm_Cclose";
				position = "gtctrl";
				radius = 5;
				condition = "local this && this animationPhase ""OWP_Mi8_CDL"" >= 0.99";
				statement = this animate ["OWP_Mi8_CDL",0], this animate ["OWP_Mi8_CDR",0];
			};
		/*	class OpenMi8Door {
				displayName = "$STR_OWP_Mi8_comm_dooropen";
				position = "doorcntrl";
				radius = 2;
				condition = "local this && this animationPhase ""OWP_Mi8_DOOR"" < 0.01";
				statement = "this animate[""OWP_Mi8_DOOR"",1];";
			};
			class CloseMi8Door {
				displayName = "$STR_OWP_Mi8_comm_doorclos";
				position = "doorcntrl";
				radius = 2;
				condition = "local this && this animationPhase ""OWP_Mi8_DOOR"" >= 0.99";
				statement = "this animate[""OWP_Mi8_DOOR"",0];";
			};
			*/
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Mi17_owp.sqs}, [_vehicle, {\TZK_Texture_4_0_0\OWP_Mi8\sign\}, {num_}, {}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs};
			Engine = "_this exec {\TZK_Objects\Scripts\OWP_Mi17\Engine_EH.sqs};"
			GetIn = "_this exec {\TZK_Objects\Scripts\OWP_Mi17\GetIn_EH.sqs};"
			GetOut = "_this exec {\TZK_Objects\Scripts\OWP_Mi17\GetOut_EH.sqs};"
		};
	};
	class Mi17_owp_xj400: Mi17_owp_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		armor = 150;
	};
	class Mi17_owp_MG_xj400: Mi17_owp_xj400 {
		displayName = "Mi17 MG";
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
	};
	class Mi17_owp_LGB_xj400: Mi17_owp_xj400 {
		displayName = "Mi17 LGB";
		laserScanner = 1;
		weapons[] = {LGBLauncher_xj400};
		magazines[]={Mag_LGB_2_xj400, SpoofMagazines};
	};
	class Mi17_owp_PKT_xj400: Mi17_owp_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		displayName = "$STR_OWP_Mi17_PKT"
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
		armor = 150;
		class TurretBase {};
		class Turret: TurretBase {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {};
			minElev = -35; maxElev = +7;
			minTurn = -15; maxTurn = +15;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class ViewGunner {
			initFov = 0.5; minFov = 0.4; maxFov = 1.0;
			initAngleX = 0; minAngleX = -35; maxAngleX = +35;
			initAngleY = 0; minAngleY = -130; maxAngleY = +130;
		};
		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\OWP_Mi8_pkt.p3d";
		driverOpticsModel = "\TZK_Model_4_0_0\Opt\OWP_Mi8_pkv.p3d";
	};

	class UH60_xj400: UH60 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		irScanGround = 0; irTarget = 0; camouflage = 10; // Neither can irScan ground nor be detected by irScan. This design is for original UH60/Mi17 to against too strong AA in TZK.
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class UH60_MG_xj400: UH60_xj400 {
		displayName = "UH60 MG";
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
	};
	class UH60_LGB_xj400: UH60_xj400 {
		displayName = "UH60 LGB";
		laserScanner = 1;
		weapons[] = {LGBLauncher_xj400};
		magazines[]={Mag_LGB_2_xj400, SpoofMagazines};
	};
	// UH60 with side-door-MG
	class UH60MG_xj400: UH60MG {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
		irScanGround = 0; irTarget = 0; camouflage = 10; // Neither can irScan ground nor be detected by irScan. This design is for original UH60/Mi17 to against too strong AA in TZK.
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};

	class UH60_CSLA_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.3;
		displayName = "$STR_DN_UH60"; nameSound = "blackhawk"; side = 1; cost = 10000000; type = 2; threat[] = {0.3,1,0.4};
		armor = 60;

		model = "\TZK_Model_4_0_0\UH60A_CSLA2.p3d";
		crew = "SoldierWPilot";
		picture = "iuh60";
		maxSpeed = 270;

		dammageHalf[] = {"\TZK_Texture_4_0_0\csla\uh\ps_sklo.paa","\TZK_Texture_4_0_0\csla\uh\ps_sklo2.paa","\TZK_Texture_4_0_0\csla\uh\zp_sklo.paa","\TZK_Texture_4_0_0\csla\uh\zp_sklo2.paa","\TZK_Texture_4_0_0\csla\uh\po_sklo.paa","\TZK_Texture_4_0_0\csla\uh\po_sklo2.paa","\TZK_Texture_4_0_0\csla\uh\pp_sklo.paa","\TZK_Texture_4_0_0\csla\uh\pp_sklo2.paa"};
		dammageFull[] = {"\TZK_Texture_4_0_0\csla\uh\ps_sklo.paa","\TZK_Texture_4_0_0\csla\uh\ps_sklo3.paa","\TZK_Texture_4_0_0\csla\uh\zp_sklo.paa","\TZK_Texture_4_0_0\csla\uh\zp_sklo3.paa","\TZK_Texture_4_0_0\csla\uh\po_sklo.paa","\TZK_Texture_4_0_0\csla\uh\po_sklo3.paa","\TZK_Texture_4_0_0\csla\uh\pp_sklo.paa","\TZK_Texture_4_0_0\csla\uh\pp_sklo3.paa"};
		rotorBig = "vrtule_uh_v";
		rotorBigBlend = "vrtule_uh_v_bl";
		rotorSmall = "vrtule_uh_m";
		rotorSmallBlend = "vrtule_uh_m_bl";
		mainRotorSpeed = -1;
		soundEngine[] = {"Vehicles\uh1",3.1622777,1.5};
		weapons[] = {"ZuniLauncher38"};
		magazines[]={"ZuniLauncher38", SpoofMagazines};
		driverAction = "ManActUH60Pilot";
		gunnerAction = "ManActUH60Pilot";
		gunnerUsesPilotView = 1;
		transportSoldier = 12;
		transportAmmo = 0;
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;

		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		transportMaxMagazines = 150;
		transportMaxWeapons = 30;
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro2 {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -320;
			min = 0;
			max = 12;
		};
		class ViewGunnerBase {
			initAngleX = 5;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
	};
	class UH60_CSLA_xj400: UH60_CSLA_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class UH60_CSLA_MG_xj400: UH60_CSLA_xj400 {
		displayName = "UH60 MG";
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
	};
	class UH60_CSLA_LGB_xj400: UH60_CSLA_xj400 {
		displayName = "UH60 LGB";
		laserScanner = 1;
		weapons[] = {LGBLauncher_xj400};
		magazines[]={Mag_LGB_2_xj400, SpoofMagazines};
	};
	// UH60 with side-door-MG
	class UH60MG_CSLA_Base_xj400: UH60_CSLA_Base_xj400 {
		displayName = "$STR_DN_UH60_MG";
		accuracy = 0.3;
		model = "\TZK_Model_4_0_0\UH60A_CSLA2_M2.p3d";
		enableSweep = 0;
		gunnerAction = "ManActUH60Gunner";
		gunnerOpticsModel = "optika_empty";
		weapons[] = {"Browning"};
		magazines[]={"Browning", SpoofMagazines};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {"",0.01,1.0};
			minElev = -42;
			maxElev = 5;
			minTurn = 30;
			maxTurn = 150;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class ViewGunner: ViewGunnerBase {
			initAngleY = 90;
			minAngleY = 30;
			maxAngleY = 150;
			initAngleX = 0;
			minAngleX = -42;
			maxAngleX = 5;
		};
	};
	class UH60MG_CSLA_xj400: UH60MG_CSLA_Base_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		weapons[] = {Cannon_Heli_xj400};
		magazines[]={Mag_Heli_2000_xj400, SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class AttachInVehicle : UA_AttachInVehicle_Heli {}; class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};

	// Small Helicopter
	class MH6_Bas_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.3;
		displayName = "MH-6"; nameSound = "chopper"; side = 1; cost = 10000000; type = 2; threat[] = {1,0.05,0.05};

		model = "\TZK_Model_4_0_0\MH6_Bas.p3d";
		armor = 30;
		picture = "\TZK_Texture_4_0_0\icon\imh6.paa"; mapSize = 10;
		weapons[] = {"Cannon_Heli_xj400"};
		magazines[]={"Mag_Heli_2000_xj400", SpoofMagazines};

		crew = "SoldierWPilot";
		laserScanner = 1;

		gunnerUsesPilotView = 0;
		typicalCargo[] = {"Soldier","Soldier","SoldierLAW","SoldierLAW"};
		transportSoldier = 5; getInRadius = 5;
		driverAction = "ManActUH60Pilot";
		gunnerAction = "ManActUH60Pilot";
		gunnerOpticsModel = "optika_heli_gunner";
		maxSpeed = 235;
		soundEngine[] = {"\TZK_Sounds_4_0_0\bas_lbs\mh6.wss", 3.162278, 1};

		mainRotorSpeed = -1;
		rotorBig = "vrtule_velka";
		rotorBigBlend = "vrtule_velka_bl_";
		rotorSmall = "vrtule_mala";
		rotorSmallBlend = "vrtule_mala_bl";

		class Reflectors {
			class Reflector {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			// max for this indicator is 200 feet (i.e. 61m)
			// note: this is actualy Radar altitude (name is wrong)
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 70;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
			reversed = true;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 80;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = -360;
			min = -3.1415926536;
			max = 3.1415926536;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = true;
		};
		class ReloadAnimations {
			class MachineGun30W {
				weapon = "MachineGun30W";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};
	};
	class MH6_Bas_xj400: MH6_Bas_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class MH6_Bas_irNo_xj400: MH6_Bas_xj400 {
		irScanGround = 0; irTarget = 0; camouflage = 10; // Neither can irScan ground nor be detected by irScan.
	};
	class Mi2NOE_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.3;
		displayName = "Mi-2"; nameSound = "chopper"; side = 0; cost = 1000000; type = 2; threat[] = {0.1, 1, 0.7};

		model = "\TZK_Model_4_0_0\Mi2NO.p3d";
		picture = "\TZK_Texture_4_0_0\icon\iMi2.paa";
		armor = 40;
		weapons[] = {"Cannon_Heli_xj400"};
		magazines[]={"Mag_Heli_2000_xj400", SpoofMagazines};
		dammageHalf[] = {"\TZK_Texture_4_0_0\Mi2NO\glass0.paa","\TZK_Texture_4_0_0\Mi2NO\glass1.paa","\TZK_Texture_4_0_0\Mi2NO\glass10.paa","\TZK_Texture_4_0_0\Mi2NO\glass11.paa"};
		dammageFull[] = {"\TZK_Texture_4_0_0\Mi2NO\glass0.paa","\TZK_Texture_4_0_0\Mi2NO\glass2.paa","\TZK_Texture_4_0_0\Mi2NO\glass10.paa","\TZK_Texture_4_0_0\Mi2NO\glass12.paa"};

		crew = "SoldierEPilot";
		maxSpeed = 215;

		fuelCapacity = 150;
		mainRotorSpeed = 1.0;
		backRotorSpeed = -2.5;

		hasGunner = 0;
		soundEngine[] = {"\TZK_Sounds_4_0_0\Mi2NO\mi2s.ogg", db+10, 0.95};
		driverAction = "ManActMi24Pilot";
		transportSoldier = 5;
		typicalCargo[] = {"Soldier","SoldierLAW"};
		armorStructural = 1.0;
		armorHull = 0.4;
		armorEngine = 1.5;
		armorAvionics = 0.7;
		armorVRotor = 0.7;
		armorHRotor = 0.5;
		armorMissiles = 0.3;
		armorGlass = 0.2;
		class IndicatorAltBaro {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltBaro2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -320;
			min = 0;
			max = 300;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -340;
			min = 0;
			max = 70;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -330;
			min = 0;
			max = 11;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -330;
			min = 0;
			max = 11;
		};
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.85;
				brightness = 1.5;
			};
		};
		class Animations {
			class Susp_R {
				type = "rotation";
				animPeriod = 0.1;
				selection = "R_susp";
				axis = "R_susp_osa";
				angle0 = 0;
				angle1 = 0.261799387799149436538553615273292;
			};
			class Susp_L {
				type = "rotation";
				animPeriod = 0.1;
				selection = "L_susp";
				axis = "L_susp_osa";
				angle0 = 0;
				angle1 = -0.261799387799149436538553615273292;
			};
			class Switch {
				type = "rotation";
				animPeriod = 0.1;
				selection = "switch";
				axis = "osa switch";
				angle0 = 0;
				angle1 = 1;
			};
			class Switch_2 {
				type = "rotation";
				animPeriod = 0.1;
				selection = "switch_2";
				axis = "osa_switch_2";
				angle0 = 0;
				angle1 = 1;
			};
			class Cooler {
				type = "rotation";
				animPeriod = 5;
				selection = "vent_a";
				axis = "vent osa";
				angle0 = 0;
				angle1 = 2261.94671058465113169310323596;
			};
			class Temp1 {
				type = "rotation";
				animPeriod = 30;
				selection = "temp";
				axis = "osa_temp";
				angle0 = 0;
				angle1 = -3;
			};
			class Temp2 {
				type = "rotation";
				animPeriod = 45;
				selection = "temp2";
				axis = "osa_temp2";
				angle0 = 0;
				angle1 = -2.8;
			};
			class Fuel {
				type = "rotation";
				animPeriod = 1;
				selection = "fuel";
				axis = "osa fuel";
				angle0 = 0;
				angle1 = -3.66519;
			};
		};
	};
	class Mi2NOE_xj400: Mi2NOE_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi2NOE_irNo_xj400: Mi2NOE_xj400 {
		irScanGround = 0; irTarget = 0; camouflage = 10; // Neither can irScan ground nor be detected by irScan.
	};

	// Gunship
	// Gunship used to have doubled detecting and being detected ability(that is, sensitivity and camouflage/audible) according to cr-addons. This setting is canceled since TZK_3
	class AH1_xj400: Cobra {
		scope = protected; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		displayName = "AH1";

		laserScanner = 1;
		armorEngine = 0.96; //x1.6
		weapons[] = {"MachineGun30W","HellfireLauncherApach_xj400","ZuniLauncher38"};
		magazines[]={"MachineGun30W","HellfireLauncherApach_xj400","ZuniLauncher38", SpoofMagazines};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class AH1_AT_xj400: AH1_xj400 {
		displayName = "AH1 AT";
		irScanRangeMin = 1000; irScanToEyeFactor = 0.75;
		armor = 80; armorEngine = 0.6;
		class ReloadAnimations {
			class Cannon_20HE_xj400 {
				weapon = "Cannon_20HE_xj400";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 800;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
            };
			class Cannon_20AP_xj400: Cannon_20HE_xj400 {
				weapon = "Cannon_20AP_xj400";
				multiplier = 200;
            };
		};
		weapons[] = {ATLauncherAir_xj400, Cannon_20HE_xj400, Cannon_20AP_xj400};
		magazines[]={GuidedAT_Heli_8_xj400, Mag_20HE_800_01_xj400, Mag_20AP_200_01_xj400, SpoofMagazines};
	};

	class AH1W_Vit_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.3;
		displayName = "AH-1W"; nameSound = "cobra"; side = 1; cost = 10000000; type = 2; threat[] = {1,1,0.5};
		armor = 50;
		model = "ah1_cobra";

		armorEngine = 0.96; //x1.6
		laserScanner = 1;

		picture = "icobra";
		crew = "SoldierWPilot";
		driverAction = "ManActAH1Pilot";
		gunnerAction = "ManActAH1Gunner";
		maxSpeed = 270;

		weapons[] = {"M197_xj400","HellfireLauncherCobra_xj400","ZuniLauncher38"};
		magazines[]={"M197_xj400","HellfireLauncherCobra_xj400","ZuniLauncher38", SpoofMagazines};

		soundEngine[] = {"\TZK_Sounds_4_0_0\Vit_AH1-W\engine.wss", 5, 1};
		dammageHalf[] = {"\TZK_Texture_4_0_0\vit_Ah-1W\window1.paa","\TZK_Texture_4_0_0\vit_Ah-1W\window1b.paa","\TZK_Texture_4_0_0\vit_Ah-1W\Canopy.paa","\TZK_Texture_4_0_0\vit_Ah-1W\window1b.paa", 
			"\TZK_Texture_4_0_0\vit_Ah-1W\Marine1\Lside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine1\LsideB.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine1\Sside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine1\SsideB.pac", 
			"\TZK_Texture_4_0_0\vit_Ah-1W\Marine2\Lside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine2\LsideB.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine2\Sside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine2\SsideB.pac", 
			"\TZK_Texture_4_0_0\vit_Ah-1W\Marine3\Lside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine3\LsideB.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine3\Sside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine3\SsideB.pac"
		};
		dammageFull[] = {"\TZK_Texture_4_0_0\vit_Ah-1W\window1.paa","\TZK_Texture_4_0_0\vit_Ah-1W\window1c.paa","\TZK_Texture_4_0_0\vit_Ah-1W\Canopy.paa","\TZK_Texture_4_0_0\vit_Ah-1W\window1c.paa", 
			"\TZK_Texture_4_0_0\vit_Ah-1W\Marine\Lside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine\LsideC.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine\Sside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine\SsideC.pac", 
			"\TZK_Texture_4_0_0\vit_Ah-1W\Marine2\Lside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine2\LsideC.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine2\Sside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine2\SsideC.pac", 
			"\TZK_Texture_4_0_0\vit_Ah-1W\Marine3\Lside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine3\LsideC.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine3\Sside.pac","\TZK_Texture_4_0_0\vit_Ah-1W\Marine3\SsideC.pac"
		};
		
		rotorBig = vrtule_velka;
		rotorBigBlend = vrtule_velka_blur;
		rotorSmall = vrtule_mala;
		rotorSmallBlend = vrtule_mala_blur;
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};

		class ReloadAnimations {
            class M197_xj400 {
				weapon = "M197_xj400";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
            };
			class Cannon_20HE_xj400: M197_xj400 {
				weapon = "Cannon_20HE_xj400";
				multiplier = 800;
				animPeriod = 1;
            };
			class Cannon_20AP_xj400: Cannon_20HE_xj400 {
				weapon = "Cannon_20AP_xj400";
				multiplier = 200;
            };
		};
	/*	class TurretBase {
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={};
			minElev=-50;
			maxElev= 20;
			minTurn=-90;
			maxTurn= 90;
			body="OtocVez";
			gun="OtocHlaven";
		};
		class Turret : TurretBase {};*/
	};
	class AH1W_Vit_xj400: AH1W_Vit_Base_xj400 {
		scope = protected; displayName = "AH-1W";
		accuracy = 1000;
		picture = "\TZK_Texture_4_0_0\icon\iAH1W_vit.paa";
		model = "\TZK_Model_4_0_0\AH1W_Vit.p3d";
		hiddenSelections[] = {"n1","n2","miss1","miss2", tzk_tex_00, 
			tex_bott.pac, tex_chaff.paa, tex_legs.paa, tex_LSide.pac, tex_Marines.paa, tex_MTop1.pac, tex_rotpin.pac, tex_Sside.pac, tex_tab.pac, tex_tab2.pac, tex_WingSide.pac
			,  tzk_tex_99
		};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class LAND : UA_LAND_Heli {};
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\AH1W_Vit.sqs}, [_vehicle, {\TZK_Texture_4_0_0\vit_Ah-1W\Num1\}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs};
		};
	};
	class AH1W_Vit_AT_xj400: AH1W_Vit_xj400 {
		displayName = "AH-1W AT";
		irScanRangeMin = 1000; irScanToEyeFactor = 0.75
		armor = 80; armorEngine = 0.6;
		weapons[] = {ATLauncherAir_xj400, Cannon_20HE_xj400, Cannon_20AP_xj400};
		magazines[]={GuidedAT_Cobra_8_xj400, Mag_20HE_800_01_xj400, Mag_20AP_200_01_xj400, SpoofMagazines};
	};

	class AH64_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.3;
		displayName = "$STR_DN_AH64"; nameSound = "chopper"; side = 1; cost = 10000000; type = 2; threat[] = {0.3,1,0.8};

		model = "\Apac\Apac";
		armor = 50; //Must be low value else subclass won't be attack by machine gun
		picture = "\apac\iAH64";
		crew = "SoldierWPilot";


		driverAction = "ManActAH64Pilot";
		gunnerAction = "ManActAH64Gunner";
		maxSpeed = 296;
		soundEngine[] = {"\apac\ah64engine",3.16228,1};
		armorEngine = 0.6;

		laserScanner = 1;
		rotorBig = "apach_vrtule";
		rotorBigBlend = "apach_vrtule";
		rotorSmall = "apach_vrtulka";
		rotorSmallBlend = "apach_vrtule2";
		weapons[] = {"M197_xj400", HellfireLauncherApach_xj400,ZuniLauncher38};
		magazines[]={"M197_xj400", HellfireLauncherApach_xj400,ZuniLauncher38, SpoofMagazines};

		dammageHalf[] = {"\apac\apach_in_skla.paa","\apac\apach_in_sklaC.paa"};
		dammageFull[] = {"\apac\apach_in_skla.paa","\apac\apach_in_sklaC.paa"};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {};
			minElev = -60;
			maxElev = 11;
			minTurn = -86;
			maxTurn = 86;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -320;
			min = 0;
			max = 125;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorCompass2 {
			selection = "kompas2";
			axis = "osa_kompas2";
			angle = -360;
			min = -3.1415927;
			max = 3.1415927;
		};

		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class AH64_xj400: AH64_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		armor = 80;
		displayName = "AH64";
		weapons[] = {"MachineGun30W", HellfireLauncherApach_xj400,ZuniLauncher38};
		magazines[]={"MachineGun30W", HellfireLauncherApach_xj400,ZuniLauncher38, SpoofMagazines};
	};
	class AH64_AT_xj400: AH64_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		irScanRangeMin = 1000; irScanToEyeFactor = 0.75;
		armor = 100; //x1.25
		displayName = "AH64 AT";
		weapons[] = {ATLauncherAir_xj400, Cannon_20HE_xj400, Cannon_20AP_xj400};
		magazines[]={GuidedAT_Heli_8_xj400, Mag_20HE_800_01_xj400, Mag_20AP_200_01_xj400, SpoofMagazines};
	};

	class AH64_MPIV_Base_xj400: AH64_Base_xj400 {
		model = "\TZK_Model_4_0_0\AH64_mpiv.p3d";
		hiddenSelections[] = {"pic_usarmy","pic_nation","pic_nation2","pic_nl","mfd_pil_1","mfd_pil_2","mfd_pil_kl","mfd_gun_1","mfd_gun_2","mfd_gun_kl","mfd_gun_mid", tzk_tex_00, 
			tex_det.pac, tex_details1.pac, tex_detl_out.pac, tex_down1.pac, tex_side1.pac, tex_side21.pac, tex_side3.pac, tex_side4.pac, tex_side5.pac, tex_up1.pac, tex_up2.pac, tex_up3.pac
			,  tzk_tex_99
		};
		class Animations {
			class tail1
			{
				type = "rotation";
				animPeriod = 1.5;
				selection = "mpiv_tail";
				axis = "axistail";
				angle0 = 0.785;
				angle1 =  0;
			};
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\AH64_mpiv.sqs};
		};

		gunnerOpticsModel = "\TZK_Model_4_0_0\Opt\AH64_opt.p3d";
		
		insideSoundCoef = 0.005;
		soundEngine[] = {"\TZK_Sounds_4_0_0\MPIV_AH64\AH64_engine.ogg",1,1.05};
		soundLandCrash[] = {"\TZK_Sounds_4_0_0\MPIV_AH64\aircraftcrash.ogg",db+50,1};
		soundWaterCrash[] = {Explosions\intowater,db-10,1};
		soundDammage[] = {"\TZK_Sounds_4_0_0\MPIV_AH64\alert.ogg",db+20,1};

		minFireTime = 5; // minimal time spent firing on single target
		formationX = 25;
		formationZ = 40;
		class ViewOpticsBase {};
		class ViewOptics: ViewOpticsBase {
			initAngleX= 0; minAngleX=-90; maxAngleX=+90;
			initAngleY= 0; minAngleY=-80; maxAngleY=+60;
			initFov= 0.7; minFov= 0.03; maxFov= 0.75;
		};
		class Turret {
			gunAxis="osahlavne";
			turretAxis="osaveze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={};
			minElev= -45;
			maxElev= +5;
			minTurn= -120;
			maxTurn= 120;
			body="OtocVez";
			gun="OtocHlaven";
		};
		animated = 1;
	};
	class AH64_MPIV_xj400: AH64_MPIV_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		armor = 80;
		displayName = "AH64";
	};
	class AH64_MPIV_AT_xj400: AH64_MPIV_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		irScanRangeMin = 1000; irScanToEyeFactor = 0.75;
		armor = 100; //x1.25
		displayName = "AH64 AT";
		weapons[] = {ATLauncherAir_xj400, Cannon_20HE_xj400, Cannon_20AP_xj400};
		magazines[]={GuidedAT_Heli_8_xj400, Mag_20HE_800_01_xj400, Mag_20AP_200_01_xj400, SpoofMagazines};
	};

	class Mi24_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "$STR_DN_MI24"; nameSound = "hind"; side = 0; cost = 4000000; type = 2; threat[] = {0.6,1,0.8};

		model = "mi24_HIND";
		armor = 50; // Must be low value else subclass won't be attack by machine gun
		armorEngine = 0.6;


		crew = "SoldierEPilot";
		picture = "imi24";
		maxSpeed = 294;

		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\mi_helicopter",3.1622777,1};
		weapons[] = {"MachineGun30E","HellfireLauncherHind_xj400","Rocket57x64"};
		magazines[]={"MachineGun30E","HellfireLauncherHind_xj400","Rocket57x64", SpoofMagazines};
		transportSoldier = 8;
		transportAmmo = 0;

		typicalCargo[] = {"Soldier","SoldierLAW"};
		driverAction = "ManActMi24Pilot";
		gunnerAction = "ManActMi24Gunner";
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1;
			};
			class Right {
				color[] = {0.8,0.8,1,1};
				ambient[] = {0.07,0.07,0.07,1};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -35;
			max = 35;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};
		class ReloadAnimations {
			class MachineGun30E {
				weapon = "MachineGun30E";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 0.5;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};

		laserScanner = 1;
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi24_xj400: Mi24_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		armor = 100;
	};
	class Mi24_AT_xj400: Mi24_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		displayName = "Mi24 AT";
		irScanRangeMin = 1000; irScanToEyeFactor = 0.75;
		armor = 125; //x1.25
		class ReloadAnimations {
			class CannonE_20HE_xj400 {
				weapon = "CannonE_20HE_xj400";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 800;
				type = "rotation";
				animPeriod = 0.1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
			class CannonE_20AP_xj400: CannonE_20HE_xj400 {
				weapon = "CannonE_20AP_xj400";
				multiplier = 200;
			};
		};
		weapons[] = {ATLauncherAir_xj400, CannonE_20HE_xj400, CannonE_20AP_xj400};
		magazines[]={GuidedAT_Heli_8_xj400, Mag_20HE_800_01_xj400, Mag_20AP_200_01_xj400, SpoofMagazines};
	};

/*	class Mi24_ffur_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "$STR_DN_MI24"; nameSound = "hind"; side = 0; cost = 4000000; type = 2; threat[] = {0.6,1,0.8};

		model = "\ffur_ruair\mi24\RHS_Mi24V_AT.p3d";
		hiddenSelections[] = {"n1","n2","gearlight","enginelight","fire","fireB","missilelight"};
		picture = "\TZK_Texture_4_0_0\icon\iMi24_RHS";
		armor = 50; //Must be low value else subclass won't be attack by machine gun


		armorEngine = 0.6;
		laserScanner = 1;
		crew = "SoldierEPilot";
		maxSpeed = 294;

		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\mi_helicopter",3.1622777,1};
		weapons[] = {"MachineGun30E","AT6a_RHS_xj400","Rocket57x64"};
		magazines[]={"MachineGun30E","AT6a_RHS_xj400","Rocket57x64", SpoofMagazines};
		transportSoldier = 8;
		transportAmmo = 0;

		typicalCargo[] = {"Soldier","SoldierLAW"};
		driverAction = "ManActMi24Pilot";
		gunnerAction = "ManActMi24Gunner";
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -35;
			max = 35;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};
		class ReloadAnimations {
			class MachineGun30E {
				weapon = "MachineGun30E";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 0.5;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
			class CannonE_20HE_xj400 {
				weapon = "CannonE_20HE_xj400";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
            };
			class CannonE_20AP_xj400 {
				weapon = "CannonE_20AP_xj400";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
            };
		};

		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Mi24_ffur_xj400: Mi24_ffur_Base_xj400 {
		scope = protected; accuracy = 1000;
		armor = 100;
	};
	class Mi24_AT_ffur_xj400: Mi24_ffur_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		irScanRangeMin = 1000; irScanToEyeFactor = 0.75;
		armor = 125; //x1.25
		displayName = "Mi24 AT";
		weapons[] = {ATLauncherAir_xj400, CannonE_20HE_xj400, CannonE_20AP_xj400};
		magazines[]={GuidedAT_Heli_8_xj400, Mag_20HE_800_01_xj400, Mag_20AP_200_01_xj400, SpoofMagazines};
	};
*/
	class Mi24_RHS_Base_xj400: Mi24_Base_xj400 {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "$STR_DN_MI24"; nameSound = "hind"; side = 0; cost = 4000000; type = 2; threat[] = {0.6,1,0.8};

		model = "\TZK_Model_4_0_0\Mi24_RHS.p3d";
		hiddenSelections[] = {"n1","n2","gearlight","enginelight","fire","fireB","missilelight", tzk_tex_00,  
			tex_mi24_at.pac, tex_mi24_.pac, tex_mi24_fram1.pac, tex_mi24_fram2.pac, tex_mi24_fram3.pac, tex_mi24_fram4.pac, tex_mi24_h1.paa, tex_mi24_p14.paa, tex_mi24_wing1.pac, tex_mi24_wing2.pac, tex_mi24_wing3.pac, 
			tex_mi24_lod2.paa, tex_mi24_lod4.paa, tex_mi24_lod6.pac
			,  tzk_tex_99
		};
		picture = "\TZK_Texture_4_0_0\icon\iMi24_RHS";
		armor = 50; //Must be low value else subclass won't be attack by machine gun
	//	maxSpeed = 320;

		soundEngine[] = {"\TZK_Sounds_4_0_0\RHS_Hind\engine.ogg",3,1.1};
		soundGetIn[] = {"\TZK_Sounds_4_0_0\RHS_Hind\get_in",0.03,1};
		soundGetOut[] = {"\TZK_Sounds_4_0_0\RHS_Hind\get_out",0.03,1};
		weapons[] = {"MachineGun30E","AT6a_RHS_xj400","Rocket57x64"};
		magazines[]={"MachineGun30E","AT6a_RHS_xj400","Rocket57x64", SpoofMagazines};
	//	class ReloadAnimations {};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {""};
			body = "OtocVez";
			gun = "OtocHlaven";
			minElev = -40;
			maxElev = 10;
			minTurn = -30;
			maxTurn = 30;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -300;
			min = 0;
			max = 700;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -300;
			min = 0;
			max = 105;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -30;
			max = 30;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -330;
			min = 0;
			max = 8;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = -360;
			min = -3.141593;
			max = 3.141593;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 1;
		};
		class IndicatorRPM2 {
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -330;
			min = 0;
			max = 8;
		};
		class Reflectors {
			class Left {
				color[] = {0.800000,0.800000,1.000000,1.000000};
				ambient[] = {0.070000,0.070000,0.070000,1.000000};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.500000;
				brightness = 1.000000;
			};
		};

		class Animations {
			class gearL {
				type = "rotation";
				animperiod = 1;
				selection = "gearL";
				axis = "osa_gearL";
				angle0 = 0;
				angle1 = 0.8;
			};
			class gearR {
				type = "rotation";
				animperiod = 1;
				selection = "gearR";
				axis = "osa_gearR";
				angle0 = 0;
				angle1 = -0.8;
			};
			class gearF {
				type = "rotation";
				animperiod = 1;
				selection = "gearF";
				axis = "osa_gearF";
				angle0 = 0;
				angle1 = -1.3;
			};
			class gcL {
				type = "rotation";
				animperiod = 1;
				selection = "gcL";
				axis = "osa_gcL";
				angle0 = 0;
				angle1= 1.8;
			};
			class gcR {
				type = "rotation";
				animperiod = 1;
				selection = "gcR";
				axis = "osa_gcR";
				angle0 = 0;
				angle1= -1.8;
			};
			class gcF {
				type = "rotation";
				animperiod = 1;
				selection = "gcF";
				axis = "osa_gcF";
				angle0 = 0;
				angle1= -2.5;
			};
			class rightgear {
				type = "rotation";
				animperiod = 0.5;
				selection = "gearR2";
				axis = "osa_gearR2";
				angle0 = 0;
				angle1= -0.296705;          
			};
			class leftgear {
				type = "rotation";
				animperiod = 0.5;
				selection = "gearL2";
				axis = "osa_gearL2";
				angle0 = 0;
				angle1= -0.296705;          
			};
			class frontgear {
				type = "rotation";
				animperiod = 0.5;
				selection = "gearF2";
				axis = "osa_gearF2";
				angle0 = 0;
				angle1= -0.296705;          
			};
			class Pdoor {
				type = "rotation";
				animPeriod = 0.5;
				selection = "pdoor";
				axis = "osa_pdoor";
				angle0 = 0;
				angle1 = 1.0;
			};
			class Gdoor {
				type = "rotation";
				animPeriod = 0.5;
				selection = "gdoor";
				axis = "osa_gdoor";
				angle0 = 0;
				angle1 = -1.3;
			};
			class Rtdoor {
				type = "rotation";
				animPeriod = 1;
				selection = "rtdoor";
				axis = "osa_rtdoor";
				angle0 = 0;
				angle1 = -1.5;
			};
			class Rudoor {
				type = "rotation";
				animPeriod = 1;
				selection = "rudoor";
				axis = "osa_rudoor";
				angle0 = 0;
				angle1 = 2.3;
			};
			class Ltdoor {
				type = "rotation";
				animPeriod = 1;
				selection = "ltdoor";
				axis = "osa_ltdoor";
				angle0 = 0;
				angle1 = 1.5;
			};
			class Ludoor {
				type = "rotation";
				animPeriod = 1;
				selection = "ludoor";
				axis = "osa_ludoor";
				angle0 = 0;
				angle1 = -2.3;
			};
			class flareTrigger {
				type = "rotation";
				animPeriod =.1;
				selection = "flaretrigger";
				axis = "os flare";
				angle0 = 0;
				angle1 =-.45;
			};
			class cabinlight {
				type = "rotation";
				animPeriod =.001;
				selection = "flaretrigger";
				axis = "os flare";
				angle0 = 0;
				angle1 = 0;
			};
		};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
			class LAND : UA_LAND_Heli {};

			class OpenRdoor {
				displayName = "$STR_DN_RHS_HIND_RdoorOpen";
				position = "pos r";
				radius = 3;
				condition = "local this && this animationPhase ""rtdoor"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3)";
				statement = "[this, true] exec ""\TZK_Objects\Scripts\RHS_Mi24\DoorOpenR.sqs"""; 
			};
			class CloseRdoor {
				displayName = "$STR_DN_RHS_HIND_RdoorClose";
				position = "pos r";
				radius = 3;
				condition = "local this && this animationPhase ""rtdoor"" > 0.5";
				statement = "[this, true] exec ""\TZK_Objects\Scripts\RHS_Mi24\DoorCloseR.sqs"""; 
			};
			class OpenLdoor {
				displayName = "$STR_DN_RHS_HIND_LdoorOpen";
				position = "pos l";
				radius = 3;
				condition = "local this && this animationPhase ""ltdoor"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3)";
				statement = "[this, true] exec ""\TZK_Objects\Scripts\RHS_Mi24\DoorOpenL.sqs"""; 
			};
			class CloseLdoor {
				displayName = "$STR_DN_RHS_HIND_LdoorClose";
				position = "pos l";
				radius = 3;
				condition = "local this && this animationPhase ""ltdoor"" > 0.5";
				statement = "[this, true] exec ""\TZK_Objects\Scripts\RHS_Mi24\DoorCloseL.sqs"""; 
			};
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Mi24_RHS.sqs}; [_vehicle, {\TZK_Texture_4_0_0\RHS_hind\nums\}, {n}, {g_}, [0]] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs}";
			Engine = "_this exec {\TZK_Objects\Scripts\RHS_Mi24\Engine_EH.sqs};"
			GetIn = "_this exec {\TZK_Objects\Scripts\RHS_Mi24\GetIn_EH.sqs};"
			GetOut = "_this exec {\TZK_Objects\Scripts\RHS_Mi24\GetOut_EH.sqs};"
		};

	};
	class Mi24_RHS_xj400: Mi24_RHS_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		armor = 100;
	};
	class Mi24_RHS_AT_xj400: Mi24_RHS_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		displayName = "Mi24 AT";
		irScanRangeMin = 1000; irScanToEyeFactor = 0.75;
		armor = 125; //x1.25
		class ReloadAnimations {
			class CannonE_20HE_xj400 {
				weapon = "CannonE_20HE_xj400";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 0.1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
			};
			class CannonE_20AP_xj400: CannonE_20HE_xj400 {
				weapon = "CannonE_20AP_xj400";
			};
		};
		weapons[] = {ATLauncherAir_xj400, CannonE_20HE_xj400, CannonE_20AP_xj400};
		magazines[]={GuidedAT6_8_xj400, Mag_20HE_800_01_xj400, Mag_20AP_200_01_xj400, SpoofMagazines};
	};

	class Kamov_Base_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.5;
		displayName = "$STR_DN_OUT_HELI_KAM"; nameSound = "chopper"; side = 0; cost = 4000000; type = 2; threat[] = {0.6,1,0.8};

		armor = 50; //Must be low value else subclass won't be attack by machine gun
	//	model = "\TZK_Model_4_0_1\V80_TZK.p3d";
		model = "\TZK_Objects\Model\V80_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_v-80_backwing.pac, tex_v-80_misc2.pac, tex_v-80_test4a.pac, tex_v-80_test4b2.pac, tex_v-80_testbott4b.pac, tex_v-80_testtop4a.pac, tex_v-80_testtop4b.pac, tex_v-80_testwing.pac, tex_v-80_undergun.pac, tex_v-80_wiretoplod.paa, tex_v-80_side1lod.paa, tex_v-80_side2lod.paa, tex_v-80_010.paa
			,  tzk_tex_99
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\ka50.sqs};
		};
		picture = "\TZK_Objects\Texture\icon\iKa50.paa"

		access = 2;
		crew = "SoldierEPilot";
		maxSpeed = 400;

		rotorBig = "hip_vrt_v";
		rotorBigBlend = "hip_vrtblur_v";
		rotorSmall = "vrthind_m";
		rotorSmallBlend = "vrthind_m_bl";
		soundEngine[] = {"vehicles\mi_helicopter",3.1622777,1};
		weapons[] = {"Cannon30_Kamov_xj400","HellfireLauncherKamov_xj400","Rocket57x40Kamov_xj400"};
		magazines[]={"Cannon30HE_Kamov_xj400","Cannon30AP_Kamov_xj400","HellfireLauncherKamov_xj400","Rocket57x40Kamov_xj400", SpoofMagazines};
		driverOpticsModel = "\o\vehl\V80_optika.p3d";
		transportSoldier = 0;
		transportAmmo = 0;

		typicalCargo[] = {"Soldier"};
		hasGunner = 0;
		driverAction = "ManActA10Pilot";
		gunnerAction = "ManActMi24Gunner"; // Invalid for V80
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -45;
			maxElev = 10;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class Viewoptics {
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			initFov = 0.1;
			minFov = 0.1;
			maxFov = 1.2;
		};
		class Reflectors {
			class Left {
				color[] = {0.8,0.8,1.0,1.0};
				ambient[] = {0.07,0.07,0.07,1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 304;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 175;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -300;
			min = -35;
			max = 35;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = -320;
			min = 0;
			max = 12;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = 0;
		};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class LAND : UA_LAND_Heli {};
		};
	};
	class Ka50_xj400: Kamov_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		armor = 75; // half the value since new model with partial hit-points
		displayName = "Ka50";
		laserScanner = 1;
	};
	class Ka50_AT_xj400: Kamov_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		irScanRangeMin = 1000; irScanToEyeFactor = 0.75;
		armor = 90; // = 75 x 1.2
		displayName = "Ka50 AT";
		laserScanner = 1;
		weapons[] = {ATLauncherAir_xj400, CannonE_20HE_xj400, CannonE_20AP_xj400};
		magazines[]={GuidedAT_Heli_12_xj400, Mag_20HE_800_01_xj400, Mag_20AP_200_01_xj400, SpoofMagazines};
	};

	class Tiger_RMK30_xj400: Helicopter {
		scope = private; vehicleClass = "TZK_Units_400";
	//	accuracy = 0.08;
		displayName = "UH Tiger (RMK30)"; nameSound = "chopper"; side = 1; cost = 10000000; type = 2; threat[] = {0.3,1,0.8};
		armor = 50;

		rotorBig = "vrtule_velka";
		rotorBigBlend = "vrtule_velka_bl_";
		rotorSmall = "vrtule_mala";
		rotorSmallBlend = "vrtule_mala_bl";

		laserScanner = 1;

		picture = "\TZK_Texture_4_0_0\icon\iTigerRMK.paa";

	//	weapons[] = {"BWMOD_StingerLauncher"};
	//	magazines[]={"BWMOD_Stinger"};
		weapons[] = {"MachineGun30W","HellfireLauncherCobra_xj400","SNEB70Launcher_xj400"};
		magazines[]={"MachineGun30W","HellfireLauncherCobra_xj400","SNEB70Launcher_xj400", SpoofMagazines};
		getInRadius = 2;

   		driverAction = "ManActBWMOD_TigerPilot";
   		gunnerAction = "ManActBWMOD_TigerGunner";
		gunnerOpticsModel = "optika_heli_gunner";
		soundEngine[] = {"\TZK_Sounds_4_0_0\BWMOD\engine.ogg", 3.1622777, 1};
		insideSoundCoef = 0.0013;

	//	crew = "BWMOD_HeloPilot_Tiger";
		crew = "SoldierWPilot";
		maxSpeed = 320;
		transportSoldier = 0;
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;

		class Reflectors {
			class Left {
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		class Turret {
			gunAxis = "Osa Hlavne";
			turretAxis = "Osa Veze";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			soundServo[] = {"",0,0};
			minElev = -45;
			maxElev = 20;
			minTurn = -140;
			maxTurn = 140;
			body = "OtocVez";
			gun = "OtocHlaven";
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -180;
			min = 0;
			max = 61;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = false;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -28.5;
			min = -20;
			max = 20;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = +360;
			min = -3.1415926536;
			max = 3.1415926536;
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = 360;
			min = 0;
			max = 304;
		};
		class IndicatorRPM {
			selection = "rpm";
			axis = "osa_rpm";
			angle = 360;
			min = 0;
			max = 18;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = 360;
			min = 0;
			max = 320;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = 360;
			min = -60;
			max = 60;
		};

		animated = 1;
		class Animations {
			class Door1 {
				type = "rotation";
				animPeriod = 1;
				selection = "door1";
				axis = "osa_door1";
				angle0 = 0
				angle1 = 1.308992;
			};
			class Door2 {
				type = "rotation";
				animPeriod = 1;
				selection = "door2";
				axis = "osa_door2";
				angle0 = 0
				angle1 = -1.221726;
			};
			class DamperL {
				type = "rotation";
				animperiod = 1;
				selection = "damperL";
				axis = "osa_damperL";
				angle0 = 0.1;
				angle1 = -0.4;
			};
			class DamperR {
				type = "rotation";
				animperiod = 1;
				selection = "damperR";
				axis = "osa_damperR";
				angle0 = 0.1;
				angle1 = -0.4;
			};
			class dummy {
				type = "rotation";
				animperiod = 1;
				selection = "dummy";
				axis = "osa_dummy";
				angle0 = 0;
				angle1 = 3;
			};
			class HID {
				type = "rotation";
				animperiod = 1;
				selection = "HID";
				axis = "osa_HID";
				angle0 = 0;
				angle1 = -1.18;
			};
			class HIDinnen {
				type = "rotation";
				animperiod = 1;
				selection = "HIDinnen";
				axis = "osa_HID";
				angle0 = 0;
				angle1 = -1.24;
			};
			class RBremse {
				type = "rotation";
				animPeriod = 0.7;
				selection = "RBremse";
				axis = "osa_RBremse";
				angle0 = 0;
				angle1 = -1.6;
			};
			class bat1 {
				type = "rotation";
				animPeriod = 0.5;
				selection = "bat1";
				axis = "osa_bat";
				angle0 = 0;
				angle1 = 1.8;
			};
			class bat2 {
				type = "rotation";
				animPeriod = 0.5;
				selection = "bat2";
				axis = "osa_bat";
				angle0 = 0;
				angle1 = 1.8;
			};
			class bat3 {
				type = "rotation";
				animPeriod = 0.5;
				selection = "bat3";
				axis = "osa_bat3";
				angle0 = 0;
				angle1 = 1.8;
	       		};
			class Temp1 {
				type = rotation;
				animPeriod = 30;
				selection = Temp1;
				axis = osa_Temp1;
				angle0 = 0;
				angle1 = 2.1;
			};
			class Temp2 {
				type = rotation;
				animPeriod = 30;
				selection = Temp2;
				axis = osa_Temp2;
				angle0 = 0;
				angle1 = 2;
			};
			class OPress1 {
				type = rotation;
				animPeriod = 20;
				selection = OPress1;
				axis = osa_OPress1;
				angle0 = 0;
				angle1 = 1.5;
			};
			class OPress2 {
				type = rotation;
				animPeriod = 20;
				selection = OPress2;
				axis = osa_OPress2;
				angle0 = 0;
				angle1 = 1.6;
			};
			class HPress1 {
				type = rotation;
				animPeriod = 15;
				selection = HPress1;
				axis = osa_HPress1;
				angle0 = 0;
				angle1 = 1.5;
			};
			class HPress2 {
				type = rotation;
				animPeriod = 15;
				selection = HPress2;
				axis = osa_HPress2;
				angle0 = 0;
				angle1 = 1.6;
			};
			class Torque {
				type = rotation;
				animPeriod = 10;
				selection = Torque;
				axis = osa_Torque;
				angle0 = 0;
				angle1 = 1.8;
			};
			class Engine_rpm {
				type = rotation;
				animPeriod = 2.5;
				selection = ERPM;
				axis = osa_ERPM;
				angle0 = 0;
				angle1 = 2.8;
			};
			class Rotor_rpm {
				type = rotation;
				animPeriod = 11;
				selection = RRPM;
				axis = osa_RRPM;
				angle0 = 0;
				angle1 = 1;
			};
			class Temp1_2 {
				type = rotation;
				animPeriod = 30;
				selection = Temp1_2;
				axis = osa_Temp1_2;
				angle0 = 0;
				angle1 = 2.1;
			};
			class Temp2_2 {
				type = rotation;
				animPeriod = 30;
				selection = Temp2_2;
				axis = osa_Temp2_2;
				angle0 = 0;
				angle1 = 2;
			};
			class OPress1_2 {
				type = rotation;
				animPeriod = 20;
				selection = OPress1_2;
				axis = osa_OPress1_2;
				angle0 = 0;
				angle1 = 1.5;
			};
			class OPress2_2 {
				type = rotation;
				animPeriod = 20;
				selection = OPress2_2;
				axis = osa_OPress2_2;
				angle0 = 0;
				angle1 = 1.6;
			};
			class HPress1_2 {
				type = rotation;
				animPeriod = 15;
				selection = HPress1_2;
				axis = osa_HPress1_2;
				angle0 = 0;
				angle1 = 1.5;
			};
			class HPress2_2 {
				type = rotation;
				animPeriod = 15;
				selection = HPress2_2;
				axis = osa_HPress2_2;
				angle0 = 0;
				angle1 = 1.6;
			};
			class Torque_2 {
				type = rotation;
				animPeriod = 10;
				selection = Torque_2;
				axis = osa_Torque_2;
				angle0 = 0;
				angle1 = 1.8;
			};
			class Engine_rpm_2 {
				type = rotation;
				animPeriod = 2.5;
				selection = ERPM_2;
				axis = osa_ERPM_2;
				angle0 = 0;
				angle1 = 2.8;
			};
			class Rotor_rpm_2 {
				type = rotation;
				animPeriod = 11;
				selection = RRPM_2;
				axis = osa_RRPM_2;
				angle0 = 0;
				angle1 = 1;
			};
			class Tank1 {
				type = "rotation";
				animPeriod = 10;
				selection = "tank1";
				axis = "osa_tank1";
				angle0 = 0;
				angle1 = -0.14;
			};
			class Tank2 {
				type = "rotation";
				animPeriod = 10;
				selection = "tank2";
				axis = "osa_tank2";
				angle0 = 0;
				angle1 = -0.14;
			};
			class Tank3 {
				type = "rotation";
				animPeriod = 10;
				selection = "tank3";
				axis = "osa_tank3";
				angle0 = 0;
				angle1 = -5.04;
			};

			// Makro
			#define anim_xx(a,b,c,d) \
				class ##a \
				{ \
					type = "rotation"; animPeriod = d; \
					selection = ##a; axis = ##b; \
					angle0 = 0; \
					angle1 = c*radfactor; \
				}

			#define n_xx(a,b) \
				class n##a \
				{ \
					type = "rotation"; animPeriod = 2; \
					selection = n##a; axis = osa n##a; \
					angle0 = 0; \
					angle1 = -17*b*radfactor; \
				}

			// SYNTAX: anim_xx (selection, axis, degrees, seconds)

			// HUD
			anim_xx(mph1, osa hud, -327.27, 0.001);
			anim_xx(mph2, osa hud, -327.27, 0.001);
			anim_xx(mph3, osa hud, -327.27, 0.001);
			anim_xx(mph4, osa hud, -327.27, 0.001);
			anim_xx(alt1, osa hud, -327.27, 0.001);
			anim_xx(alt2, osa hud, -327.27, 0.001);
			anim_xx(alt3, osa hud, -327.27, 0.001);
			anim_xx(alt4, osa hud, -327.27, 0.001);
		};
	/*	
	class UserActions {
		    class OpenDoors {
				displayName = "$STR_OpenDoors";
				position = "pdoors";
				radius = 2;
				condition = "getpos this select 2 < 2 && this animationphase ""Door1"" < 0.5 && speed this < 10";
				statement = "this animate [""Door1"", 1],this animate [""Door2"", 1]";
		    };
		    class CloseDoors {
				displayName = "$STR_CloseDoors";
				position = "pdoors";
				radius = 2;
				condition = "this animationphase ""Door1"" >= 0.5";
				statement = "this animate [""Door1"", 0],this animate [""Door2"", 0]";
		    };
		    class Lightson {
				displayName = "$STR_PosLampAn";
				position = "pdoors";
				radius = 9;
				condition = "(player == driver this) && this animationphase ""dummy"" < 0.5";
				statement = "[this] exec ""\TZK_Objects\Scripts\BWMOD_Tiger\lights.sqs""";
		    };
	 	    class Lightsoff {
				displayName = "$STR_PosLampAus";
				position = "pdoors";
				radius = 9;
				condition = "(player == driver this) && this animationphase ""dummy"" >= 0.5";
				statement = "this animate [""dummy"", 0]";
		    };
		};
		class EventHandlers {
			engine = "[_this select 0,_this select 1] exec {\TZK_Objects\Scripts\BWMOD_Tiger\engine.sqs}; if (_this select 1) then {[_this select 0,25] exec ""\TZK_Objects\Scripts\BWMOD_Tiger\dust.sqs""};";
			init = "[_this select 0,""PARS3"",""PARS3""] exec ""\TZK_Objects\Scripts\BWMOD_Tiger\loadout.sqs""; [_this select 0] exec ""\TZK_Objects\Scripts\BWMOD_Tiger\init.sqs"";";
			getin = "[_this select 0] exec {\TZK_Objects\Scripts\BWMOD_Tiger\hid.sqs}";
			getout = "[_this select 0] exec {\TZK_Objects\Scripts\BWMOD_Tiger\hid.sqs};";
		};
	*/
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class SwitchToDriverAir : UA_SwitchToDriverAir {}; class SwitchToGunnerAir : UA_SwitchToGunnerAir {};
			class LAND : UA_LAND_Heli {};
		};
		model = "\TZK_Model_4_0_1\Tiger_RMK_BWMOD.p3d";
		hiddenSelections[] = {"strobo","strobo2","redlight","whitelight","greenlight","display1","display2","display3","display4","display5","display6","display7","nr1","nr2","badge","numbers","waffen1","waffen2","waffen3","waffen4", tzk_tex_00,  
			tex_seite.pac
			,  tzk_tex_99
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Tiger.sqs}, [_vehicle, ["Door1", "Door2"], 1] exec {\TZK_Objects\Scripts\SwitchSelections.sqs};
			Engine = _this exec {\TZK_Objects\Scripts\Tiger\Engine_EH.sqs}, ;
			GetIn = _this exec {\TZK_Objects\Scripts\Tiger\GetIn_EH.sqs};
			GetOut = _this exec {\TZK_Objects\Scripts\Tiger\GetOut_EH.sqs};
		};
	};
	class Tiger_HOT3_Base_xj400: Tiger_RMK30_xj400 {
	// Base class used for displayName and armor(make MG attack)
		accuracy = 0.08; armor = 50; displayName = "Tiger";
		hiddenSelections[] = {"strobo","strobo2","redlight","whitelight","greenlight","display1","display2","display3","display4","display5","display6","display7","nr1","nr2","badge","numbers","waffen1","waffen2","waffen3","waffen4", tzk_tex_00,  
			tex_seite.pac
			,  tzk_tex_99
			, pars3
		};
	};
	class Tiger_HOT3_xj400: Tiger_HOT3_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		armor = 80; // Same as AH1 AT. Equipping weak but long range missile and can bring 2 cargo thus pricing $25000

		armorHull = 1.0;
		armorEngine = 0.6; // 0.8 maybe too strong.
		armorAvionics = 1.4;
		armorVRotor = 0.8;
		armorHRotor = 0.8;
		armorMissiles = 1.6;
		armorGlass = 0.8;

		weapons[] = {HOT3Launcher_xj400, RMKHETiger_DVD_xj400, RMKAPTiger_DVD_xj400, "SNEB70Launcher_xj400"};
		magazines[]={HOT3Launcher_xj400, Mag_RMKHETiger_400_xj400, Mag_RMKAPTiger_300_xj400, "SNEB70Launcher_xj400", SpoofMagazines};

		insideSoundCoef = 0.05; // Same as original OFP value.
		class ReloadAnimations {
            class HE {
				weapon = "RMKHETiger_DVD_xj400";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
            };
			class AP: HE {
				weapon = "RMKAPTiger_DVD_xj400";
            };
		};

	};
	class Tiger_PARS3_Base_xj400: Tiger_RMK30_xj400 {
	// Base class used for displayName and armor(make MG attack)
		accuracy = 0.08; armor = 50; displayName = "Tiger AT";
		hiddenSelections[] = {"strobo","strobo2","redlight","whitelight","greenlight","display1","display2","display3","display4","display5","display6","display7","nr1","nr2","badge","numbers","waffen1","waffen2","waffen3","waffen4", tzk_tex_00,  
			tex_seite.pac
			,  tzk_tex_99
			, hot3
		};
	};
	class Tiger_PARS3_xj400 : Tiger_PARS3_Base_xj400 {
		scope = protected; 
		accuracy = 1000;
		armor = 128; // x1.6
		irScanRangeMin = 1000; irScanToEyeFactor = 0.75;
		weapons[] = {PARS3Launcher_xj400, RMKHETiger_DVD_xj400, RMKAPTiger_DVD_xj400, "SNEB70Launcher_xj400"};
		magazines[]={PARS3Launcher_xj400, Mag_RMKHETiger_400_xj400, Mag_RMKAPTiger_300_xj400, "SNEB70Launcher_xj400", SpoofMagazines};
		class ReloadAnimations {
            class HE {
				weapon = "RMKHETiger_DVD_xj400";
				angle0 = 0;
				angle1 = "-2 * 3.141592654";
				multiplier = 500;
				type = "rotation";
				animPeriod = 1;
				selection = "gatling";
				begin = "usti hlavne";
				end = "konec hlavne";
            };
			class AP: HE {
				weapon = "RMKAPTiger_DVD_xj400";
            };
		};
	};

	// Fighter Plane
	class A10_Base_xj400: A10 {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 1000;
		armor = 50;

		weapons[] = {"MaverickLauncher","MachineGun30A10"};
		magazines[]={"MaverickLauncher","MachineGun30A10", SpoofMagazines, "AfterBurnerSwitch_xj400"};
		// The usage of afterburner is learnt and transplanted from rktf15c
	//	model = "\TZK_Model_4_0_1\A10_TZK.p3d";
		model = "\TZK_Model_4_0_3\A10_TZK.p3d";
	};
	class A10_xj400: A10_Base_xj400 {
		scope = protected;
		irScanToEyeFactor = 2.4; // Enlarge Planes' scan range thus they can spot enemy far, design their route and attack.
	//	armor = 70;
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class AfterBurnerON : UA_AfterBurnerON {}; class AfterBurnerOFF : UA_AfterBurnerOFF {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
		};
		hiddenSelections[] = {"vrtule", "vrtule 1", tzk_tex_00, 
			tex_a10_kridlo_konecek.pac, tex_a10_kridlo_spod.pac, tex_a10_kridlo_top2.pac, tex_a10_motor_bck.pac, tex_a10_motor_frnt1.paa, tex_a10_motor_frt.pac, tex_a10_motor_spodek.pac, tex_a10_motor_top2.pac, tex_a10_motor2.pac, tex_a10_nosic.pac, tex_a10_nosic_spodek.pac, tex_a10_side_a2.pac, tex_a10_side_b2.pac, tex_a10_sop2.pac, tex_a10_trupa_spod.pac, tex_a10_trupa_top2.pac, tex_a10_trupb_spod.pac, tex_a10_trupb_top2.pac, tex_a10_vop_top2.pac, 
			tzk_tex_99
		};
		class EventHandlers { Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\A10.sqs}"; };
	};
	class A10_FFAR_xj400: A10_xj400 {
		displayName = "A10 FFAR";
		weapons[] = {"Zuni_MaverickLike_xj400" };
		magazines[]={"Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", "Zuni_MaverickLike_xj400", SpoofMagazines };
	};
	class A10_LGB_xj400: A10_xj400 {
		displayName = "A10 LGB";
		weapons[] = {LGBLauncher_xj400, Cannon_30APHE_xj400};
		magazines[]={Mag_LGB_8_xj400, Mag_30APHE_1200_01_xj400, SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_Buster_xj400: A10_LGB_xj400 {
		displayName = "A10 Buster";
		weapons[] = {"LGBLauncher_xj400"};
		magazines[]={"Mag_LGB_8_xj400" , SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_Tomahawk_xj400: A10_xj400 {
		camouflage = 80; audible = 100; // 10x to be detected by AI for Nuclear Planes.
		displayName = "A10 Tomahawk";
		weapons[] = {"Tomahawk_xj400"};
		magazines[]={"Tomahawk_xj400", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_Support_xj400 : A10_xj400 {
		maxSpeed = 400; // 2/3 of A10's maxspeed thus A10 can approach it easier.
		displayName = "A10 Support";
		weapons[] = {};
		magazines[]={SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class A10_AAOnly_xj400: A10_xj400 {
		displayName = "A10 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30W" };
		magazines[]={"MachineGun30W", "MachineGun30W", "MachineGun30W", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};

	class Su25_Base_xj400: Plane {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.30;
		displayName = "$STR_DN_SU25"; nameSound = "plane"; side = 0; cost = 20000000; type = 2; threat[] = {0.1,1,0.7};

		armor = 24;
		model = "\su25\su25";
		picture = "\su25\isu25";

		crew = "SoldierEPilot";
		driverAction = "ManActA10Pilot";
		fov = 0.5;

		maxSpeed = 800;
		weapons[] = {"Ch29TLauncher_xj400", "Rocket57x64", "MachineGun30A10"};
		magazines[]={"Ch29TLauncher_xj400", "Rocket57x64", "MachineGun30A10", SpoofMagazines, "AfterBurnerSwitch_xj400"};

		class Reflectors {
			class Reflector {
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 0.25;
			};
		};
		class IndicatorAltRadar {
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt";
			axis = "osa_alt";
			angle = -340;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar2 {
			// max for this indicator is 1000 feet (i.e. 304m)
			// note: this is actualy Baro altitude (name is wrong)
			selection = "alt2";
			axis = "osa_alt2";
			angle = -340;
			min = 0;
			max = 1000;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min = 0;
			max = 1000 / 3.6;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -240;
			min = -150;
			max = 150;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -240;
			min = -150;
			max = 150;
		};
	};
	class Su25_xj400: Su25_Base_xj400 {
		scope = protected;
		accuracy = 1000;
		irScanToEyeFactor = 2; // Not to enlarge Su25's scan range since they are flexible and faster.
		laserScanner = 1;

		model = "\TZK_Model_4_0_0\Su25_TZK.p3d";
		hiddenSelections[] = {"vrtule", "vrtule 1", tzk_tex_00, 
			tex_Su_Kridlo1.pac, tex_Su_Kridlo2.pac, tex_Su_kridlokon.pac, tex_Su_KridloSpod.pac, tex_Su25_detaily.pac, tex_Su25_kulatosti.pac, tex_Su25_motor1.pac, tex_Su25_SOP.pac, tex_Su25_spodek.pac, tex_Su25_strana1.pac, tex_Su25_strana2.pac, tex_Su25_strana3.pac, tex_Su25_VOP.pac, tex_Su25_VOPspod.pac, 
			tex_Su25_kolo++.paa, 
			tzk_tex_99
		};
		class EventHandlers { Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Su25.sqs}"; };
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class AfterBurnerON : UA_AfterBurnerON {}; class AfterBurnerOFF : UA_AfterBurnerOFF {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
		};
	};
	class Su25_Rocket_xj400: Su25_xj400 {
		displayName = "Su25 Rocket";
		weapons[] = {"Rocket57x192" };
		magazines[]={"Rocket57x192", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class Su25_LGB_xj400: Su25_xj400 {
		displayName = "Su25 LGB";
		weapons[] = {LGBLauncher_xj400, Cannon_30APHE_xj400};
		magazines[]={Mag_LGB_8_xj400, Mag_30APHE_1200_01_xj400, SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class Su25_Buster_xj400: Su25_LGB_xj400 {
		displayName = "Su25 Buster";
		weapons[] = {"LGBLauncher_xj400"};
		magazines[]={"Mag_LGB_8_xj400", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class Su25_Raduga_xj400: Su25_LGB_xj400 {
		camouflage = 80; audible = 100; // 10x to be detected by AI for Nuclear Planes.
		displayName = "Su25 Raduga";
		weapons[] = {"Raduga_xj400"};
		magazines[]={"Raduga_xj400", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};
	class Su25_Support_xj400 : Su25_xj400 {
		displayName = "Su25 Support";
		weapons[] = {};
		magazines[]={SpoofMagazines, "AfterBurnerSwitch_xj400"};
		maxSpeed = 533; // 2/3 of Su25's maxspeed thus Su25 can approach it easier.
	};
	class Su25_AAOnly_xj400: Su25_xj400 {
		displayName = "Su25 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30E" };
		magazines[]={"MachineGun30E", "MachineGun30E", "MachineGun30E", SpoofMagazines, "AfterBurnerSwitch_xj400"};
	};

	// Transport Plane
	class C130_Base_xj400: Plane {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.3; // For 1000 accuracy concrete units, low accuracy should be overrided in base class.
		displayName = "C-130"; nameSound = "Plane"; side = 1; cost = 10000000; type = 2;

		model = "\TZK_Model_4_0_0\C130.p3d";
		armor = 50; // For 1000 accuracy concrete units, low armor should be overrided in base class.

		picture = "\TZK_Texture_4_0_0\icon\iC130.paa";
		mapSize = 10;

		transportSoldier = 38;
		crew = "SoldierWPilot";

	//	transportFuel = 100000;
		transportVehiclesCount = 3; // Probably no use in OFP.
		transportVehiclesMass = 45000; // Probably no use.
	//	transportAmmo = 100000;
		gearRetracting = 1;
		animated = 1;
		formationX = 20; formationZ = 20; formationTime = 10;
		precision = 200; // vehicle movement precision

		hasgunner = 1; driverIsCommander = 1;
		driverAction = "ManActCessnaPilot"; gunnerAction = "ManActCessnaPilot";

		insideSoundCoef = 0.01;

		cargoAction[] = {"ManActCargo"};

		nightVision = 1;
		typicalCargo[] = {};
		ejectSpeed[] = {0,0,0};
		getInRadius = 1.5;

		maxSpeed = 600;
		//landingSpeed = 180;

		soundEngine[] = {"\TZK_Sounds_4_0_0\HWK_C130\engine.wss",db-10,1};

		weapons[] = {"c130_Flare_xj400"};
		magazines[]={"c130_Flare_xj400", SpoofMagazines};

		wheelSteeringSensitivity = 6.5;
		flapsFrictionCoef = 2.0;
		aileronSensitivity = 1;
		elevatorSensitivity = 1; // relative elevator sensitivity
		brakeDistance = 250;
		noseDownCoef =  0.1; // how much goes nose down during turns
		irTarget = 1;
		fov = 0.5;

		dammageHalf[] = { kiowa_sklo.paa,uh60_kab_sklo2B.paa };
		dammageFull[] = { kiowa_sklo.paa,uh60_kab_sklo2C.paa };
		class Reflectors {
			class Left {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 0.5;
				brightness = 1.0;
			};
			class Right {
				color[] = {0.8, 0.8, 1.0, 1.0};
				ambient[] = {0.07, 0.07, 0.07, 1.0};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 0.5;
				brightness = 1.0;
			};
		};
		class IndicatorAltRadar {
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 360;
		};
		class IndicatorAltBaro {
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = 330;
			min = 0;
			max = 330;
		};
		class IndicatorSpeed {
			selection = "mph";
			axis = "osa_mph";
			angle = -350;
			min =  0;
			max = 330;
		};
		class IndicatorVertSpeed {
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = 330;
			min = 165;
			max = -165;
		};
		class IndicatorCompass {
			selection = "kompas";
			axis = "osa_kompas";
			angle = 360;
			min = -3.1415926536;
			max = 3.1415926536;
		};
		class IndicatorWatch {
			hour = "hodinova";
			minute = "minutova";
			axis = "osa_time";
			reversed = true;

//--------------------------------------------------------------------
		};
		class IndicatorAltRadar2 {
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 360;
		};
		class IndicatorAltBaro2 {
			selection = "nm_alt2";
			axis = "osa_nm_alt2";
			angle = 330;
			min = 0;
			max = 330;
		};
		class IndicatorSpeed2 {
			selection = "mph2";
			axis = "osa_mph2";
			angle = -350;
			min = 0;
			max = 330;
		};
		class IndicatorVertSpeed2 {
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = 330;
			min = 165;
			max = -165;
		};
		class IndicatorCompass2 {
			selection = "kompas2";
			axis = "osa_kompas2";
			angle = 360;
			min = -3.1415926536;
			max = 3.1415926536;
		};
		class IndicatorWatch2 {
			hour = "hodinova2";
			minute = "minutova2";
			axis = "osa_time2";
			reversed = true;
		};

		class Animations {
			class backgear0 {
				type = "rotation";
				animPeriod = 6;
				selection = "backgear0";
				axis = "osbackgear0";
				angle0 = 0
				angle1 = 0.872;
			};
			class backgear1 {
				type = "rotation";
				animPeriod = 6;
				selection = "backgear1";
				axis = "osbackgear1";
				angle0 = 0
				angle1 = 0.872;
			};
			class leftkl {
				type = "rotation";
				animPeriod = 2;
				selection = "leftkl";
				axis = "osleftkl";
				angle0 = 0
				angle1 = -0.523;
			};
			class leftkl1 {
				type = "rotation";
				animPeriod = 1.2;
				selection = "leftkl1";
				axis = "osleftkl1";
				angle0 = 0
				angle1 = 3.14;
			};
			class rightkl {
				type = "rotation";
				animPeriod = 2;
				selection = "rightkl";
				axis = "osrightkl";
				angle0 = 0
				angle1 = 0.523;
			};
			class rightkl1 {
				type = "rotation";
				animPeriod = 1.2;
				selection = "rightkl1";
				axis = "osrightkl1";
				angle0 = 0
				angle1 = -3.14;
			};
			class frontkl {
				type = "rotation";
				animPeriod = 2;
				selection = "frontkl";
				axis = "osfrontkl";
				angle0 = 0
				angle1 = 0.195;
			};
			class NoseGear {
				type = "rotation";
				animPeriod = 6;
				selection = "front_gear";
				axis = "osfront_gear";
				angle0 = 0
				angle1 = 1.6;
			};
			class rampa {
				type = "rotation";
				animPeriod = 6;
				selection = "rampa";
				axis = "osrampa";
				angle0 = 0;
				angle1 = 0.66;
			};
			class rampa1 {
				type = "rotation";
				animPeriod = 5;
				selection = "rampa1";
				axis = "osrampa1";
				angle0 = 0;
				angle1 = 0.523;
			};
			class door1 {
				type = "rotation";
				animPeriod = 4;
				selection = "door1";
				axis = "osdoor1";
				angle0 = 0;
				angle1 = -2.4;
			};
			class door2 {
				type = "rotation";
				animPeriod = 3;
				selection = "door2";
				axis = "osdoors";
				angle0 = 0;
				angle1 = 0.785;
			};
			class door3 {
				type = "rotation";
				animPeriod = 3;
				selection = "door3";
				axis = "osdoors";
				angle0 = 0;
				angle1 = -0.785;
			};
			class trotle1 {
				type = "rotation";
				animPeriod = 2;
				selection = "trotle1";
				axis = "ostrotle";
				angle0 = 0;
				angle1 = 1.918;
			};
			class trotle2 {
				type = "rotation";
				animPeriod = 2;
				selection = "trotle2";
				axis = "ostrotle";
				angle0 = 0;
				angle1 = 1.918;
			};
			class trotle3 {
				type = "rotation";
				animPeriod = 2;
				selection = "trotle3";
				axis = "ostrotle";
				angle0 = 0;
				angle1 = 1.918;
			};
			class trotle4 {
				type = "rotation";
				animPeriod = 2;
				selection = "trotle4";
				axis = "ostrotle";
				angle0 = 0;
				angle1 = 1.918;
			};
			class reverseprops {
				type = "rotation";
				animPeriod = 1;
				selection = "reverseprops";
				axis = "ostrotle";
				angle0 = 0;
				angle1 = -1.7;
			};

			class gasolinerope0 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope0";
				axis = "osgasolinerope";
				angle0 = 0
				angle1 = 0.35;
			};
			class gasolinerope1 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope1";
				axis = "osgasolinerope";
				angle0 = 0
			angle1 = 0.35;
			};
			class gasolinerope2 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope2";
				axis = "osgasolinerope";
				angle0 = 0
			angle1 = 0.35;
			};
			class gasolinerope3 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope3";
				axis = "osgasolinerope";
				angle0 = 0
				angle1 = 0.35;
			};
			class gasolinerope4 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope4";
				axis = "osgasolinerope";
				angle0 = 0
				angle1 = 0.35;
			};
			class gasolinerope5 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope5";
				axis = "osgasolinerope";
				angle0 = 0
				angle1 = 0.35;
			};
			class gasolinerope6 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope6";
				axis = "osgasolinerope";
				angle0 = 0
			angle1 = 0.35;
			};
			class gasolinerope7 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope7";
				axis = "osgasolinerope";
				angle0 = 0
				angle1 = 0.35;
			};
			class gasolinerope8 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope8";
				axis = "osgasolinerope";
				angle0 = 0
				angle1 = 0.35;
			};
			class gasolinerope9 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope9";
				axis = "osgasolinerope";
				angle0 = 0
			angle1 = 0.35;
			};
			class gasolinerope10 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope10";
				axis = "osgasolinerope";
				angle0 = 0
				angle1 = 0.35;
			};
			class gasolinerope11 {
				type = "rotation";
				animPeriod = 15;
				selection = "gasolinerope11";
				axis = "osgasolinerope";
				angle0 = 0
			angle1 = 0.35;
			};
			class cargoload {
				type = "rotation";
				animPeriod = 0.01;
				selection = "something";
				axis = "osrampa";
				angle0 = 0
				angle1 = 1;
			};
			class relase {
				type = "rotation";
				animPeriod = 0.01;
				selection = "relase";
				axis = "osrampa";
				angle0 = 0
				angle1 = 1;
			};
			class fuellight {
				type = "rotation";
				animPeriod = 0.05;
				selection = "fuellight";
				axis = "osfuellight";
				angle0 = 0
				angle1 = 3.14;
			};
			class ramplight {
				type = "rotation";
				animPeriod = 0.05;
				selection = "ramplight";
				axis = "osramplight";
				angle0 = 0
				angle1 = 3.14;
			};
			class warninglightl {
				type = "rotation";
				animPeriod = 0.05;
				selection = "warninglightl";
				axis = "oswarninglightl";
				angle0 = 0
				angle1 = 3.14;
			};
			class warninglightr {
				type = "rotation";
				animPeriod = 0.05;
				selection = "warninglightr";
				axis = "oswarninglightr";
				angle0 = 0
				angle1 = 3.14;
			};
			class stall {
				type = "rotation";
				animPeriod = 0.05;
				selection = "stall";
				axis = "osstall";
				angle0 = 0
				angle1 = 3.14;
			};
			class hight {
				type = "rotation";
				animPeriod = 0.05;
				selection = "hight";
				axis = "oshight";
				angle0 = 0
				angle1 = 3.14;
			};
			class jumpprepare {
				type = "rotation";
				animPeriod = 3;
				selection = "jumpprepare";
				axis = "osjump";
				angle0 = 0
				angle1 = 3.14;
			};
			class jump {
				type = "rotation";
				animPeriod = 0.05;
				selection = "jump";
				axis = "osjump";
				angle0 = 0
				angle1 = 3.14;
			};
			class r1 {
				type = "rotation";
				animPeriod = 0.05;
				selection = "r1";
				axis = "osr1";
				angle0 = 0
				angle1 = 3.14;
			};
			class g1 {
				type = "rotation";
				animPeriod = 0.05;
				selection = "g1";
				axis = "osg1";
				angle0 = 0
				angle1 = 3.14;
			};
			class r2 {
				type = "rotation";
				animPeriod = 0.05;
				selection = "r2";
				axis = "osr2";
				angle0 = 0
				angle1 = 3.14;
			};
			class g2 {
				type = "rotation";
				animPeriod = 0.05;
				selection = "g2";
				axis = "osg2";
				angle0 = 0
				angle1 = 3.14;
			};
			class r3 {
				type = "rotation";
				animPeriod = 0.05;
				selection = "r3";
				axis = "osr3";
				angle0 = 0
				angle1 = 3.14;
			};
			class g3 {
				type = "rotation";
				animPeriod = 0.05;
				selection = "g3";
				axis = "osg3";
				angle0 = 0
				angle1 = 3.14;
			};
			class engine1 {
				type = "rotation";
				animPeriod = 0.01;
				selection = "engine1";
				axis = "osengine";
				angle0 = 0;
				angle1 = 3.14;
			};
			class engine2 {
				type = "rotation";
				animPeriod = 0.01;
				selection = "engine2";
				axis = "osengine";
				angle0 = 0;
				angle1 = 3.14;
			};
			class engine3 {
				type = "rotation";
				animPeriod = 0.01;
				selection = "engine3";
				axis = "osengine";
				angle0 = 0;
				angle1 = 3.14;
			};
			class engine4 {
				type = "rotation";
				animPeriod = 0.01;
				selection = "engine4";
				axis = "osengine";
				angle0 = 0;
				angle1 = 3.14;
			};
		};
	};
	class C130_xj400: C130_Base_xj400 {
		scope = protected;
		accuracy = 1000; // Important for aircrafts used in CTI
		armor = 100; // the exact armor value in son class (original value in addon is 150)
		model = "\TZK_Model_4_0_1\C130.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_Auxtanks.paa, tex_C130fslg.paa, tex_C130PRP1.paa, tex_door.paa, tex_FIN&RDDR.paa, tex_hztlstbl.paa, tex_hztlstbr.paa, tex_nacelles.paa, tex_prop.paa, tex_wingleft.paa, tex_wingrght.paa
			,  tzk_tex_99
		};
		class UserActions {
			class reverseprops {
				displayName = "THRUST REVERSE ON";
				position = "ostrotle";
				radius = 2;
				condition = "(this animationPhase ""NoseGear"" == 0) and (isEngineOn this) and (speed this < 250) and (this animationPhase ""reverseprops"" == 0)";
				statement = "this animate[""reverseprops"",1];[this] exec {\TZK_Objects\Scripts\C130\reverseprops.sqs}";
			};
			class unreverseprops {
				displayName = "THRUST REVERSE OFF";
				position = "ostrotle";
				radius = 2;
				condition = "(this animationPhase ""reverseprops"" > 0)";
				statement = "this animate[""reverseprops"",0]";
			};
			class Opensrampa {
				displayName = "Open cargo ramp";
				position = "osrampa";
				radius = 16;
				condition = "this animationPhase ""rampa"" < 0.5";
				statement = "[this] exec {\TZK_Objects\Scripts\C130\openramp.sqs}";
			};
			class Closerampa {
				displayName = "Close cargo ramp";
				position = "osrampa";
				radius = 16;
				condition = "this animationPhase ""rampa"" >= 0.5";
				statement = "[this] exec {\TZK_Objects\Scripts\C130\closeramp.sqs}";
			};


			class SetFlightAltitude : UA_SetFlightAltitude {};

			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};

			class AttachInVehicle : UA_AttachInVehicle_Heli {};
			class AttachOnFoot : UA_AttachOnFoot_Heli {};

			class TransportTurnON : UA_TransportTurnON {};
			class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {};
			class EjectAllCargo : UA_EjectAllCargo {};
			class EjectAICargo : UA_EjectAICargo {};
		};
		class EventHandlers {
			Init = _this exec {\TZK_Objects\Scripts\InitEventHandlers\C130.sqs}, _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\C130.sqs};
			Gear = if (_this Select 1) then {[_this select 0] exec {\TZK_Objects\Scripts\C130\geardown.sqs}, [_this select 0] exec {\TZK_Objects\Scripts\C130\closegas.sqs}} else {[_this select 0] exec {\TZK_Objects\Scripts\C130\gearup.sqs}};
			
			Engine = "_this exec {\TZK_Objects\Scripts\C130\Engine_EH.sqs};"
			GetIn = "_this exec {\TZK_Objects\Scripts\C130\GetIn_EH.sqs};"
			GetOut = "_this exec {\TZK_Objects\Scripts\C130\GetOut_EH.sqs};"
			
			Fired = "if ((_this select 1) == {c130_Flare_xj400}) then {[_this Select 0] exec {\TZK_Objects\Scripts\C130\flare.sqs}} ";
		};
		brakeDistance = 750;
		noseDownCoef =  1; // For AI to take off and land better.
	};
	class C130_Support_xj400: C130_xj400 {
		displayName = "C-130 Support";
		transportFuel = 100000; // Allow players use it to refuel.
		maxSpeed = 400; // Fly slower for A10 to get close easier.
	};
	class An12_Base_xj400: Plane {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.3; // For 1000 accuracy concrete units, low accuracy should be overrided in base class.
		displayName = "An-12"; nameSound = "Plane"; side = 0; cost = 4000000; type = 2;

		armor = 50; // For 1000 accuracy concrete units, low armor should be overrided in base class.

		model = "\TZK_Model_4_0_0\an12.p3d";
		picture = "\TZK_Texture_4_0_0\icon\iAN12.paa";

		hasgunner = 0; driveriscommander = 1;
		gearRetracting = 1;

		driverCanSee = 16;
		landingAoa = 10*3.1415/180;
		soundEngine[] = {"\TZK_Sounds_4_0_0\an12\engine.wss",0.316228,1};
		soundEnviron[] = {"Objects\noise",0.001000,1.000000};
		soundServo[] = {"Vehicles\gun_elevate",0.010000,0.400000};

		formationX = 200;
		formationZ = 300;
		formationTime = 30;
		precision = 500;//200
		maxSpeed = 750;
		aileronSensitivity = 1;
		elevatorSensitivity = 2;
		noseDownCoef = 1;
		flapsFrictionCoef = 0.1;
		wheelSteeringSensitivity = 4.0;
		brakeDistance = 500;// vehicle movement precision
		steerAheadSimul = 1.0;
		steerAheadPlan = 2.0;
		transportSoldier = 60;
		driverAction = "ManActCessnaPilot";
		gunnerAction = "ManActCessnaPilot";
		cargoAction[] = {"ManActCessnaCargo"};
		crew = "SoldierEPilot";
		threat[] = {0, 0, 0};
		extCameraPosition[] = {0,5,-50};
		weapons[] = {};
		magazines[]={SpoofMagazines};
		class ViewPilot {
			initFov = 0.7;
			minFov = 0.4;
			maxFov = 0.9;
			initAngleX = 0;
			minAngleX = -20;
			maxAngleX = 20;
			initAngleY = 0;
			minAngleY = -120;
			maxAngleY = 120;
		};
		animated = 1;
		class Animations {
			class Rbht {
				type = "rotation";
				animPeriod = 2.5;
				selection = "bht";
				axis = "osa bht";
				angle0 = 0;
				angle1 = 0.3;
			};
			class Rbhr {
				type = "rotation";
				animPeriod = 2.5;
				selection = "bhr";
				axis = "osa bhr";
				angle0 = 0;
				angle1 = 1.4;
			};
			class Rbhl {
				type = "rotation";
				animPeriod = 2.5;
				selection = "bhl";
				axis = "osa bhl";
				angle0 = 0;
				angle1 = -1.4;
			};
			class Fg1 {
				type = "rotation";
				animPeriod = 3;
				selection = "Fg1";
				axis = "osa Fg1";
				angle0 = 0;
				angle1 = 1.5;
			};
			class Fcr {
				type = "rotation";
				animPeriod = 2.4;
				selection = "Fcr";
				axis = "osa Fcr";
				angle0 = 0;
				angle1 = -1.8;
			};
			class Fcl {
				type = "rotation";
				animPeriod = 2.4;
				selection = "Fcl";
				axis = "osa Fcl";
				angle0 = 0;
				angle1 = 1.8;
			};
			class Fcf {
				type = "rotation";
				animPeriod = 2.4;
				selection = "Fcf";
				axis = "osa Fcf";
				angle0 = 0;
				angle1 = 1.6;
			};
			class Lg1 {
				type = "rotation";
				animPeriod = 2.4;
				selection = "Lg1";
				axis = "osa Lg1";
				angle0 = 0;
				angle1 = -1.75;
			};
			class Lcl {
				type = "rotation";
				animPeriod = 2.4;
				selection = "Lcl";
				axis = "osa Lcl";
				angle0 = 0;
				angle1 = 1.65;
			};
			class Lcc {
				type = "rotation";
				animPeriod = 2.4;
				selection = "Lcc";
				axis = "osa Lcc";
				angle0 = 0;
				angle1 = -1.5;
			};
			class Rg1 {
				type = "rotation";
				animPeriod = 2.4;
				selection = "Rg1";
				axis = "osa Rg1";
				angle0 = 0;
				angle1 = 1.75;
			};
			class Rcr {
				type = "rotation";
				animPeriod = 2.4;
				selection = "Rcr";
				axis = "osa Rcr";
				angle0 = 0;
				angle1 = -1.65;
			};
			class Rcc {
				type = "rotation";
				animPeriod = 2.4;
				selection = "Rcc";
				axis = "osa Rcc";
				angle0 = 0;
				angle1 = 1.5;
			};
			class slope {
				type = "rotation";
				animPeriod = 3;
				selection = "slope";
				axis = "osa slope";
				angle0 = 0;
				angle1 = 3.55;
			};
		};
	};
	class An12_xj400: An12_Base_xj400 {
		scope = protected;
		accuracy = 1000; // Important for aircrafts used in CTI
		armor = 100; // the exact armor value in son class (original value in addon is 85)
		class UserActions {
			class OpenRamp {
				displayName = "Open Ramp";
				position = "ramp switch";
				radius = 4;
				condition = "this animationphase ""Rbht"" < 0.4";
				statement = "[this] exec {\TZK_Objects\Scripts\an12\Copen.sqs}";
			};
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {};
			class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {};
			class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {};
			class EjectAllCargo : UA_EjectAllCargo {};
			class EjectAICargo : UA_EjectAICargo {};

			class CloseRamp {
				displayName = "Close Ramp";
				position = "ramp switch";
				radius = 4;
				condition = "(this animationphase ""Rbht"" >= 0.4)&&(this animationphase ""Slope"" < 0.1)";
				statement = "[this] exec {\TZK_Objects\Scripts\an12\Cclose.sqs}";
			};
			class DownSlope {
				displayName = "Down Slope";
				position = "ramp switch";
				radius = 4;
				condition = "(this animationphase ""Slope"" < 0.1)&&(this animationphase ""Rbht"" >= 0.9)";
				statement = "[this] exec {\TZK_Objects\Scripts\an12\Sopen.sqs}";
			};
			class UpSlope {
				displayName = "Up Slope";
				position = "ramp switch";
				radius = 4;
				condition = "this animationphase ""Slope"" >= 0.1";
				statement = "[this] exec {\TZK_Objects\Scripts\an12\Sclose.sqs}";
			};
		};
		class EventHandlers {
			Init = "_this exec {\TZK_Objects\Scripts\InitEventHandlers\An12.sqs}";
			Gear = "if (_this Select 1) then {[_this select 0] exec {\TZK_Objects\Scripts\an12\geardown.sqs}} else {[_this select 0] exec {\TZK_Objects\Scripts\an12\gearup.sqs}} ";
		};
	};
	class An12_Support_xj400: An12_xj400 {
		displayName = "An-12 Support"; // However An12 is not a support plane. But IL-76 too tough thus still use An12.
		transportFuel = 100000; // Allow players use it to refuel.
		maxSpeed = 500; // Fly slower for Su25 to get close easier.
	};

	class AN72_Base_xj400: Plane {
		scope = private; vehicleClass = "TZK_Units_400";
		accuracy = 0.3; // For 1000 accuracy concrete units, low accuracy should be overrided in base class.
		displayName = "$STR_RCWC_An72"; nameSound = "Plane"; side = 0; cost = 2000000; type = 2; threat[] = {0, 0, 0};

		armor = 50; // For 1000 accuracy concrete units, low armor should be overrided in base class.

		model = "\TZK_Model_4_0_0\AN72.p3d";
		picture = "\TZK_Texture_4_0_0\icon\iAN72.paa";

		hiddenSelections[] = {"roundel", "num1", "num2", "green_light", "red_light"};
		weapons[] = {};
		magazines[]={SpoofMagazines};

		hasgunner = 1; driveriscommander = 1;
		gearRetracting = 1;

		precision = 200;

		irTarget = 1; irScanGround = 0;

		maxSpeed = 650;
		brakeDistance = 10; 
		aileronSensitivity = 0.8;
		elevatorSensitivity = 1.5; 
		noseDownCoef = 0.2;
		landingSpeed = 250;
		wheelSteeringSensitivity = 4.0;
		landingAoa = 0.2;

		driverAction = "ManActSkodaDriver";
		gunnerAction = "ManActSkodaDriver";

		soundEngine[] = {"\TZK_Sounds_4_0_0\rktcoaler\engine.ogg",db+10,1};

		extCameraPosition[] = {0,6,-33};

		transportSoldier = 36;
		getInRadius = 5;

		fov = 0.5;


		class Reflectors {
			class Left {
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "L svetlo";direction = "konec L svetla";
				hitpoint = "L svetlo";selection = "L svetlo";
				size = 0.5;brightness = 0.4;
			};
			class Right {
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "P svetlo";direction = "konec P svetla";
				hitpoint = "P svetlo";selection = "P svetlo";
				size = 0.5;brightness = 0.4;
			};
		};

		animated = 1;
	};
	class AN72_xj400: AN72_Base_xj400 {
		class Animations {
			class RKTRamp1 {
				type = "rotation";animPeriod = 4;
				selection = "ramp 1";axis = "axis ramp 1";
				angle0 = 0;angle1 =-.7;
			};
			class RKTRamp2 {
				type = "rotation";animPeriod = 4;
				selection = "ramp 2";axis = "axis ramp 2";
				angle0 = 0;angle1 =.2;
			};
			class LeftWheel {
				type = "rotation";animPeriod = 3;
				selection = "left wheel";axis = "axis left wheel";
				angle0 = 0;angle1 = 1.57;
			};
			class RightWheel {
				type = "rotation";animPeriod = 3;
				selection = "right wheel";axis = "axis right wheel";
				angle0 = 0;angle1 =-1.57;
			};
			class NoseWheel {
				type = "rotation";animPeriod = 3;
				selection = "front wheel";axis = "axis front wheel";
				angle0 = 0;angle1 =-1.57;
			};
			class LWD {
				type = "rotation";animPeriod = 1;
				selection = "main door left";axis = "axis main door left";
				angle0 = 0;angle1 = 1.57;
			};
			class RWD {
				type = "rotation";animPeriod = 1;
				selection = "main door right";axis = "axis main door right";
				angle0 = 0;angle1 =-1.57;
			};
			class NWDL {
				type = "rotation";animPeriod = 1;
				selection = "front door left";axis = "axis front door left";
				angle0 = 0;angle1 =-1.57;
			};
			class NWDR {
				type = "rotation";animPeriod = 1;
				selection = "front door right";axis = "axis front door right";
				angle0 = 0;angle1 = 1.57;
			};
			class PA_Red {
				type = "rotation";animPeriod =.001;
				selection = "pa_red";axis = "axis_pa_red";
				angle0 = 0;angle1 = 1;
			};
			class PA_Green {
				type = "rotation";animPeriod =.001;
				selection = "pa_red";axis = "axis_pa_red";
				angle0 = 0;angle1 = 1;
			};
		};
		class UserActions {
			class SetFlightAltitude : UA_SetFlightAltitude {};
			class SpoofMissileON : UA_SpoofMissileON{}; class SpoofMissileOFF : UA_SpoofMissileOFF{};
			class AttachInVehicle : UA_AttachInVehicle_Heli {};
			class AttachOnFoot : UA_AttachOnFoot_Heli {};
			class TransportTurnON : UA_TransportTurnON {};
			class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {};
			class EjectAllCargo : UA_EjectAllCargo {};
			class EjectAICargo : UA_EjectAICargo {};
		/*	class RKTCoaler_EjectAll { // This function has been supported in TZK MPMissions thus don't have to be remained in vehicle's UserActions.
				displayName = "Para Drop";
				position = "pos driver";
				radius = 10;
				condition = "((count crew this) >2)&& ((getPos this select 2) > 50)";
				statement = "[this] exec {\TZK_Objects\Scripts\AN72\EjectParas.sqs}";
			};*/

			class RKTCoaler_RedLightOn {
				displayName = "Red Light On";
				position = "doors";
				radius = 15;
				condition = "local this && player in this and this animationphase ""PA_Red"" < 0.5";
				statement = "this animate [""PA_Red"",1];this setObjectTexture[(typeOf this GetVehicleParamArray {hiddenSelections}) find {red_light}, ""\TZK_Texture_4_0_0\rktcoaler\int\rlight.pac""]";
			};
			class RKTCoaler_RedLightOff {
				displayName = "Red Light Off";
				position = "doors";
				radius = 15;
				condition = "local this && player in this and this animationphase ""PA_Red"" > 0.5";
				statement = "this animate [""PA_Red"",0];this setObjectTexture[(typeOf this GetVehicleParamArray {hiddenSelections}) find {red_light}, {}]";
			};
			class RKTCoaler_GreenLightOn {
				displayName = "Green Light On";
				position = "doors";
				radius = 15;
				condition = "local this && player in this and this animationphase ""PA_Green"" < 0.5";
				statement = "this animate [""PA_Green"",1];this setObjectTexture[(typeOf this GetVehicleParamArray {hiddenSelections}) find {green_light}, ""\TZK_Texture_4_0_0\rktcoaler\int\glight.pac""]";
			};
			class RKTCoaler_GreenLightOff {
				displayName = "Green Light Off";
				position = "doors";
				radius = 15;
				condition = "local this && player in this and this animationphase ""PA_Green"" > 0.5";
				statement = "this animate [""PA_Green"",0];this setObjectTexture[(typeOf this GetVehicleParamArray {hiddenSelections}) find {green_light}, {}]";
			};
		};
		class EventHandlers {
			Init = "[_this select 0] exec{\TZK_Objects\Scripts\InitEventHandlers\AN72.sqs};";
			Gear = "if (_this select 1) then {[_this select 0] exec{\TZK_Objects\Scripts\AN72\geardown.sqs}} else {[_this select 0] exec {\TZK_Objects\Scripts\AN72\gearup.sqs}}";
			
			Engine = "_this exec {\TZK_Objects\Scripts\AN72\Engine_EH.sqs};"
			GetIn = "_this exec {\TZK_Objects\Scripts\AN72\GetIn_EH.sqs};"
			GetOut = "_this exec {\TZK_Objects\Scripts\AN72\GetOut_EH.sqs};"
		};
		scope = protected;
		armor = 120;
	//	flapsFrictionCoef = 2.0;
	//	aileronSensitivity = 0.8;
	//	elevatorSensitivity = 1.5; 
		noseDownCoef = 1;
		landingSpeed = 0;
		brakeDistance = 1000; 
	};
	class AN72_Support_xj400: AN72_xj400 {
		displayName = "An-72 Support"; // However An12 is not a support plane. But IL-76 too tough thus still use An12.
		transportFuel = 100000; // Allow players use it to refuel.
		maxSpeed = 430; // Fly slower for Su25 to get close easier.
	};
	// Rough modeled AirPlanes. Model files are deleted. If editors wish to use some of them, search files and correct definitions in TZK_2.10 please.

//EOF