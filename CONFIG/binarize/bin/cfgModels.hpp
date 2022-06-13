// describe some properties models need to meet
// this was introduces in order to maintain consistent
// section management for HW T&L

class CfgModels {
	class Default {
		sections[] = {};
		sectionsInherit = "";
	};

	// some generic model requirements
	class Head: Default {
		sections[] = {
			"osobnost",
			"brejle"
		};
	};
	class Man: Default {
		sections[] = {
			"head injury","body injury",
			"l arm injury","r arm injury","p arm injury",
			"l leg injury","r leg injury","p leg injury",
			"medic",
			"hlava",
			"krk",
			"zasleh"
		};
		sectionsInherit = Head;
	};
	class Vehicle: Default {
		sections[] = {
			"cislo",
			"grupa",
			"side",
			"sektor",
			"clan",
			"podsvit pristroju",
			"poskozeni",
			"L svetlo",
			"P svetlo",
			"zasleh"
		};
	};
	class Tank: Vehicle {
		sectionsInherit = "Vehicle";
		sections[]= {
			"zadni svetlo",
			"brzdove svetlo",
			"pruh"
		};
	};
	class Car: Vehicle {
		sectionsInherit = "Vehicle";
		sections[]= {
			"ammo",
			"sklo predni p",
			"sklo predni l",
			"zadni svetlo",
			"brzdove svetlo"
		};
	};
	class Helicopter {
		sectionsInherit = "Vehicle";
		sections[]= {
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur"
		};
	};

	class Weapon: Default {
		sections[] = {"zasleh"};
	};

	// models inherited from class
	class hlavaw: Head {};

	// men
	class mc_vojakw2: Man {};
	class mc_vojakwo2: Man {};
	class mc_tankistaw2: Man {};
	class mc_pilotw2: Man {};
	class mc_sniperw2: Man {};
	class mc_saboteur: Man {};
	class mc_saboteurday: Man {};

	class mc_vojake2: Man {};
	class mc_vojakeo2: Man {};
	class mc_tankistae2: Man {};
	class mc_pilote2: Man {};
	class mc_snipere2: Man {};
	class mc_vojake2_guba: Man {};
	class angelina: Man {};
	class mc_specnas2: Man {};

	class mc_civil: Man {};
	class mc_civil2: Man {};
	class mc_civil3: Man {};
	class mc_vojakg2: Man {};
	class mc_vojakg3: Man {};
	class mc_vojakgo2: Man {};
	class mc_crewg: Man {};
	class mc_crewg2: Man {};

	// weapons
	class m16_proxy: Weapon {};
	class xm_177e2_proxy: Weapon {};
	class optika_m16 : Weapon {};

	class m16_granatomet_proxy: Weapon {};
	class m60_mg_proxy: Weapon {};
	class optika_m60_mg: Weapon {};
	class m21_proxy: Weapon {};
	class optika_snpierw: Weapon {};

	class ak_74_su_proxy: Weapon {};
	class ak_74_granatomet_proxy: Weapon {};
	class pk_mg_proxy: Weapon {};
	class optika_pk: Weapon {};
	class ak_74_proxy: Weapon {};
	class optika_ak47: Weapon {};
	class ak_47_v58_proxy: Weapon {};

	class svd_dragunov_proxy: Weapon {};
	class optika_snpiere: Weapon {};
	class optika_night: Weapon {};

	class ak_47_granatomet_proxy: Weapon {};
	class ak_47_proxy: Weapon {};

	class kozlice: Weapon {};
	class optika_kozlice: Weapon {};

	class Steyr: Weapon {};
	class optika_steyr: Weapon {};

	class G36: Weapon {};
	class G36_optics: Weapon {};

	class XMS: Weapon {};
	class optika_XMS: Weapon {};

	class Bizon: Weapon {};
	class optika_Bizon: Weapon {};

	class 6g30: Weapon {};

	// vehicles
	// tanks
	class t80: Tank {};
	class t72: Tank {};
	class t55: Tank {};
	class m1_abrams: Tank {};
	class m60: Tank {};
	class bmp: Tank {};
	class m113: Tank {};
	class m113_ambulance: Tank {};
	class bmp_ambu: Tank {};
	class zsu: Tank {};
	// cars
	class truck5t: Car {};
	class truck5t2: Car {};
	class truck5trepair: Car {};
	class truck5tfuel: Car {};

	class ural: Car {};
	class uralrepair: Car {};
	class uralfuel: Car {};

	class v3s: Car {};
	class v3sfuel: Car {};
	class v3srepair: Car {};

	class jeep: Car {};
	class uaz: Car {};
	class guaz: Car {};
	class scud: Car {};

	class gjeep: Car {};
	class sguaz: Car {};

	class jeep_mg: Car {};
	class skodovka: Car {};
	class skodovka_blue: Car {};
	class skodovka_red: Car {};
	class skodovka_green: Car {};
	class traktor: Car {};

	class rapid: Car {};
	class rapid_y: Car {};
	class v3scivil: Car {};

	class m2_mg: Vehicle {};


	// planes / helis
	class uh_60: Helicopter {};
	class uh_60mg: Helicopter {};
	class ah1_cobra: Helicopter {};
	class mi24_hind: Helicopter {};
	class mi17_hip: Helicopter {};
	class a10: Vehicle {};
	class cessna182: Vehicle {
		sectionsInherit = "Vehicle";
		sections[]= {
			"vrtule staticka","vrtule blur"
		};
	};

	// ships
	class Ship {
		sectionsInherit = "Vehicle";
		sections[]= {
			"zadni svetlo"
		};
	};
	class hrl: Ship {};
	class pbr: Ship {};

	// special models:
	class Flag: Default {
		sections[] = {"latka"};
	};
	class flag_vojak: Flag {};
	class flag_stozar: Flag {};
	class flag_alone: Flag {};
	class flag_alone_big: Flag {};
	class flag_auto: Flag {};
	class flag_plane: Flag {};
	class flag_plane_big: Flag {};

	class blok: Default {
		sections[] = {"papir"};
	};

