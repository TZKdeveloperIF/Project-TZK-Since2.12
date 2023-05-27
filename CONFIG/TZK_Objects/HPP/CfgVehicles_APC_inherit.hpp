// APC

	class M113_xj400: M113 {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		// model = "\TZK_Model_4_0_0\m113_TZK.p3d";
		model = "\TZK_Model_4_0_3\m113_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_m60pas.pac, tex_pasy_okolo_uni.pac, tex_m113_kolo.pac, tex_m113_kolo2.pac, tex_m113_svetla_front.pac, tex_m113bottom.pac, tex_m113bottom_lod.pac, tex_m113front.pac, tex_m113greenbedna.pac, tex_m113pasb.pac, tex_m113plat_uni.pac, tex_m113sanita-side_lod.pac, tex_m113sanita-top.pac, tex_m133_newback.pac, tex_m133_newbottom.pac, tex_m133_newfront.pac, tex_m133_newfrontlod.pac, tex_m133_newside.pac, tex_m133_newsideamb.pac, tex_m133_newtop.pac, 
			tex_m133_kanystr.pac, tex_m133_lopata.paa, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t72_kolo_kraj.pac, tex_t72_kolo3.paa
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\M113.sqs}";};
	};
/*	class M113_AA_xj400: M113_xj400 {
		// the ability of this unit should keep pace with Vulcan
		armor = 360;
		cost = 1000000;
		icon = "antiAC.paa";
		model = "\TZK_Model_4_0_0\M113_Cannon.p3d";
		displayName = "M113 Cannon";
		irScanRange = 4000;
		irScanGround = 0;
		gunnerCanSee = "4+8+16 +1";
		weapons[] = {"VulcanCannon"};
		magazines[] = {"VulcanCannon"};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"Vehicles\gun_elevate",0.031622775,1.0};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
			minElev = -3;
			maxElev = 70;
			minTurn = -360;
			maxTurn = 360;
		};
		threat[] = {0.5,0.5,1};
		gunnerOpticsModel = "optika_zsu_gunner";
		commanderOpticsModel = "optika_tanke_auxiliary";
		gunnerAction = "ManActVulcanGunner";
		gunnerInAction = "ManActVulcanGunner";
		forceHideGunner = 1;
		viewGunnerInExternal = 1;
		class ReloadAnimations {
			class VulcanCannon {
				weapon = "VulcanCannon";
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
	};	*/
	class BMP_xj400: BMP {
		scope = protected; vehicleClass = "TZK_Units_400";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		model = "\TZK_Model_4_0_0\BMP1_TZK.p3d";
		hiddenSelections[] = {"pruh", tzk_tex_00, 
			tex_bmp_back.pac, tex_bmp_hlaven.pac, tex_bmp_kolo.pac, tex_bmp_kolo_hn.paa, tex_bmp_kolo_kraj.pac, tex_bmp_kolo_mini.paa, tex_bmp_kolo_zub.paa, tex_bmp_kolo_zub2.paa, tex_bmp_kolo2.pac, tex_bmp_kuk1.pac, tex_bmp_kuk2.pac, tex_bmp_kuk3.pac, tex_bmp_plat_uni.pac, tex_bmp_podlauf_f.pac, tex_bmp_rocketramp.pac, tex_bmp_rocketramp_t.pac, tex_bmp_side.pac,  tex_bmp_side_hi.pac, tex_bmp_sidestrel.paa, tex_bmp_spodek.pac, tex_bmp_stit.pac, tex_bmp_sum.pac, tex_bmp_top.pac, tex_bmp_vez_back.pac, tex_bmp_vez_top.pac, tex_pas_spod_1frame.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_tank_pas.pac, tex_ural_kabok2.pac
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\BMP1.sqs}";};
	};

	class M113Ambul_xj400: M113Ambul {
		scope = protected; vehicleClass = "TZK_Units_400";
		class TransportMagazines {};
		attendant = 0;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
		};
		// model = "\TZK_Model_4_0_0\M113_Ambu_TZK.p3d";
		model = "\TZK_Model_4_0_3\M113_Ambu_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_m60pas.pac, tex_pasy_okolo_uni.pac, tex_m113_kolo.pac, tex_m113_kolo2.pac, tex_m113_svetla_front.pac, tex_m113bottom.pac, tex_m113bottom_lod.pac, tex_m113front.pac, tex_m113greenbedna.pac, tex_m113pasb.pac, tex_m113plat_uni.pac, tex_m113sanita-side_lod.pac, tex_m133_newback.pac, tex_m133_newbottom.pac, tex_m133_newfront.pac, tex_m133_newfrontlod.pac, tex_m133_newside.pac, tex_m133_newsideamb.pac, tex_m133_newtop.pac, 
			tex_m133_kanystr.pac, tex_m133_lopata.paa, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t72_kolo_kraj.pac, tex_t72_kolo3.paa
			, tex_bvp_sanitka_bedna_si.pac, tex_bvp_sanitka_bedna_to.pac, tex_bvp_sanitka_zabr_bck.paa, tex_bvp_sanitka_zabradli.paa, 
			tex_m113krbbok.pac, tex_m113krbfrt.pac, tex_m113sanita-top.pac, tex_m113top.pac
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\M113Ambu.sqs}";};
	};
	class MHQW_xj400: M113Ambul_xj400 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName = "Unflip MHQ";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "alive this && siPlayer == si0";
				statement = "[this] exec {Player\Action\UnflipVehicle.sqs}";
			};
			class UnLock {
				displayName = "Unlock MHQ";
				position = "pos driver";
				priority = 4;
				radius = 25;
				condition = "alive this && siPlayer == si0 && isCommander && locked this";
				statement = "[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class Lock {
				displayName = "Lock MHQ";
				position = "pos driver";
				priority = 4;
				radius = 25;
				condition = "alive this && siPlayer == si0 && isCommander && !(locked this)";
				statement = "[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class RepairMHQ {
				displayName = "Repair MHQ";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "siPlayer == si0 && !(alive this)";
				statement = "[this] exec {Player\Action\RepairMHQ.sqs}";
			};
		};
	};
	class MCVW_xj400: M113Ambul_xj400 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName = "Unflip MCV";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "alive this && siPlayer == si0";
				statement = "[this] exec {Player\Action\UnflipVehicle.sqs}";
			};
			class RepairMCV {
				displayName = "Repair MCV";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "siPlayer == si0 && !(alive this)";
				statement = "[this] exec {Player\Action\RepairMCV.sqs}";
			};
		};
	};

	class BMPAmbul_xj400: BMPAmbul {
		scope = protected; vehicleClass = "TZK_Units_400";
		class TransportMagazines {};
		attendant = 0;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
		};
		model = "\TZK_Model_4_0_0\BMP_Ambu_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_bmp_back.pac, tex_bmp_kolo.pac, tex_bmp_kolo_hn.paa, tex_bmp_kolo_kraj.pac, tex_bmp_kolo_mini.paa, tex_bmp_kolo_zub.paa, tex_bmp_kolo_zub2.paa, tex_bmp_kolo2.pac, tex_bmp_kuk2.pac, tex_bmp_kuk3.pac, tex_bmp_side.pac,  tex_bmp_side_hi.pac, tex_bmp_spodek.pac, tex_bmp_stit.pac, tex_bmp_sum.pac, tex_bmp_top.pac, tex_pas_spod_1frame.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_ural_kabok2.pac, 
			tex_bmp_ambulance_back.pac, tex_bmp_ambulance_sideca.pac, tex_bmp_ambulance_top.pac, 
			tex_bvp_sanitka_bedna_si.pac, tex_bvp_sanitka_bedna_to.pac, tex_bmp_anm.01.pac
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\BMPAmbu.sqs}";};
	};
	class MHQE_xj400: BMPAmbul_xj400 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName = "Unflip MHQ";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "alive this && siPlayer == si1";
				statement = "[this] exec {Player\Action\UnflipVehicle.sqs}";
			};
			class UnLock {
				displayName = "Unlock MHQ";
				position = "pos driver";
				priority = 4;
				radius = 25;
				condition = "alive this && siPlayer == si1 && isCommander && locked this";
				statement = "[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class Lock {
				displayName = "Lock MHQ";
				position = "pos driver";
				priority = 4;
				radius = 25;
				condition = "alive this && siPlayer == si1 && isCommander && !(locked this)";
				statement = "[this, !(locked this)] exec {Common\LockVehicle.sqs}";
			};
			class RepairMHQ {
				displayName = "Repair MHQ";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "siPlayer == si1 && !(alive this)";
				statement = "[this] exec {Player\Action\RepairMHQ.sqs}";
			};
		};
	};
	class MCVE_xj400: BMPAmbul_xj400 {
		scope = protected;
		class UserActions {
			class AttachInVehicle : UA_AttachInVehicle_APC {}; class AttachOnFoot : UA_AttachOnFoot_APC {};
			class Unflip {
				displayName = "Unflip MCV";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "alive this && siPlayer == si1";
				statement = "[this] exec {Player\Action\UnflipVehicle.sqs}";
			};
			class RepairMCV {
				displayName = "Repair MCV";
				position = "pos driver";
				priority = 3;
				radius = 25;
				condition = "siPlayer == si1 && !(alive this)";
				statement = "[this] exec {Player\Action\RepairMCV.sqs}";
			};
		};
	};

	class Vulcan_xj400: M113 {
		scope = protected; vehicleClass = "TZK_Units_400";
		displayName = "$STR_DN_VULCAN"; cost = 1000000; threat[] = {0.5,0.5,1};
				
		picture = "\vulcan\ivulcan.paa";
		icon = "antiAC.paa";
		armor = 180;
		irScanRange = 4000; irScanGround = 0; gunnerCanSee = "4+8+16 +1";
		weapons[] = {"VulcanCannon"};
		magazines[] = {"VulcanCannon"};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
			minElev = -3;
			maxElev = 70;
			minTurn = -360;
			maxTurn = 360;
		};
		gunnerOpticsModel = "optika_zsu_gunner";
		commanderOpticsModel = "optika_tanke_auxiliary";
		gunnerAction = "ManActVulcanGunner";
		gunnerInAction = "ManActVulcanGunner";
		forceHideGunner = 1;
		viewGunnerInExternal = 1;
		class ReloadAnimations {
			class VulcanCannon {
				weapon = "VulcanCannon";
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
		transportSoldier = 0;
		model = "\TZK_Model_4_0_0\Vulcan_TZK.p3d"; // Modified to fit multiple texture.
		hiddenSelections[] = {tzk_tex_00, 
			tex_m60pas.pac, tex_pasy_okolo_uni.pac, tex_m113_kolo.pac, tex_m113_kolo2.pac, tex_m113_svetla_front.pac, tex_m113bottom.pac, tex_m113bottom_lod.pac, tex_m113front.pac, tex_m113greenbedna.pac, tex_m113pasb.pac, tex_m113plat_uni.pac, tex_m113sanita-side_lod.pac, tex_m113sanita-top.pac, tex_m133_newback.pac, tex_m133_newbottom.pac, tex_m133_newfront.pac, tex_m133_newfrontlod.pac, tex_m133_newside.pac, tex_m133_newsideamb.pac, tex_m133_newtop.pac, 
			tex_m133_kanystr.pac, tex_m133_lopata.paa, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t72_kolo_kraj.pac, tex_t72_kolo3.paa
			, tex_\vulcan\vulcan_1.pac, tex_\vulcan\vulcan_2.pac, tex_\vulcan\vulcan_3.pac, tex_\vulcan\vulcan_4.pac, tex_\vulcan\vulcan_kolas.pac, tex_\vulcan\vulcan_ku4l.pac, tex_\vulcan\vulcan_kukr.paa, tex_\vulcan\vulcan_kukr.pac, tex_\vulcan\vulcan_kul2.pac, tex_\vulcan\vulcan_kul3.pac, tex_\vulcan\vulcan_newtop.pac, tex_\vulcan\vulcan_side.pac, tex_\vulcan\vulcan1.pac, tex_\vulcan\vulcan2.pac, tex_\vulcan\vulcan4.pac
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\Vulcan.sqs}";};
	};
	class Vulcan_TZK_xj400: Vulcan_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		weapons[] = {"RedTop_26_xj400", "VulcanCannon_xj400"};
		magazines[] = {"RedTop_26_xj400", "VulcanCannon_xj400"};
		transportSoldier = 8;
		class ReloadAnimations {
			class VulcanCannon {
				weapon = "VulcanCannon_xj400";
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

	class Bradley_xj400: M113 {
		// Default M2A2 without CTI setting. Using TZK model to fix its ComTurret and zamerny
		scope = protected; vehicleClass = "TZK_Units_400";
		displayName = "Bradley IFV"; nameSound = "apc"; side = 1; threat[] = {0.5,0.5,1};
		
		model = "\TZK_Model_4_0_0\M2A2.p3d";
		picture = "\m2a2\im2a2.paa";
		canFloat = 0;
		armor = 200;
		
		weapons[] = {Cannon25HE_xj400,MachineGun7_6_xj400,HellfireLauncherM2A2_xj400};
		magazines[] = {Cannon25HE_xj400,MachineGun7_6_xj400,HellfireLauncherM2A2_xj400,HellfireLauncherM2A2_xj400,HellfireLauncherM2A2_xj400,HellfireLauncherM2A2_xj400};
		
		gunnerOpticsModel = "optika_tank_gunner";
		gunnerAction = "ManActM2A2GunnerOut";
		gunnerInAction = "ManActM2A2Gunner";
		driverAction = "ManActM2A2Driver";
		driverInAction = "ManActM2A2Driver";
		commanderAction = "ManActM2A2CommanderOut";
		commanderInAction = "ManActM2A2Commander";
		
		hasCommander = 1; commanderUsesPilotView = 1;
		outGunnerMayFire = 0; forceHideGunner = 0; viewGunnerInExternal = 0;
		transportSoldier = 6;
		class GunClouds: WeaponCloudsMGun {};
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = "OtocVez";
			gun = "OtocHlaven";
			minElev = -4.5;
			maxElev = 74;
			minTurn = -360;
			maxTurn = 360;
		};
		class ComTurret {
			turretAxis = "OsaVelitele";
			gunAxis = "OsaHlavneVelitele";
			soundServo[] = {"Vehicles\gun_elevate",0.00031622773,1.2};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			minElev = -4;
			maxElev = 20;
			minTurn = -360;
			maxTurn = 360;
			body = "OtocVelitele";
			gun = "OtocHlavenVelitele";
		};
		class IndicatorSpeed {
			selection = "ukaz_rychlo";
			axis = "osa_rychlo";
			angle = -270;
			min = 0;
			max = 37;
		};
	};
	class M2A2_xj400: Bradley_xj400 {
		// CTI unit with special adjustment.
		displayName = "M2A2";
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 2; irScanGround = 0;
		gunnerCanSee = "1+4+8+16";
		cost = 200000;
	//	armor = 350;
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		model = "\TZK_Model_4_0_0\M2A2_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_back.pac, tex_bk.pac, tex_down.pac, tex_dn.pac, tex_opak.pac, tex_opak2.pac, tex_pasbok.pac, tex_pasy.pac, tex_pasy2.pac, tex_sid1a.pac, tex_sid1b.pac, tex_sid2a.pac, tex_sid2b.pac, tex_sida.pac, tex_sidb.pac, tex_svetla.pac, tex_up.pac, tex_upa.pac, tex_upb.pac, tex_upvez.pac, tex_upveza.pac, tex_upvezb.pac, tex_upvezc.pac, tex_upvezd.pac, tex_vezpruh.pac, tex_vez_op.pac, tex_vez_op2.pac, 
			tex_m113_kolo.pac, tex_m113_kolo2.pac, tex_t55kolozub.paa, tex_t55kolozub2.paa, tex_t72_kolo3.paa, tex_t72_kolo_kraj.pac
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\M2A2.sqs}";};

	};
	class M2A2_AT_xj400: M2A2_xj400 {
		scope = protected;
		displayName = "M2A2 AT";
		cost = 2000000;
		weapons[] = {ATLauncherTank_xj400, 50calW_xj400};
		magazines[]= {GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400,
		50calW_xj400, 50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400,50calW_xj400};
		threat[] = {1, 1, 0.5};
	};
	class M2A2_AA_xj400: M2A2_xj400 {
		displayName = "M2A2 AA";
		weapons[] = {Stinger_xj400, MachineGun7_6_xj400};
		magazines[] = {Stinger_xj400, Stinger_xj400, Stinger_xj400, Stinger_xj400, Stinger_xj400, Stinger_xj400, Stinger_xj400, Stinger_xj400, MachineGun7_6_xj400};
		threat[] = {1, 0.9, 1};
		minFireTime = 1;
	};
	class M2A2_AA_Town_xj400: M2A2_AA_xj400 {
		scope = protected; vehicleClass = "TZK_Units_400";
		irScanToEyeFactor = 1.5;
		sensitivity = 2; sensitivityEar = 0.015;
	};


	class BMP2_Base_xj400: BMP {
		// Unnecessary to define a basic BMP2, for its model isn't a bug.
		scope = private; vehicleClass = "TZK_Units_400";
		displayName = "$STR_DN_BMP2"; threat[] = {0.5,0.5,1};
		
		model = "\bmp2\bmp2";
		armor = 250;
		weapons[] = {Cannon30_BMP2_xj400,MachineGun7_6_xj400,HellfireLauncherBMP2_xj400};
		magazines[] = {Cannon30HE_BMP2_xj400,Cannon30AP_BMP2_xj400,MachineGun7_6_xj400,HellfireLauncherBMP2_xj400};
		class GunClouds: WeaponCloudsMGun {};
		class Turret {
			gunAxis = OsaHlavne;
			turretAxis = OsaVeze;
			soundServo[] = {"Vehicles\gun_elevate",0.0316228,1};
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			body = OtocVez;
			gun = OtocHlaven;
			minElev = -4.5;
			maxElev = 74;
			minTurn = -360;
			maxTurn = 360;
		};
		class IndicatorSpeed {
			selection = ukaz_rychlo;
			axis = osa_rychlo;
			angle = -320;
			min = 0;
			max = 35;
		};
		transportSoldier = 6;
	};
	class BMP2_xj400: BMP2_Base_xj400 {
		// CTI unit with special adjustment.
		scope = protected;
		irScanRangeMin = 500; irScanRangeMax = 4000; irScanToEyeFactor = 2; irScanGround = 0;
		gunnerCanSee = "1+4+8+16";
	//	armor = 330;
		displayName = "BMP2";
		class UserActions {
			class TransportTurnON : UA_TransportTurnON {}; class TransportTurnOFF : UA_TransportTurnOFF {};
			class EjectOneCargo : UA_EjectOneCargo {}; class EjectAllCargo : UA_EjectAllCargo {};
		};
		model = "\TZK_Model_4_0_0\BMP2_TZK.p3d";
		hiddenSelections[] = {tzk_tex_00, 
			tex_\bmp2\at6-launcher.pac, tex_\bmp2\bmp2_top.pac, tex_\bmp2\bmp2_vez_back.pac, tex_\bmp2\bmp2_vez_frnt.pac, tex_\bmp2\smoke-prefinal.pac, tex_bmp_back.pac, tex_bmp_kolo.pac, tex_bmp_kolo_hn.paa, tex_bmp_kolo_kraj.pac, tex_bmp_kolo_mini.paa, tex_bmp_kolo_zub.paa, tex_bmp_kolo_zub2.paa, tex_bmp_kuk1.pac, tex_bmp_kuk2.pac, tex_bmp_kuk3.pac, tex_bmp_plat_uni.pac, tex_bmp_side.pac, tex_bmp_side_hi.pac, tex_bmp_sidestrel.paa, tex_bmp_spodek.pac, tex_bmp_stit.pac, tex_bmp_sum.pac, tex_bmp_top.pac, tex_bmp_vez_back.pac, tex_bmp_vez_top.pac, tex_pas_spod_1frame.pac, tex_t55_infra.pac, tex_t55_sum.pac, tex_tank_pas.pac, tex_ural_kabok2.pac
			,  tzk_tex_99
		};
		class EventHandlers {Init = "_vehicle = _this select 0; [_vehicle, {C}] exec {\TZK_Objects\Scripts\texture\BMP2.sqs}";};
	};
	class BMP2_AT_xj400: BMP2_xj400 {
		displayName = "BMP2 AT";
		cost = 2000000;
		weapons[] = {ATLauncherTank_xj400, 50calE_xj400};
		magazines[]= {GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400, GuidedAT_APC_xj400,
		50calE_xj400, 50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400,50calE_xj400};
		threat[] = {1, 1, 0.5};
	};
	class BMP2_AA_xj400: BMP2_xj400 {
		displayName = "BMP2 AA";
		weapons[] = {Strela_xj400, MachineGun7_6_xj400};
		magazines[] = {Strela_xj400, Strela_xj400, Strela_xj400, Strela_xj400, Strela_xj400, Strela_xj400, Strela_xj400, Strela_xj400, MachineGun7_6_xj400};
		threat[] = {1, 0.9, 1};
		minFireTime = 1;
	};
	class BMP2_AA_Town_xj400: BMP2_AA_xj400 {
		scope = protected;
		irScanToEyeFactor = 1.5;
		sensitivity = 2; sensitivityEar = 0.015;
	};


	
//EOF