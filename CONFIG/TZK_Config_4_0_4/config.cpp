class CfgPatches {
	class TZK_CONFIG_404 {
		name = "TZK_CONFIG_404";
		author = "IF";
		units[] = {};
		requiredAddons[] = {"TZK_Objects_400_3"}; // IMPORTANT! This is required to make TZK_CONFIG_404 able to modify TZK_Objects_400_3.
		requiredVersion = 1.99;
	};
};

class CfgMarkers {
	class UnknownVehicle_Marker_xj400 {};
	class MineAPE_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "MineAPE";
		icon = "\res\i\mine.paa";
		size = 12;
	};
};
class CfgMovesMC_xj400 {
	class Default {};
	class DefaultDie: Default {};
	class States {
		class Driver: Default {};
		class Gunner: Default {};
		class Cargo: Default {};
		class Commander: Default {};
		class JeepGunner:Driver {};
		class HmmwvGunner01: JeepGunner {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvGunner01_stat.rtm";
			speed = 10000000000;
			looped = 1;
			variantsAI[] = {"HmmwvGunner01V1",0.700000,"HmmwvGunner01"};
			interpolateWith[] = {"HmmwvGunner01V1",0.500000};
			equivalentTo = "HmmwvGunner01";
			interpolationSpeed = 1;
			connectTo[] = {"HmmwvGunner01Dying",1};
		};
	};
};
class CfgAmmo {
	class Default {};
	class Shell: Default {};
	class Shell73: Shell {};
	class Shell105: Shell73 {};
	class Shell120: Shell105 {};
	class Shell125: Shell120 {};
	class FAE220_SubBomb_xj400:	Shell125 {};
	class FAE220_SubBomb_Center_xj400: FAE220_SubBomb_xj400 { hit = 0; indirectHit = 150; indirectHitRange = 60; };
	class M26_SubBomb_Center_xj400: FAE220_SubBomb_Center_xj400{};
	
	class AT3:Default {};
	class LAW:AT3 {};
	class RPG:LAW {};
	class CarlGustav:AT3 {};
	class AT4: CarlGustav {};
	class AA:CarlGustav {};
	class 9K32:AA {};
	class Stinger_xj400: AA { proxyShape = "\TZK_Model_4_0_0\wp\rocket_stinger.p3d"; };

	class TimeBomb: Default {};
	class PipeBomb: TimeBomb {};
	class Mine: TimeBomb {};
	class Mine_Pistol_xj400: Mine {
		defaultMagazine = "Mine_Pistol_xj400";
	};
	class PipeBomb_Pistol_xj400: PipeBomb {
		defaultMagazine = "PipeBomb_Pistol_xj400"; // Useless for pipebomb but work for mine.
	};

};

class CfgVehicles {
	class All {};
	class AllVehicles:All{};
	class Land:AllVehicles{};
	class LandVehicle: Land {};
	class Tank: LandVehicle {};
	class APC: Tank {};
	class BMP: APC {};
	class BMPAmbul: BMP {};
	// "delete" isn't keyword of OFP. It's useless in OFP config file.
	