	// ADDONS
	class trabant: Car {};
	class m163A1vulcan: Tank {};
	class su25: Vehicle {};
	class ch_47d: Helicopter {};
	class apac: Helicopter {};
	class hmmwv: Car {};
	class brmd: Car {};
	class brdm: Car {};
	class bmp2: Tank {};
	class kiowa: Helicopter {};
	class m2a2: Tank {};
	// RESISTANCE
//	class skodasm11: Car {};
	/*
	class lampadrevo {
		properties[]= {"firegeometry","1","viewgeometry","1"};
	};
	class lampazel {
		properties[]= {"firegeometry","1","viewgeometry","1"};
	};
	*/
	
// ============================================TZK Units============================================
/*	class 2s19: T72 {
		sectionsInherit = "T72";
		sections[]= {
			"cislo",
			"grupa",
			"side",
			"sektor",
			"clan",
			"podsvit pristroju",
			"poskozeni",
			"L svetlo",
			"P svetlo",
			"zasleh",
			"numberfl",
			"numberll",
			"numberlr",
			"numberfr",
			"cammo"
		};
	};
	class C17Glob: A10 {};
	class VME_KJ2000: A10 {
		sectionsInherit = "Vehicle";
		sections[]= {
				"vrtule staticka","vrtule blur","chair","foldwheelfront", "foldwheelrear","foldwheelrear1", "spinwheelfront", "spinwheelrear", "spinwheelrear1"
		};
	};
	class Mi17_rus2 : Helicopter {
	// didn't find original addon. write it basing on its hiddenSelections.
		sectionsInherit = "Helicopter";
		sections[]= {"cdln1","cdrn1","cdln2","cdrn2","zasleh2","zasleh3","zasleh4","zasleh5","ss_cms","ss_engine1","ss_engine2","ss_fuel","ss_gun","ss_transm","ss_weap","num_1","num_2","deslight"};
	};
	class RHS_Mi24V_AT : Helicopter {
		sectionsInherit = "Helicopter";
		sections[]= {"n1","n2","gearlight","enginelight","fire","fireB","missilelight"};
	};
*/
// =======================================TZK 2.12/3.00 Weapons=====================================
	class LSR_m249spw_acog: Weapon {};
	class LSR_m249spw_acog_sd: Weapon {};
	class LSR_m4_m203_acog_sd: Weapon {};
	class LSR_mp5sd6: Weapon {};
	class LSR_m240_m145: Weapon {};
	class LSR_m82: Weapon {};
	class LSR_m24: Weapon {};
	class LSR_m60e4: Weapon {};
	
	class C8XAK74M1P29_SD: Weapon {};
	class C8XAK74MGP251P29_SD: Weapon {};
	class C8XRPK74M1P29: Weapon {};
	class C8XRPK74M1P29_SD: Weapon {};
	
	class sg551_proxy: Weapon{};
	class mVSS: Weapon {};
	class KSVK: Weapon {};
	
	class ICP_pkm_1p29: Weapon {};
	class ICP_pkm: Weapon {};
	class ICP_svds: Weapon {};
	class ICP_val: Weapon {};
	class ICP_valpso: Weapon {};
	class ICP_vss: Weapon {};
	
	class SUCHsmawE: Weapon {};
	class SUCHsmawLOAD: Weapon {};
	class SUCHrpg16dE: Weapon {};
	class SUCHrpg16d: Weapon {};
	class Suchjavelin: Weapon {};
	class SuchjavelinE: Weapon {};
	
	class mp5: Weapon{};
	class grozasscope: Weapon{};
	class KEGak107: Weapon {};
	class KEGak107_sight: Weapon {};	
	class RFSVUa: Weapon {};
// =======================================TZK 4.0.0 Vehicles=====================================	
	class Veh_Grad: Vehicle {
		sectionsInherit = "Vehicle";
		sections[] = {"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6","tzk_tex_00"};
	};
	class Tank_MultiTex_Base: Tank {
		sectionsInherit = "Tank";
		sections[] = {"tzk_tex_00"};
	};
	class Tank_MultiTex: Tank_MultiTex_Base {
		sectionsInherit = "Tank_MultiTex_Base";
	};
	class Tank_Grad_Base: Tank_MultiTex {
		sections[] = {"TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6"};
	};
	class Tank_Grad: Tank_Grad_Base {
		sectionsInherit = "Tank_Grad_Base";
	};
	class Heli_MultiTex_Base: Helicopter {
		sectionsInherit = "Helicopter";
		sections[] = {"tzk_tex_00"};
	};
	class Heli_MultiTex: Heli_MultiTex_Base {
		sectionsInherit = "Heli_MultiTex_Base";
	};

