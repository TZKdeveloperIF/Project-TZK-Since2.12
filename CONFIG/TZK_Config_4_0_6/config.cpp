#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define private 0
#define protected 1
#define public 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16
#define CanSeeAll 31

class CfgPatches {
	class TZK_CONFIG_406_Beta01 {
		name = "TZK_CONFIG_406_Beta01";
		author = "IF";
		units[] = {};
		requiredAddons[] = {"TZK_CONFIG_405"}; // IMPORTANT!
		requiredVersion = 1.99;
	};
};


class CfgAmmo {
	#include "TZK_Config_4_0_6\CfgAmmo_0.h"


	#include "TZK_Config_4_0_6\cfgAmmo_aa.h"
	#include "TZK_Config_4_0_6\cfgAmmo_at.h"

	#include "TZK_Config_4_0_6\cfgAmmo_art.h"

	#include "TZK_Config_4_0_6\cfgAmmo_cannon.h"
	#include "TZK_Config_4_0_6\cfgAmmo_mg.h"

	#include "TZK_Config_4_0_6\cfgAmmo_soldier.h"

	#include "TZK_Config_4_0_6\cfgAmmo_tank.h"
};
class CfgWeapons {
	#include "TZK_Config_4_0_6\CfgWeapon_0.h"


	#include "TZK_Config_4_0_6\cfgWeapon_aa.h"
	#include "TZK_Config_4_0_6\cfgWeapon_at.h"

	#include "TZK_Config_4_0_6\cfgWeapon_art.h"

	#include "TZK_Config_4_0_6\cfgWeapon_cannon.h"
	#include "TZK_Config_4_0_6\cfgWeapon_mg.h"

	#include "TZK_Config_4_0_6\cfgWeapon_soldier.h"

	#include "TZK_Config_4_0_6\cfgWeapon_tank.h"
};

#include "TZK_Config_4_0_6\cfgUserActions.h"

class WeaponFireGun {};
class WeaponCloudsGun {};

class CfgVehicles {
	#include "TZK_Config_4_0_6\cfgVehicles_0.h"


	#include "TZK_Config_4_0_6\cfgVehicles_tank.h"
	#include "TZK_Config_4_0_6\cfgVehicles_apc.h"
	#include "TZK_Config_4_0_6\cfgVehicles_art.h"

	#include "TZK_Config_4_0_6\cfgVehicles_car.h"
	#include "TZK_Config_4_0_6\cfgVehicles_ship.h"

	#include "TZK_Config_4_0_6\cfgVehicles_static.h"
	#include "TZK_Config_4_0_6\cfgVehicles_defence.h"

	#include "TZK_Config_4_0_6\cfgVehicles_heli.h"
	#include "TZK_Config_4_0_6\cfgVehicles_plane.h"

	#include "TZK_Config_4_0_6\cfgVehicles_proxy.h"

	#include "TZK_Config_4_0_6\cfgVehicles_soldier.h"
};

class CfgMarkers {
	class UnknownVehicle_Marker_xj400 {};
	class TD_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "TD";
 		icon = "\tzk_texture_4_0_6\ui\uiAmx10rc.paa";
		size = 20;
	};
	class RadarCar_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "RadarCar";
 		icon = "\tzk_texture_4_0_6\ui\uiJeepRadar.paa";
		size = 18;
	};
	class RocketMiner_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "RocketMiner";
		icon = "\tzk_texture_4_0_6\ui\uiSa13.paa";
		size = 20;
	};
	class EngineerVeh_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "EngineerVeh";
		icon = "\tzk_texture_4_0_6\m88\m88icon.paa";
		size = 18;
	};
	class AtCar_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "AtCar";
		icon = "\tzk_texture_4_0_6\ui\uiUazSpg.paa";
		size = 16;
	};
	class LST_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "LST";
		icon = "\tzk_texture_4_0_6\ui\uiLst.paa";
		size = 28;
	};
	class Orca_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "Orca";
		icon ="\tzk_texture_4_0_6\ui\uiOrca95.paa";
		size = 18;
	};
	class SmallHeli_Marker_xj400: UnknownVehicle_Marker_xj400 {
		name = "SmallHeli";
		icon = "\tzk_texture_4_0_6\ui\uiMi2.paa";
		size = 28;
	};
};