	class BMP_xj400: BMP {
		// This will directly modify exist classes attributes in 4.0.3 config.
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\BMP1.sqs}";};
	};
	class BMP2_Base_xj400: BMP {};
	class BMP2_xj400: BMP2_Base_xj400 {
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\BMP2.sqs}";};
	};


	class BMPAmbul_xj400: BMPAmbul {
		// This will directly modify exist "BMPAmbul_xj400" attributes in 4.0.3 config.
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\BMPAmbu.sqs}";};
	};

	class Tank_xj400: Tank {};
	class M60_Base_xj400: Tank_xj400 {};
	class M60_xj400: M60_Base_xj400 {
		model = "\TZK_Model_4_0_4\M60_TZK.p3d";
	};
	class M60_120S_xj400: M60_xj400 {
		model = "\TZK_Model_4_0_4\M60_120S_TZK.p3d";
	};
	
	class M1Abrams_Base_xj400: Tank_xj400 {};
	class TZK_HeavyWestTank_Base_xj400: M1Abrams_Base_xj400 {};
	class Leo2A6_xj400: TZK_HeavyWestTank_Base_xj400 {
		model = "\TZK_Model_4_0_4\Leo2A6.p3d";
		hiddenSelections[] = {
			"zadni svetlo","Takt_Kp","Takt_Symbol","Takt_Btl_1","Takt_Btl_2","Takt_Btl_3","nr1","nr2","nr3", tzk_tex_00,
			tex_kettes.pac, tex_ketteu.pac, tex_main1.pac, tex_main2.pac, tex_main3.pac, tex_rolle2.pac, tex_rolle2m.pac, tex_rollei.paa
			, tex_rollea.pac, tex_ketteo.pac, tex_korb.paa, tex_nebelb.pac, tex_bwbl1.pac, tex_bwbl0.paa, tex_bwbl1b.pac, tex_nebelbr.pac, tex_nebelg.pac, tex_periz11.pac, tex_periz11b.pac, tex_urollea.paa, tex_arad.paa, tex_lukerd.pac, tex_bwgruen1.pac
				, tzk_tex_99
		};
	};

	class RussianTank_xj400: Tank_xj400 {};
	class T72_Base_xj400: RussianTank_xj400 {};
	class T80_Base_xj400: T72_Base_xj400 {};
	class TZK_HeavyEastTank_Base_xj400: T80_Base_xj400 {};
	class ZTZ99_xj400: TZK_HeavyEastTank_Base_xj400 {
		model = "\TZK_Model_4_0_4\ZTZ99.p3d";
		hiddenSelections[] ={"n1", "n2", "n3",  tzk_tex_00 ,
			tex_VWCanon1.paa, tex_VWChassis1.paa, tex_VWChassis2.paa, tex_VWChassis3.paa, tex_VWTurret1.paa, tex_VWTurret2.paa, tex_VWTurret3.paa, tex_VWTurret4.paa, tex_VWTurret5.paa, tex_VWTurret6.paa, tex_VWWheel1.paa, tex_Ztz993.paa
				, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; _vehicle animate [{suspension}, 0.5]; [_vehicle, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {n}, {0}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs}; [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\ZTZ99.sqs}";};
	};
	
	class T72_xj400: T72_Base_xj400 {
		model = "\TZK_Model_4_0_4\T72_TZK.p3d";
		hiddenSelections[] = {"pruh", tzk_tex_00,
			tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_t72_back.pac, tex_t72_front.pac, tex_t72_hlaven_s.pac, tex_t72_kolo.pac, tex_t72_kolo2.pac, tex_t72_kolo3.paa, tex_t72_pixla.pac, tex_t72_pixla_side.pac, tex_t72_side2.pac, tex_t72_sum.pac, tex_t72_top.pac, tex_t72_vez_back.pac, tex_t72_vez_front.pac, tex_t72_vez_roura.pac, tex_t72_vez_side.pac, tex_t72_vez_top.pac, tex_t72_vymetnice.pac, tex_t72_zubkolo_detail.paa, tex_t72_zubkolo_detail2.paa, tex_t72pasb.pac, tex_tank_03_kanon_frt.pac, tex_tank_04_spod.pac, tex_tank_04_spod_spol.pac, tex_tank_04_sud_norm.pac, tex_tank_04_sud_side.paa, tex_ural_kabok2.pac
				, tzk_tex_99
		};
	};
	
	class T55_Base_xj400: Tank_xj400 {};
	class T55G_xj400: T55_Base_xj400 {
		model = "\TZK_Model_4_0_4\T55_TZK.p3d";
		hiddenSelections[] = {pruh_FIA, tzk_tex_00,
			tex_ammobox_top.pac, tex_fueltank_top.pac, tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_bok.pac, tex_t55_kolo1.pac, tex_t55_kolo2.pac, tex_t55_predek.pac, tex_t55_spodek.pac, tex_t55_sum.pac, tex_t55_top.pac, tex_t55_vez_side.pac, tex_t55_zadek.pac, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t55vez_top.pac
			, tex_det_ammobox.pac, tex_t55_hlaven.pac, tex_t55_lauf_f.pac, tex_t55kolpred.paa, tex_t55kolpred2.paa
			, tex_ammobox_side.pac, tex_ammobox1_front.pac, tex_ammobox2_front.pac, tex_det_fueltank.pac, tex_det_zakl_lauf.pac, tex_fueltank_side.pac
				, tzk_tex_99
		};
	};
	class T55E_xj400: T55_Base_xj400 {
		model = "\TZK_Model_4_0_4\T55_TZK.p3d";
		hiddenSelections[] = {pruh_FIA, tzk_tex_00,
			tex_ammobox_top.pac, tex_fueltank_top.pac, tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_bok.pac, tex_t55_kolo1.pac, tex_t55_kolo2.pac, tex_t55_predek.pac, tex_t55_spodek.pac, tex_t55_sum.pac, tex_t55_top.pac, tex_t55_vez_side.pac, tex_t55_zadek.pac, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t55vez_top.pac
			, tex_det_ammobox.pac, tex_t55_hlaven.pac, tex_t55_lauf_f.pac, tex_t55kolpred.paa, tex_t55kolpred2.paa
			, tex_ammobox_side.pac, tex_ammobox1_front.pac, tex_ammobox2_front.pac, tex_det_fueltank.pac, tex_det_zakl_lauf.pac, tex_fueltank_side.pac
				, tzk_tex_99
		};
	};

	class M109A6G_Base_xj400: M1Abrams_Base_xj400 {};
	class M109A6G_xj400: M109A6G_Base_xj400 {
		model = "\TZK_Model_4_0_4\M109A6_DKMM.p3d";
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\M109A6G.sqs}; [_vehicle] exec {\TZK_Objects\Scripts\InitEventHandlers\M109A6G.sqs}";};
	};
	class PLZ05_VME_Base_xj400: T72_Base_xj400 { icon = "\TZK_Texture_4_0_0\icon\uiM109.paa"; };
	class PLZ05_TZK_xj400: PLZ05_VME_Base_xj400 {
		model = "\TZK_Model_4_0_4\PLZ05.p3d";
		hiddenSelections[] = {"n1", "n2", "n3", "zhijia", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6",  tzk_tex_00 ,
			tex_CETI.paa, tex_cetic.paa, tex_CETIh.paa, tex_CETIq.paa, tex_CETIs.paa, tex_ct1.paa, tex_ct2.paa, tex_jing.paa, tex_mi.paa, tex_micai.paa, tex_pao.paa, tex_paota1.paa, tex_paota2.paa, tex_paotac.paa, tex_paotaqh.paa, tex_paotaSd.paa, tex_paott.paa, tex_qb.paa, tex_ROLLEA.pac, tex_ROLLEH.paa, tex_ROLLEV.paa, tex_ROLLEVA.paa, tex_tta.paa, tex_ttt.paa, tex_VWTurret3.paa, tex_VWTurret6.paa, tex_ZSD89_lun.paa
				, tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle] exec {\TZK_Objects\Scripts\InitEventHandlers\PLZ05.sqs}; [_vehicle, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {n}, {0}] exec {\TZK_Objects\Scripts\texture\RSC_Numbers.sqs}; [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\PLZ05.sqs}";};
	};
	class M270_M29064_xj400: M1Abrams_Base_xj400 {
		model = "\TZK_Model_4_0_4\M270_m29064.p3d";
		hiddenSelections[] = {
			"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6", "m01","m02","m03","m04","m05","m06","m07","m08","m09","m10","m11","m12",  tzk_tex_00,
			tex_btex.paa, tex_btex2.paa, tex_cover.paa, tex_down.pac, tex_rwkolo.paa, tex_side_l.paa, tex_side_r.paa, tex_t55zub.paa, tex_t72_3.paa, tex_top.paa
			, tex_dark.paa
				, tzk_tex_99
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\M270.sqs}; [_vehicle] exec {\TZK_Objects\Scripts\InitEventHandlers\M270.sqs}";
			Killed = "";
		};
	};
	class TOS1_TZK_xj400: T72_Base_xj400 {
		model = "\TZK_Model_4_0_4\TOS1_DKMM.p3d";
		hiddenSelections[] ={
			"n1", "n2", "n3", "lidF","lidR", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6", "m01","m02","m03","m04","m05","m06","m07","m08","m09","m10","m11","m12","m13","m14","m15","m16","m17","m18","m19","m20","m21","m22","m23","m24","m25","m26","m27","m28","m29","m30", tzk_tex_00 ,
			tex_T55_infra.pac,tex_t55_sum.pac
			,tex_pal1.pac,tex_rcog..paa,tex_TOST1.pac,tex_TOST2.pac,tex_tos_1g.paa
				, tzk_tex_99
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\TOS1.sqs}; [_vehicle] exec {\TZK_Config_4_0_4\Scripts\InitEventHandlers\TOS1.sqs}";
			Killed = "";
		};
		class UserActions {
			class prepfire {
				statement = "[this,1] exec {\TZK_Config_4_0_4\Scripts\Deploy\TOS1.sqs}";
			};
			class prepdrive {
				statement = "[this,0] exec {\TZK_Config_4_0_4\Scripts\Deploy\TOS1.sqs}";
			};
		};
	};
	class Air: AllVehicles {};
	class Helicopter: Air {};
	class Plane: Air {};
	class A10: Plane {};
	class Su25: Plane {};
	
	class UH60_CSLA_Base_xj400: Helicopter {
		hiddenSelections[] = {tzk_tex_00, 
			tex_bottom.pac,tex_front.pac,tex_koloin.pac,tex_koloout.pac,tex_kolopas.pac,tex_kridlo.pac,tex_motor.pac,tex_nadrze.pac,tex_nos.pac,tex_podvozek.pac,tex_posuvokna.pac,tex_rotor.pac,tex_sidea.pac,tex_sideb.pac,tex_topa.pac,tex_valec.pac,tex_zadkolo.pac,tex_zadkridlo.pac
			, tex_all.paa
			,  tzk_tex_99
		};
		class EventHandlers {
			Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\UH60A_CSLA.sqs}";
			Engine = "_this exec {\TZK_Config_4_0_4\Scripts\CSLA_UH60A\Engine_EH.sqs};"
			GetIn = "_this exec {\TZK_Config_4_0_4\Scripts\CSLA_UH60A\GetIn_EH.sqs};"
			GetOut = "_this exec {\TZK_Config_4_0_4\Scripts\CSLA_UH60A\GetOut_EH.sqs};"
		};
		class Animations {
			class CSLA_UH60_doorL {
				type = "rotation";
				animPeriod = 1.5;
				selection = "doorL";
				axis = "osa_doorL";
				angle0 = 0;
				angle1= +0.09;
			};
			class CSLA_UH60_doorR {
				type = "rotation";
				animPeriod = 1.5;
				selection = "doorR";
				axis = "osa_doorR";
				angle0 = 0;
				angle1= -0.09;
			};
		};
	};
	class UH60_CSLA_xj400: UH60_CSLA_Base_xj400 {
		model = "\TZK_Model_4_0_4\UH60A_CSLA2.p3d";
		class UserActions {
			class OpenRdoor {
				displayName = "$STR_DN_RHS_HIND_RdoorOpen";
				position = "pos r";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorR"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3)";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorOpenR.sqs"""; 
			};
			class CloseRdoor {
				displayName = "$STR_DN_RHS_HIND_RdoorClose";
				position = "pos r";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorR"" > 0.5";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorCloseR.sqs"""; 
			};
			class OpenLdoor {
				displayName = "$STR_DN_RHS_HIND_LdoorOpen";
				position = "pos l";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorL"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3)";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorOpenL.sqs"""; 
			};
			class CloseLdoor {
				displayName = "$STR_DN_RHS_HIND_LdoorClose";
				position = "pos l";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorL"" > 0.5";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorCloseL.sqs"""; 
			};
		};
	};
	class UH60MG_CSLA_Base_xj400: UH60_CSLA_Base_xj400 { model = "\TZK_Model_4_0_4\UH60A_CSLA2_M2.p3d"; };
	class UH60MG_CSLA_xj400: UH60MG_CSLA_Base_xj400 {
		class UserActions {
			class OpenRdoor {
				displayName = "$STR_DN_RHS_HIND_RdoorOpen";
				position = "pos r";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorR"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3)";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorOpenR.sqs"""; 
			};
			class CloseRdoor {
				displayName = "$STR_DN_RHS_HIND_RdoorClose";
				position = "pos r";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorR"" > 0.5";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorCloseR.sqs"""; 
			};
			class OpenLdoor {
				displayName = "$STR_DN_RHS_HIND_LdoorOpen";
				position = "pos l";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorL"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3)";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorOpenL.sqs"""; 
			};
			class CloseLdoor {
				displayName = "$STR_DN_RHS_HIND_LdoorClose";
				position = "pos l";
				radius = 2;
				condition = "local this && this animationPhase ""CSLA_UH60_doorL"" > 0.5";
				statement = "[this, true] exec ""\TZK_Config_4_0_4\Scripts\CSLA_UH60A\DoorCloseL.sqs"""; 
			};
		};
	};

	class AH1W_Vit_Base_xj400: Helicopter {};
	class AH1W_Vit_xj400: AH1W_Vit_Base_xj400 { model = "\TZK_Model_4_0_4\AH1W_Vit.p3d"; };
	class AH64_Base_xj400: Helicopter {};
	class AH64_MPIV_Base_xj400: AH64_Base_xj400 { model = "\TZK_Model_4_0_4\AH64_mpiv.p3d"; };
	class Kamov_Base_xj400: Helicopter {
		model = "\TZK_Model_4_0_4\V80_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_v-80_backwing.pac, tex_v-80_misc2.pac, tex_v-80_test4a.pac, tex_v-80_test4b2.pac, tex_v-80_testbott4b.pac, tex_v-80_testtop4a.pac, tex_v-80_testtop4b.pac, tex_v-80_testwing.pac, tex_v-80_undergun.pac, tex_v-80_wiretoplod.paa, tex_v-80_side1lod.paa, tex_v-80_side2lod.paa, tex_v-80_010.paa
			,tex_v-80_at.pac,tex_v-80_misc1.pac
			,  tzk_tex_99
		};
	};
	class Tiger_RMK30_xj400: Helicopter {
		model = "\TZK_Model_4_0_4\Tiger_RMK_BWMOD.p3d";
		class EventHandlers {
			Init = _vehicle = _this select 0, [_vehicle, {C}] exec {\TZK_Config_4_0_4\Scripts\texture\Tiger.sqs}, [_vehicle, ["Door1", "Door2"], 1] exec {\TZK_Objects\Scripts\SwitchSelections.sqs};
		};
	};
	class Tiger_HOT3_Base_xj400: Tiger_RMK30_xj400 {
		hiddenSelections[] = {"strobo","strobo2","redlight","whitelight","greenlight","display1","display2","display3","display4","display5","display6","display7","nr1","nr2","badge","numbers","waffen1","waffen2","waffen3","waffen4", tzk_tex_00,  
			tex_seite.pac
			,tex_osiris.pac,tex_teile.pac,tex_wp\rmk30.pac,tex_wp\waffen.pac
			,  tzk_tex_99
			, pars3, hot3
		};
	};
	class Tiger_PARS3_Base_xj400: Tiger_RMK30_xj400 {
		hiddenSelections[] = {"strobo","strobo2","redlight","whitelight","greenlight","display1","display2","display3","display4","display5","display6","display7","nr1","nr2","badge","numbers","waffen1","waffen2","waffen3","waffen4", tzk_tex_00,  
			tex_seite.pac
			,tex_osiris.pac,tex_teile.pac,tex_wp\rmk30.pac,tex_wp\waffen.pac
			,  tzk_tex_99
			, hot3, pars3
		};
	};


	class Car: LandVehicle {};
	class Truck: Car {};
	class Jeep: Car {};
	class JeepMG: Jeep {};
	class Jeep_xj400: Jeep {
		model = "\TZK_Model_4_0_4\Jeep_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_mutt_backg.pac, tex_mutt_bottom.pac, tex_mutt_frontg.pac, tex_mutt_kapotag.pac, tex_mutt_kolog.pac, tex_mutt_koloog.pac, tex_mutt_palubkmg.pac, tex_mutt_podanteng.pac, tex_mutt_podlahg.pac, tex_mutt_podpaka.pac, tex_mutt_radiog.pac, tex_mutt_sedoperg.pac, tex_mutt_sedsedg.pac, tex_mutt_sideg.pac, tex_mutt_sklog.pac, tex_mutt_trubka.pac, tex_mutt_volant.paa, tex_mutt_pristrtga.paa
			,tex_mutt_plachtag.pac
			, tzk_tex_99
		};
	};
		
	class Man:Land {};
	class Soldier:Man {};
	class SoldierWB:Soldier {};
	class OfficerW: SoldierWB {};
	class SoldierWSaboteur: SoldierWB {};
	class SoldierWSaboteurPipe: SoldierWSaboteur {};
	class SoldierWSaboteurDay: SoldierWSaboteurPipe {};
	class SoldierWSniper: SoldierWB {};
	class SoldierWMedic: SoldierWB {};
	class SoldierWCrew: SoldierWB {};
	class SoldierWPilot: SoldierWB {};
	class SoldierWG: SoldierWB {};
	class SoldierWMortar: SoldierWG {};
	class SoldierWMG: SoldierWB {};
	class SoldierWLAW: SoldierWB {};
	class SoldierWAT: SoldierWLAW {};
	class SoldierWAA: SoldierWLAW {};
	class HeavyGW: SoldierWB {};
	class SoldierWMiner: SoldierWB {};

	class SoldierEB:Soldier {};
	class SoldierESniper: SoldierEB {};
	class SoldierESaboteur: SoldierEB {};
	class SoldierESaboteurPipe: SoldierESaboteur {};
	class SoldierESaboteurBizon: SoldierESaboteurPipe {};
	class SoldierEMedic: SoldierEB {};
	class SoldierECrew: SoldierEB {};
	class SoldierEPilot: SoldierEB {};
	class SoldierEG: SoldierEB {};
	class SoldierEMG: SoldierEB {};
	class SoldierELAW: SoldierEB {};
	class SoldierEAT: SoldierELAW {};
	class SoldierEAA: SoldierELAW {};
	class OfficerE: SoldierEB {};
	class SoldierEMiner: SoldierEB {};
	class HeavyGrenadier: SoldierEB {};
	
	class SoldierGB: Soldier {};
	class SoldierGG: SoldierGB {};
	class SoldierGMG: SoldierGB {};
	class SoldierGSniper: SoldierGB {};
	class SoldierGMedic: SoldierGB {};
	class SoldierGCrew: SoldierGB {};
	class SoldierGPilot: SoldierGB{};
	class OfficerG: SoldierGB {};
	class SoldierGLAW: SoldierGB {};
	class SoldierGAT: SoldierGLAW {};
	class SoldierGAA: SoldierGLAW {};
	class SoldierWB_xj400: SoldierWB { scope = 1; };
	class SoldierWG_xj400: SoldierWG { scope = 1; };
	class HeavyGW_xj400: HeavyGW { scope = 1; };
	class SoldierWMG_xj400: SoldierWMG { scope = 1; };
	class SoldierWSniper_xj400: SoldierWSniper { scope = 1; };
	class SoldierWMortar_xj400: SoldierWMortar { scope = 1; };
	class SoldierWLAW_xj400: SoldierWLAW { scope = 1; };
	class SoldierWAT_xj400: SoldierWAT { scope = 1; };
	class SoldierWAA_xj400: SoldierWAA { scope = 1; };
	class SoldierWSaboteurDay_xj400: SoldierWSaboteurDay { scope = 1; };
	class SoldierWMiner_xj400: SoldierWMiner { scope = 1; };
	class SoldierWMedic_xj400: SoldierWMedic { scope = 1; };
	class SoldierWCrew_xj400: SoldierWCrew { scope = 1; };
	class SoldierWPilot_xj400: SoldierWPilot { scope = 1; };
	class OfficerW_xj400: OfficerW { scope = 1; };

	class SoldierEB_xj400: SoldierEB { scope = 1; };
	class SoldierEG_xj400: SoldierEG { scope = 1; };
	class HeavyGrenadier_xj400: HeavyGrenadier { scope = 1; };
	class SoldierEMG_xj400: SoldierEMG { scope = 1; };
	class SoldierESniper_xj400: SoldierESniper { scope = 1; };
	class SoldierELAW_xj400: SoldierELAW { scope = 1; };
	class SoldierEAT_xj400: SoldierEAT { scope = 1; };
	class SoldierEAA_xj400: SoldierEAA { scope = 1; };
	class SoldierESaboteurBizon_xj400: SoldierESaboteurBizon { scope = 1; };
	class SoldierEMiner_xj400: SoldierEMiner { scope = 1; };
	class SoldierEMedic_xj400: SoldierEMedic { scope = 1; };
	class SoldierECrew_xj400: SoldierECrew { scope = 1; };
	class SoldierEPilot_xj400: SoldierEPilot { scope = 1; };
	class OfficerE_xj400: OfficerE { scope = 1; };
	
	class SoldierGB_xj400: SoldierGB { scope = 1; };
	class SoldierGG_xj400: SoldierGG { scope = 1; };
	class SoldierGMG_xj400: SoldierGMG { scope = 1; };
	class SoldierGSniper_xj400: SoldierGSniper { scope = 1; };
	class SoldierGLAW_xj400: SoldierGLAW { scope = 1; };
	class SoldierGAT_xj400: SoldierGAT { scope = 1; };
	class SoldierGAA_xj400: SoldierGAA { scope = 1; };
	class SoldierGMedic_xj400: SoldierGMedic { scope = 1; };
	class SoldierGCrew_xj400: SoldierGCrew { scope = 1; };
	class SoldierGPilot_xj400: SoldierGPilot { scope = 1; };
	class OfficerG_xj400: OfficerG { scope = 1; };
	
};