	class M1A1_TZK: Tank_Grad {
		sections[] = { 
			tex_abrams_kolo.pac, tex_abrams_kolo2.pac, tex_abrams_svetlo.paa, tex_abrams_svetlo_b.paa, tex_m1a1_ammo_box.pac, tex_m1a1_bocek.pac, tex_m1a1_dratram_back.paa, tex_m1a1_dratram_side.paa, tex_m1a1_drtrm_back_b.paa, tex_m1a1_frnt_bck_lod.pac, tex_m1a1_hlaven.pac, tex_m1a1_main_back.pac, tex_m1a1_main_bottom.pac, tex_m1a1_main_front.pac, tex_m1a1_main_side.pac, tex_m1a1_main_top.pac, tex_m1a1_poklop_driver.pac, tex_m1a1_vez_back.pac, tex_m1a1_vez_front.pac, tex_m1a1_vez_hatch.pac, tex_m1a1_vez_side.pac, tex_m1a1_vez_top.pac, tex_m1a1_vymetnice.pac, tex_m60pas.pac, tex_pasy_okolo_uni.pac,
			tex_bmp_kuk2.pac, tex_t72_kolo_kraj.pac, tex_t72_zubkolo_detail.paa, tex_t72_zubkolo_detail2.paa
			, tex_m1a1_hlaven1.pac
		};
	};
	class M1A2_INQ: Tank_MultiTex {
		sections[] = {
			"BS1","BS2","BS3","_mark","_chevron","_for", 
			tex_blampe1.paa, tex_blampe2.paa, tex_box.paa, tex_box2.paa, tex_ca.paa, tex_chabak.paa, tex_chabot.paa, tex_chatop.paa, tex_citv.paa, tex_cws.paa, tex_cws1.paa, tex_dratybk.paa, tex_dratysd.paa, tex_drivhat.paa, tex_green.paa, tex_greendirt.paa, tex_kettea1.paa, tex_kolo1.paa, tex_kolo1a.paa, tex_kolo2.paa, tex_kolo2a.paa, tex_kolop.paa, tex_kolot.paa, tex_ksidin1.paa, tex_ksidin2.paa, tex_ksidl.paa, tex_ksidr.paa, tex_ksidtp.paa, tex_kuk2x2a.paa, tex_mg.paa, tex_mg2.paa, tex_misc1.paa, tex_misc2.paa, tex_misc3.paa, tex_mlamp1.paa, tex_mlamp1b.paa, tex_mlamp2.paa, tex_mlamp2b.paa, tex_turbk.paa, tex_turbot.paa, tex_turcrt.paa, tex_turfr.paa, tex_tursil.paa, tex_tursir.paa, tex_turtop.paa, 
			tex_iff.paa, tex_kbi.paa, tex_tread.paa, tex_treadin.paa, tex_treadmid.paa, tex_treadsid.paa, 
			tex_2418i.paa,tex_3-4-67.paa,tex_4-67.paa,tex_bandits.paa,tex_ch_alpha.paa,tex_ch_char.paa,tex_goaway.paa,tex_skull.paa,tex_spearhead.paa,tex_timetodie.paa,tex_warhorse.paa,tex_warhorse1.paa,tex_warhorse2.paa, 
			tex_netz.paa, tex_netz1.paa
		};
	};
	class Leo2A6: Tank_MultiTex {
		sections[] = {
			"zadni svetlo","Takt_Kp","Takt_Symbol","Takt_Btl_1","Takt_Btl_2","Takt_Btl_3","nr1","nr2","nr3",
			tex_kettes.pac, tex_ketteu.pac, tex_main1.pac, tex_main2.pac, tex_main3.pac, tex_rolle2.pac, tex_rolle2m.pac, tex_rollei.paa, 
			tex_rollea.pac, tex_ketteo.pac, tex_korb.paa, tex_nebelb.pac, tex_bwbl1.pac, tex_bwbl0.paa, tex_bwbl1b.pac, tex_nebelbr.pac, tex_nebelg.pac, tex_periz11.pac, tex_periz11b.pac, tex_urollea.paa, tex_arad.paa, tex_lukerd.pac, tex_bwgruen1.pac
		};
	};

	class T80_TZK: Tank_Grad {
		sections[] = {
			tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_t72_vymetnice.pac, tex_t80_kolo2.pac, tex_tank_04_bck.pac, tex_tank_04_bednyuvalce_.pac, tex_tank_04_frt.pac, tex_tank_04_krabic_back.pac, tex_tank_04_krabic_sidet.pac, tex_tank_04_lauf_frt.pac, tex_tank_04_lauf_top.pac, tex_tank_04_platyzveze_s.pac, tex_tank_04_platyzvozu_t.pac, tex_tank_04_side.pac, tex_tank_04_spod.pac, tex_tank_04_sud_norm.pac, tex_tank_04_sud_side.paa, tex_tank_04_top.pac, tex_tank_04_v_lec_norm.pac, tex_tank_04_v_lec_side.paa, tex_tank_04_vez_bck.pac, tex_tank_04_vez_frt.pac, tex_tank_04_vez_side.pac, tex_tank_04_vez_top.pac, tex_tank_m_02_kanon.pac, tex_tank_m_02_vez_frt.pac, 
			tex_t80_kolo1.pac, tex_tank4_passide.pac, tex_tank_04_detailkanon.pac, tex_tank_04_detailkanon2.pac, tex_tnk04topslo.pac, tex_tank_04_spod_spol.pac, tex_ural_kabok2.pac, tex_t72_kolo3.paa, 
			tex_drat_svetlo_s.paa, tex_t72_com_strop.paa, tex_t72_dri_poklop.paa, tex_t72_hlaven_s.pac, tex_t72_vez_strop.paa, tex_t72_zubkolo_detail.paa, tex_t72_zubkolo_detail2.paa, 
			, tex_t80_stranakol.pac
		};
	};
	class T90_ICP: Tank {
		sectionsInherit = "Vehicle";
		sections[] = {"zasleh", "L svetlo", "P svetlo", "zadni svetlo", "TR", "zak", "dz", "pl", "n1", "n2", "n3", "fire1", "fire2", "fire3", "fire4", "fire5", "fire6",          "rak1", "rak2", "rak3", "rak4", "Flag"};
	};
	class T90ms_mfm: Tank_MultiTex {
		sections[] = {
			"no1", "no2",  "no3", "SignSide", "arena_block", "zadni svetlo", "brzdove svetlo", tex_t90ms_
		};
	};
	class ZTZ99: Tank_MultiTex {
		sections[] = {
			"n1", "n2", "n3"
			, tex_VWCanon1.paa, tex_VWChassis1.paa, tex_VWChassis2.paa, tex_VWChassis3.paa, tex_VWTurret1.paa, tex_VWTurret2.paa, tex_VWTurret3.paa, tex_VWTurret4.paa, tex_VWTurret5.paa, tex_VWTurret6.paa, tex_VWWheel1.paa, tex_Ztz993.paa
		};
	};	

	class M109A6_DKMM: Tank_Grad {
		sections[] = {
			"vlam","clamp", 
			tex_box.paa, tex_pal1.pac, tex_pal2.pac, tex_cog.paa
		};
	};
	class PLZ05: Tank_Grad{
		sections[] = {
			"n1", "n2", "n3", "zhijia"
			, tex_CETI.paa, tex_cetic.paa, tex_CETIh.paa, tex_CETIq.paa, tex_CETIs.paa, tex_ct1.paa, tex_ct2.paa, tex_jing.paa, tex_mi.paa, tex_micai.paa, tex_pao.paa, tex_paota1.paa, tex_paota2.paa, tex_paotac.paa, tex_paotaqh.paa, tex_paotaSd.paa, tex_paott.paa, tex_qb.paa, tex_ROLLEA.pac, tex_ROLLEH.paa, tex_ROLLEV.paa, tex_ROLLEVA.paa, tex_tta.paa, tex_ttt.paa, tex_VWTurret3.paa, tex_VWTurret6.paa, tex_ZSD89_lun.paa, 
		};
	};
	class M270_m29064: Tank_Grad {
		sectionsInherit = "Tank_Grad";
		sections[] = {
			"m01","m02","m03","m04","m05","m06","m07","m08","m09","m10","m11","m12", 
			tex_btex.paa, tex_btex2.paa, tex_cover.paa, tex_down.pac, tex_rwkolo.paa, tex_side_l.paa, tex_side_r.paa, tex_t55zub.paa, tex_t72_3.paa, tex_top.paa
			, tex_dark.paa
		};
	};
	class TOS1_DKMM: M109A6_DKMM {
		sectionsInherit = "Tank_Grad";
		sections[] = {
			"n1", "n2", "n3", "lidF","lidR", "m01","m02","m03","m04","m05","m06","m07","m08","m09","m10","m11","m12","m13","m14","m15","m16","m17","m18","m19","m20","m21","m22","m23","m24","m25","m26","m27","m28","m29","m30"
			,tex_T55_infra.pac,tex_t55_sum.pac
			,tex_pal1.pac,tex_rcog..paa,tex_TOST1.pac,tex_TOST2.pac,tex_tos_1g.paa
		};
	};