class CfgNonAIVehicles {
	class ProxyCrew {};
	class ProxyDriver: ProxyCrew {};
	class ProxyGunner: ProxyCrew {};
	class ProxyCommander: ProxyCrew {};

	class ProxyOFrPAMX10RCDriver: ProxyDriver {};
	class ProxyOFrPAMX10RCDriverOut: ProxyDriver {};
	class ProxyOFrPAMX10RCGunner: ProxyGunner {};
	class ProxyOFrPAMX10RCGunnerOut: ProxyGunner {};
	class ProxyOFrPAMX10RCCommander: ProxyCommander {};
	class ProxyOFrPAMX10RCCommanderOut: ProxyCommander {};

	class ProxyMCSR_OrcaPilot: Proxydriver {};
};

class CfgVehicleActions {
	OFrPAMX10RCDriver = "OFrPAMX10RCDriver";
	OFrPAMX10RCGunner = "OFrPAMX10RCGunner";
	OFrPAMX10RCCommander = "OFrPAMX10RCCommander";
	OFrPAMX10RCDriverOut = "OFrPAMX10RCDriverOut";
	OFrPAMX10RCGunnerOut = "OFrPAMX10RCGunnerOut";
	OFrPAMX10RCCommanderOut = "OFrPAMX10RCCommanderOut";

	HTRM151ACGunner = "BIS_CrouchToWeapon";
	FDFCrouch2 = "BIS_CrouchToWeapon";

	SFP_ssg120driver = "SFP_ssg120driver";
	SFP_ssg120driverout = "SFP_ssg120driverout";
	SFP_ssg120gunner = "SFP_ssg120gunner";
	SFP_ssg120gunnerout = "SFP_ssg120gunnerout";
	SFP_ssg120commander = "SFP_ssg120commander";
	SFP_ssg120commanderout = "SFP_ssg120commanderout";

	MCSR_OrcaPilot="MCSR_OrcaPilot";

	BAS_MH60Gunner = "BAS_MH60Gunner";

	UNA_MK19gl_Gunner = "UNA_MK19gl_static";

	ICP_Mgunner="ICP_Mgunner";

	UpLying = "BinocLying";

	m88MgGunner = "m88MgGunner";
	m88Commander = "m88Commander";
	m88Driver = "m88Driver";
	bremgunner = "bremgunner";
	bremcommander = "bremcommander";
	bremgunner02 = "bremgunner02";
};
class CfgMovesMC_xj400 {
	class Default {};
	class DefaultDie: Default {};
	class StandBase: Default {};
	class States {
		class Driver: Default {};
		class Gunner: Driver {};
		class Commander: Driver {};
		class Cargo: Driver {};

		// --------------------------- BIS OFP ------------------------------
		class BIS_CrouchToWeapon: Default {
			actions = "WeaponActions";
			file = "klekdoAT.rtm";
			speed = -2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"Weapon",1};
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};

		// --------------------------- AMX10RC -------------------------------