	class Mortar81_TZK: Veh_Grad {};
	class M46_DKMM: Tank_Grad {};
	class Mortar_Pack_TZK: Veh_Grad {};
	class m119: Veh_Grad {};
	class d30: Veh_Grad {};

	class A10_TZK: Vehicle {
		sectionsInherit = "Vehicle";
		sections[]= {
			"vrtule", "vrtule 1",
			tex_a10_kridlo_konecek.pac, tex_a10_kridlo_spod.pac, tex_a10_kridlo_top2.pac, tex_a10_motor_bck.pac, tex_a10_motor_frnt1.paa, tex_a10_motor_frt.pac, tex_a10_motor_spodek.pac, tex_a10_motor_top2.pac, tex_a10_motor2.pac, tex_a10_nosic.pac, tex_a10_nosic_spodek.pac, tex_a10_side_a2.pac, tex_a10_side_b2.pac, tex_a10_sop2.pac, tex_a10_trupa_spod.pac, tex_a10_trupa_top2.pac, tex_a10_trupb_spod.pac, tex_a10_trupb_top2.pac, tex_a10_vop_top2.pac, 
		};
	};
	class Su25_TZK: Vehicle {
		sectionsInherit = "Vehicle";
		sections[]= {
			"vrtule", "vrtule 1",
			tex_Su_Kridlo1.pac, tex_Su_Kridlo2.pac, tex_Su_kridlokon.pac, tex_Su_KridloSpod.pac, tex_Su25_detaily.pac, tex_Su25_kulatosti.pac, tex_Su25_motor1.pac, tex_Su25_SOP.pac, tex_Su25_spodek.pac, tex_Su25_strana1.pac, tex_Su25_strana2.pac, tex_Su25_strana3.pac, tex_Su25_VOP.pac, tex_Su25_VOPspod.pac, 
			tex_Su25_kolo++.paa, 
		};
	};
	class V80_TZK: Helicopter {
		sectionsInherit = "Helicopter";
		sections[] = {
			tex_v-80_backwing.pac, tex_v-80_misc2.pac, tex_v-80_test4a.pac, tex_v-80_test4b2.pac, tex_v-80_testbott4b.pac, tex_v-80_testtop4a.pac, tex_v-80_testtop4b.pac, tex_v-80_testwing.pac, tex_v-80_undergun.pac, tex_v-80_wiretoplod.paa, tex_v-80_side1lod.paa, tex_v-80_side2lod.paa, tex_v-80_010.paa
			,tex_v-80_at.pac,tex_v-80_misc1.pac
		};
	};
	class Tiger_RMK_BWMOD: Helicopter {
		sectionsInherit = "Vehicle";
		sections[]= {
			"strobo","strobo2","redlight","whitelight","greenlight","display1","display2","display3","display4","display5","display6","display7","nr1","nr2","badge","numbers","waffen1","waffen2","waffen3","waffen4","velka vrtule staticka","velka vrtule blur","mala vrtule staticka","mala vrtule blur","lsvetlo"
			, tex_seite.pac
			,tex_osiris.pac,tex_teile.pac,tex_wp\rmk30.pac,tex_wp\waffen.pac
			, hot3, pars3
		};
	};
	class Mi17_OWP: Helicopter  {
		sectionsInherit = "Helicopter";
		sections[] = {
			cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight,
			tex_body.pac, tex_decals.paa, tex_special.pac, tex_dop.pac
		};
	};
	class MI24_RHS: Helicopter  {
		sectionsInherit = "Helicopter";
		sections[] = {
			"n1","n2","gearlight","enginelight","fire","fireB","missilelight", 
			tex_mi24_at.pac, tex_mi24_.pac, tex_mi24_fram1.pac, tex_mi24_fram2.pac, tex_mi24_fram3.pac, tex_mi24_fram4.pac, tex_mi24_h1.paa, tex_mi24_p14.paa, tex_mi24_wing1.pac, tex_mi24_wing2.pac, tex_mi24_wing3.pac, 
			tex_mi24_lod2.paa, tex_mi24_lod4.paa, tex_mi24_lod6.pac
		};
	};
	class AH64_mpiv: Helicopter {
		sectionsInherit = "Helicopter";
		sections[] = {
			"sklo predni p", "sklo predni l", "velka vrtule staticka", "velka vrtule blur", "mala vrtule staticka", "mala vrtule blur", "pic_usarmy", "pic_nation", "pic_nation2", "pic_nl", "mfd_pil_1", "mfd_pil_2", "mfd_pil_kl", "mfd_gun_1", "mfd_gun_2", "mfd_gun_kl", "mfd_gun_mid", 
			tex_det.pac, tex_details1.pac, tex_detl_out.pac, tex_down1.pac, tex_side1.pac, tex_side21.pac, tex_side3.pac, tex_side4.pac, tex_side5.pac, tex_up1.pac, tex_up2.pac, tex_up3.pac
		};
	};
	class AH1W_Vit: Helicopter {
		sectionsInherit = "Vehicle";
		sections[]= {
			"n1", "n2", "podsvit pristroju", "sklo predni p", "sklo predni l", "velka vrtule staticka", "velka vrtule blur", "mala vrtule staticka", "mala vrtule blur", "clan", "clan_sign", "miss1", "miss2", 
			tex_bott.pac, tex_chaff.paa, tex_legs.paa, tex_LSide.pac, tex_Marines.paa, tex_MTop1.pac, tex_rotpin.pac, tex_Sside.pac, tex_tab.pac, tex_tab2.pac, tex_WingSide.pac, 
		};
	};