		class OFrPAMX10RCDriver: Driver {
			file = "\TZK_Anims_4_0_6\AMX10RC_driver.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCDriverDying",1};
			interpolateTo[] = {"OFrPAMX10RCDriverDying",0.100000};
		};
		class OFrPAMX10RCDriverDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_driver_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCDriver",1};
		};
		class OFrPAMX10RCDriverDead: OFrPAMX10RCDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_driver_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class OFrPAMX10RCDriverOut: Driver {
			file = "\TZK_Anims_4_0_6\AMX10RC_driver_Out.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCDriverOutDying",1};
			interpolateTo[] = {"OFrPAMX10RCDriverOutDying",0.100000};
		};
		class OFrPAMX10RCDriverOutDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_driver_Out_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCDriverOut",1};
		};
		class OFrPAMX10RCDriverOutDead: OFrPAMX10RCDriverOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_driver_Out_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCDriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};

		class OFrPAMX10RCDriverOutForward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Anims_4_0_6\AMX10RC_Driver_out_forward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCDriverOutDying",0.1,"OFrPAMX10RCDriverOutDying",0.1};
		};
		class OFrPAMX10RCDriverOutBackward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Anims_4_0_6\AMX10RC_Driver_out_backward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCDriverOutDying",0.1,"OFrPAMX10RCDriverOutDying",0.1};
		};
		class OFrPAMX10RCGunner: Gunner {
			file = "\TZK_Anims_4_0_6\AMX10RC_gunner.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCGunnerDying",1};
			interpolateTo[] = {"OFrPAMX10RCGunnerDying",0.100000};
		};

		class OFrPAMX10RCGunnerDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_gunner_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCGunner",1};
		};
		class OFrPAMX10RCGunnerDead: OFrPAMX10RCGunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_gunner_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class OFrPAMX10RCGunnerOut: Gunner {
			file = "\TZK_Anims_4_0_6\AMX10RC_Gunner_out.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCGunnerOutDying",1};
			interpolateTo[] = {"OFrPAMX10RCGunnerOutDying",0.100000};
		};

		class OFrPAMX10RCGunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_Gunner_out_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCGunnerOut",1};
		};
		class OFrPAMX10RCGunnerOutDead: OFrPAMX10RCGunnerOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_Gunner_out_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCGunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};

		class OFrPAMX10RCGunnerOutForward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Anims_4_0_6\AMX10RC_Gunner_out_forward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCGunnerOutDying",0.1,"OFrPAMX10RCGunnerOutDying",0.1};
		};
		class OFrPAMX10RCGunnerOutBackward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Anims_4_0_6\AMX10RC_Gunner_out_backward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCGunnerOutDying",0.1,"OFrPAMX10RCGunnerOutDying",0.1};
		};
		class OFrPAMX10RCCommander: Commander {
			file = "\TZK_Anims_4_0_6\AMX10RC_Commander.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCCommanderDying",1};
			interpolateTo[] = {"OFrPAMX10RCCommanderDying",0.100000};
		};
		class OFrPAMX10RCCommanderDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_Commander_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCCommander",1};
		};
		class OFrPAMX10RCCommanderDead: OFrPAMX10RCCommanderDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_Commander_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCCommanderDying",1};
			connectTo[] = {"DeadState",1};
		};
		class OFrPAMX10RCCommanderOut: Commander {
			file = "\TZK_Anims_4_0_6\AMX10RC_Commander_out.rtm";
			speed = -10.000000;
			looped = 1;
			connectTo[] = {"OFrPAMX10RCCommanderOutDying",1};
			interpolateTo[] = {"OFrPAMX10RCCommanderOutDying",0.100000};
		};
		class OFrPAMX10RCCommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_Commander_out_dead.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"OFrPAMX10RCCommanderOut",1};
		};
		class OFrPAMX10RCCommanderOutDead: OFrPAMX10RCCommanderOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_6\AMX10RC_Commander_out_dead_stat.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"OFrPAMX10RCCommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};

		class OFrPAMX10RCCommanderOutForward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Anims_4_0_6\AMX10RC_Commander_out_forward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCCommanderOutDying",0.1,"OFrPAMX10RCCommanderOutDying",0.1};
		};
		class OFrPAMX10RCCommanderOutBackward: StandBase {
			actions = StandSaluteActions;
			file = "\TZK_Anims_4_0_6\AMX10RC_Commander_out_backward.rtm";
			speed = -0.75
			looped = false;
			soundEnabled = false;
			connectFrom[] = {Stand,1};
			interpolationSpeed = 0.1;
			interpolateTo[] = {"OFrPAMX10RCCommanderOutDying",0.1,"OFrPAMX10RCCommanderOutDying",0.1};
		};

		// --------------------------- Grkpbv -------------------------------

		class SFP_ssg120driver: StandBase {
			actions = StandActions;
			file = "\TZK_Anims_4_0_6\strf90_driver.rtm";
			speed = SPEED_STATIC;
			looped = 1
			soundEnabled = 0
			variantAfter[] = {1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo = HandGunStand;
		};
		class SFP_ssg120driverout: StandBase {
			actions = StandActions;
			file = "\TZK_Anims_4_0_6\strf90_driverout.rtm";
			speed = SPEED_STATIC;
			looped = 1
			soundEnabled = 0
			variantAfter[] = {1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo = HandGunStand;
		};
		class SFP_ssg120gunner: StandBase {
			actions = StandActions;
			file = "\TZK_Anims_4_0_6\strf90_gunner.rtm";
			speed = SPEED_STATIC;
			looped = 1
			soundEnabled = 0
			variantAfter[] = {1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo = HandGunStand;
		};
		class SFP_ssg120gunnerout: StandBase {
			actions = StandActions;
			file = "\TZK_Anims_4_0_6\strf90_gunnerout.rtm";
			speed = SPEED_STATIC;
			looped = 1
			soundEnabled = 0
			variantAfter[] = {1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo = HandGunStand;
		};
		class SFP_ssg120commander: StandBase {
			actions = StandActions;
			file = "\TZK_Anims_4_0_6\strf90_commander.rtm";
			speed = SPEED_STATIC;
			looped = 1
			soundEnabled = 0
			variantAfter[] = {1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo = HandGunStand;
		};
		class SFP_ssg120commanderout: StandBase {
			actions = StandActions;
			file = "\TZK_Anims_4_0_6\strf90_commanderout.rtm";
			speed = SPEED_STATIC;
			looped = 1
			soundEnabled = 0
			variantAfter[] = {1,3,6};
			variantsAI[]={HandGunStandVar2,0.700000,HandGunStand,0.300000};
			equivalentTo = HandGunStand;
		};

		// --------------------------- Orca95 -------------------------------

		class MCSR_OrcaPilot: Driver {
			file = "\TZK_Anims_4_0_6\OrcaPilot.rtm";
			speed = 10000000000;
			looped = 1;
			equivalentTo = "MCSR_OrcaPilot";
			interpolationSpeed = 1;
			connectTo[] = {"MCSR_OrcaPilotDying", 1};
		};
		class MCSR_OrcaPilotDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_6\OrcaPilotDying.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"MCSR_OrcaPilot", 1};
		};
		class MCSR_OrcaPilotDead: MCSR_OrcaPilotDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_6\OrcaPilotDead.rtm";
			speed = 10000000000.000000;
			terminal = 1;
			connectFrom[] = {"MCSR_OrcaPilotDying", 1};
			connectTo[] = {"DeadState", 1};
		};

		// --------------------------- Bas Mah60 -------------------------------

		#define VEH_DIE_CONN(Name,anim,time) \
			class Name##Dying: DefaultDie \
			{ \
				actions = NoActions; \
				file=anim##smrt.rtm; \
				speed=-time; \
				looped=false; \
				soundEnabled=false; \
				connectFrom[]={Name,1}; \
			}; \
			class Name##Dead: Name##Dying \
			{ \
				actions = DeadActions; \
				file=anim##smrt2.rtm; \
				speed = SPEED_STATIC; \
				terminal = true; \
				connectFrom[]={Name##Dying,1}; \
				connectTo[]={DeadState,1}; \
			}
		#define VEHIN_MOVES_VAR(Name,anim,vartime) \
			class Name: Driver \
			{ \
				file=anim##stat.rtm; \
				speed = SPEED_STATIC; \
				looped=true; \
				variantsAI[]= {Name##V1,0.7,Name};\
				interpolateWith[]={Name##V1,0.5};\
				equivalentTo=Name; \
				interpolationSpeed=1; \
				connectTo[]={Name##Dying,1}; \
			} \
			class Name##V1: Name \
			{ \
				file=anim.rtm; \
				speed=-vartime; \
				looped=true; \
			}
		#define VEH_MOVES_VAR(Name,anim,time,vartime) \
			VEHIN_MOVES_VAR(Name,anim,vartime); \
			VEH_DIE_CONN(Name,anim,time)

		VEH_MOVES_VAR(bas_mh60gunner, \TZK_Anims_4_0_6\bas_mh60gunner, 0.5, 12);

		// --------------------------- UNA Static -------------------------------
		class UNA_MK19gl_Static: Gunner {
			file = "\TZK_Anims_4_0_6\MK19gl_Gunner.rtm";
			speed = 10000000000.000000;
			looped = 1
		};

		// --------------------------- ICP MGun -------------------------------
		class ICP_Mgunner: StandBase {
			actions = StandActions;
			file = "\TZK_Anims_4_0_6\NSVGunner.rtm";
			speed = SPEED_STATIC;
			looped = 1
			soundEnabled = 0
			variantAfter[] = {1,3,6};
			variantsAI[] = {HandGunStandVar2,.700000,HandGunStand,.300000};
			equivalentTo = HandGunStand;
		};

		// --------------------------- M88 -------------------------------
		class M88MGGunner: Driver {
			file = "\TZK_Anims_4_0_6\M88GUNNER.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M88MGGunnerV1",0.7,"M88MGGunner"};
			interpolateWith[] = {"M88MGGunnerV1",0.5};
			equivalentTo = "M88MGGunner";
			interpolationSpeed = 1;
			connectTo[] = {"M88MGGunnerDying",1};
		};
		class M88MGGunnerV1: M88MGGunner {
			file = "\TZK_Anims_4_0_6\M88GUNNER.rtm";
			speed = "- 4";
			looped = 1;
		};
		class M88MGGunnerDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_6\vulcangunnersmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M88MGGunner",1};
		};

		class M88MGGunnerDead: M88MGGunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_6\vulcangunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"M88MGGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};

		class m88driver: Driver {
			file = "\TZK_Anims_4_0_6\m88driver.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"m88driverV1",0.7,"m88driver"};
			interpolateWith[] = {"m88driverV1",0.5};
			equivalentTo = "m88driver";
			interpolationSpeed = 1;
		};
		class m88driverV1: m88driver {
			file = "\TZK_Anims_4_0_6\m88driver.rtm";
			speed = "- 4";
			looped = 1;
		};

		class m88commander: Driver {
			file = "\TZK_Anims_4_0_6\m88commander.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"m88commanderV1",0.7,"m88commander"};
			interpolateWith[] = {"m88commanderV1",0.5};
			equivalentTo = "m88commander";
			interpolationSpeed = 1;
		};
		class m88commanderV1: m88commander {
			file = "\TZK_Anims_4_0_6\m88commander.rtm";
			speed = "- 4";
			looped = 1;
		};
		// --------------------------- BREM-1 -------------------------------
		class bremgunner: Driver {
			file = "\TZK_Anims_4_0_6\bremgunner.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"bremgunnerV1",0.7,"bremgunner"};
			interpolateWith[] = {"bremgunnerV1",0.5};
			equivalentTo = "bremgunner";
			interpolationSpeed = 1;
		};
		class bremgunnerV1: bremgunner {
			file = "\TZK_Anims_4_0_6\bremgunner.rtm";
			speed = "- 4";
			looped = 1;
		};
		class bremcommander: Driver {
			file = "\TZK_Anims_4_0_6\bremcommander.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"bremcommanderV1",0.7,"bremcommander"};
			interpolateWith[] = {"bremcommanderV1",0.5};
			equivalentTo = "bremcommander";
			interpolationSpeed = 1;
		};
		class bremcommanderV1: bremcommander {
			file = "\TZK_Anims_4_0_6\bremcommander.rtm";
			speed = "- 4";
			looped = 1;
		};
		class bremgunner02: Driver {
			file = "\TZK_Anims_4_0_6\bremgunner02.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"bremgunner02V1",0.7,"bremgunner02"};
			interpolateWith[] = {"bremgunner02V1",0.5};
			equivalentTo = "bremgunner02";
			interpolationSpeed = 1;
			connectTo[] = {"bremgunner02Dying",1};
		};
		class bremgunner02V1: bremgunner02 {
			file = "\TZK_Anims_4_0_6\bremgunner02.rtm";
			speed = -4;
			looped = 1;
		};
		class bremgunner02Dying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_6\bremgunner02Dying.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"bremgunner02",1};
		};
		class bremgunner02Dead: bremgunner02Dying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_6\bremgunner02Dead.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"bremgunner02Dying",1};
			connectTo[] = {"DeadState",1};
		};
	};
};

// EOF