	class UH60A_CSLA2: Helicopter {
		sectionsInherit = "Helicopter";
		sections[]= {
			"cis1","cis2","cis3","cis4","cis5","zasleh2","offline"
			, tex_bottom.pac,tex_front.pac,tex_koloin.pac,tex_koloout.pac,tex_kolopas.pac,tex_kridlo.pac,tex_motor.pac,tex_nadrze.pac,tex_nos.pac,tex_podvozek.pac,tex_posuvokna.pac,tex_rotor.pac,tex_sidea.pac,tex_sideb.pac,tex_topa.pac,tex_valec.pac,tex_zadkolo.pac,tex_zadkridlo.pac
			, tex_all.paa
		};
	};
	class UH60A_CSLA2_M2: UH60A_CSLA2 {};
	class MH6_Bas: Helicopter {
		sectionsInherit = "Vehicle";
		sections[]= {"sklo predni p","sklo predni l","velka vrtule staticka","velka vrtule blur","mala vrtule staticka","mala vrtule blur"};
	};
	class Mi2NO: Helicopter {};

	class Orca95_MCSR: Helicopter {};

	class C130: Vehicle {
		sectionsInherit = "Vehicle";
		sections[]= {
			"cislo", "grupa", "side", "sektor", "clan", "podsvit pristroju", "poskozeni", "L svetlo", "P svetlo", "zasleh", "sklo predni p", "sklo predni l", "vrtule staticka", "vrtule blur"
			, "vrtule", "vrtule 1", "vrtule 2", "vrtule 3"
			, tzk_tex_00
			, tex_Auxtanks.paa, tex_C130fslg.paa, tex_C130PRP1.paa, tex_door.paa, tex_FIN&RDDR.paa, tex_hztlstbl.paa, tex_hztlstbr.paa, tex_nacelles.paa, tex_wingleft.paa, tex_wingrght.paa, 
		};
	};
	class an12: Vehicle {};
	class AN72 : Vehicle {
		sections[] = {"roundel", "num1", "num2", "green_light", "red_light"};
	};
		
	class HMMWV_TZK: Car {
		sectionsInherit = "Car";
		sections[] = {
			tex_hmmwv_frntbck.pac, tex_hmmwv_in_sidlr.pac, tex_hmmwv_in_zadek.pac, tex_hmmwv_kapota.pac, tex_hmmwv_kogif.pac, tex_hmmwv_kolog.pac, tex_hmmwv_predni_sklo.pac, tex_hmmwv_sedacky.pac, tex_hmmwv_sid1.pac, tex_hmmwv_sid2.pac, tex_hmmwv_side_tga.paa, tex_hmmwv_strecha.pac, tex_hmmwv_strecha2.pac, tex_hmmwv_windshield.paa, tex_hmmwv_windshield.pac, tex_mutt_kologi.pac, tex_mutt_koloog.pac, tex_mutt_svetlag.pac, 
		};
	};
	class hmmwv_m2wS_FK_HMMWV: Car {
		sectionsInherit = "Car";
		sections[] = {"sklo predni p","sklo predni l","zadni svetlo","brzdove svetlo","IFF_Hood","IFF_Door1","IFF_Door2","StuffA1","StuffA2","StuffB1","StuffC1","StuffD1","StuffD2","StuffD3","StuffE1"};
	};
	class hmmwv_tow2_FK_HMMWV: hmmwv_m2wS_FK_HMMWV {};
	class hmmwv_tow2_Auto: hmmwv_m2wS_FK_HMMWV {};
	class BRDM_PK_BAS: Car {};
	class BRDM2_MNF: Car {
		sectionsInherit = "Car";
		sections[] = {
			"n1", "n2", "n3", "t1", "t2", "t3", "t4", "emb",  "flag"
		};
	};
	class BRDM2_MNF_Auto: BRDM2_MNF {};
	
	class M113_TZK: Tank {
		sectionsInherit = "Tank";
		sections[] = {
			tzk_tex_00, 
			tex_m60pas.pac, tex_pasy_okolo_uni.pac, tex_m113_kolo.pac, tex_m113_kolo2.pac, tex_m113_svetla_front.pac, tex_m113bottom.pac, tex_m113bottom_lod.pac, tex_m113front.pac, tex_m113greenbedna.pac, tex_m113pasb.pac, tex_m113plat_uni.pac, tex_m113sanita-side_lod.pac, tex_m113sanita-top.pac, tex_m133_newback.pac, tex_m133_newbottom.pac, tex_m133_newfront.pac, tex_m133_newfrontlod.pac, tex_m133_newside.pac, tex_m133_newsideamb.pac, tex_m133_newtop.pac, 
			tex_m133_kanystr.pac, tex_m133_lopata.paa, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t72_kolo_kraj.pac, tex_t72_kolo3.paa, 
		};
	};
	class M113_Ambu_TZK: M113_TZK {
		sectionsInherit = "M113_TZK";
		sections[] = {
			tex_bvp_sanitka_bedna_si.pac, tex_bvp_sanitka_bedna_to.pac, tex_bvp_sanitka_zabr_bck.paa, tex_bvp_sanitka_zabradli.paa, 
			tex_m113krbbok.pac, tex_m113krbfrt.pac, tex_m113sanita-top.pac, tex_m113top.pac, 
		};
	};
	class Vulcan_TZK: M113_TZK {
		sectionsInherit = "M113_TZK";
		sections[] = {
			tex_\vulcan\vulcan_1.pac, tex_\vulcan\vulcan_2.pac, tex_\vulcan\vulcan_3.pac, tex_\vulcan\vulcan_4.pac, tex_\vulcan\vulcan_kolas.pac, tex_\vulcan\vulcan_ku4l.pac, tex_\vulcan\vulcan_kukr.paa, tex_\vulcan\vulcan_kukr.pac, tex_\vulcan\vulcan_kul2.pac, tex_\vulcan\vulcan_kul3.pac, tex_\vulcan\vulcan_newtop.pac, tex_\vulcan\vulcan_side.pac, tex_\vulcan\vulcan1.pac, tex_\vulcan\vulcan2.pac, tex_\vulcan\vulcan4.pac, 
		};
	};
	class M2A2_TZK: Tank_MultiTex {
		sections[] = {
			tex_back.pac, tex_bk.pac, tex_down.pac, tex_dn.pac, tex_opak.pac, tex_opak2.pac, tex_pasbok.pac, tex_pasy.pac, tex_pasy2.pac, tex_sid1a.pac, tex_sid1b.pac, tex_sid2a.pac, tex_sid2b.pac, tex_sida.pac, tex_sidb.pac, tex_svetla.pac, tex_up.pac, tex_upa.pac, tex_upb.pac, tex_upvez.pac, tex_upveza.pac, tex_upvezb.pac, tex_upvezc.pac, tex_upvezd.pac, tex_vezpruh.pac, tex_vez_op.pac, tex_vez_op2.pac, 
			tex_m113_kolo.pac, tex_m113_kolo2.pac, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t72_kolo3.paa, tex_t72_kolo_kraj.pac
		};
	};
	class BMP1_TZK: Tank {
		sectionsInherit = "Tank";
		sections[] = {
			tex_bmp_back.pac, tex_bmp_hlaven.pac, tex_bmp_kolo.pac, tex_bmp_kolo_hn.paa, tex_bmp_kolo_kraj.pac, tex_bmp_kolo_mini.paa, tex_bmp_kolo_zub.paa, tex_bmp_kolo_zub2.paa, tex_bmp_kolo2.pac, tex_bmp_kuk1.pac, tex_bmp_kuk2.pac, tex_bmp_kuk3.pac, tex_bmp_plat_uni.pac, tex_bmp_podlauf_f.pac, tex_bmp_rocketramp.pac, tex_bmp_rocketramp_t.pac, tex_bmp_side.pac,  tex_bmp_side_hi.pac, tex_bmp_sidestrel.paa, tex_bmp_spodek.pac, tex_bmp_stit.pac, tex_bmp_sum.pac, tex_bmp_top.pac, tex_bmp_vez_back.pac, tex_bmp_vez_top.pac, tex_pas_spod_1frame.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_tank_pas.pac, tex_ural_kabok2.pac, 
		};
	};
	class BMP2_TZK: Tank {
		sectionsInherit = "Tank"; 
		sections[] = {
			tex_\bmp2\at6-launcher.pac, tex_\bmp2\bmp2_top.pac, tex_\bmp2\bmp2_vez_back.pac, tex_\bmp2\bmp2_vez_frnt.pac, tex_\bmp2\smoke-prefinal.pac, tex_bmp_back.pac, tex_bmp_kolo.pac, tex_bmp_kolo_hn.paa, tex_bmp_kolo_kraj.pac, tex_bmp_kolo_mini.paa, tex_bmp_kolo_zub.paa, tex_bmp_kolo_zub2.paa, tex_bmp_kuk1.pac, tex_bmp_kuk2.pac, tex_bmp_kuk3.pac, tex_bmp_plat_uni.pac, tex_bmp_side.pac, tex_bmp_side_hi.pac, tex_bmp_sidestrel.paa, tex_bmp_spodek.pac, tex_bmp_stit.pac, tex_bmp_sum.pac, tex_bmp_top.pac, tex_bmp_vez_back.pac, tex_bmp_vez_top.pac, tex_pas_spod_1frame.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_tank_pas.pac, tex_ural_kabok2.pac, 
		};
	};
	class BMP_Ambu_TZK: Tank {
		sectionsInherit = "Tank";
		sections[] = {
			tex_bmp_back.pac, tex_bmp_kolo.pac, tex_bmp_kolo_hn.paa, tex_bmp_kolo_kraj.pac, tex_bmp_kolo_mini.paa, tex_bmp_kolo_zub.paa, tex_bmp_kolo_zub2.paa, tex_bmp_kolo2.pac, tex_bmp_kuk2.pac, tex_bmp_kuk3.pac, tex_bmp_side.pac,  tex_bmp_side_hi.pac, tex_bmp_spodek.pac, tex_bmp_stit.pac, tex_bmp_sum.pac, tex_bmp_top.pac, tex_pas_spod_1frame.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_ural_kabok2.pac, 
			tex_bmp_ambulance_back.pac, tex_bmp_ambulance_sideca.pac, tex_bmp_ambulance_top.pac, 
			tex_bvp_sanitka_bedna_si.pac, tex_bvp_sanitka_bedna_to.pac, tex_bmp_anm.01.pac
		};
	};
	class ZSU_TZK: Tank {
		sectionsInherit = "Tank"; 
		sections[] = {
			tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t72_hlaven_s.pac, tex_ural_kabok2.pac, tex_zsu_back2.pac, tex_zsu_back2_lod.pac, tex_zsu_front2.pac, tex_zsu_front2_lod.pac, tex_zsu_hydra_side.pac, tex_zsu_hydraulika.paa, tex_zsu_kolo_hnac.pac, tex_zsu_kolo_new.pac, tex_zsu_kolo_zuby.pac, tex_zsu_pasy_side2.pac, tex_zsu_plech.pac, tex_zsu_radar_side.pac, tex_zsu_radar_top2.pac, tex_zsu_refl_frt.paa, tex_zsu_side2.pac, tex_zsu_spod.pac, tex_zsu_spod_lod.pac, tex_zsu_top.pac, tex_zsu_vez_pruh.pac, tex_zsu_vez_top.pac, 
		};
	};
	class ZSU_MNF: Tank {
		sectionsInherit = "Tank"; 
		sections[] = {"n1","n2","n3","pod_1","pod_2","pod_3","rot_1","rot_2","rot_3","brevno","radar", 
			tex_1.paa, tex_11.paa, tex_2.paa, tex_3.paa, tex_4.paa, tex_5.paa, tex_6.paa, tex_8.paa, tex_col1.paa, 
			tex_det.paa, tex_far.paa, tex_track.paa, tex_lr\1lr.paa, tex_lr\2lr.paa, tex_lr\3lr.paa, tex_lr\4lr.paa, tex_lr\5lr.paa, tex_lr\6lr.paa, 
			tex_col1.paa, tex_det.paa, tex_far.paa, tex_track.paa, 
		};
	};
	class 2S6C_DKMM: Tank {
		sectionsInherit = "Tank"; 
		sections[] = {
			"vyfuk konec","vyfuk start",
			"radarleft","radarright","radarfold", "n1", "n2", "n3",
			"nav1", "nav2", "nav3", "nav4", "nav5", "ind_hr", "ind_vr", 
			tex_tungt1.paa, tex_tungt2.paa, tex_2s6.paa
		};
	};

	class PCSFjetski: Ship {};
	class PCSFWjetski: Ship {};
	class Jeep_TZK: Car {
		sectionsInherit = "Car";
		sections[] = {
			tex_mutt_backg.pac, tex_mutt_bottom.pac, tex_mutt_frontg.pac, tex_mutt_kapotag.pac, tex_mutt_kolog.pac, tex_mutt_koloog.pac, tex_mutt_palubkmg.pac, tex_mutt_podanteng.pac, tex_mutt_podlahg.pac, tex_mutt_podpaka.pac, tex_mutt_radiog.pac, tex_mutt_sedoperg.pac, tex_mutt_sedsedg.pac, tex_mutt_sideg.pac, tex_mutt_sklog.pac, tex_mutt_trubka.pac, tex_mutt_volant.paa, tex_mutt_pristrtga.paa
			,tex_mutt_plachtag.pac
		};
	};
	class Jeep_MG_TZK: Jeep_TZK {};
	class Truck5t_TZK: Car {
		sectionsInherit = "Car";
		sections[] = {
			tex_5t_kab_detaily1.pac, tex_5t_kab_detaily2.pac, tex_5t_kab_haubna.pac, tex_5t_kab_maska.pac, tex_5t_kab_predek.pac, tex_5t_kab_strana.pac, tex_5t_kab_zadni.pac, tex_5t_kolo_okolo.pac, tex_5t_kolo_predni.pac, tex_5t_kolo_vnitrek.pac, tex_5t_kolo_zadni.pac, tex_5t_plachta_hor.pac, tex_5t_plachta_pre.pac, tex_5t_plachta_str.pac, tex_5t_plachta_zad.pac, tex_5t_pod_bok.pac, tex_5t_pod_odpru.pac, tex_5t_zasterky.pac, tex_truck_kisna_top.pac
		};
	};
	class Truck5tRepair_TZK: Truck5t_TZK {
		sectionsInherit = "Truck5t_TZK";
		sections[] = {
			tex_truck_kis_bck.pac, tex_truck_kis_frnt.pac, tex_truck_kisna_side.pac
		};
	};
	class Truck5tFuel_TZK: Truck5t_TZK {
		sectionsInherit = "Truck5t_TZK";
		sections[] = {
			tex_5t_fuel1.pac, tex_5t_fuel2.pac, tex_truck_cist_front.pac, tex_truck_cist_side.pac, tex_truck_cist_top.pac
		};
	};
	class BRDM_TZK: Car {
		sectionsInherit = "Car";
		sections[] = {
			tex_brmd_detaily.pac, tex_brmd_haubna.pac, tex_brmd_predek1.pac, tex_brmd_predek2.pac, tex_brmd_strana1.pac, tex_brmd_strana2.pac, tex_brmdkolo.paa, tex_brmdkolo.pac, tex_brmdkolo2.pac, tex_brmdkolokolo.pac, tex_brmdsvetla.pac, tex_brmdvrch1.pac, tex_brmdvrch2.pac, tex_brmdzadek.pac
		};
	};
	class UAZ_TZK: Car {
		sectionsInherit = "Car";
		sections[] = {
			tex_jeep_kab_sklo1.paa, tex_jeep_kab_sklo2.paa, tex_jeep_kolo_side.pac, tex_mutt_bottom.pac, tex_mutt_kolog.pac, tex_mutt_koloog.pac, tex_uaz_ige_front.paa, tex_uaz_kapota_top.pac, tex_uaz_zasterka.pac, tex_uazbck.pac, tex_uazfrt.pac, tex_uazkolo.pac, tex_uazside1.pac, tex_uazside2.pac, tex_uaztop.pac
		};
	};
	class Ural_TZK: Car {
		sectionsInherit = "Car";
		sections[] = {
			tex_5t_pod_bok.pac, tex_black_sum.pac, tex_ural_blatniky.pac, tex_ural_blatniky_new.pac, tex_ural_green.pac, tex_ural_kapota_new.pac, tex_ural_kisna_b.pac, tex_ural_kisna_f.pac, tex_ural_kisna_s.pac, tex_ural_kisna_t.pac, tex_ural_kolo.pac, tex_ural_kolo_okolo.pac, tex_ural_kolo_vnitrek.pac, tex_ural_maska_new.pac, tex_ural_nadrz.pac, tex_ural_naraznik_new.pac, tex_ural_opak_new.pac, tex_ural_side_new.pac, tex_ural_skloram2_new.pac, tex_ural_strecha_new.pac, tex_ural_zadek.pac
		};
	};
	class UralRepair_TZK: Ural_TZK {
		sectionsInherit = "Ural_TZK";
		sections[] = {
			tex_ural_repair_bck.pac, tex_ural_repair_frt.pac, tex_ural_repair_side.pac, tex_ural_repair_top.pac
		};
	};
	class UralFuel_TZK: Ural_TZK {
		sectionsInherit = "Ural_TZK";
		sections[] = {
			tex_ural_fuel_side.pac, tex_ural_fuel_top.pac, tex_ural_fuel_zadek.pac
		};
	};

	class M60_TZK: Tank {
		sectionsInherit = "Tank";
		sections[] = {
			tex_abrams_roury_frt.pac, tex_abrams_roury_side.pac, tex_m1a1_hlaven.pac, tex_m60_kolo_strana.pac, tex_m60_lauf.pac, tex_m60_poklop_driver.pac, tex_m60_spoj_tl.pac, tex_m60_t_back.pac, tex_m60_t_front.pac, tex_m60_t_side.pac, tex_m60_t_top.pac, tex_m60_tc_front.pac, tex_m60_tc_side.pac, tex_m60_zadni_rantl.paa, tex_m60hullback.pac, tex_m60hullback2.pac, tex_m60hulldown.pac, tex_m60hulldown2.pac, tex_m60hullfront.pac, tex_m60hullfront2.pac, tex_m60hulltop.pac, tex_m60kolo.paa, tex_m60kolo.pac, tex_m60kolo2.paa, tex_m60kolo2.pac, tex_m60kolo3.pac, tex_m60kolomaly.paa, tex_m60kolozub.paa, tex_m60pas.pac, tex_m60pasb.pac, tex_m60s.pac, tex_pasy_okolo_uni.pac, 
			tex_m60_sidepas.pac
		};
	};
	class M60_120S_TZK: Tank {
		sectionsInherit = "Tank";
		sections[] = {
			tex_bmp_kuk2.pac, 
			tex_m1a1_ammo_box.pac, 
			tex_m1a1_dratram_back.paa, tex_m1a1_dratram_side.paa, tex_m1a1_drtrm_back_b.paa, tex_m1a1_frnt_bck_lod.pac, tex_m1a1_hlaven.pac, tex_m1a1_main_bottom.pac, tex_m1a1_main_front.pac, tex_m1a1_main_side.pac, tex_m1a1_main_top.pac, tex_m1a1_poklop_driver.pac, tex_m1a1_vez_back.pac, tex_m1a1_vez_front.pac, tex_m1a1_vez_hatch.pac, tex_m1a1_vez_side.pac, tex_m1a1_vez_top.pac, 
			tex_m60_kolo_strana.pac, tex_m60_poklop_driver.pac, 
			tex_m60hullback.pac, tex_m60hullback2.pac, tex_m60hulldown.pac, tex_m60hulldown2.pac, tex_m60hullfront.pac, tex_m60hullfront2.pac, tex_m60hulltop.pac, tex_m60kolo.paa, tex_m60kolo.pac, tex_m60kolo2.paa, tex_m60kolo2.pac, tex_m60kolo3.pac, tex_m60kolomaly.paa, tex_m60kolozub.paa, tex_m60pas.pac, tex_m60pasb.pac, tex_m60s.pac, tex_pasy_okolo_uni.pac, 
			tex_m60_sidepas.pac
			, tex_m1a1_hlaven1.pac
		};
	};
	class T72_TZK: Tank {
		sectionsInherit = "Tank";
		sections[] = {
			tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_t72_back.pac, tex_t72_front.pac, tex_t72_hlaven_s.pac, tex_t72_kolo.pac, tex_t72_kolo2.pac, tex_t72_kolo3.paa, tex_t72_pixla.pac, tex_t72_pixla_side.pac, tex_t72_side2.pac, tex_t72_sum.pac, tex_t72_top.pac, tex_t72_vez_back.pac, tex_t72_vez_front.pac, tex_t72_vez_roura.pac, tex_t72_vez_side.pac, tex_t72_vez_top.pac, tex_t72_vymetnice.pac, tex_t72_zubkolo_detail.paa, tex_t72_zubkolo_detail2.paa, tex_t72pasb.pac, tex_tank_03_kanon_frt.pac, tex_tank_04_spod.pac, tex_tank_04_spod_spol.pac, tex_tank_04_sud_norm.pac, tex_tank_04_sud_side.paa, tex_ural_kabok2.pac
		};
	};
	class T55_TZK: Tank {
		sectionsInherit = "Tank";
		sections[] = {
			pruh_FIA, 
			tex_ammobox_top.pac, tex_fueltank_top.pac, tex_pas_spod_1frame.pac, tex_pasy_okolo_uni.pac, tex_t55_bok.pac, tex_t55_kolo1.pac, tex_t55_kolo2.pac, tex_t55_predek.pac, tex_t55_spodek.pac, tex_t55_sum.pac, tex_t55_top.pac, tex_t55_vez_side.pac, tex_t55_zadek.pac, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t55vez_top.pac
			, tex_det_ammobox.pac, tex_t55_hlaven.pac, tex_t55_lauf_f.pac, tex_t55kolpred.paa, tex_t55kolpred2.paa
			, tex_ammobox_side.pac, tex_ammobox1_front.pac, tex_ammobox2_front.pac, tex_det_fueltank.pac, tex_det_zakl_lauf.pac, tex_fueltank_side.pac
		};
	};

	class PP87_TZK: Veh_Grad {};
	class M109A6_CoC: Tank_Grad {};
	class 2s19_CoCHWK: Tank_Grad {
		sectionsInherit = "Tank_Grad";
		sections[]= {
			"cislo",
			"grupa",
			"side",
			"sektor",
			"clan",
			"podsvit pristroju",
			"poskozeni",
			"L svetlo",
			"P svetlo",
			"zasleh",
			"numberfl",
			"numberll",
			"numberlr",
			"numberfr",
			"cammo"
		};
	};
	class Amx10Rc_uiox: Tank_MultiTex {
		sections[] = {	
			"zadni svetlo","brzdove svetlo","pruh",
			"nom","ID","logo","KFOR","Flag"
			, tex_10p_cha.pac, tex_10p_gre.pac, tex_ar1.paa, tex_camo.paa, tex_cots.paa, tex_cul.paa, 
			tex_d1.paa, tex_d2.paa, tex_d3.paa, tex_d4.paa, tex_d5.paa, tex_d6.paa, tex_d7.paa, tex_d8.paa, 
			tex_des.paa, tex_det.paa, tex_det2.paa, tex_ec.paa, tex_epinoir.paa, tex_lg.paa, tex_pan.paa, 
			tex_roue.paa, tex_roues.paa, tex_t1.paa, tex_tav.paa, tex_tconduc.paa, tex_td.paa, 
			tex_tg.paa, tex_tour.paa, tex_viseur.paa, tex_visouv.paa
		};
	};
	class 2S25_mfm: Tank  {
		sectionsInherit = "Vehicle";
		sections[] = {"no1", "no2", "no3","zadni svetlo","brzdove svetlo"};
	};
	class Grkpbv_Coc: Tank  {
		sectionsInherit = "Tank";
		sections[] = {
			"flash1","flash2","flash3","flash4","flash5","flash6", 
			"cislo","grupa","side","sektor","clan","podsvit pristroju","poskozeni","L svetlo","P svetlo","zasleh","zadni svetlo"
			, "tzkGunL00", "tzkGunL01", "tzkGunL02", "tzkGunR00", "tzkGunR01", "tzkGunR02"
		};
	};
	class PLZ89: Tank {
		sectionsInherit = "Tank";
		sections[] = {
			"n1", "n2", "n3"
			, "tzkGun00", "tzkGun01", "tzkGun02", "tzkGun03"
		};
	};

	class m151a1c_htr: Car {
		sectionsInherit="Vehicle";
 		sections[] = {"shell_casing01","shell_projectile01","shell_casing02","shell_projectile02","shell_casing03","shell_projectile03","shell_casing04","shell_projectile04","shell_casing05","shell_projectile05","n1","n2","lever","lock","chambProj","chambCase","frontGlass","zadni svetlo","brzdove svetlo"};
	};
	class uaz_spg_RUS: car {};
};

// EOF