class CfgVehicleActions {
	
	CWKZodiacDriverA_xj400 = "CWKZodiacDriverA_xj400";
	
	BWMODLeo2A6drv = "BWMODLeo2A6drv";
	BWMODLeo2A6drvout = "BWMODLeo2A6drvout";
	BWMODLeo2A6gun = "BWMODLeo2A6gun";
	BWMODLeo2A6cmd = "BWMODLeo2A6cmd";
	BWMODLeo2A6cmdout = "BWMODLeo2A6cmdout";
	
	m1a1gunnerout = "m1a1commanderout";
	m1a2commanderout = "m113gunner";
	
	BWMOD_TigerPilot= "BWMOD_Tigerpilot";
	BWMOD_TigerGunner= "BWMOD_TigerGunner";
	
	// This part, using original OFP anim files, should better named with _xj400 postfix. Default anims used by TZK like ww4 might modify them.
	Gunner_Crouch = "Crouch";
	Gunner_SitDown = "EffectStandSitDown";
	// Suppport files for MNF_Vehicles
	ven_brdm2_driver = "ven_brdm2_driver";
	ven_brdm2_driverV1 = "ven_brdm2_driverV1";
	ven_brdm2_driverDead = "ven_brdm2_driverDead";
	ven_brdm2_driverDying = "ven_brdm2_driverDying";

	ven_brdm2_gunner = "ven_brdm2_gunner";
	ven_brdm2_gunnerV1 = "ven_brdm2_gunnerV1";
	ven_brdm2_gunnerDead = "ven_brdm2_gunnerDead";
	ven_brdm2_gunnerDying = "ven_brdm2_gunnerDying";
	
	ven_brdm2_codriver = "ven_brdm2_codriver";
	ven_brdm2_codriverV1 = "ven_brdm2_codriverV1";
	ven_brdm2_codriverDead = "ven_brdm2_codriverDead";
	ven_brdm2_codriverDying = "ven_brdm2_codriverDying";
	
	BAS_RUSGunner = "BAS_RUSGunner";
	
	HmmwvGunner01 = "HmmwvGunner01";
	HmmwvGunner02 = "HmmwvGunner02";
	HmmwvCargo01 = "HmmwvCargo01";
	HmmwvCargo02 = "HmmwvCargo02";
	HmmwvCargo03 = "HmmwvCargo03";
	HmmwvCargo04 = "HmmwvCargo04";
	HmmwvCargo05 = "HmmwvCargo05";
	
	RUS_ZSUCommander = "RUS_ZSUCommander";
	RUS_ZSUCommanderOut = "RUS_ZSUCommanderOut";
	RUS_ZSUproxy1 = "RUS_ZSUproxy1";
	RUS_ZSUproxy2 = "RUS_ZSUproxy2";
	RUS_ZSUproxy3 = "RUS_ZSUproxy3";
	RUS_ZSUproxy4 = "RUS_ZSUproxy4";
};

// class CfgMovesMC {};
// Since TZK_4.0.0, the BIN\CONFIG remain unchanged CfgMovesMC and add another CfgMovesMC_xj400 for most soldiers animations. Thus in AddOns (here) the CfgMovesMC should keep as original as well.
// On July 24th, 2020, CfgMovesMC_xj400 is removed from BIN\CONFIG and defined here.

class CfgManActions {};
class CfgMovesMC_xj400 {
	access = 1;
	vehicleActions = "CfgVehicleActions";
	transitionsInterpolated[] = {};
	transitionsSimple[] = {"Lying","LyingDying",1,"LyingDying","LyingDead",1,"CivilLying","CivilLyingDying",1,"CivilLyingDying","CivilLyingDead",1,"Stand","StandDying",1,"StandDying","StandDead",1,"Stand","StandDyingVer2",1,"StandDyingVer2","StandDeadVer2",1,"Weapon","WeaponDying",1,"WeaponDying","WeaponDead",1,"Weapon","WeaponDyingVer2",1,"WeaponDyingVer2","WeaponDeadVer2",1,"Cargo","CargoDying",1,"CargoDying","CargoDead",1,"Combat","CombatToWeapon",2,"CombatToWeapon","Weapon",2,"Lying","LyingToWeapon",2,"LyingToWeapon","Weapon",2,"Weapon","WeaponToLying",2,"WeaponToLying","Lying",2,"Combat","CombatReloadMagazine",2,"CombatReloadMagazine","Combat",2,"Combat","CombatReloadMGun",2,"CombatReloadMGun","Combat",2,"Combat","CombatReloadMortarStart",2,"CombatReloadMortarStart","CombatReloadMortarEnd",2,"CombatReloadMortarEnd","Combat",2,"Combat","CombatThrowGrenadeStart",2,"CombatThrowGrenadeStart","CombatThrowGrenadeEnd",2,"CombatThrowGrenadeEnd","Combat",2,"Stand","StandThrowGrenadeStart",2,"StandThrowGrenadeStart","StandThrowGrenadeEnd",2,"StandThrowGrenadeEnd","Stand",2,"Civil","CivilThrowGrenadeStart",2,"CivilThrowGrenadeStart","CivilThrowGrenadeEnd",2,"CivilThrowGrenadeEnd","Civil",2,"Lying","LyingThrowGrenadeStart",2,"LyingThrowGrenadeStart","LyingThrowGrenadeEnd",2,"LyingThrowGrenadeEnd","Lying",2,"CombatRunF","CombatRunThrowGrenadeStart",2,"CombatRunThrowGrenadeStart","CombatRunThrowGrenadeEnd",2,"CombatRunThrowGrenadeEnd","Combat",2,"CivilRunF","CivilRunThrowGrenadeStart",2,"CivilRunThrowGrenadeStart","CivilRunThrowGrenadeEnd",2,"CivilRunThrowGrenadeEnd","Civil",2,"Lying","LyingReloadMagazine",2,"LyingReloadMagazine","Lying",2,"Combat","CombatToBinoc",2,"CombatToBinoc","Binoc",2,"Binoc","BinocToCombat",2,"BinocToCombat","Combat",2,"Lying","LyingToBinocLying",2,"LyingToBinocLying","BinocLying",2,"BinocLying","BinocLyingToLying",2,"BinocLyingToLying","Lying",2,"Weapon","WeaponReloadAT",2,"WeaponReloadAT","Weapon",2,"Stand","StandToCombat",1,"StandToCombat","Combat",1,"Combat","CombatToStand",1,"CombatToStand","Stand",1,"Lying","LyingToCombat",1.2,"LyingToCombat","Combat",1.2,"Combat","CombatToLying",1,"CombatToLying","Lying",1,"CombatRunF","CombatRunFToLying",1,"CombatRunFToLying","Lying",1,"Lying","LyingToCombatRun",1,"LyingToCombatRun","CombatRunF",1,"Civil","CivilToCivilLying",1.2,"CivilToCivilLying","CivilLying",1.2,"CivilLying","CivilLyingToCivil",1.2,"CivilLyingToCivil","Civil",1.2,"Combat","CombatGetInCar",1,"CombatGetInCar","Combat",1,"Combat","CombatGetInTank",1,"CombatGetInTank","Combat",1,"CombatGetOutTank","Combat",1,"Civil","CivilGetInCar",1,"CivilGetInCar","Civil",1,"Civil","CivilGetInTank",1,"CivilGetInTank","Civil",1,"CivilGetOutTank","Civil",1,"Stand","StandGetInCar",1,"StandGetInCar","Stand",1,"Stand","StandGetInTank",1,"StandGetInTank","Stand",1,"StandGetOutTank","Stand",1,"Stand","StandToSitDown",1,"StandToSitDown","EffectStandSitDown",1,"EffectStandSitDown","SitDownToStand",1,"SitDownToStand","Stand",1,"EffectStandSitDown","SitDownDying",1,"SitDownDying","SitDownDead",1,"CombatDead","DeadState",10,"CombatDeadVer2","DeadState",10,"StandDead","DeadState",10,"StandDeadVer2","DeadState",10,"LyingDead","DeadState",10,"CivilLyingDead","DeadState",10,"WeaponDead","DeadState",10,"WeaponDeadVer2","DeadState",10,"SitDownDead","DeadState",10,"Crouch","CrouchThrowGrenadeStart",2,"CrouchThrowGrenadeStart","CrouchThrowGrenadeEnd",2,"CrouchThrowGrenadeEnd","Crouch",2,"Weapon","WeaponToATBinoc",2,"WeaponToATBinoc","ATBinoc",2,"ATBinoc","ATBinocToWeapon",2,"ATBinocToWeapon","Weapon",2,"Weapon","WeaponToWeaponLying",2,"WeaponToWeaponLying","WeaponLying",2,"WeaponLying","WeaponLyingToWeapon","WeaponLyingToWeapon","Weapon",2,"Weapon","WeaponToWeaponCrouching",2,"WeaponToWeaponCrouching","WeaponCrouching",2,"WeaponCrouching","WeaponCrouchingToWeapon","WeaponCrouchingToWeapon","Weapon",2,"Combat","MoveOver",1,"MoveOver","Combat",1,"Civil","MoveOverC1",1,"MoveOverC1","Civil",1,"Stand","MoveOver2",1,"MoveOver2","Stand",1,"CombatSprintF","CombatSprintFToLying",1,"CombatSprintFToLying","Lying",1,"CrouchWalkF","CrouchWalkFToLying",1,"CrouchWalkFToLying","Lying",1,"CrouchSprintF","CrouchtSprintFToLying",1,"CrouchSprintFToLying","Lying",1,"Stand","MoveOverRifle",1,"MoveOverRifle","Stand",1,"HandGunCivil","StandToSitDown",1,"StandToSitDown","EffectStandSitDown",1,"EffectStandSitDown","SitDownToStand",1,"SitDownToStand","HandGunCivil",1};
	transitionsDisabled[] = {};
	class Actions {
		class NoActionsAll:CfgManActions {
			access = 3;
		};
		class NoActions:NoActionsAll {
			ladderOnDown = "LadderDownStart";
			ladderOnUp = "LadderUpStart";
			turnSpeed = 1;
			upDegree = -1;
			limitFast = 5;
		};
		class DeadActions:NoActions {
			upDegree = manposdead;
		};
		class CargoActions:NoActions {
			die = "DeadState";
		};
		class M2CargoActions:CargoActions {
			die = "M2GunnerDead";
		};
//handgunstart
		class HandGunCrouchActions:NoActions {
			turnspeed = 5;
			stop = "HandGunCrouch";
			down = "HandGunLying";
			up = "HandGunStand";
			reloadMagazine = "HandGunCrouchReloadMagazine";
			throwGrenade = "HandGunStandThrowGrenade1";
			lying = "Lying";
			civilLying = "CivilLying";
			crouch = "Crouch";
			combat = "Combat";
			stand = "HandGunCivil";
			civil = "Civil";
			die = "HandGunCrouchDead";
			handGunOn = "HandGunCrouch";
			weaponOn = "Weapon";
			binocOn = "BinocHandGunCrouch";
			binocOff = "HandGunCrouch";
			medic = "HandGunMedic";
			putDown = "HandGunCrouchPutDown";
			takeFlag = "HandGunStandToHandGunTakeFlag";
			treated = "HandGunTreated";
			walkF = "HandGunCrouchWalkF";
			walkLF = "HandGunCrouchWalkLF";
			walkRF = "HandGunCrouchWalkRF";
			walkL = "HandGunCrouchWalkL";
			walkR = "HandGunCrouchWalkR";
			walkLB = "HandGunCrouchWalkLB";
			walkRB = "HandGunCrouchWalkRB";
			walkB = "HandGunCrouchWalkB";
			slowF = "APCrouchRunF";
			slowLF = "APCrouchRunLF";
			slowRF = "APCrouchRunRF";
			slowL = "APCrouchRunL";
			slowR = "APCrouchRunR";
			slowLB = "HandGunCrouchWalkLB";
			slowRB = "HandGunCrouchWalkRB";
			slowB = "HandGunCrouchWalkB";
			fastF = "HandGunCrouchRunF";
			fastLF = "HandGunCrouchRunLF";
			fastRF = "HandGunCrouchRunRF";
			fastL = "WW4pCrouchLeanLeft";
			fastR = "WW4pCrouchLeanRight";
			fastLB = "HandGunCrouchRunLB";
			fastRB = "HandGunCrouchRunRB";
			fastB = "HandGunCrouchRunB";
			turnL = "HandGunCrouchTurnL";
			turnR = "HandGunCrouchTurnR";
			getInCar = "HandGunGetInCar";
			getOutCar = "HandGunStand";
			getInTank = "HandGunGetInTank";
			getOutTank = "HandGunGetOutTank";
			default = "HandGunCrouch";
			upDegree = "ManPosHandGunCrouch";
		};
		class PCrouchRunFActions:HandGunCrouchActions {
			slowF = "PCrouchRunF";
			slowLF = "PCrouchRunLF";
			slowRF = "PCrouchRunRF";
			slowL = "PCrouchRunL";
			slowR = "PCrouchRunR";
			fireNotPossible = "APCrouchRunF";
		};
		class PCrouchRunLFActions:HandGunCrouchActions {
			slowF = "PCrouchRunF";
			slowLF = "PCrouchRunLF";
			slowRF = "PCrouchRunRF";
			slowL = "PCrouchRunL";
			slowR = "PCrouchRunR";
			fireNotPossible = "APCrouchRunLF";
		};
		class PCrouchRunRFActions:HandGunCrouchActions {
			slowF = "PCrouchRunF";
			slowLF = "PCrouchRunLF";
			slowRF = "PCrouchRunRF";
			slowL = "PCrouchRunL";
			slowR = "PCrouchRunR";
			fireNotPossible = "APCrouchRunRF";
		};
		class PCrouchRunLActions:HandGunCrouchActions {
			slowF = "PCrouchRunF";
			slowLF = "PCrouchRunLF";
			slowRF = "PCrouchRunRF";
			slowL = "PCrouchRunL";
			slowR = "PCrouchRunR";
			fireNotPossible = "APCrouchRunL";
		};
		class PCrouchRunRActions:HandGunCrouchActions {
			slowF = "PCrouchRunF";
			slowLF = "PCrouchRunLF";
			slowRF = "PCrouchRunRF";
			slowL = "PCrouchRunL";
			slowR = "PCrouchRunR";
			fireNotPossible = "APCrouchRunR";
		};
		class APCrouchRunFActions:HandGunCrouchActions {
			fastF = "PCrouchRunF";
			fastLF = "PCrouchRunLF";
			fastRF = "PCrouchRunRF";
			fastL = "PCrouchRunL";
			fastR = "PCrouchRunF";
			slowF = "APCrouchRunF";
			slowLF = "APCrouchRunLF";
			slowRF = "APCrouchRunRF";
			slowL = "APCrouchRunL";
			slowR = "APCrouchRunR";
		};
		class APCrouchRunLFActions:HandGunCrouchActions {
			fastF = "PCrouchRunF";
			fastLF = "PCrouchRunLF";
			fastRF = "PCrouchRunRF";
			fastL = "PCrouchRunL";
			fastR = "PCrouchRunF";
			slowF = "APCrouchRunF";
			slowLF = "APCrouchRunLF";
			slowRF = "APCrouchRunRF";
			slowL = "APCrouchRunL";
			slowR = "APCrouchRunR";
		};
		class APCrouchRunRFActions:HandGunCrouchActions {
			fastF = "PCrouchRunF";
			fastLF = "PCrouchRunLF";
			fastRF = "PCrouchRunRF";
			fastL = "PCrouchRunL";
			fastR = "PCrouchRunF";
			slowF = "APCrouchRunF";
			slowLF = "APCrouchRunLF";
			slowRF = "APCrouchRunRF";
			slowL = "APCrouchRunL";
			slowR = "APCrouchRunR";
		};
		class APCrouchRunLActions:HandGunCrouchActions {
			fastF = "PCrouchRunF";
			fastLF = "PCrouchRunLF";
			fastRF = "PCrouchRunRF";
			fastL = "PCrouchRunL";
			fastR = "PCrouchRunF";
			slowF = "APCrouchRunF";
			slowLF = "APCrouchRunLF";
			slowRF = "APCrouchRunRF";
			slowL = "APCrouchRunL";
			slowR = "APCrouchRunR";
		};
		class APCrouchRunRActions:HandGunCrouchActions {
			fastF = "PCrouchRunF";
			fastLF = "PCrouchRunLF";
			fastRF = "PCrouchRunRF";
			fastL = "PCrouchRunL";
			fastR = "PCrouchRunF";
			slowF = "APCrouchRunF";
			slowLF = "APCrouchRunLF";
			slowRF = "APCrouchRunRF";
			slowL = "APCrouchRunL";
			slowR = "APCrouchRunR";
		};
		class HandGunLyingActions:NoActions {
			turnspeed = 3;
			stop = "HandGunLying";
			down = "HandGunStand";
			up = "HandGunCrouch";
			reloadMagazine = "HandGunLyingReloadMagazine";
			throwGrenade = "HandGunLyingThrowGrenade1";
			lying = "Lying";
			civilLying = "CivilLying";
			crouch = "Crouch";
			combat = "Combat";
			stand = "HandGunCivil";
			civil = "Civil";
			die = "HandGunLyingDead";
			handGunOn = "HandGunLying";
			weaponOn = "Weapon";
			binocOn = "BinocHandGunLying";
			binocOff = "HandGunLying";
			medic = "HandGunMedic";
			putDown = "HandGunLyingPutDown";
			takeFlag = "HandGunStandToHandGunTakeFlag";
			treated = "HandGunLyingTreated";
			walkF = "HandGunLyingCrawlF";
			walkLF = "HandGunLyingCrawlLF";
			walkRF = "HandGunLyingCrawlRF";
			walkL = "HandGunLyingCrawlL";
			walkR = "HandGunLyingCrawlR";
			walkLB = "HandGunLyingCrawlLB";
			walkRB = "HandGunLyingCrawlRB";
			walkB = "HandGunLyingCrawlB";
			slowF = "HandGunLyingCrawlF";
			slowLF = "HandGunLyingCrawlLF";
			slowRF = "HandGunLyingCrawlRF";
			slowL = "HandGunLyingCrawlL";
			slowR = "HandGunLyingCrawlR";
			slowLB = "HandGunLyingCrawlLB";
			slowRB = "HandGunLyingCrawlRB";
			slowB = "HandGunLyingCrawlB";
			fastF = "HandGunLyingFastCrawlF";
			fastLF = "HandGunLyingCrawlLF";
			fastRF = "HandGunLyingCrawlRF";
			//fastL = "WW4pProneLeanLeft";
			//fastR = "WW4pProneLeanRight";
			fastL = "WW4pProneRollLeft";
			fastR = "WW4pProneRollRight";
			fastLB = "HandGunLyingCrawlLB";
			fastRB = "HandGunLyingCrawlRB";
			fastB = "HandGunLyingCrawlB";
			turnL = "HandGunLyingTurnL";
			turnR = "HandGunLyingTurnR";
			getInCar = "HandGunGetInCar";
			getOutCar = "HandGunStand";
			getInTank = "HandGunGetInTank";
			getOutTank = "HandGunGetOutTank";
			default = "HandGunLying";
			upDegree = "ManPosHandGunLying";
		};
		class HandGunStandActions:NoActions {
			turnspeed = 5;
			stop = "HandGunStand";
			stopRelaxed = "HandGunStandRelaxed";
			down = "HandGunLying";
			up = "HandGunCrouch";
			reloadMagazine = "HandGunStandReloadMagazine";
			throwGrenade = "HandGunStandThrowGrenade1";
			lying = "Lying";
			civilLying = "CivilLying";
			crouch = "Crouch";
			combat = "Combat";
			stand = "HandGunCivil";
			civil = "Civil";
			die = "HandGunStandDead";
			handGunOn = "HandGunStand";
			weaponOn = "Weapon";
			binocOn = "BinocHandGunStand";
			binocOff = "HandGunStand";
			medic = "HandGunMedic";
			putDown = "HandGunPutDown";
			takeFlag = "HandGunStandToHandGunTakeFlag";
			treated = "HandGunTreated";
			walkF = "HandGunStandWalkF";
			walkLF = "HandGunStandWalkLF";
			walkRF = "HandGunStandWalkRF";
			walkL = "HandGunStandWalkL";
			walkR = "HandGunStandWalkR";
			walkLB = "HandGunStandWalkLB";
			walkRB = "HandGunStandWalkRB";
			walkB = "HandGunStandWalkB";
			slowF = "HandGunStandJogF";
			slowLF = "HandGunStandJogLF";
			slowRF = "HandGunStandJogRF";
			slowL = "HandGunStandJogL";
			slowR = "HandGunStandJogR";
			slowLB = "HandGunStandJogLB";
			slowRB = "HandGunStandJogRB";
			slowB = "HandGunStandJogB";
			fastF = "HandGunStandRunF";
			fastLF = "HandGunStandRunLF";
			fastRF = "HandGunStandRunRF";
			fastL = "WW4pStandLeanLeft";
			fastR = "WW4pStandLeanRight";
			fastLB = "HandGunStandRunLB";
			fastRB = "HandGunStandRunRB";
			fastB = "HandGunStandRunB";
			turnL = "HandGunStandTurnL";
			turnR = "HandGunStandTurnR";
			turnLRelaxed = "HandGunStandTurnLRelaxed";
			turnRRelaxed = "HandGunStandTurnRRelaxed";
			getInCar = "HandGunGetInCar";
			getOutCar = "HandGunStand";
			getInTank = "HandGunGetInTank";
			getOutTank = "HandGunGetOutTank";
			default = "HandGunStand";
			upDegree = "ManPosHandGunStand";
		};
		class HandGunStandRunFActions:HandGunStandActions {
			throwGrenade = "PistolRunThrowGrenadeStart";
			fastF = "HandGunStandRunF";
			fireNotPossible = "AHandGunStandRunF";
		};
		class AHandGunStandRunFActions:HandGunStandActions {
			throwGrenade = "PistolRunThrowGrenadeStart";
			fastF = "AHandGunStandRunF";
		};
		class PStandJogFActions:HandGunStandActions {
			slowF = "NHandGunStandJogF";
			slowLF = "NHandGunStandJogLF";
			slowRF = "NHandGunStandJogRF";
			slowL = "NHandGunStandJogL";
			slowR = "NHandGunStandJogR";
			slowLB = "NHandGunStandJogLB";
			slowRB = "NHandGunStandJogRB";
			slowB = "NHandGunStandJogB";
			fireNotPossible = "HandGunStandJogF";
		};
		class APStandJogFActions:HandGunStandActions {
			fastF = "NHandGunStandJogF";
			fastLF = "NHandGunStandJogLF";
			fastRF = "NHandGunStandJogRF";
			fastL = "NHandGunStandJogL";
			fastR = "NHandGunStandJogR";
			fastLB = "NHandGunStandJogLB";
			fastRB = "NHandGunStandJogRB";
			fastB = "NHandGunStandJogB";
			slowF = "HandGunStandJogF";
			slowLF = "HandGunStandJogLF";
			slowRF = "HandGunStandJogRF";
			slowL = "HandGunStandJogL";
			slowR = "HandGunStandJogR";
			slowLB = "HandGunStandJogLB";
			slowRB = "HandGunStandJogRB";
			slowB = "HandGunStandJogB";
		};
		class PStandJogRFActions:HandGunStandActions {
			slowF = "NHandGunStandJogF";
			slowLF = "NHandGunStandJogLF";
			slowRF = "NHandGunStandJogRF";
			slowL = "NHandGunStandJogL";
			slowR = "NHandGunStandJogR";
			slowLB = "NHandGunStandJogLB";
			slowRB = "NHandGunStandJogRB";
			slowB = "NHandGunStandJogB";
			fireNotPossible = "HandGunStandJogRF";
		};
		class APStandJogRFActions:HandGunStandActions {
			fastF = "NHandGunStandJogF";
			fastLF = "NHandGunStandJogLF";
			fastRF = "NHandGunStandJogRF";
			fastL = "NHandGunStandJogL";
			fastR = "NHandGunStandJogR";
			fastLB = "NHandGunStandJogLB";
			fastRB = "NHandGunStandJogRB";
			fastB = "NHandGunStandJogB";
			slowF = "HandGunStandJogF";
			slowLF = "HandGunStandJogLF";
			slowRF = "HandGunStandJogRF";
			slowL = "HandGunStandJogL";
			slowR = "HandGunStandJogR";
			slowLB = "HandGunStandJogLB";
			slowRB = "HandGunStandJogRB";
			slowB = "HandGunStandJogB";
		};
		class PStandJogLFActions:HandGunStandActions {
			slowF = "NHandGunStandJogF";
			slowLF = "NHandGunStandJogLF";
			slowRF = "NHandGunStandJogRF";
			slowL = "NHandGunStandJogL";
			slowR = "NHandGunStandJogR";
			slowLB = "NHandGunStandJogLB";
			slowRB = "NHandGunStandJogRB";
			slowB = "NHandGunStandJogB";
			fireNotPossible = "HandGunStandJogLF";
		};
		class APStandJogLFActions:HandGunStandActions {
			fastF = "NHandGunStandJogF";
			fastLF = "NHandGunStandJogLF";
			fastRF = "NHandGunStandJogRF";
			fastL = "NHandGunStandJogL";
			fastR = "NHandGunStandJogR";
			fastLB = "NHandGunStandJogLB";
			fastRB = "NHandGunStandJogRB";
			fastB = "NHandGunStandJogB";
			slowF = "HandGunStandJogF";
			slowLF = "HandGunStandJogLF";
			slowRF = "HandGunStandJogRF";
			slowL = "HandGunStandJogL";
			slowR = "HandGunStandJogR";
			slowLB = "HandGunStandJogLB";
			slowRB = "HandGunStandJogRB";
			slowB = "HandGunStandJogB";
		};
		class PStandJogRActions:HandGunStandActions {
			slowF = "NHandGunStandJogF";
			slowLF = "NHandGunStandJogLF";
			slowRF = "NHandGunStandJogRF";
			slowL = "NHandGunStandJogL";
			slowR = "NHandGunStandJogR";
			slowLB = "NHandGunStandJogLB";
			slowRB = "NHandGunStandJogRB";
			slowB = "NHandGunStandJogB";
			fireNotPossible = "HandGunStandJogR";
		};
		class APStandJogRActions:HandGunStandActions {
			fastF = "NHandGunStandJogF";
			fastLF = "NHandGunStandJogLF";
			fastRF = "NHandGunStandJogRF";
			fastL = "NHandGunStandJogL";
			fastR = "NHandGunStandJogR";
			fastLB = "NHandGunStandJogLB";
			fastRB = "NHandGunStandJogRB";
			fastB = "NHandGunStandJogB";
			slowF = "HandGunStandJogF";
			slowLF = "HandGunStandJogLF";
			slowRF = "HandGunStandJogRF";
			slowL = "HandGunStandJogL";
			slowR = "HandGunStandJogR";
			slowLB = "HandGunStandJogLB";
			slowRB = "HandGunStandJogRB";
			slowB = "HandGunStandJogB";
		};
		class PStandJogLActions:HandGunStandActions {
			slowF = "NHandGunStandJogF";
			slowLF = "NHandGunStandJogLF";
			slowRF = "NHandGunStandJogRF";
			slowL = "NHandGunStandJogL";
			slowR = "NHandGunStandJogR";
			slowLB = "NHandGunStandJogLB";
			slowRB = "NHandGunStandJogRB";
			slowB = "NHandGunStandJogB";
			fireNotPossible = "HandGunStandJogL";
		};
		class APStandJogLActions:HandGunStandActions {
			fastF = "NHandGunStandJogF";
			fastLF = "NHandGunStandJogLF";
			fastRF = "NHandGunStandJogRF";
			fastL = "NHandGunStandJogL";
			fastR = "NHandGunStandJogR";
			fastLB = "NHandGunStandJogLB";
			fastRB = "NHandGunStandJogRB";
			fastB = "NHandGunStandJogB";
			slowF = "HandGunStandJogF";
			slowLF = "HandGunStandJogLF";
			slowRF = "HandGunStandJogRF";
			slowL = "HandGunStandJogL";
			slowR = "HandGunStandJogR";
			slowLB = "HandGunStandJogLB";
			slowRB = "HandGunStandJogRB";
			slowB = "HandGunStandJogB";
		};
		class PStandJogLBActions:HandGunStandActions {
			slowF = "NHandGunStandJogF";
			slowLF = "NHandGunStandJogLF";
			slowRF = "NHandGunStandJogRF";
			slowL = "NHandGunStandJogL";
			slowR = "NHandGunStandJogR";
			slowLB = "NHandGunStandJogLB";
			slowRB = "NHandGunStandJogRB";
			slowB = "NHandGunStandJogB";
			fireNotPossible = "HandGunStandJogLB";
		};
		class APStandJogLBActions:HandGunStandActions {
			fastF = "NHandGunStandJogF";
			fastLF = "NHandGunStandJogLF";
			fastRF = "NHandGunStandJogRF";
			fastL = "NHandGunStandJogL";
			fastR = "NHandGunStandJogR";
			fastLB = "NHandGunStandJogLB";
			fastRB = "NHandGunStandJogRB";
			fastB = "NHandGunStandJogB";
			slowF = "HandGunStandJogF";
			slowLF = "HandGunStandJogLF";
			slowRF = "HandGunStandJogRF";
			slowL = "HandGunStandJogL";
			slowR = "HandGunStandJogR";
			slowLB = "HandGunStandJogLB";
			slowRB = "HandGunStandJogRB";
			slowB = "HandGunStandJogB";
		};
		class PStandJogRBActions:HandGunStandActions {
			slowF = "NHandGunStandJogF";
			slowLF = "NHandGunStandJogLF";
			slowRF = "NHandGunStandJogRF";
			slowL = "NHandGunStandJogL";
			slowR = "NHandGunStandJogR";
			slowLB = "NHandGunStandJogLB";
			slowRB = "NHandGunStandJogRB";
			slowB = "NHandGunStandJogB";
			fireNotPossible = "HandGunStandJogRB";
		};
		class APStandJogRBActions:HandGunStandActions {
			fastF = "NHandGunStandJogF";
			fastLF = "NHandGunStandJogLF";
			fastRF = "NHandGunStandJogRF";
			fastL = "NHandGunStandJogL";
			fastR = "NHandGunStandJogR";
			fastLB = "NHandGunStandJogLB";
			fastRB = "NHandGunStandJogRB";
			fastB = "NHandGunStandJogB";
			slowF = "HandGunStandJogF";
			slowLF = "HandGunStandJogLF";
			slowRF = "HandGunStandJogRF";
			slowL = "HandGunStandJogL";
			slowR = "HandGunStandJogR";
			slowLB = "HandGunStandJogLB";
			slowRB = "HandGunStandJogRB";
			slowB = "HandGunStandJogB";
		};
		class PStandJogBActions:HandGunStandActions {
			slowF = "NHandGunStandJogF";
			slowLF = "NHandGunStandJogLF";
			slowRF = "NHandGunStandJogRF";
			slowL = "NHandGunStandJogL";
			slowR = "NHandGunStandJogR";
			slowLB = "NHandGunStandJogLB";
			slowRB = "NHandGunStandJogRB";
			slowB = "NHandGunStandJogB";
			fireNotPossible = "HandGunStandJogB";
		};
		class APStandJogBActions:HandGunStandActions {
			fastF = "NHandGunStandJogF";
			fastLF = "NHandGunStandJogLF";
			fastRF = "NHandGunStandJogRF";
			fastL = "NHandGunStandJogL";
			fastR = "NHandGunStandJogR";
			fastLB = "NHandGunStandJogLB";
			fastRB = "NHandGunStandJogRB";
			fastB = "NHandGunStandJogB";
			slowF = "HandGunStandJogF";
			slowLF = "HandGunStandJogLF";
			slowRF = "HandGunStandJogRF";
			slowL = "HandGunStandJogL";
			slowR = "HandGunStandJogR";
			slowLB = "HandGunStandJogLB";
			slowRB = "HandGunStandJogRB";
			slowB = "HandGunStandJogB";
		};
		class BinocHandGunLyingActions:HandGunLyingActions {
			stop = "BinocHandGunLying";
			default = "BinocHandGunLying";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = "ManPosBinocLying";
			turnSpeed = 1;
		};
		class BinocHandGunStandActions:HandGunStandActions {
			stop = "BinocHandGunStand";
			default = "BinocHandGunStand";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = "ManPosBinocStand";
			turnSpeed = 2;
		};
		class BinocHandGunCrouchActions:HandGunCrouchActions {
			stop = "BinocHandGunCrouch";
			default = "BinocHandGunCrouch";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = "ManPosBinoc";
			turnSpeed = 2;
		};
		class HandGunMedicActions:HandGunStandActions {
			stop = "HandGunMedic";
			default = "HandGunMedic";
			down = "HandGunLying";
			up = "HandGunStand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "HandGunStand";
			fireNotPossible = "HandGunStand";
		};
		class HandGunPutDownActions:HandGunStandActions {
			stop = "HandGunPutDown";
			default = "HandGunPutDown";
			down = "HandGunLying";
			up = "HandGunStand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "HandGunStand";
			fireNotPossible = "HandGunStand";
		};
		class HandGunCrouchPutDownActions:HandGunCrouchActions {
			stop = "HandGunCrouchPutDown";
			default = "HandGunCrouchPutDown";
			down = "HandGunLying";
			up = "HandGunStand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "HandGunStand";
			fireNotPossible = "HandGunStand";
		};
		class HandGunTakeFlagActions:HandGunStandActions {
			stop = "HandGunTakeFlag";
			default = "HandGunTakeFlag";
			down = "HandGunLying";
			up = "HandGunStand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "HandGunStand";
			fireNotPossible = "HandGunStand";
		};
		class HandGunTreatedActions:HandGunStandActions {
			stop = "HandGunTreated";
			default = "HandGunTreated";
			down = "HandGunLying";
			up = "HandGunStand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "HandGunStand";
			fireNotPossible = "HandGunStand";
		};
		class HandGunLyingPutDownActions:HandGunLyingActions {
			stop = "HandGunLyingPutDown";
			default = "HandGunLyingPutDown";
			down = "HandGunLying";
			up = "HandGunLying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "HandGunLying";
			fireNotPossible = "HandGunLying";
		};
		class HandGunLyingTreatedActions:HandGunLyingActions {
			stop = "HandGunLyingTreated";
			default = "HandGunLyingTreated";
			down = "HandGunLying";
			up = "HandGunLying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "HandGunLying";
			fireNotPossible = "HandGunLying";
		};
		class HandGunCivilActions:NoActions {
			stop = "HandGunCivil";
			default = "HandGunCivil";
			walkF = "HandGunCivilWalkF";
			walkLF = "HandGunCivilWalkLF";
			walkRF = "HandGunCivilWalkRF";
			walkL = "HandGunCivilWalkL";
			walkR = "HandGunCivilWalkR";
			walkLB = "HandGunCivilWalkLB";
			walkRB = "HandGunCivilWalkRB";
			walkB = "HandGunCivilWalkB";
			slowF = "HandGunCivilWalkF";
			slowLF = "HandGunCivilWalkLF";
			slowRF = "HandGunCivilWalkRF";
			slowL = "HandGunCivilWalkL";
			slowR = "HandGunCivilWalkR";
			slowLB = "HandGunCivilWalkLB";
			slowRB = "HandGunCivilWalkRB";
			slowB = "HandGunCivilWalkB";
			fastF = "HandGunCivilRunF";
			fastLF = "HandGunCivilRunLF";
			fastRF = "HandGunCivilRunRF";
			fastL = "HandGunCivilRunL";
			fastR = "HandGunCivilRunR";
			fastLB = "HandGunCivilRunLB";
			fastRB = "HandGunCivilRunRB";
			fastB = "MoveOverHandGun";
			down = "CivilLying";
			up = "CivilLying";
			lying = "Lying";
			//combat = "HandGunCivil";
			//crouch = "HandGunCivil";
			combat = "Combat";
			crouch = "Crouch";
			Stand = "HandGunCivil";
			civil = "HandGunCivil";
			civilLying = "CivilLying";
			weaponOn = "Weapon";
			weaponOff = "HandGunCivil";
			//binocOn = "BinocStand";
			binocOn = "BinocStandHG";
			binocOff = "HandGunCivil";
			handGunOn = "HandGunStand";
			strokeFist = "StandStrokeFist";
			strokeGun = "";
			fireNotPossible = "HandGunStand";
			throwGrenade = "CivilThrowGrenadeStart";
			die = "CivilDead";
			getInCar = "CivilGetInCar";
			getOutCar = "HandGunCivil";
			getInTank = "CivilGetInTank";
			getOutTank = "CivilGetOutTank";
			sitDown = "StandToSitDown";
			//salute = "EffectStandSaluteStart";
			salute = "EffectStandSaluteStartHG";
			turnSpeed = 4;
			takeFlag = "CivilToHandGunCivilTakeFlag";
			putDown = "CivilPutDown";
			limitFast = 2.5;
			upDegree = manposstand;
		};
		class HandGunCivilRunFActions:HandGunCivilActions {
			throwGrenade = "CivilRunThrowGrenadeStart";
		};
//handgunend
		class WeaponActions:NoActions {
			stop = "Weapon";
			upDegree = manposweapon;
			weaponOn = "Weapon";
			weaponOff = "Crouch";
			binocOn = "ATBinoc";
			binocOff = "Weapon";
			handGunOn = "HandGunCrouch";
			down = "Lying";
			up = "Combat";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			die = "WeaponDead";
			civilLying = "CivilLying";
			civil = "Civil";
			walkF = "SlowWeaponWalkF";
			walkLF = "SlowWeaponWalkLF";
			walkRF = "SlowWeaponWalkRF";
			walkL = "SlowWeaponWalkL";
			walkR = "SlowWeaponWalkR";
			walkLB = "SlowWeaponWalkLB";
			walkRB = "SlowWeaponWalkRB";
			walkB = "WeaponCrouching";
			slowF = "WeaponWalkF";
			slowLF = "WeaponWalkLF";
			slowRF = "WeaponWalkRF";
			slowL = "WeaponWalkL";
			slowR = "WeaponWalkR";
			slowLB = "WeaponWalkLB";
			slowRB = "WeaponWalkRB";
			slowB = "WeaponWalkB";
			fastF = "WeaponRunF";
			fastLF = "WeaponRunLF";
			fastRF = "WeaponRunRF";
			fastL = "WeaponWalkL";
			fastR = "WeaponWalkR";
			fastLB = "WeaponWalkLB";
			fastRB = "WeaponWalkRB";
			fastB = "WeaponLying";
			turnL = "WeaponTurnL";
			turnR = "WeaponTurnR";
			default = "Combat";
			getInCar = "CombatGetInCar";
			getOutCar = "Combat";
			getInTank = "CombatGetInTank";
			getOutTank = "CombatGetOutTank";
			reloadAT = "WeaponReloadAT";
			fireNotPossible = "Weapon";
			turnSpeed = 8;
			limitFast = 5.5;
		};
		class StandActions:NoActions {
			stop = "Stand";
			default = "Stand";
			walkF = "StandWalkF";
			walkLF = "StandWalkLF";
			walkRF = "StandWalkRF";
			walkL = "StandWalkL";
			walkR = "StandWalkR";
			walkLB = "StandWalkLB";
			walkRB = "StandWalkRB";
			walkB = "StandWalkB";
			slowF = "StandJogF";
			slowLF = "StandJogLF";
			slowRF = "StandJogRF";
			slowL = "StandWalkL";
			slowR = "StandWalkR";
			slowLB = "StandWalkLB";
			slowRB = "StandWalkRB";
			slowB = "StandWalkB";
			fastF = "StandRunF";
			fastLF = "StandRunLF";
			fastRF = "StandRunRF";
			fastL = "StandWalkL";
			fastR = "StandWalkR";
			fastLB = "StandWalkLB";
			fastRB = "StandWalkRB";
			//fastB = "StandWalkB";
			//fastB = "MoveOver2";
			fastB = "MoveOverRifle";
			down = "Combat";
			up = "Combat";
			weaponOn = "Weapon";
			weaponOff = "Stand";
			binocOn = "BinocStand";
			binocOff = "Stand";
			handGunOn = "HandGunStand";
			strokeFist = "StandStrokeFist";
			strokeGun = "";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			//stand = "Stand";
			stand = "HandGunCivil";
			civil = "Civil";
			civilLying = "CivilLying";
			fireNotPossible = "Combat";
			throwGrenade = "StandThrowGrenadeStart";
			turnL = "StandTurnL";
			turnR = "StandTurnR";
			getInCar = "StandGetInCar";
			getOutCar = "Stand";
			getInTank = "StandGetInTank";
			getOutTank = "StandGetOutTank";
			sitDown = "StandToSitDown";
			salute = "EffectStandSaluteStart";
			turnSpeed = 4;
			limitFast = 2.5;
			die = "StandDead";
			takeFlag = "StandToStandTakeFlag";
			putDown = "StandPutDown";
			upDegree = manposstand;
		};
		class StandStillActions:StandActions {
			stop = "EffectStandStill";
			default = "EffectStandStill";
		};
		class StandStandActions:StandActions {
			stop = "EffectStand";
			default = "EffectStand";
		};
		class StandSaluteActions:StandActions {
			stop = "EffectStandSalute";
			default = "EffectStandSalute";
			salute = "";
		};
		class StandTalkActions:StandActions {
			stop = "EffectStandTalk";
			default = "EffectStandTalk";
		};
		class SitActions:StandActions {
			turnL = "";
			turnR = "";
			stop = "EffectStandSitDown";
			default = "EffectStandSitDown";
			strokeFist = "";
			sitDown = "";
			die = "SitDownDead";
		};
		class CivilActions:StandActions {
			stop = "Civil";
			default = "Civil";
			walkF = "CivilWalkF";
			walkLF = "CivilWalkLF";
			walkRF = "CivilWalkRF";
			walkL = "CivilWalkL";
			walkR = "CivilWalkR";
			walkLB = "CivilWalkLB";
			walkRB = "CivilWalkRB";
			walkB = "CivilWalkB";
			slowF = "CivilWalkF";
			slowLF = "CivilWalkLF";
			slowRF = "CivilWalkRF";
			slowL = "CivilWalkL";
			slowR = "CivilWalkR";
			slowLB = "CivilWalkLB";
			slowRB = "CivilWalkRB";
			slowB = "CivilWalkB";
			fastF = "CivilRunF";
			fastLF = "CivilRunLF";
			fastRF = "CivilRunRF";
			fastL = "CivilRunL";
			fastR = "CivilRunR";
			fastLB = "CivilRunLB";
			fastRB = "CivilRunRB";
			//fastB = "CivilRunB";
			fastB = "MoveOverCivil";
			down = "CivilLying";
			up = "CivilLying";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			//stand = "Stand";
			stand = "HandGunCivil";
			civil = "Civil";
			civilLying = "CivilLying";
			throwGrenade = "CivilThrowGrenadeStart";
			turnL = "CivilTurnL";
			turnR = "CivilTurnR";
			handGunOn = "HandGunStand";
			die = "CivilDead";
			getInCar = "CivilGetInCar";
			getOutCar = "Civil";
			getInTank = "CivilGetInTank";
			getOutTank = "CivilGetOutTank";
			takeFlag = "CivilToCivilTakeFlag";
			putDown = "CivilPutDown";
			limitFast = 4;
			upDegree = manposnoweapon;
		};
		class CombatActions:NoActions {
			stop = "Combat";
			default = "Combat";
			stopRelaxed = "CombatRelaxed";
			reloadMagazine = "CombatReloadMagazine";
			reloadMGun = "CombatReloadMGun";
			reloadMortar = "CombatReloadMortarStart";
			throwGrenade = "CombatThrowGrenadeStart";
			walkF = "CombatWalkF";
			walkLF = "CombatWalkLF";
			walkRF = "CombatWalkRF";
			walkL = "CombatWalkL";
			walkR = "CombatWalkR";
			walkLB = "CombatWalkLB";
			walkRB = "CombatWalkRB";
			walkB = "CombatWalkB";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fastF = "CombatSprintF";
			fastLF = "CombatSprintLF";
			fastRF = "CombatSprintRF";
			fastL = "WW4LeanLeft";
			fastR = "WW4LeanRight";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
			//fastB = "MoveOver";
			down = "Lying";
			up = "Crouch";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			civil = "Civil";
			civilLying = "CivilLying";
			die = "CombatDead";
			weaponOn = "Weapon";
			binocOn = "Binoc";
			binocOff = "Combat";
			handGunOn = "HandGunStand";
			takeFlag = "CombatToTakeFlag";
			putDown = "PutDown";
			medic = "Medic";
			treated = "Treated";
			strokeFist = "";
			strokeGun = "CombatStrokeGun";
			turnL = "CombatTurnL";
			turnR = "CombatTurnR";
			turnLRelaxed = "CombatTurnLRelaxed";
			turnRRelaxed = "CombatTurnRRelaxed";
			getInCar = "CombatGetInCar";
			getOutCar = "Combat";
			getInTank = "CombatGetInTank";
			getOutTank = "CombatGetOutTank";
			turnSpeed = 8;
			limitFast = 5.5;
			upDegree = manposcombat;
		};
		class CrouchActions:CombatActions {
			stop = "Crouch";
			default = "Crouch";
			up = "Combat";
			reloadMagazine = "CrouchReloadMagazine";
			reloadMG = "CrouchReloadMagazine";
			throwGrenade = "CrouchThrowGrenadeStart";
			die = "CrouchDead";
			weaponOn = "Weapon";
			walkF = "CrouchWalkF";
			walkLF = "CrouchWalkLF";
			walkRF = "CrouchWalkRF";
			walkL = "CrouchWalkL";
			walkR = "CrouchWalkR";
			walkLB = "CrouchWalkLB";
			walkRB = "CrouchWalkRB";
			walkB = "CrouchWalkB";
			slowF = "CrouchRunF";
			slowLF = "CrouchRunLF";
			slowRF = "CrouchRunRF";
			slowL = "CrouchRunL";
			slowR = "CrouchRunR";
			slowLB = "CrouchRunLB";
			slowRB = "CrouchRunRB";
			slowB = "CrouchRunB";
			fastF = "CrouchSprintF";
			fastLF = "CrouchSprintLF";
			fastRF = "CrouchSprintRF";
			fastL = "WW4CRLeanLeft";
			fastR = "WW4CRLeanRight";
			fastLB = "CrouchRunLB";
			fastRB = "CrouchRunRB";
			fastB = "CrouchRunB";
			binocOn = "BinocCrouch";
			binocOff = "Crouch";
			handGunOn = "HandGunCrouch";
			turnL = "CrouchTurnL";
			turnR = "CrouchTurnR";
			takeFlag = "CrouchToTakeFlag";
			putDown = "PutDownCrouch";
		};
		class CombatStandingUpActions:CombatActions {
			die = "LyingDead";
		};
		class CombatRunFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fireNotPossible = "AimCombatRunF";
		};
		class CombatSprintFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fastF = "CombatSprintF";
			fastLF = "CombatSprintLF";
			fastRF = "CombatSprintRF";
			fireNotPossible = "AimCombatSprintF";
		};
		class AimCombatSprintFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fastF = "AimCombatSprintF";
			fastLF = "AimCombatSprintLF";
			fastRF = "AimCombatSprintRF";
			fireNotPossible = "CombatSprintF";
		};
		class CombatSprintLFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fastF = "CombatSprintF";
			fastLF = "CombatSprintLF";
			fastRF = "CombatSprintRF";
			fireNotPossible = "AimCombatSprintLF";
		};
		class AimCombatSprintLFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fastF = "AimCombatSprintF";
			fastLF = "AimCombatSprintLF";
			fastRF = "AimCombatSprintRF";
			fireNotPossible = "CombatSprintLF";
		};
		class CombatSprintRFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fastF = "CombatSprintF";
			fastLF = "CombatSprintLF";
			fastRF = "CombatSprintRF";
			fireNotPossible = "AimCombatSprintRF";
		};
		class AimCombatSprintRFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fastF = "AimCombatSprintF";
			fastLF = "AimCombatSprintLF";
			fastRF = "AimCombatSprintRF";
			fireNotPossible = "CombatSprintRF";
		};
		class CombatRunLFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fireNotPossible = "AimCombatRunLF";
		};
		class CombatRunRFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fireNotPossible = "AimCombatRunRF";
		};
		class CombatRunLActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fireNotPossible = "AimCombatRunL";
		};
		class CombatRunRActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fireNotPossible = "AimCombatRunR";
		};
		class CombatRunLBActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fireNotPossible = "AimCombatRunLB";
		};
		class CombatRunRBActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fireNotPossible = "AimCombatRunRB";
		};
		class CombatRunBActions:CombatActions {
			die = "CombatRunBDead";
			slowF = "CombatRunF";
			slowLF = "CombatRunLF";
			slowRF = "CombatRunRF";
			slowL = "CombatRunL";
			slowR = "CombatRunR";
			slowLB = "CombatRunLB";
			slowRB = "CombatRunRB";
			slowB = "CombatRunB";
			fireNotPossible = "AimCombatRunB";
		};
		class AimCombatRunFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "AimCombatRunF";
			slowLF = "AimCombatRunLF";
			slowRF = "AimCombatRunRF";
			slowL = "AimCombatRunL";
			slowR = "AimCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class AimCombatRunLFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "AimCombatRunF";
			slowLF = "AimCombatRunLF";
			slowRF = "AimCombatRunRF";
			slowL = "AimCombatRunL";
			slowR = "AimCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class AimCombatRunRFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "AimCombatRunF";
			slowLF = "AimCombatRunLF";
			slowRF = "AimCombatRunRF";
			slowL = "AimCombatRunL";
			slowR = "AimCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class AimCombatRunLActions:CombatActions {
			die = "CombatRunDead";
			slowF = "AimCombatRunF";
			slowLF = "AimCombatRunLF";
			slowRF = "AimCombatRunRF";
			slowL = "AimCombatRunL";
			slowR = "AimCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class AimCombatRunRActions:CombatActions {
			die = "CombatRunDead";
			slowF = "AimCombatRunF";
			slowLF = "AimCombatRunLF";
			slowRF = "AimCombatRunRF";
			slowL = "AimCombatRunL";
			slowR = "AimCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class AimCombatRunLBActions:CombatActions {
			die = "CombatRunBDead";
			slowF = "AimCombatRunF";
			slowLF = "AimCombatRunLF";
			slowRF = "AimCombatRunRF";
			slowL = "AimCombatRunL";
			slowR = "AimCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class AimCombatRunRBActions:CombatActions {
			die = "CombatRunBDead";
			slowF = "AimCombatRunF";
			slowLF = "AimCombatRunLF";
			slowRF = "AimCombatRunRF";
			slowL = "AimCombatRunL";
			slowR = "AimCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class AimCombatRunBActions:CombatActions {
			die = "CombatRunBDead";
			slowF = "AimCombatRunF";
			slowLF = "AimCombatRunLF";
			slowRF = "AimCombatRunRF";
			slowL = "AimCombatRunL";
			slowR = "AimCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class OroCombatRunFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "OroCombatRunF";
			slowLF = "OroCombatRunLF";
			slowRF = "OroCombatRunRF";
			slowL = "OroCombatRunL";
			slowR = "OroCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class OroCombatRunLFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "OroCombatRunF";
			slowLF = "OroCombatRunLF";
			slowRF = "OroCombatRunRF";
			slowL = "OroCombatRunL";
			slowR = "OroCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class OroCombatRunRFActions:CombatActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "OroCombatRunF";
			slowLF = "OroCombatRunLF";
			slowRF = "OroCombatRunRF";
			slowL = "OroCombatRunL";
			slowR = "OroCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class OroCombatRunLActions:CombatActions {
			die = "CombatRunDead";
			slowF = "OroCombatRunF";
			slowLF = "OroCombatRunLF";
			slowRF = "OroCombatRunRF";
			slowL = "OroCombatRunL";
			slowR = "OroCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class OroCombatRunRActions:CombatActions {
			die = "CombatRunDead";
			slowF = "OroCombatRunF";
			slowLF = "OroCombatRunLF";
			slowRF = "OroCombatRunRF";
			slowL = "OroCombatRunL";
			slowR = "OroCombatRunR";
			slowLB = "AimCombatRunLB";
			slowRB = "AimCombatRunRB";
			slowB = "AimCombatRunB";
			fastF = "CombatRunF";
			fastLF = "CombatRunLF";
			fastRF = "CombatRunRF";
			fastL = "CombatRunL";
			fastR = "CombatRunR";
			fastLB = "CombatRunLB";
			fastRB = "CombatRunRB";
			fastB = "CombatRunB";
		};
		class CivilRunFActions:CivilActions {
			throwGrenade = "CivilRunThrowGrenadeStart";
		};
		class CrouchRunFActions:CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			fireNotPossible = "AimCrouchRunF";
		};
		class AimCrouchRunFActions:CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "AimCrouchRunF";
			slowLF = "AimCrouchRunLF";
			slowRF = "AimCrouchRunRF";
			slowL = "AimCrouchRunL";
			slowR = "AimCrouchRunR";
			slowLB = "CrouchRunLB";
			slowRB = "CrouchRunRB";
			slowB = "CrouchRunB";
			fastF = "CrouchRunF";
			fastLF = "CrouchRunLF";
			fastRF = "CrouchRunRF";
			fastL = "CrouchRunL";
			fastR = "CrouchRunR";
			fastLB = "CrouchRunLB";
			fastRB = "CrouchRunRB";
			fastB = "CrouchRunB";
		};
		class CrouchRunLFActions:CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			fireNotPossible = "AimCrouchRunLF";
		};
		class AimCrouchRunLFActions:CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "AimCrouchRunF";
			slowLF = "AimCrouchRunLF";
			slowRF = "AimCrouchRunRF";
			slowL = "AimCrouchRunL";
			slowR = "AimCrouchRunR";
			slowLB = "CrouchRunLB";
			slowRB = "CrouchRunRB";
			slowB = "CrouchRunB";
			fastF = "CrouchRunF";
			fastLF = "CrouchRunLF";
			fastRF = "CrouchRunRF";
			fastL = "CrouchRunL";
			fastR = "CrouchRunR";
			fastLB = "CrouchRunLB";
			fastRB = "CrouchRunRB";
			fastB = "CrouchRunB";
		};
		class CrouchRunRFActions:CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			fireNotPossible = "AimCrouchRunRF";
		};
		class AimCrouchRunRFActions:CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "AimCrouchRunF";
			slowLF = "AimCrouchRunLF";
			slowRF = "AimCrouchRunRF";
			slowL = "AimCrouchRunL";
			slowR = "AimCrouchRunR";
			slowLB = "CrouchRunLB";
			slowRB = "CrouchRunRB";
			slowB = "CrouchRunB";
			fastF = "CrouchRunF";
			fastLF = "CrouchRunLF";
			fastRF = "CrouchRunRF";
			fastL = "CrouchRunL";
			fastR = "CrouchRunR";
			fastLB = "CrouchRunLB";
			fastRB = "CrouchRunRB";
			fastB = "CrouchRunB";
		};
		class CrouchRunRActions:CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			fireNotPossible = "AimCrouchRunR";
		};
		class AimCrouchRunRActions:CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "AimCrouchRunF";
			slowLF = "AimCrouchRunLF";
			slowRF = "AimCrouchRunRF";
			slowL = "AimCrouchRunL";
			slowR = "AimCrouchRunR";
			slowLB = "CrouchRunLB";
			slowRB = "CrouchRunRB";
			slowB = "CrouchRunB";
			fastF = "CrouchRunF";
			fastLF = "CrouchRunLF";
			fastRF = "CrouchRunRF";
			fastL = "CrouchRunL";
			fastR = "CrouchRunR";
			fastLB = "CrouchRunLB";
			fastRB = "CrouchRunRB";
			fastB = "CrouchRunB";
		};
		class CrouchRunLActions:CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			fireNotPossible = "AimCrouchRunL";
		};
		class AimCrouchRunLActions:CrouchActions {
			throwGrenade = "CombatRunThrowGrenadeStart";
			die = "CombatRunDead";
			slowF = "AimCrouchRunF";
			slowLF = "AimCrouchRunLF";
			slowRF = "AimCrouchRunRF";
			slowL = "AimCrouchRunL";
			slowR = "AimCrouchRunR";
			slowLB = "CrouchRunLB";
			slowRB = "CrouchRunRB";
			slowB = "CrouchRunB";
			fastF = "CrouchRunF";
			fastLF = "CrouchRunLF";
			fastRF = "CrouchRunRF";
			fastL = "CrouchRunL";
			fastR = "CrouchRunR";
			fastLB = "CrouchRunLB";
			fastRB = "CrouchRunRB";
			fastB = "CrouchRunB";
		};
		class CrouchRunBActions:CrouchActions {
			die = "CombatRunBDead";
		};
		class CrouchSprintFActions:CrouchActions {
			throwGrenade = "CrouchThrowGrenadeStart";
			fastF = "CrouchSprintF";
			fastLF = "CrouchSprintLF";
			fastRF = "CrouchSprintRF";
			fireNotPossible = "AimCrouchSprintF";
		};
		class AimCrouchSprintFActions:CrouchActions {
			throwGrenade = "CrouchThrowGrenadeStart";
			fastF = "AimCrouchSprintF";
			fastLF = "AimCrouchSprintLF";
			fastRF = "AimCrouchSprintRF";
			fireNotPossible = "CrouchSprintF";
		};
		class CrouchSprintLFActions:CrouchActions {
			throwGrenade = "CrouchThrowGrenadeStart";
			fastF = "CrouchSprintF";
			fastLF = "CrouchSprintLF";
			fastRF = "CrouchSprintRF";
			fireNotPossible = "AimCrouchSprintLF";
		};
		class AimCrouchSprintLFActions:CrouchActions {
			throwGrenade = "CrouchThrowGrenadeStart";
			fastF = "AimCrouchSprintF";
			fastLF = "AimCrouchSprintLF";
			fastRF = "AimCrouchSprintRF";
			fireNotPossible = "CrouchSprintLF";
		};
		class CrouchSprintRFActions:CrouchActions {
			throwGrenade = "CrouchThrowGrenadeStart";
			fastF = "CrouchSprintF";
			fastLF = "CrouchSprintLF";
			fastRF = "CrouchSprintRF";
			fireNotPossible = "AimCrouchSprintRF";
		};
		class AimCrouchSprintRFActions:CrouchActions {
			throwGrenade = "CrouchThrowGrenadeStart";
			fastF = "AimCrouchSprintF";
			fastLF = "AimCrouchSprintLF";
			fastRF = "AimCrouchSprintRF";
			fireNotPossible = "CrouchSprintRF";
		};
		class CombatRelaxedActions:CombatActions {
			die = "CombatRelaxedDead";
		};
		class CombatRelaxedStillActions:CombatActions {
			die = "CombatRelaxedDead";
			stopRelaxed = "CombatRelaxedStill";
		};
		class CombatRelaxednew1Actions:CombatActions {
			die = "CombatRelaxedDead";
			stopRelaxed = "CombatRelaxednew1";
		};
		class CombatRelaxednew2Actions:CombatActions {
			die = "CombatRelaxedDead";
			stopRelaxed = "CombatRelaxednew2";
		};
		class CombatRelaxednew3Actions:CombatActions {
			die = "CombatRelaxedDead";
			stopRelaxed = "CombatRelaxednew3";
		};
		class CombatRelaxednew4Actions:CombatActions {
			die = "CombatRelaxedDead";
			stopRelaxed = "CombatRelaxednew4";
		};
		class CombatRelaxednew5Actions:CombatActions {
			die = "CombatRelaxedDead";
			stopRelaxed = "CombatRelaxednew5";
		};
		class CombatRelaxednew6Actions:CombatActions {
			die = "CombatRelaxedDead";
			stopRelaxed = "CombatRelaxednew6";
		};
		class LyingActions:NoActions {
			stop = "Lying";
			default = "Lying";
			reloadMagazine = "LyingReloadMagazine";
			reloadMGun = "LyingReloadMagazine";
			reloadMortar = "LyingReloadMagazine";
			throwGrenade = "LyingThrowGrenadeStart";
			walkF = "LyingCrawlF";
			walkLF = "LyingCrawlLF";
			walkRF = "LyingCrawlRF";
			walkL = "LyingCrawlL";
			walkR = "LyingCrawlR";
			walkLB = "LyingCrawlLB";
			walkRB = "LyingCrawlRB";
			walkB = "LyingCrawlB";
			slowF = "LyingCrawlF";
			slowLF = "LyingCrawlLF";
			slowRF = "LyingCrawlRF";
			slowL = "LyingCrawlL";
			slowR = "LyingCrawlR";
			slowLB = "LyingCrawlLB";
			slowRB = "LyingCrawlRB";
			slowB = "LyingCrawlB";
			fastF = "LyingFastCrawlF";
			fastLF = "LyingCrawlLF";
			fastRF = "LyingCrawlRF";
			fastL = "WW4_RollLeft";
			fastR = "WW4_RollRight";
			fastLB = "LyingCrawlLB";
			fastRB = "LyingCrawlRB";
			fastB = "WW4LyingUp";
			down = "Combat";
			up = "Crouch";
			lying = "Lying";
			combat = "Combat";
			crouch = "Crouch";
			stand = "Stand";
			civil = "Civil";
			civilLying = "CivilLying";
			die = "LyingDead";
			weaponOn = "Weapon";
			weaponOff = "Lying";
			binocOn = "BinocLying";
			binocOff = "Lying";
			handGunOn = "HandGunLying";
			turnL = "LyingTurnL";
			turnR = "LyingTurnR";
			getInCar = "CombatGetInCar";
			getOutCar = "Combat";
			getInTank = "CombatGetInTank";
			getOutTank = "CombatGetOutTank";
			takeFlag = "CombatToTakeFlag";
			putDown = "PutDownLying";
			medic = "Medic";
			treated = "TreatedLying";
			turnSpeed = 3;
			upDegree = manposlying;
		};
		class CrawlingActions:LyingActions {
			up = "CombatRunF";
			combat = "CombatRunF";
		};
		class CivilLyingActions:LyingActions {
			stop = "CivilLying";
			down = "Civil";
			up = "Civil";
			walkF = "CivilLyingCrawlF";
			walkLF = "CivilLyingCrawlLF";
			walkRF = "CivilLyingCrawlRF";
			walkL = "CivilLyingCrawlL";
			walkR = "CivilLyingCrawlR";
			walkLB = "CivilLyingCrawlLB";
			walkRB = "CivilLyingCrawlRB";
			walkB = "CivilLyingCrawlB";
			slowF = "CivilLyingCrawlF";
			slowLF = "CivilLyingCrawlLF";
			slowRF = "CivilLyingCrawlRF";
			slowL = "CivilLyingCrawlL";
			slowR = "CivilLyingCrawlR";
			slowLB = "CivilLyingCrawlLB";
			slowRB = "CivilLyingCrawlRB";
			slowB = "CivilLyingCrawlB";
			fastF = "CivilLyingFastCrawlF";
			fastLF = "CivilLyingCrawlLF";
			fastRF = "CivilLyingCrawlRF";
			fastL = "CivilLyingCrawlL";
			fastR = "CivilLyingCrawlR";
			fastLB = "CivilLyingCrawlLB";
			fastRB = "CivilLyingCrawlRB";
			fastB = "CivilLyingCrawlB";
			die = "CivilLyingDead";
			takeFlag = "CivilLyingToCivilLyingTakeFlag";
			putDown = "CivilLyingPutDown";
			upDegree = manposlyingnoweapon;
		};
		class CivilCrawlingActions:CivilLyingActions {
		};
		class LadderActions:NoActions {
			stop = "LadderStatic";
			default = "LadderStatic";
			upDegree = manposstand;
			turnSpeed = 0.1;
			ladderOff = "LadderDownEnd";
			ladderOffTop = "LadderUpEnd";
			ladderOffBottom = "LadderDownEnd";
			down = "LadderDownLoop";
			up = "LadderUpLoop";
			die = "StandDead";
		};
		class LadderUpActions:LadderActions {
			ladderOff = "LadderUpEnd";
		};
		class LadderDownActions:LadderActions {
			ladderOff = "LadderDownEnd";
		};
		class CombatNoMoveActions:CombatActions {
			stopRelaxed = "";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			turnSpeed = 2;
		};
		class PutDownActions:CombatActions {
			stop = "PutDown";
			default = "PutDown";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class TakeFlagActions:CombatActions {
			stop = "Combat";
			default = "Combat";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class CrouchTakeFlagActions:CrouchActions {
			stop = "Crouch";
			default = "Crouch";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Crouch";
			fireNotPossible = "Crouch";
		};
		class MedicActions:CombatActions {
			stop = "Medic";
			default = "Medic";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class TreatedActions:CombatActions {
			stop = "Treated";
			default = "Treated";
			down = "Lying";
			up = "Combat";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Combat";
			fireNotPossible = "Combat";
		};
		class StandPutDownActions:StandActions {
			stop = "StandPutDown";
			default = "StandPutDown";
			down = "Stand";
			up = "Stand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Stand";
			fireNotPossible = "Stand";
		};
		class StandTakeFlagActions:StandActions {
			stop = "Stand";
			default = "Stand";
			down = "Stand";
			up = "Stand";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Stand";
			fireNotPossible = "Stand";
		};
		class CivilPutDownActions:CivilActions {
			stop = "CivilPutDown";
			default = "CivilPutDown";
			down = "CivilLying";
			up = "Civil";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Civil";
			fireNotPossible = "Civil";
		};
		class CivilTakeFlagActions:CivilActions {
			stop = "Civil";
			default = "Civil";
			down = "CivilLying";
			up = "Civil";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Civil";
			fireNotPossible = "Civil";
		};
		class PutDownCrouchActions:CrouchActions {
			stop = "PutDownCrouch";
			default = "PutDownCrouch";
			down = "Crouch";
			up = "Crouch";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Crouch";
			fireNotPossible = "Crouch";
		};
		class PutDownLyingActions:LyingActions {
			stop = "PutDownLying";
			default = "PutDownLying";
			down = "Lying";
			up = "Lying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Lying";
			fireNotPossible = "Lying";
		};
		class TreatedLyingActions:LyingActions {
			stop = "TreatedLying";
			default = "TreatedLying";
			down = "Lying";
			up = "Lying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "Lying";
			fireNotPossible = "Lying";
		};
		class CivilLyingPutDownActions:CivilLyingActions {
			stop = "CivilLyingPutDown";
			default = "CivilLyingPutDown";
			down = "CivilLying";
			up = "CivilLying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "CivilLying";
			fireNotPossible = "CivilLying";
		};
		class CivilLyingTakeFlagActions:CivilLyingActions {
			stop = "CivilLying";
			default = "CivilLying";
			down = "CivilLying";
			up = "CivilLying";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			putDownEnd = "CivilLying";
			fireNotPossible = "CivilLying";
		};
		class BinocActions:CombatNoMoveActions {
			stop = "Binoc";
			default = "Binoc";
			binocOff = "Combat";
			upDegree = manposbinoc;
		};
		class ATBinocActions:WeaponActions {
			stop = "ATBinoc";
			default = "ATBinoc";
			binocOff = "Weapon";
			upDegree = manposbinoc;
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
		};
		class BinocLyingActions:LyingActions {
			stop = "BinocLying";
			default = "BinocLying";
			binocOff = "Lying";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = manposbinoclying;
			turnSpeed = 1;
		};
		class BinocStandActions:StandActions {
			stop = "BinocStand";
			default = "BinocStand";
			binocOff = "Stand";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = manposbinocstand;
			turnSpeed = 2;
		};
		class BinocStandHGActions:HandGunCivilActions {
			stop = "BinocStandHG";
			default = "BinocStandHG";
			binocOff = "HandGunCivil";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = manposbinocstand;
			turnSpeed = 2;
		};
		class BinocCrouchActions:CrouchActions {
			stop = "BinocCrouch";
			default = "BinocCrouch";
			binocOff = "Crouch";
			walkF = "";
			walkLF = "";
			walkRF = "";
			walkL = "";
			walkR = "";
			walkLB = "";
			walkRB = "";
			walkB = "";
			slowF = "";
			slowLF = "";
			slowRF = "";
			slowL = "";
			slowR = "";
			slowLB = "";
			slowRB = "";
			slowB = "";
			fastF = "";
			fastLF = "";
			fastRF = "";
			fastL = "";
			fastR = "";
			fastLB = "";
			fastRB = "";
			fastB = "";
			turnL = "";
			turnR = "";
			turnLRelaxed = "";
			turnRRelaxed = "";
			upDegree = manposbinoc;
			turnSpeed = 2;
		};
	};
	class BlendAnims {
		aimingDefault[] = {"hlava",1,"krk",1,"zbran",1,"roura",1,"lrameno",1,"prameno",1,"lbiceps",1,"lloket",1,"lruka",1,"pbiceps",1,"ploket",1,"pruka",1,"hrudnik",0.9,"zebra",0.5,"bricho",0.2};
		legsDefault[] = {"lprsty",1,"pprsty",1,"lchodidlo",1,"pchodidlo",1,"lholen",0.95,"pholen",0.95,"lstehno",0.9,"pstehno",0.9,"lzadek",0.5,"pzadek",0.5};
		headDefault[] = {"hlava",1,"krk",0.5};
		aimingLying[] = {"hlava",1,"krk",0.9,"lrameno",0.5,"prameno",0.5,"hrudnik",0.8,"zebra",0.5};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
	};
	class Default {
		access = 3;
		actions = "StandActions";
		file = "";
		looped = 1;
		speed = 0.5;
		disableWeapons = 0;
		enableOptics = 1;
		disableWeaponsLong = 0;
		showWeaponAim = 1;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		duty = -0.5;
		visibleSize = 1;
		aimPrecision = 0.38;
		recoilSuffix = "";
		relSpeedMin = 1.0;
		relSpeedMax = 1.0;
		soundEnabled = 1;
		soundOverride = "";
		soundEdge1 = 0.5;
		soundEdge2 = 1;
		terminal = 0;
		limitGunMovement = 1;
		variantsPlayer[] = {};
		variantsAI[] = {""};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5,10,20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "aimingDefault";
		legs = "legsDefault";
		head = "headDefault";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
	};
	class StandBase:Default {
		limitGunMovement = 0;
		aiming = "aimingNo";
		disableWeapons = 1;
		disableWeaponsLong = 1;
	};
	class LadderBase:StandBase {
		actions = "LadderActions";
		aiming = "aimingNo";
		legs = "legsNo";
		onLadder = 1;
		disableWeapons = 1;
	};
	class LadderUpBase:LadderBase {
		actions = "LadderUpActions";
	};
	class LadderDownBase:LadderBase {
		actions = "LadderDownActions";
	};
	class DefaultDie:Default {
		limitGunMovement = 0;
		aiming = "aimingNo";
		legs = "legsNo";
		head = "headNo";
		disableWeapons = 1;
		interpolationRestart = 1;
		soundOverride = "fallbody";
		soundEdge1 = 0.45;
		soundEdge2 = 0.45;
	};
//handgunstart
	class HandGunDefault:Default {
		showHandGun = 1;
	};
	class HandGunDie:DefaultDie {
		onLandEnd = 1;
		soundEnabled = 0;
		disableWeapons = 1;
		showHandGun = 1;
	};
//handgunend
	class States {
		class DeadState:Default {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\bezsmrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class Stand:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezstanistat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {"StandVar2",0.7,"Stand",0.3};
			equivalentTo = "Stand";
			interpolationSpeed = 2;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandVar2:Stand {
			file = "\TZK_Anims_4_0_0\bezstanistill.rtm";
			speed = -7.8000002;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandWalkF:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\chuzeBez0l.rtm";
			speed = -1.2;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandWalkLF:StandWalkF {
			file = "\TZK_Anims_4_0_0\chuzebez-45L.rtm";
			looped = 1;
		};
		class StandWalkRF:StandWalkF {
			file = "\TZK_Anims_4_0_0\chuzebez45L.rtm";
			looped = 1;
		};
		class StandWalkL:StandWalkF {
			file = "\TZK_Anims_4_0_0\chuzebez-90L.rtm";
			looped = 1;
		};
		class StandWalkR:StandWalkF {
			file = "\TZK_Anims_4_0_0\chuzebez90L.rtm";
			looped = 1;
		};
		class StandWalkLB:StandWalkF {
			file = "\TZK_Anims_4_0_0\chuzebez-135l.rtm";
			looped = 1;
		};
		class StandWalkRB:StandWalkF {
			file = "\TZK_Anims_4_0_0\chuzebez135l.rtm";
			looped = 1;
		};
		class StandWalkB:StandWalkF {
			file = "\TZK_Anims_4_0_0\chuzebez180l.rtm";
			looped = 1;
		};
		class StandRunF:StandWalkF {
			file = "\TZK_Anims_4_0_0\ssprint0.rtm";
			speed = -0.45;
			duty = 0.6;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
		};
//
		class StandJogF:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogpatrol0.rtm";
			speed = -0.85;
			looped = 1;
			duty = -0.1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandJogLF:StandWalkF {
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogpatrol-45.rtm";
			speed = -0.85;
			looped = 1;
		};
		class StandJogRF:StandWalkF {
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogpatrol45.rtm";
			speed = -0.85;
			looped = 1;
		};
		class StandRunRF:StandWalkRF {
			file = "\TZK_Anims_4_0_0\ssprint45l.rtm";
			speed = -0.55;
			duty = 0.6;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
		};
		class StandRunLF:StandWalkLF {
			file = "\TZK_Anims_4_0_0\ssprint-45l.rtm";
			speed = -0.55;
			duty = 0.6;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
		};
		class StandToCombat:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\bezstanistat.rtm";
			speed = -0.8;
			interpolateWith[] = {"Combat",1};
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToStand:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\sstanistat.rtm";
			speed = -0.8;
			interpolateWith[] = {"Stand",1};
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CombatToLying:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\stanisdolehu.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			enableOptics = 0;
			interpolateTo[] = {"LyingDying",1};
			soundEnabled = 1;
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			connectFrom[] = {"Combat",0.5};
			connectTo[] = {"Lying",0.5};
		};
		class CombatRunFToLying:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\behleh.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			disableWeapons = 1;
			soundEnabled = 1;
			interpolateTo[] = {"LyingDying",1};
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			connectFrom[] = {"CombatRunF",0.5};
			connectTo[] = {"Lying",0.5};
		};
		class CombatSprintFToLying:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\behleh2.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			disableWeapons = 1;
			soundEnabled = 1;
			interpolateTo[] = {"LyingDying",1};
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			connectFrom[] = {"CombatSprintF",0.5};
			connectTo[] = {"Lying",0.5};
		};
		class CrouchWalkFToLying:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\klekleh.rtm";
			speed = -1.4;
			looped = 0;
			onLandEnd = 1;
			disableWeapons = 1;
			soundEnabled = 1;
			interpolateTo[] = {"LyingDying",1};
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			connectFrom[] = {"Crouch",0.5};
			connectTo[] = {"Lying",0.5};
		};
		class LyingToCombat:Default {
			actions = "CombatStandingUpActions";
			file = "\TZK_Anims_4_0_0\lehdostanis.rtm";
			speed = -2;
			looped = 0;
			onLandBeg = 1;
			enableOptics = 0;
			interpolateTo[] = {"LyingDying",1};
			soundEnabled = 1;
			soundOverride = "standup";
			soundEdge1 = 0.01;
			soundEdge2 = 0.01;
			connectFrom[] = {"Lying",0.5};
			connectTo[] = {"Combat",0.5};
		};
		class LyingToCombatRun:Default {
			actions = "CombatStandingUpActions";
			file = "\TZK_Anims_4_0_0\lehbeh.rtm";
			speed = -1.0;
			looped = 0;
			onLandBeg = 1;
			disableWeapons = 1;
			soundEnabled = 1;
			interpolateTo[] = {"LyingDying",1};
			soundOverride = "standup";
			soundEdge1 = 0;
			soundEdge2 = 0;
			connectFrom[] = {"Lying",0.5};
			connectTo[] = {"CombatRunF",0.5};
		};
		class Combat:Default {
			actions = "CombatActions";
			preload = 1;
			file = "\TZK_Anims_4_0_0\sstanistat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			variantsPlayer[] = {"CombatStillPlayer",0.5,"Combat"};
			variantsAI[] = {"CombatStillPlayer",0.3,"CombatStillV1",0.5,"Combat"};
		};
		class CombatRelaxed:Combat {
			actions = "CombatRelaxedActions";
			file = "\TZK_Anims_4_0_0\savarestanistat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			variantsAI[] = {"CombatRelaxedStill",0.2,"CombatRelaxedNew1",0.2,"CombatRelaxedNew2",0.1,"CombatRelaxedNew3",0.2,"CombatRelaxedNew4",0.1,"CombatRelaxedNew5",0.1,"CombatRelaxedNew6",0.1};
			InterpolateTo[] = {"CombatRelaxedStill",0.1,,"CombatRelaxedNew1",0.1,"CombatRelaxedNew2",0.1,"CombatRelaxedNew3",0.1,"CombatRelaxedNew4",0.1,"CombatRelaxedNew5",0.1,"CombatRelaxedNew6",0.1,"CombatRelaxed",0.1,"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
			InterpolateFrom[] = {"CombatRelaxedStill",0.1,"CombatRelaxed",0.1};
		};
		class CombatStillV1:Combat {
			file = "\TZK_Anims_4_0_0\sstani.rtm";
			speed = -6.8000002;
			looped = 1;
			equivalentTo = "Combat";
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatStillPlayer:Combat {
			file = "\TZK_Anims_4_0_0\sstaniSoft.rtm";
			speed = -6.8000002;
			looped = 1;
			equivalentTo = "Combat";
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatRelaxedStill:Combat {
			actions = "CombatRelaxedStillActions";
			file = "\TZK_Anims_4_0_0\savarestani.rtm";
			speed = -9;
			looped = 0;
			disableWeapons = 0;
			variantsAI[] = {"CombatRelaxed",1};
			InterpolateTo[] = {"CombatRelaxed",0.1,"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
			InterpolateFrom[] = {"CombatRelaxed",0.1};
		};
		class CombatRelaxedNew1:Combat {
			actions = "CombatRelaxedNew1Actions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\altsavare1.rtm";
			speed = -9;
			looped = 0;
			disableWeapons = 0;
			variantsAI[] = {"CombatRelaxed",1};
			InterpolateTo[] = {"CombatRelaxed",0.1,"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
			InterpolateFrom[] = {"CombatRelaxed",0.1};
		};
		class CombatRelaxedNew2:Combat {
			actions = "CombatRelaxedNew2Actions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\altsavare7.rtm";
			speed = -5;
			looped = 0;
			disableWeapons = 0;
			variantsAI[] = {"CombatRelaxed",1};
			InterpolateTo[] = {"CombatRelaxed",0.1,"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
			InterpolateFrom[] = {"CombatRelaxed",0.1};
		};
		class CombatRelaxedNew3:Combat {
			actions = "CombatRelaxedNew3Actions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\altsavare3.rtm";
			speed = -9;
			looped = 0;
			disableWeapons = 0;
			variantsAI[] = {"CombatRelaxed",1};
			InterpolateTo[] = {"CombatRelaxed",0.1,"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
			InterpolateFrom[] = {"CombatRelaxed",0.1};
		};
		class CombatRelaxedNew4:Combat {
			actions = "CombatRelaxedNew4Actions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\altsavare4.rtm";
			speed = -9;
			looped = 0;
			disableWeapons = 0;
			variantsAI[] = {"CombatRelaxed",1};
			InterpolateTo[] = {"CombatRelaxed",0.1,"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
			InterpolateFrom[] = {"CombatRelaxed",0.1};
		};
		class CombatRelaxedNew5:Combat {
			actions = "CombatRelaxedNew5Actions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\altsavare5.rtm";
			speed = -9;
			looped = 0;
			disableWeapons = 0;
			variantsAI[] = {"CombatRelaxed",1};
			InterpolateTo[] = {"CombatRelaxed",0.1,"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
			InterpolateFrom[] = {"CombatRelaxed",0.1};
		};
		class CombatRelaxedNew6:Combat {
			actions = "CombatRelaxedNew6Actions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\altsavare6.rtm";
			speed = -9;
			looped = 0;
			disableWeapons = 0;
			variantsAI[] = {"CombatRelaxed",1};
			InterpolateTo[] = {"CombatRelaxed",0.1,"CombatRelaxedDying",0.1,"CombatRelaxedDyingVer2",0.1};
			InterpolateFrom[] = {"CombatRelaxed",0.1};
		};
		class CombatReloadMagazine:Default {
			preload = 1;
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\snabij.rtm";
			speed = "- 2.7";
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
			variantAfter[] = {0,0,0};
			variantsAI[] = {"CombatReloadMagazineVar",0.5,"CombatReloadMagazine",0.5};
		};
		class CombatToBinoc:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\sdalek.rtm";
			speed = -0.8;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Binoc:Default {
			actions = "BinocActions";
			file = "\TZK_Anims_4_0_0\sdalekstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			head = "headNo";
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class BinocToCombat:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\sdalek2.rtm";
			speed = -0.8;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Crouch:Combat {
			preload = 1;
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\klek.rtm";
			speed = 10000000000.0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			visibleSize = 0.6;
			aimPrecision = 0.25;
			recoilSuffix = "halffixed";
		};
		class CrouchIM:Combat {
			actions = "CrouchActions";
			speed = 10000000000.0;
			variantsPlayer[] = {};
			variantsAI[] = {};
		};
		class CrouchToCombat:Default {
			preload = 1;
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\klekdostani.rtm";
			speed = -0.6;
			looped = 0;
			soundEnabled = 0;
			enableOptics = 0;
			connectFrom[] = {"Crouch",0.5};
			connectTo[] = {"Combat",0.5};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CrouchToCrouchSprintF:Default {
			preload = 1;
			actions = "CrouchRunFActions";
			file = "\TZK_Anims_4_0_0\klekbeh.rtm";
			speed = -0.4;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",0.4};
			enableOptics = 0;
			connectTo[] = {"CrouchSprintF",0.4};
			interpolateTo[] = {"Crouch",1};
		};
		class CombatToCrouch:Default {
			preload = 1;
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\sstanidoklek.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			enableOptics = 0;
			connectFrom[] = {"Combat",0.5};
			connectTo[] = {"Crouch",0.5};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchToLying:Default {
			preload = 1;
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\klekleh.rtm";
			speed = -1;
			looped = 0;
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"Lying",1};
			soundEnabled = 1;
			enableOptics = 0;
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			onLandEnd = 1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingToCrouch:Default {
			preload = 1;
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\lehklek.rtm";
			speed = -1;
			looped = 0;
			connectFrom[] = {"Lying",1};
			connectTo[] = {"Crouch",1};
			soundEnabled = 1;
			enableOptics = 0;
			soundOverride = "standup";
			soundEdge1 = 0.01;
			soundEdge2 = 0.01;
			onLandBeg = 1;
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchReloadMagazine:Default {
			preload = 1;
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\kleknabij.rtm";
			speed = "- 2.4";
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			visibleSize = 0.6;
			aimPrecision = 0.25;
			recoilSuffix = "halffixed";
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"Crouch",1};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\kleksmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"CrouchDead",1};
		};
		class CrouchDead:CrouchDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\kleksmrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CrouchToWeapon:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\klekdoAT.rtm";
			speed = -2.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",1};
			connectTo[] = {"Weapon",1};
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponToCrouch:Default {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\atdoklek.rtm";
			speed = -2.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Weapon",1.2};
			connectTo[] = {"Crouch",1.2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class LyingToBinocLying:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\plazenidalek.rtm";
			speed = -1.2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			showItemInHand = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class BinocLying:Default {
			actions = "BinocLyingActions";
			file = "\TZK_Anims_4_0_0\plazenidalekstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			duty = -1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class BinocLyingToLying:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\plazenidalek2.rtm";
			speed = -1.2;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class StandToBinocStand:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezdalek.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandToBinocStandHG:Default {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\bezdalek.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunCivil",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class BinocStand:Default {
			actions = "BinocStandActions";
			file = "\TZK_Anims_4_0_0\bezdalekstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			connectFrom[] = {"StandToBinocStand",1};
			connectTo[] = {"BinocStandToStand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class BinocStandHG:Default {
			actions = "BinocStandHGActions";
			file = "\TZK_Anims_4_0_0\bezdalekstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			connectFrom[] = {"StandToBinocStandHG",1};
			//connectTo[] = {"BinocStandToStandHG",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class BinocStandToStand:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezdalek2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectTo[] = {"Stand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class BinocStandToStandHG:Default {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\bezdalek2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectFrom[] = {"BinocStandHG",1};
			connectTo[] = {"HandGunCivil",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandThrowGrenadeStart:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandThrowGrenadeStartHG:Default {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\bezgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandThrowGrenadeEnd:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandThrowGrenadeEndHG:Default {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\bezgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CombatToTakeFlag:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\spoloz.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class TakeFlag:Default {
			actions = "TakeFlagActions";
			file = "\TZK_Anims_4_0_0\spolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToTakeFlag",2};
			connectTo[] = {"TakeFlagToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class TakeFlagToCombat:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\spoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToPutDown:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\spoloz.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class PutDown:Default {
			actions = "PutDownActions";
			file = "\TZK_Anims_4_0_0\spolozstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToPutDown",2};
			//connectTo[] = {"PutDownToCombat",2};
			connectTo[] = {"PutDownToCrouch",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class PutDownToCombat:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\spoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToMedic:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\smedicstart.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Medic:Default {
			actions = "MedicActions";
			file = "\TZK_Anims_4_0_0\smedicloop.rtm";
			speed = -3;
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToMedic",2};
			connectTo[] = {"MedicToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class MedicToCombat:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\smedicend.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatToTreated:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\sosetrenstart.rtm";
			speed = -5;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class Treated:Default {
			actions = "TreatedActions";
			file = "\TZK_Anims_4_0_0\sosetrenloop.rtm";
			speed = -3;
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CombatToTreated",2};
			connectTo[] = {"TreatedToCombat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class TreatedToCombat:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\sosetrenend.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class StandToStandTakeFlag:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandTakeFlag:Default {
			actions = "StandTakeFlagActions";
			file = "\TZK_Anims_4_0_0\bezstanipolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"StandToStandTakeFlag",2};
			connectTo[] = {"StandTakeFlagToStand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandTakeFlagToStand:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezstanipoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandToStandPutDown:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandPutDown:Default {
			actions = "StandPutDownActions";
			file = "\TZK_Anims_4_0_0\bezstanipolozstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"StandToStandPutDown",2};
			connectTo[] = {"StandPutDownToStand",2};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandPutDownToStand:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezstanipoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Stand",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CivilToCivilTakeFlag:Default {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilTakeFlag:Default {
			actions = "CivilTakeFlagActions";
			file = "\TZK_Anims_4_0_0\civilstanipolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilToCivilTakeFlag",2};
			connectTo[] = {"CivilTakeFlagToCivil",2};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilTakeFlagToCivil:Default {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilstanipoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilToCivilPutDown:Default {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilstanipoloz1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilPutDown:Default {
			actions = "CivilPutDownActions";
			file = "\TZK_Anims_4_0_0\civilstanipolozstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilToCivilPutDown",2};
			connectTo[] = {"CivilPutDownToCivil",2};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilPutDownToCivil:Default {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilstanipoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class LyingToPutDownLying:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\lehpoloz.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class PutDownLying:Default {
			actions = "PutDownLyingActions";
			file = "\TZK_Anims_4_0_0\lehpolozstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"LyingToPutDownLying",2};
			connectTo[] = {"PutDownLyingToLying",2};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class PutDownLyingToLying:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\lehpoloz2.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingToTreatedLying:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\lehosetrenstart.rtm";
			speed = -5;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class TreatedLying:Default {
			actions = "TreatedLyingActions";
			file = "\TZK_Anims_4_0_0\lehosetrenloop.rtm";
			speed = -3;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"LyingToTreatedLying",2};
			connectTo[] = {"TreatedLyingToLying",2};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class TreatedLyingToLying:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\lehosetrenend.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Lying",1};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class CivilLyingToCivilLyingTakeFlag:Default {
			actions = "CivilLyingActions";
			file = "\TZK_Anims_4_0_0\lehcivilpoloz1.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingTakeFlag:Default {
			actions = "CivilLyingTakeFlagActions";
			file = "\TZK_Anims_4_0_0\lehcivilpolozstat.rtm";
			speed = -2.5;
			looped = 1;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilLyingToCivilLyingTakeFlag",2};
			connectTo[] = {"CivilLyingTakeFlagToCivilLying",2};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingTakeFlagToCivilLying:Default {
			actions = "CivilLyingActions";
			file = "\TZK_Anims_4_0_0\lehcivilpoloz2.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingToCivilLyingPutDown:Default {
			actions = "CivilLyingActions";
			file = "\TZK_Anims_4_0_0\lehcivilpoloz1.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingPutDown:Default {
			actions = "CivilLyingPutDownActions";
			file = "\TZK_Anims_4_0_0\lehcivilpolozstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CivilLyingToCivilLyingPutDown",2};
			connectTo[] = {"CivilLyingPutDownToCivilLying",2};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CivilLyingPutDownToCivilLying:Default {
			actions = "CivilLyingActions";
			file = "\TZK_Anims_4_0_0\lehcivilpoloz2.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"CivilLying",1};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class CombatReloadMGun:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\kulometnabij.rtm";
			speed = -2.9300001;
			looped = 0;
			disableWeapons = 1;
		};
		class CombatReloadMortarStart:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\minabijstart.rtm";
			speed = -2.415;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
		};
		class CombatReloadMortarEnd:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\minabijend.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
		};
		class CombatThrowGrenadeStart:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\sgranat.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatThrowGrenadeEnd:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\sgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatRunThrowGrenadeStart:Default {
			actions = "CombatRunFActions";
			file = "\TZK_Anims_4_0_0\sbehgranat.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatRunDying",0.1,"CombatRunDyingVer2",0.1};
		};
		class CombatRunThrowGrenadeEnd:Default {
			actions = "CombatRunFActions";
			file = "\TZK_Anims_4_0_0\sbehgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			connectFrom[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatStrokeGun:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\spazba.rtm";
			speed = -2.2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatStrokeGunEnd",1};
		};
		class CombatStrokeGunEnd:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\sstanistat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
			connectTo[] = {"Combat",1};
		};
		class CombatRunF:Default {
			preload = 1;
			actions = "CombatRunFActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\wasbeh0l.rtm";
			variantsAI[] = {"CombatRunF",0.35,"AimCombatRunF",0.35,"OroCombatRunF",0.3};
			speed = -0.7;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			InterpolateTo[] = {"CrouchRunF",0.1,"AimCombatRunF",0.1,"OroCombatRunF",0.1,"Combat",0.1};
			InterpolateFrom[] = {"CrouchRunF",0.1,"AimCombatRunF",0.1,"OroCombatRunF",0.1,"Combat",0.1};
		};
		class CombatRunLF:CombatRunF {
			actions = "CombatRunLFActions";
			preload = 0;
			file = "\TZK_Anims_4_0_0\ww4_modanim\wasbeh-45l.rtm";
			variantsAI[] = {"CombatRunLF",0.35,"AimCombatRunLF",0.35,"OroCombatRunLF",0.3};
			speed = -0.8;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			Interpolate[] = {"CrouchRunLF",0.1,"AimCombatRunLF",0.1,"OroCombatRunLF",0.1,"Combat",0.1};
			InterpolateFrom[] = {"CrouchRunLF",0.1,"AimCombatRunLF",0.1,"OroCombatRunLF",0.1,"Combat",0.1};
		};
		class CombatRunRF:CombatRunF {
			actions = "CombatRunRFActions";
			preload = 0;
			file = "\TZK_Anims_4_0_0\ww4_modanim\wasbeh45l.rtm";
			variantsAI[] = {"CombatRunRF",0.35,"AimCombatRunRF",0.35,"OroCombatRunRF",0.3};
			speed = -0.8;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			Interpolate[] = {"CrouchRunRF",0.1,"AimCombatRunRF",0.1,"OroCombatRunRF",0.1,"Combat",0.1};
			InterpolateFrom[] = {"CrouchRunRF",0.1,"AimCombatRunRF",0.1,"OroCombatRunRF",0.1,"Combat",0.1};
		};
		class CombatRunNF:CombatRunF {
			preload = 0;
			actions = "CombatActions";
		};
		class CombatRunL:CombatRunF {
			actions = "CombatRunLActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\wasbeh-90l.rtm";
			variantsAI[] = {"CombatRunL",0.35,"AimCombatRunL",0.35,"OroCombatRunL",0.3};
			speed = -0.95;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			InterpolateTo[] = {"CrouchRunL",0.1,"AimCombatRunL",0.1,"OroCombatRunL",0.1,"Combat",0.1};
			InterpolateFrom[] = {"CrouchRunL",0.1,"AimCombatRunL",0.1,"OroCombatRunL",0.1,"Combat",0.1};
		};
		class CombatRunR:CombatRunF {
			actions = "CombatRunRActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\wasbeh90l.rtm";
			variantsAI[] = {"CombatRunR",0.35,"AimCombatRunR",0.35,"OroCombatRunR",0.3};
			speed = -0.95;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			InterpolateTo[] = {"CrouchRunR",0.1,"AimCombatRunR",0.1,"OroCombatRunR",0.1,"Combat",0.1};
			InterpolateFrom[] = {"CrouchRunR",0.1,"AimCombatRunR",0.1,"OroCombatRunR",0.1,"Combat",0.1};
		};
		class CombatRunLB:CombatRunNF {
			actions = "CombatRunLBActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\wasbeh-135l.rtm";
			variantsAI[] = {"CombatRunF",0.5,"AimCombatRunF",0.5};
			speed = -0.8;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			InterpolateTo[] = {"CrouchRunLB",0.1,"AimCombatRunLB",0.1,"Combat",0.1};
			InterpolateFrom[] = {"CrouchRunLB",0.1,"AimCombatRunLB",0.1,"Combat",0.1};
		};
		class CombatRunRB:CombatRunNF {
			actions = "CombatRunRBActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\wasbeh135l.rtm";
			variantsAI[] = {"CombatRunRB",0.5,"AimCombatRunRB",0.5};
			speed = -0.8;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			InterpolateTo[] = {"CrouchRunRB",0.1,"AimCombatRunRB",0.1,"Combat",0.1};
			InterpolateFrom[] = {"CrouchRunRB",0.1,"AimCombatRunRB",0.1,"Combat",0.1};
		};
		class CombatRunB:CombatRunNF {
			actions = "CombatRunBActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\wasbeh180L.rtm";
			variantsAI[] = {"CombatRunB",0.5,"AimCombatRunB",0.5};
			speed = -0.8;
			soundEdge1 = 1;
			soundEdge2 = 0.5;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			InterpolateTo[] = {"CrouchRunB",0.1,"AimCombatRunB",0.1,"Combat",0.1};
			InterpolateFrom[] = {"CrouchRunB",0.1,"AimCombatRunB",0.1,"Combat",0.1};
		};
		class AimCombatRunF:CombatRunF {
			actions = "AimCombatRunFActions";
			file = "\TZK_Anims_4_0_0\sbeh0l.rtm";
			variantsAI[] = {"CombatRunF",0.35,"AimCombatRunF",0.35,"OroCombatRunF",0.3};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunF",0.1,"OroCombatRunF",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunF",0.1,"OroCombatRunF",0.1,"Combat",0.1};
		};
		class AimCombatRunLF:CombatRunLF {
			actions = "AimCombatRunLFActions";
			file = "\TZK_Anims_4_0_0\sbeh-45l.rtm";
			variantsAI[] = {"CombatRunLF",0.35,"AimCombatRunLF",0.35,"OroCombatRunLF",0.3};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunLF",0.1,"OroCombatRunLF",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunLF",0.1,"OroCombatRunLF",0.1,"Combat",0.1};
		};
		class AimCombatRunRF:CombatRunRF {
			actions = "AimCombatRunRFActions";
			file = "\TZK_Anims_4_0_0\sbeh45l.rtm";
			variantsAI[] = {"CombatRunRF",0.35,"AimCombatRunRF",0.35,"OroCombatRunRF",0.3};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunRF",0.1,"OroCombatRunRF",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunRF",0.1,"OroCombatRunRF",0.1,"Combat",0.1};
		};
		class AimCombatRunNF:CombatRunNF {
		};
		class AimCombatRunL:CombatRunL {
			actions = "AimCombatRunLActions";
			file = "\TZK_Anims_4_0_0\sbeh-90l.rtm";
			variantsAI[] = {"CombatRunL",0.35,"AimCombatRunL",0.35,"OroCombatRunL",0.3};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunL",0.1,"OroCombatRunL",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunL",0.1,"OroCombatRunL",0.1,"Combat",0.1};
		};
		class AimCombatRunR:CombatRunR {
			actions = "AimCombatRunRActions";
			file = "\TZK_Anims_4_0_0\sbeh90l.rtm";
			variantsAI[] = {"CombatRunR",0.35,"AimCombatRunR",0.35,"OroCombatRunR",0.3};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunR",0.1,"OroCombatRunR",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunR",0.1,"OroCombatRunR",0.1,"Combat",0.1};
		};
		class AimCombatRunLB:CombatRunLB {
			actions = "AimCombatRunLBActions";
			file = "\TZK_Anims_4_0_0\sbeh-135l.rtm";
			variantsAI[] = {"CombatRunLB",0.5,"AimCombatRunLB",0.5};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunLB",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunLB",0.1,"Combat",0.1};
		};
		class AimCombatRunRB:CombatRunRB {
			actions = "AimCombatRunRBActions";
			file = "\TZK_Anims_4_0_0\sbeh135L.rtm";
			variantsAI[] = {"CombatRunRB",0.5,"AimCombatRunRB",0.5};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunRB",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunRB",0.1,"Combat",0.1};
		};
		class AimCombatRunB:CombatRunB {
			actions = "AimCombatRunBActions";
			file = "\TZK_Anims_4_0_0\sbeh180L.rtm";
			variantsAI[] = {"CombatRunB",0.5,"AimCombatRunB",0.5};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunB",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunB",0.1,"Combat",0.1};
		};
		class OroCombatRunF:CombatRunF {
			actions = "OroCombatRunFActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\osbeh0l.rtm";
			variantsAI[] = {"CombatRunF",0.35,"AimCombatRunF",0.35,"OroCombatRunF",0.3};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunLF",0.1,"AimCombatRunLF",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunLF",0.1,"AimCombatRunLF",0.1,"Combat",0.1};
		};
		class OroCombatRunLF:CombatRunLF {
			actions = "OroCombatRunLFActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\osbeh-45l.rtm";
			variantsAI[] = {"CombatRunLF",0.35,"AimCombatRunLF",0.35,"OroCombatRunLF",0.3};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunLF",0.1,"AimCombatRunLF",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunLF",0.1,"AimCombatRunLF",0.1,"Combat",0.1};
		};
		class OroCombatRunRF:CombatRunRF {
			actions = "OroCombatRunRFActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\osbeh45l.rtm";
			variantsAI[] = {"CombatRunRF",0.35,"AimCombatRunRF",0.35,"OroCombatRunRF",0.3};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunRF",0.1,"AimCombatRunRF",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunRF",0.1,"AimCombatRunRF",0.1,"Combat",0.1};
		};
		class OroCombatRunNF:CombatRunNF {
		};
		class OroCombatRunL:CombatRunL {
			actions = "OroCombatRunLActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\osbeh-90l.rtm";
			variantsAI[] = {"CombatRunL",0.35,"AimCombatRunL",0.35,"OroCombatRunL",0.3};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunL",0.1,"AimCombatRunL",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunL",0.1,"AimCombatRunL",0.1,"Combat",0.1};
		};
		class OroCombatRunR:CombatRunR {
			actions = "OroCombatRunRActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\osbeh90l.rtm";
			variantsAI[] = {"CombatRunR",0.35,"AimCombatRunR",0.35,"OroCombatRunR",0.3};
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 1;
			InterpolateFrom[] = {"CombatRunR",0.1,"AimCombatRunR",0.1,"Combat",0.1};
			InterpolateTo[] = {"CombatRunR",0.1,"AimCombatRunR",0.1,"Combat",0.1};
		};
		class CombatSprintF:Default {
			preload = 1;
			actions = "CombatSprintFActions";
			looped = 1;
			file = "\TZK_Anims_4_0_0\ssprint0.rtm";
			speed = -0.45;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"AimCombatSprintF",0.1};
			InterpolateTo[] = {"AimCombatSprintF",0.1};
		};
		class AimCombatSprintF:Default {
			preload = 1;
			actions = "AimCombatSprintFActions";
			looped = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\aimssprint0.rtm";
			speed = -0.45;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"CombatSprintF",0.1};
			InterpolateTo[] = {"CombatSprintF",0.1};
		};
		class CombatSprintLF:CombatSprintF {
			preload = 0;
			actions = "CombatSprintLFActions";
			file = "\TZK_Anims_4_0_0\ssprint-45l.rtm";
			speed = -0.55;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"AimCombatSprintLF",0.1};
			InterpolateTo[] = {"AimCombatSprintLF",0.1};
		};
		class AimCombatSprintLF:CombatSprintF {
			preload = 0;
			actions = "AimCombatSprintLFActions";
			looped = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\aimssprint-45.rtm";
			speed = -0.55;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"CombatSprintLF",0.1};
			InterpolateTo[] = {"CombatSprintLF",0.1};
		};
		class CombatSprintRF:CombatSprintF {
			preload = 0;
			actions = "CombatSprintRFActions";
			file = "\TZK_Anims_4_0_0\ssprint45l.rtm";
			speed = -0.55;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"AimCombatSprintRF",0.1};
			InterpolateTo[] = {"AimCombatSprintRF",0.1};
		};
		class AimCombatSprintRF:CombatSprintF {
			preload = 0;
			actions = "AimCombatSprintRFActions";
			looped = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\aimssprint45.rtm";
			speed = -0.55;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"CombatSprintRF",0.1};
			InterpolateTo[] = {"CombatSprintRF",0.1};
		};
		class CombatTurnR:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\svpravo.rtm";
			speed = -0.8;
			looped = 1;
			soundEnabled = 0;
		};
		class CombatTurnL:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\svlevo.rtm";
			speed = -0.8;
			looped = 1;
			soundEnabled = 0;
		};
		class CombatTurnRRelaxed:CombatTurnR {
			file = "\TZK_Anims_4_0_0\savaredoprava.rtm";
			speed = -2.5999999;
		};
		class CombatTurnLRelaxed:CombatTurnL {
			file = "\TZK_Anims_4_0_0\savaredoleva.rtm";
			speed = -2.5999999;
		};
		class CombatWalkF:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\schuze0l.rtm";
			speed = -1.05;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchWalkF",0.1};
		};
		class CombatWalkLF:CombatWalkF {
			file = "\TZK_Anims_4_0_0\schuze-45l.rtm";
			interpolateFrom[] = {"CrouchWalkLF",0.1};
		};
		class CombatWalkRF:CombatWalkF {
			file = "\TZK_Anims_4_0_0\schuze45l.rtm";
			interpolateFrom[] = {"CrouchWalkRF",0.1};
		};
		class CombatWalkL:CombatWalkF {
			file = "\TZK_Anims_4_0_0\schuze-90l.rtm";
			interpolateFrom[] = {"CrouchWalkL",0.1};
		};
		class CombatWalkR:CombatWalkF {
			file = "\TZK_Anims_4_0_0\schuze90l.rtm";
			interpolateFrom[] = {"CrouchWalkR",0.1};
		};
		class CombatWalkLB:CombatWalkF {
			file = "\TZK_Anims_4_0_0\schuze-135l.rtm";
			speed = -1.15;
			interpolateFrom[] = {"CrouchWalkLB",0.1};
		};
		class CombatWalkRB:CombatWalkF {
			file = "\TZK_Anims_4_0_0\schuze135l.rtm";
			speed = -1.15;
			interpolateFrom[] = {"CrouchWalkRB",0.1};
		};
		class CombatWalkB:CombatWalkF {
			file = "\TZK_Anims_4_0_0\schuze180l.rtm";
			speed = -1.3;
			interpolateFrom[] = {"CrouchWalkB",0.1};
		};
		class CrouchRunF:CombatRunF {
			actions = "CrouchRunFActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchrun0.rtm";
			duty = 0;
			disableWeapons = 1;
			speed = -0.7;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"AimCrouchRunF",0.1,"CombatRunF",0.1,"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
			interpolateTo[] = {"AimCrouchRunF",0.1,"CombatRunF",0.1,"Crouch",1,"CrouchWalkF",1};
			enableOptics = 0;
		};
		class AimCrouchRunF:CombatRunF {
			actions = "AimCrouchRunFActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchrunAim0.rtm";
			duty = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.7;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchRunF",0.1,"CombatRunF",0.1,"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
			interpolateTo[] = {"CrouchRunF",0.1,"CombatRunF",0.1,"Crouch",1,"CrouchWalkF",1};
			enableOptics = 0;
		};
		class CrouchRunLF:CombatRunLF {
			actions = "CrouchRunLFActions";
			interpolateWith[] = {"Crouch",1};
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchrun-45.rtm";
			duty = 0;
			disableWeapons = 1;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"AimCrouchRunLF",0.1,"CombatRunLF",0.1,"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
			interpolateTo[] = {"AimCrouchRunLF",0.1,"CombatRunLF",0.1,"Crouch",1,"CrouchWalkF",1};
			enableOptics = 0;
		};
		class AimCrouchRunLF:CombatRunLF {
			actions = "AimCrouchRunLFActions";
			interpolateWith[] = {"Crouch",1};
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchrunAim-45.rtm";
			duty = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CombatRunLF",0.1,"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
			interpolateTo[] = {"CombatRunLF",0.1,"Crouch",1,"CrouchWalkF",1};
			enableOptics = 0;
		};
		class CrouchRunRF:CombatRunRF {
			actions = "CrouchRunRFActions";
			interpolateWith[] = {"Crouch",1};
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchrun45.rtm";
			duty = 0;
			disableWeapons = 1;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"AimCrouchRunLF",0.1,"CombatRunRF",0.1,"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
			interpolateTo[] = {"AimCrouchRunLF",0.1,"CombatRunRF",0.1,"Crouch",1,"CrouchWalkF",1};
			enableOptics = 0;
		};
		class AimCrouchRunRF:CombatRunRF {
			actions = "AimCrouchRunRFActions";
			interpolateWith[] = {"Crouch",1};
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchrunAim45.rtm";
			duty = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CombatRunRF",0.1,"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
			interpolateTo[] = {"CombatRunRF",0.1,"Crouch",1,"CrouchWalkF",1};
			enableOptics = 0;
		};
		class CrouchRunL:CombatRunL {
			actions = "CrouchRunLActions";
			interpolateWith[] = {"Crouch",1};
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchrun-90.rtm";
			duty = 0;
			disableWeapons = 1;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CombatRunL",0.1,"AimCrouchRunL","CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
			interpolateTo[] = {"CombatRunL",0.1,"AimCrouchRunL","Crouch",1,"CrouchWalkF",1};
			enableOptics = 0;
		};
		class AimCrouchRunL:CombatRunL {
			actions = "AimCrouchRunLActions";
			interpolateWith[] = {"Crouch",1};
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchrunAim-90.rtm";
			duty = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CombatRunL",0.1,"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
			interpolateTo[] = {"CombatRunL",0.1,"Crouch",1,"CrouchWalkF",1};
			enableOptics = 0;
		};
		class CrouchRunR:CombatRunR {
			actions = "CrouchRunRActions";
			interpolateWith[] = {"Crouch",1};
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchrun90.rtm";
			duty = 0;
			disableWeapons = 1;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CombatRunR",0.1,"AimCrouchRunR","CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
			interpolateTo[] = {"CombatRunL",0.1,"AimCrouchRunR","Crouch",1,"CrouchWalkF",1};
			enableOptics = 0;
		};
		class AimCrouchRunR:CombatRunR {
			actions = "AimCrouchRunRActions";
			interpolateWith[] = {"Crouch",1};
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchrunAim90.rtm";
			duty = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CombatRunR",0.1,"CrouchToCrouchSprintF",0.4,"CrouchWalkF",1};
			interpolateTo[] = {"CombatRunL",0.1,"Crouch",1,"CrouchWalkF",1};
			enableOptics = 0;
		};
		class CrouchRunLB:CombatRunLB {
			actions = "CrouchRunBActions";
			connectAs = "CombatRunLB";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunRB:CombatRunRB {
			actions = "CrouchRunBActions";
			connectAs = "CombatRunRB";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchRunB:CombatRunB {
			actions = "CrouchRunBActions";
			connectAs = "CombatRunB";
			interpolateWith[] = {"Crouch",1};
			enableOptics = 0;
		};
		class CrouchWalkF:CombatWalkF {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRschuze0l.rtm";
			aimprecision = 0.8;
			speed = -1.1;
			looped = 1;
			duty = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"CombatWalkF",0.1,"AimCrouchRunF",1,"Crouch",1,"CrouchRunF",1};
			enableOptics = 1;
			interpolateWith[] = {"Crouch",1};
			interpolateFrom[] = {"CombatWalkF",0.1,"AimCrouchRunF",1,"CrouchRunF",1};
		};
		class CrouchWalkLF:CombatWalkLF {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRschuze-45l.rtm";
			aimprecision = 0.8;
			speed = -1.1;
			looped = 1;
			duty = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"CombatWalkLF",0.1,"Crouch",1,"CrouchRunF",1};
			enableOptics = 1;
			interpolateWith[] = {"Crouch",1};
			interpolateFrom[] = {"CombatWalkLF",0.1,"CrouchRunF",1};
		};
		class CrouchWalkRF:CombatWalkRF {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRschuze45l.rtm";
			aimprecision = 0.8;
			speed = -1.1;
			looped = 1;
			duty = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"CombatWalkRF",0.1,"Crouch",1,"CrouchRunF",1};
			enableOptics = 1;
			interpolateWith[] = {"Crouch",1};
			interpolateFrom[] = {"CombatWalkRF",0.1,"CrouchRunF",1};
		};
		class CrouchWalkL:CombatWalkL {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRschuze-90l.rtm";
			aimprecision = 0.8;
			speed = -1.1;
			looped = 1;
			duty = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"CombatWalkL",0.1,"Crouch",1,"CrouchRunF",1};
			enableOptics = 1;
			interpolateWith[] = {"Crouch",1};
			interpolateFrom[] = {"CombatWalkL",0.1,"CrouchRunF",1};
		};
		class CrouchWalkR:CombatWalkR {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRschuze90l.rtm";
			aimprecision = 0.8;
			speed = -1.1;
			looped = 1;
			duty = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"CombatWalkR",0.1,"Crouch",1,"CrouchRunF",1};
			enableOptics = 1;
			interpolateWith[] = {"Crouch",1};
			interpolateFrom[] = {"CombatWalkR",0.1,"CrouchRunF",1};
		};
		class CrouchWalkLB:CombatWalkLB {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRschuze-135l.rtm";
			aimprecision = 1;
			speed = -1.25;
			looped = 1;
			duty = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"CombatWalkLB",0.1,"Crouch",1,"CrouchRunF",1};
			enableOptics = 1;
			interpolateWith[] = {"Crouch",1};
			interpolateFrom[] = {"CombatWalkLB",0.1,"CrouchRunF",1};
		};
		class CrouchWalkRB:CombatWalkRB {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRschuze135l.rtm";
			aimprecision = 1;
			speed = -1.25;
			looped = 1;
			duty = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"CombatWalkRB",0.1,"Crouch",1,"CrouchRunF",1};
			enableOptics = 1;
			interpolateWith[] = {"Crouch",1};
			interpolateFrom[] = {"CombatWalkRB",0.1,"CrouchRunF",1};
		};
		class CrouchWalkB:CombatWalkB {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRschuze180l.rtm";
			aimprecision = 1.5;
			speed = -1.4;
			looped = 1;
			duty = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateTo[] = {"CombatWalkB",0.1,"Crouch",1,"CrouchRunF",1};
			enableOptics = 1;
			interpolateWith[] = {"Crouch",1};
			interpolateFrom[] = {"CombatWalkB",0.1,"CrouchRunF",1};
		};
		class CrouchSprintF:CombatSprintF {
			preload = 1;
			actions = "CrouchSprintFActions";
			looped = 1;
			//file = "\TZK_Anims_4_0_0\ssprint0.rtm";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crsprint.rtm";
			speed = -0.45;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"AimCrouchSprintF",0.1};
			InterpolateTo[] = {"AimCrouchSprintF",0.1};
		};
		class AimCrouchSprintF:CombatSprintF {
			preload = 1;
			actions = "AimCrouchSprintFActions";
			looped = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\aimssprint0.rtm";
			speed = -0.45;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"CrouchSprintF",0.1};
			InterpolateTo[] = {"CrouchSprintF",0.1};
		};
		class CrouchSprintLF:CombatSprintLF {
			preload = 1;
			actions = "CrouchSprintLFActions";
			looped = 1;
			file = "\TZK_Anims_4_0_0\ssprint-45l.rtm";
			speed = -0.55;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"AimCrouchSprintLF",0.1};
			InterpolateTo[] = {"AimCrouchSprintLF",0.1};
		};
		class AimCrouchSprintLF:CombatSprintLF {
			preload = 1;
			actions = "AimCrouchSprintLFActions";
			looped = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\aimssprint-45.rtm";
			speed = -0.55;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"CrouchSprintLF",0.1};
			InterpolateTo[] = {"CrouchSprintLF",0.1};
		};
		class CrouchSprintRF:CombatSprintRF {
			preload = 1;
			actions = "CrouchSprintRFActions";
			looped = 1;
			file = "\TZK_Anims_4_0_0\ssprint45l.rtm";
			speed = -0.55;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"AimCrouchSprintRF",0.1};
			InterpolateTo[] = {"AimCrouchSprintRF",0.1};
		};
		class AimCrouchSprintRF:CombatSprintRF {
			preload = 1;
			actions = "AimCrouchSprintRFActions";
			looped = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\aimssprint45.rtm";
			speed = -0.55;
			duty = 0.6;
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableOptics = 0;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"CrouchToCrouchSprintF",0.9,"CrouchSprintRF",0.1};
			InterpolateTo[] = {"CrouchSprintRF",0.1};
		};
		class CrouchTurnR:CombatTurnR {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\klekR.rtm";
			speed = -0.8;
			looped = 1;
			soundEnabled = 0;
			interpolateTo[] = {"Crouch",0.5};
		};
		class CrouchTurnL:CombatTurnL {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\klekL.rtm";
			speed = -0.8;
			looped = 1;
			soundEnabled = 0;
			interpolateTo[] = {"Crouch",0.5};
		};
		class CrouchToBinocCrouch:Default {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\klekdalekstart.rtm";
			speed = -0.8;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class BinocCrouch:Default {
			actions = "BinocCrouchActions";
			file = "\TZK_Anims_4_0_0\klekdalekstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			connectFrom[] = {"CrouchToBinocCrouch",1};
			connectTo[] = {"BinocCrouchToCrouch",1};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class BinocCrouchToCrouch:Default {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\klekdalekend.rtm";
			speed = -0.8;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectTo[] = {"Crouch",2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CivilBase:Default {
			aiming = "aimingNo";
			actions = "CivilActions";
			duty = -1;
			disableWapons = 1;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
			interpolationSpeed = 3;
		};
		class Civil:CivilBase {
			file = "\TZK_Anims_4_0_0\civilstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {"Civil",0.2,"CivilStillV1",0.8};
			equivalentTo = "Civil";
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
			interpolateFrom[] = {"CombatThrowGrenadeEnd",1};
		};
		class CivilStillV1:Civil {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilstani.rtm";
			speed = -10;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CivilWalkF:CivilBase {
			file = "\TZK_Anims_4_0_0\civilchuze0l.rtm";
			speed = -1.2;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
		};
		class CivilWalkLF:CivilWalkF {
			file = "\TZK_Anims_4_0_0\civilchuze-45l.rtm";
		};
		class CivilWalkRF:CivilWalkF {
			file = "\TZK_Anims_4_0_0\civilchuze45l.rtm";
		};
		class CivilWalkL:CivilWalkF {
			file = "\TZK_Anims_4_0_0\civilchuze90l.rtm";
		};
		class CivilWalkR:CivilWalkF {
			file = "\TZK_Anims_4_0_0\civilchuze-90l.rtm";
		};
		class CivilWalkLB:CivilWalkF {
			file = "\TZK_Anims_4_0_0\civilchuze-135l.rtm";
		};
		class CivilWalkRB:CivilWalkF {
			file = "\TZK_Anims_4_0_0\civilchuze135l.rtm";
		};
		class CivilWalkB:CivilWalkF {
			file = "\TZK_Anims_4_0_0\civilchuze180l.rtm";
		};
		class CivilRunF:CivilWalkF {
			actions = "CivilRunFActions";
			file = "\TZK_Anims_4_0_0\civilbeh0l.rtm";
			speed = -0.5;
			looped = 1;
			duty = -0.5;
		};
		class CivilRunLF:CivilRunF {
			file = "\TZK_Anims_4_0_0\civilbeh-45l.rtm";
			speed = -0.55;
		};
		class CivilRunRF:CivilRunF {
			file = "\TZK_Anims_4_0_0\civilbeh45l.rtm";
			speed = -0.55;
		};
		class CivilRunL:CivilRunF {
			file = "\TZK_Anims_4_0_0\civilbeh-90l.rtm";
		};
		class CivilRunR:CivilRunF {
			file = "\TZK_Anims_4_0_0\civilbeh90l.rtm";
		};
		class CivilRunB:CivilRunF {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilbeh180l.rtm";
		};
		class CivilRunLB:CivilRunB {
			file = "\TZK_Anims_4_0_0\civilbeh-135l.rtm";
		};
		class CivilRunRB:CivilRunB {
			file = "\TZK_Anims_4_0_0\civilbeh135l.rtm";
		};
		class CivilTurnR:CivilBase {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civildoprava.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
		};
		class CivilTurnL:CivilBase {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civildoleva.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
		};
		class CivilThrowGrenadeStart:Default {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilThrowGrenadeEnd:Default {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilRunThrowGrenadeStart:Default {
			actions = "CivilRunFActions";
			file = "\TZK_Anims_4_0_0\behgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilRunThrowGrenadeEnd:Default {
			actions = "CivilRunFActions";
			file = "\TZK_Anims_4_0_0\behgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilToCivilLying:Default {
			actions = "CivilLyingActions";
			file = "\TZK_Anims_4_0_0\civil2leh.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			interpolateTo[] = {"CivilLyingDying",1};
		};
		class CivilLyingToCivil:Default {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\leh2civil.rtm";
			speed = -2;
			looped = 0;
			onLandBeg = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "standup";
			soundEdge1 = 0.01;
			soundEdge2 = 0.01;
			interpolateTo[] = {"CivilDying",1,"CivilDyingVer2",1};
		};
		class Lying:Default {
			preload = 1;
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\leh.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			duty = -1;
			visibleSize = 0.25;
			aimPrecision = 0.11;
			recoilSuffix = "fixed";
		};
		class LyingNoAim:Lying {
			preload = 0;
			limitGunMovement = 0;
			aiming = "aimingLying";
			legs = "legsNo";
		};
		class LyingStillV1:Lying {
			file = "\TZK_Anims_4_0_0\polehavani.rtm";
			speed = -6.1999998;
		};
		class LyingTurnL:Lying {
			preload = 0;
			file = "\TZK_Anims_4_0_0\plizenidoleva.rtm";
			//file = "\TZK_Anims_4_0_0\leh.rtm";
			speed = -0.8;
			duty = 0.0;
		};
		class LyingTurnR:Lying {
			preload = 0;
			file = "\TZK_Anims_4_0_0\plizenidoprava.rtm";
			speed = -0.8;
			//file = "\TZK_Anims_4_0_0\leh.rtm";
			duty = 0.0;
		};
		class LyingReloadMagazine:LyingNoAim {
			preload = 1;
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\plizeninabij.rtm";
			speed = -2.4000001;
			disableWeapons = 1;
			looped = 0;
			interpolateTo[] = {"LyingDying",1};
		};
		class LyingThrowGrenadeStart:LyingNoAim {
			looped = 0;
			limitGunMovement = 1;
			file = "\TZK_Anims_4_0_0\plazenigranat.rtm";
			speed = -1.8;
			disableWeapons = 1;
			duty = 0.0;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingThrowGrenadeEnd:LyingNoAim {
			looped = 0;
			limitGunMovement = 1;
			file = "\TZK_Anims_4_0_0\plazenigranat2.rtm";
			speed = -2.3;
			disableWeapons = 1;
			duty = 0.0;
			interpolateTo[] = {"LyingDying",0.1};
		};
		class LyingCrawlF:LyingNoAim {
			preload = 1;
			actions = "CrawlingActions";
			file = "\TZK_Anims_4_0_0\plazni0l.rtm";
			speed = -1.0;
			duty = 0.0;
			disableWeapons = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "crawl";
		};
		class LyingFastCrawlF:LyingCrawlF {
			actions = "CrawlingActions";
			file = "\TZK_Anims_4_0_0\ultraplaz.rtm";
			speed = -0.8;
			disableWeapons = 1;
			duty = 0.6;
		};
		class LyingCrawlLF:LyingCrawlF {
			preload = 0;
			file = "\TZK_Anims_4_0_0\plizeni-45l.rtm";
			speed = -1.0;
		};
		class LyingCrawlRF:LyingCrawlF {
			preload = 0;
			file = "\TZK_Anims_4_0_0\plizeni45l.rtm";
			speed = -1.0;
		};
		class LyingCrawlL:LyingCrawlF {
			preload = 0;
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\plizeni-90l.rtm";
			speed = -1.0;
		};
		class LyingCrawlR:LyingCrawlL {
			preload = 0;
			file = "\TZK_Anims_4_0_0\plizeni90l.rtm";
			speed = -1.0;
		};
		class LyingCrawlLB:LyingCrawlL {
			preload = 0;
			file = "\TZK_Anims_4_0_0\plizeni-135l.rtm";
			speed = -1.1;
		};
		class LyingCrawlRB:LyingCrawlL {
			preload = 0;
			file = "\TZK_Anims_4_0_0\plizeni135l.rtm";
			speed = -1.1;
		};
		class LyingCrawlB:LyingCrawlL {
			preload = 0;
			file = "\TZK_Anims_4_0_0\plizeni180L.rtm";
			speed = -1.1;
		};
		class LyingDying:DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\plazenismrt.rtm";
			speed = -1;
			onLandEnd = 1;
			looped = 0;
			soundEnabled = 0;
		};
		class CivilLying:Default {
			actions = "CivilLyingActions";
			file = "\TZK_Anims_4_0_0\lehcivil.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			duty = -1;
			disableWapons = 1;
			disableWeaponsLong = 1;
			visibleSize = 0.25;
			aimPrecision = 0.15;
			recoilSuffix = "fixed";
		};
		class CivilLyingNoAim:CivilLying {
			limitGunMovement = 0;
			aiming = "aimingNo";
			legs = "legsNo";
		};
		class CivilLyingStillV1:CivilLying {
			file = "\TZK_Anims_4_0_0\lehcivilvar.rtm";
			speed = -6.1999998;
		};
		class CivilLyingCrawlF:CivilLyingNoAim {
			actions = "CivilCrawlingActions";
			file = "\TZK_Anims_4_0_0\plazni0l.rtm";
			speed = -1.0;
			duty = 0.0;
		};
		class CivilLyingFastCrawlF:CivilLyingCrawlF {
			actions = "CivilCrawlingActions";
			file = "\TZK_Anims_4_0_0\ultraplaz.rtm";
			speed = -0.8;
			duty = 0.6;
		};
		class CivilLyingCrawlLF:CivilLyingCrawlF {
			file = "\TZK_Anims_4_0_0\plizeni-45l.rtm";
			speed = -1.0;
		};
		class CivilLyingCrawlRF:CivilLyingCrawlF {
			file = "\TZK_Anims_4_0_0\plizeni45l.rtm";
			speed = -1.0;
		};
		class CivilLyingCrawlL:CivilLyingCrawlF {
			actions = "CivilLyingActions";
			file = "\TZK_Anims_4_0_0\plizeni-90l.rtm";
			speed = -1.0;
		};
		class CivilLyingCrawlR:CivilLyingCrawlL {
			file = "\TZK_Anims_4_0_0\plizeni90l.rtm";
			speed = -1.0;
		};
		class CivilLyingCrawlLB:CivilLyingCrawlL {
			file = "\TZK_Anims_4_0_0\plizeni-135l.rtm";
			speed = -1.1;
		};
		class CivilLyingCrawlRB:CivilLyingCrawlL {
			file = "\TZK_Anims_4_0_0\plizeni135l.rtm";
			speed = -1.1;
		};
		class CivilLyingCrawlB:CivilLyingCrawlL {
			file = "\TZK_Anims_4_0_0\plizeni180L.rtm";
			speed = -1.1;
		};
		class CivilLyingDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\civillehsmrt.rtm";
			speed = -1;
			onLandEnd = 1;
			looped = 0;
			soundEnabled = 0;
		};
		class CivilLyingDead:CivilLyingDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\civillehsmrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class WeaponDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\atsmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			soundEnabled = 0;
		};
		class WeaponDyingVer2:WeaponDying {
			file = "\TZK_Anims_4_0_0\atsmrtB.rtm";
		};
		class WeaponDead:WeaponDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\atsmrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			variantsPlayer[] = {"WeaponDead",0.5,"WeaponDeadVer2"};
			equivalentTo = "WeaponDead";
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
		class WeaponDeadVer2:WeaponDead {
			file = "\TZK_Anims_4_0_0\atsmrtB2.rtm";
		};
		class SitDownDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\bezsedismrt.rtm";
			speed = -0.6;
			looped = 0;
			onLandEnd = 1;
			soundEnabled = 0;
		};
		class SitDownDead:SitDownDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\bezsedismrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class StandDying:DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\bezsmrt.rtm";
			speed = -2;
			looped = 0;
			onLandEnd = 1;
			interpolationSpeed = 5;
		};
		class StandDead:StandDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\bezsmrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			variantsPlayer[] = {"StandDead",0.5,"StandDeadVer2"};
			equivalentTo = "StandDead";
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
		class StandDyingVer2:DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\bezsmrtB.rtm";
			speed = -2;
			looped = 0;
			onLandEnd = 1;
			interpolationSpeed = 5;
		};
		class StandDeadVer2:StandDead {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\bezsmrtB2.rtm";
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
		};
		class CivilDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\civilsmrtb.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {};
			connectTo[] = {"CivilDead",1};
		};
		class CivilDead:CivilDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\civilsmrtb2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CivilDead",0.5,"CivilDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CivilDead";
		};
		class CivilDyingVer2:CivilDying {
			file = "\TZK_Anims_4_0_0\civilsmrt.rtm";
			connectTo[] = {"CivilDeadVer2",1};
		};
		class CivilDeadVer2:CivilDead {
			file = "\TZK_Anims_4_0_0\civilsmrt2.rtm";
		};
		class CombatDying:DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ssmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatDead",1};
		};
		class CombatDead:CombatDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ssmrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			variantsPlayer[] = {"CombatDead",0.5,"CombatDeadVer3",0.2,"CombatDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CombatDead";
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CombatDyingVer2:DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ssmrtB.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatDeadVer2",1};
		};
		class CombatDeadVer2:CombatDead {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ssmrtb2.rtm";
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CombatDyingVer3:DefaultDie {
			preload = 1;
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\kulometsmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"Combat",1};
			connectTo[] = {"CombatDeadVer3",1};
		};
		class CombatDeadVer3:CombatDead {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\kulometsmrt2.rtm";
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
		};
		class CombatRunDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\sbehsmrt0b.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {"CombatRunF",1,"AimCombatRunF",1,"OroCombatRunF",1};
			connectTo[] = {"CombatRunDead",1};
		};
		class CombatRunDead:CombatRunDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\sbehsmrt0b2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CombatRunDead",0.75,"CombatRunDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CombatRunDead";
		};
		class CombatRunDyingVer2:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\sbehsmrt0.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {"CombatRunF",1,"AimCombatRunF",1,"OroCombatRunF",1};
			connectTo[] = {"CombatRunDeadVer2",1};
		};
		class CombatRunDeadVer2:CombatRunDyingVer2 {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\sbehsmrt02.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			equivalentTo = "CombatRunDead";
			variantAfter[] = {0,0,0};
		};
		class CombatRunBDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\sbehsmrt180b.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			interpolateFrom[] = {"CombatRunB",1,"AimCombatRunB",1};
			connectTo[] = {"CombatRunBDead",1};
		};
		class CombatRunBDead:CombatRunBDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\sbehsmrt180b2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CombatRunBDead",0.75,"CombatRunBDeadVer2"};
			variantAfter[] = {0,0,0};
			equivalentTo = "CombatRunBDead";
		};
		class CombatRunBDyingVer2:CombatRunBDying {
			file = "\TZK_Anims_4_0_0\sbehsmrt180.rtm";
			connectTo[] = {"CombatRunBDeadVer2",1};
		};
		class CombatRunBDeadVer2:CombatRunBDead {
			file = "\TZK_Anims_4_0_0\sbehsmrt1802.rtm";
		};
		class CombatRelaxedDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\kulometsmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"CombatRelaxed",1};
			connectTo[] = {"CombatRelaxedDead",1};
		};
		class CombatRelaxedDead:DefaultDie {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\kulometsmrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			variantsPlayer[] = {"CombatRelaxedDeadVer2",0.25,"CombatRelaxedDead"};
			variantAfter[] = {0,0,0};
		};
		class CombatRelaxedDyingVer2:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ssmrt.rtm";
			speed = -1.6;
			looped = 0;
			onLandEnd = 1;
			connectFrom[] = {"CombatRelaxed",1};
			connectTo[] = {"CombatRelaxedDeadVer2",1};
		};
		class CombatRelaxedDeadVer2:DefaultDie {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ssmrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			connectFrom[] = {};
			interpolateFrom[] = {};
			connectTo[] = {"DeadState",10};
			equivalentTo = "CombatRelaxedDead";
			variantsPlayer[] = {"CombatRelaxedDeadVer2",0.25,"CombatRelaxedDead"};
			variantAfter[] = {0,0,0};
		};
		class LyingDead:LyingDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\plazenismrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			terminal = 1;
		};
		class CargoDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\Cargosmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
		};
		class CargoDead:CargoDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\Cargosmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"CargoDying",1};
			connectTo[] = {"DeadState",1};
		};
		class CombatToWeapon:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\stanidoAT.rtm";
			speed = -2.4000001;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class LyingToWeapon:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\lehdoat.rtm";
			speed = "- 3.0";
			visibleSize = 0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponToLying:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\atdolehu.rtm";
			speed = -2.8;
			looped = 0;
			visibleSize = 0.7;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class Weapon:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\atstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			enableMissile = 1;
			duty = -1;
			visibleSize = 0.6;
			aimPrecision = 0.25;
			recoilSuffix = "halffixed";
		};
		class WeaponWalkF:Weapon {
			preload = 1;
			actions = "WeaponActions";
			aimPrecision = 1.5;
			looped = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogat0.rtm";
			speed = -0.7;
			duty = -0.3;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
		};
		class WeaponWalkL:Weapon {
			duty = -0.3;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogat-90.rtm";
			speed = -0.9;
			aimPrecision = 1.5;
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
		};
		class WeaponWalkR:Weapon {
			duty = -0.3;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogat90.rtm";
			speed = -0.9;
			aimPrecision = 1.5;
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
		};
		class WeaponWalkB:Weapon {
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
			enableOptics = 0;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogat180.rtm";
			aimPrecision = 3;
			speed = -1;
			looped = 1;
			duty = -0.5;
		};
		class WeaponWalkLF:Weapon {
			duty = -0.5;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogat-45.rtm";
			speed = -0.8;
			aimPrecision = 2;
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
		};
		class WeaponWalkRF:Weapon {
			duty = -0.5;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogat45.rtm";
			speed = -0.8;
			aimPrecision = 2;
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
		};
		class WeaponWalkLB:Weapon {
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
			enableOptics = 0;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogat-135.rtm";
			speed = -1;
			looped = 1;
			duty = -0.5;
			aimPrecision = 2.5;
		};
		class WeaponWalkRB:Weapon {
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
			enableOptics = 0;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jogat135.rtm";
			speed = -1;
			looped = 1;
			duty = -0.5;
			aimPrecision = 2.5;
		};
		class WeaponTurnL:Weapon {
			file = "\TZK_Anims_4_0_0\atstat.rtm";
			speed = -1.5;
			looped = 1;
			duty = -0.5;
			soundEnabled = 0;
		};
		class SlowWeaponWalkF:Weapon {
			file = "\TZK_Anims_4_0_0\at0l.rtm";
			speed = -1.1;
			looped = 1;
			duty = -0.5;
		};
		class SlowWeaponWalkL:Weapon {
			file = "\TZK_Anims_4_0_0\at-90l.rtm";
			speed = -1.1;
			looped = 1;
			duty = -0.5;
		};
		class SlowWeaponWalkR:Weapon {
			file = "\TZK_Anims_4_0_0\at90l.rtm";
			speed = -1.1;
			looped = 1;
			duty = -0.5;
		};
		class SlowWeaponWalkB:Weapon {
			file = "\TZK_Anims_4_0_0\at180l.rtm";
			aimPrecision = 3;
			speed = -1.4;
			looped = 1;
			duty = -0.5;
		};
		class SlowWeaponWalkLF:Weapon {
			file = "\TZK_Anims_4_0_0\at-45l.rtm";
			speed = -1.1;
			looped = 1;
			duty = -0.5;
		};
		class SlowWeaponWalkRF:Weapon {
			file = "\TZK_Anims_4_0_0\at45l.rtm";
			speed = -1.1;
			looped = 1;
			duty = -0.5;
		};
		class SlowWeaponWalkLB:Weapon {
			file = "\TZK_Anims_4_0_0\at-135l.rtm";
			aimPrecision = 2;
			speed = -1.25;
			looped = 1;
			duty = -0.5;
		};
		class SlowWeaponWalkRB:Weapon {
			file = "\TZK_Anims_4_0_0\at135l.rtm";
			aimPrecision = 2;
			speed = -1.25;
			looped = 1;
			duty = -0.5;
		};
		class WeaponTurnR:Weapon {
			file = "\TZK_Anims_4_0_0\atstat.rtm";
			speed = -1.5;
			looped = 1;
			duty = -0.5;
			soundEnabled = 0;
		};
		class WeaponReloadAT:Weapon {
			file = "\TZK_Anims_4_0_0\atnabij.rtm";
			speed = -4.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponRunF:Weapon {
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
			enableOptics = 0;
			file = "\TZK_Anims_4_0_0\ww4_modanim\runat0.rtm";
			speed = -0.5;
			looped = 1;
			duty = 0.8;
		};
		class WeaponRunRF:WeaponRunF {
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
			enableOptics = 0;
			file = "\TZK_Anims_4_0_0\ww4_modanim\runat45.rtm";
			speed = -0.55;
			looped = 1;
			duty = 0.8;
		};
		class WeaponRunLF:WeaponRunF {
			disableWeapons = 1;
			enableMissile = 0;
			showWeaponAim = 0;
			enableOptics = 0;
			file = "\TZK_Anims_4_0_0\ww4_modanim\runat-45.rtm";
			speed = -0.55;
			looped = 1;
			duty = 0.8;
		};
		class WeaponToCombat:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\ATdostani.rtm";
			speed = "- 1.5";
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Weapon",2};
			connectTo[] = {"Combat",2};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class WeaponToATBinoc:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\atbinoc1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class ATBinoc:Default {
			actions = "ATBinocActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\atbinocstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			head = "headNo";
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class ATBinocToWeapon:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\atbinoc2.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
//handgunstart
		class HandGunCrouch:HandGunDefault {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pklekstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {"HandGunCrouchVar2",0.7,"HandGunCrouch",0.3};
			equivalentTo = "HandGunCrouch";
		};
		class HandGunCrouchBase:HandGunCrouch {
			variantsAI[] = {};
			equivalentTo = "";
		};
		class HandGunCrouchVar2:HandGunCrouch {
			file = "\o\Anim\pklek.rtm";
			speed = -1;
			interpolateWith[] = {"HandGunCrouch",0.5};
			interpolateTo[] = {"HandGunCrouchDying",0.1};
		};
		class HandGunCrouchToHandGunStand:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pklek2pstani.rtm";
			speed = -0.6;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunCrouch",1};
			connectTo[] = {"HandGunStand",1};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunCrouchToHandGunLying:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pklek2pistleh.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunCrouch",1};
			connectTo[] = {"HandGunLying",1};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class HandGunCrouchReloadMagazine:HandGunDefault {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pkleknabit.rtm";
			speed = -1.5;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunCrouch",2};
			connectTo[] = {"HandGunCrouch",2};
			interpolateTo[] = {"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
		};
		class HandGunCrouchToBinocHandGunCrouch:HandGunDefault {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pklekdalek1.rtm";
			speed = -0.8;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunCrouch",2};
			interpolateTo[] = {"HandGunCrouchDying",0.01,"HandGunCrouchDyingVer2",0.01};
		};
		class BinocHandGunCrouch:HandGunDefault {
			actions = "BinocHandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pklekdalekstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			connectFrom[] = {"HandGunCrouchToBinocHandGunCrouch",1};
			connectTo[] = {"BinocHandGunCrouchToHandGunCrouch",1};
			interpolateTo[] = {"HandGunCrouchDying",0.01,"HandGunCrouchDyingVer2",0.01};
		};
		class BinocHandGunCrouchToHandGunCrouch:HandGunDefault {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pklekdalek2.rtm";
			speed = -0.8;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunCrouch",2};
			interpolateTo[] = {"HandGunCrouchDying",0.01,"HandGunCrouchDyingVer2",0.01};
		};
		class HandGunCrouchDying:HandGunDie {
			actions = "NoActions";
			file = "\o\Anim\pkleksmrtA.rtm";
			speed = -1;
			looped = 0;
			connectFrom[] = {"HandGunCrouch",1};
			connectTo[] = {"HandGunCrouchDead",1};
		};
		class HandGunCrouchDyingVer2:HandGunCrouchDying {
			file = "\o\Anim\pkleksmrtB.rtm";
			connectFrom[] = {"HandGunCrouch",1};
			connectTo[] = {"HandGunCrouchDeadVer2",1};
		};
		class HandGunCrouchDead:HandGunDie {
			actions = "DeadActions";
			file = "\o\Anim\pkleksmrtA2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			variantsPlayer[] = {"HandGunCrouchDead",0.5,"HandGunCrouchDeadVer2"};
			equivalentTo = "HandGunCrouchDead";
			variantAfter[] = {0,0,0};
			terminal = 1;
			connectTo[] = {"DeadState",10};
		};
		class HandGunCrouchDeadVer2:HandGunCrouchDead {
			file = "\o\Anim\pkleksmrtB2.rtm";
		};
		class HandGunLying:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pistlehstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			duty = -1;
			variantAfter[] = {1,3,6};
			variantsAI[] = {"HandGunLyingVar2",0.7,"HandGunLying",0.3};
			equivalentTo = "HandGunLying";
		};
		class HandGunLyingVar2:HandGunLying {
			file = "\o\Anim\pistleh.rtm";
			speed = -1;
			interpolateWith[] = {"HandGunLying",0.5};
			interpolateTo[] = {"HandGunLyingDying",0.01};
		};
		class HandGunLyingToHandGunCrouch:HandGunDefault {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pistleh2pklek.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunLying",1};
			connectTo[] = {"HandGunCrouch",1};
			interpolateTo[] = {"HandGunCrouchDying",0.01};
		};
		class HandGunLyingReloadMagazine:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pistlehnabit.rtm";
			speed = -2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunLying",2};
			connectTo[] = {"HandGunLying",2};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class HandGunLyingThrowGrenade1:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\o\Anim\pistlehgranat1.rtm";
			speed = -1.6;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			connectFrom[] = {"HandGunLying",2};
			connectTo[] = {"HandGunLyingThrowGrenade2",2};
			interpolateTo[] = {"HandGunLyingDying",0.5};
		};
		class HandGunLyingThrowGrenade2:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\o\Anim\pistlehgranat2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			connectTo[] = {"HandGunLying",2};
			interpolateTo[] = {"HandGunLying",1.9,"HandGunLyingDying",0.5};
		};
		class HandGunLyingNoAim:HandGunLying {
			limitGunMovement = 0;
			aiming = "aimingNo";
			legs = "legsNo";
			variantsAI[] = {};
			equivalentTo = "";
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class HandGunLyingCrawlF:HandGunLyingNoAim {
			file = "\o\Anim\pplazeni0.rtm";
			speed = -1.0;
			disableWeapons = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "crawl";
			duty = 0.0;
			interpolateWith[] = {"HandGunLying",1,"HandGunLyingFastCrawlF",1,"HandGunLyingCrawlF",1,"HandGunLyingCrawlLF",1,"HandGunLyingCrawlRF",1,"HandGunLyingCrawlL",1,"HandGunLyingCrawlR",1};
		};
		class HandGunLyingFastCrawlF:HandGunLyingCrawlF {
			file = "\o\Anim\pultraplaz.rtm";
			speed = -0.8;
			duty = 0.6;
		};
		class HandGunLyingCrawlLF:HandGunLyingCrawlF {
			file = "\o\Anim\pplazeni-45.rtm";
			speed = -1.0;
		};
		class HandGunLyingCrawlRF:HandGunLyingCrawlF {
			file = "\o\Anim\pplazeni45.rtm";
			speed = -1.0;
		};
		class HandGunLyingCrawlL:HandGunLyingCrawlF {
			file = "\o\Anim\pplazeni-90.rtm";
			speed = -1.0;
		};
		class HandGunLyingCrawlR:HandGunLyingCrawlF {
			file = "\o\Anim\pplazeni90.rtm";
			speed = -1.0;
		};
		class HandGunLyingCrawlB:HandGunLyingNoAim {
			file = "\o\Anim\pplazeni180.rtm";
			speed = -1.1;
			duty = 0.0;
			disableWeapons = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "crawl";
			interpolateWith[] = {"HandGunLying",1,"HandGunLyingCrawlB",1,"HandGunLyingCrawlLB",1,"HandGunLyingCrawlRB",1,"HandGunLyingCrawlL",1,"HandGunLyingCrawlR",1};
		};
		class HandGunLyingCrawlLB:HandGunLyingCrawlB {
			file = "\o\Anim\pplazeni-135.rtm";
			speed = -1.1;
		};
		class HandGunLyingCrawlRB:HandGunLyingCrawlB {
			file = "\o\Anim\pplazeni135.rtm";
			speed = -1.1;
		};
		class HandGunLyingTurnL:HandGunLyingNoAim {
			preload = 0;
			file = "\o\Anim\pplazenidoleva.rtm";
			speed = -4;
			duty = 0.0;
			interpolationSpeed = 5;
			interpolateWith[] = {"HandGunLying",1,"HandGunLyingTurnR",1};
		};
		class HandGunLyingTurnR:HandGunLyingNoAim {
			preload = 0;
			file = "\o\Anim\pplazenidoprava.rtm";
			speed = -4;
			duty = 0.0;
			interpolationSpeed = 5;
			interpolateWith[] = {"HandGunLying",1,"HandGunLyingTurnL",1};
		};
		class HandGunLyingToBinocHandGunLying:Default {
			actions = "HandGunLyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pistlehdalek1.rtm";
			speed = -1.2;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			connectFrom[] = {"HandGunLying",2};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class BinocHandGunLying:Default {
			actions = "BinocHandGunLyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pistlehdalekstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			connectFrom[] = {"HandGunLyingToBinocHandGunLying",1};
			connectTo[] = {"BinocHandGunLyingToHandGunLying",1};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class BinocHandGunLyingToHandGunLying:Default {
			actions = "HandGunLyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pistlehdalek2.rtm";
			speed = -1.2;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunLying",2};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class HandGunLyingDying:HandGunDie {
			actions = "NoActions";
			file = "\o\Anim\pistlehsmrt.rtm";
			speed = -1;
			looped = 0;
			connectFrom[] = {"HandGunLying",1};
			connectTo[] = {"HandGunLyingDead",1};
		};
		class HandGunLyingDead:HandGunDie {
			actions = "DeadActions";
			file = "\o\Anim\pistlehsmrt2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			terminal = 1;
			connectTo[] = {"DeadState",10};
		};
		class HandGunStand:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pstanistat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {"HandGunStandVar2",0.7,"HandGunStand",0.3};
			equivalentTo = "HandGunStand";
		};
		class HandGunStandBase:HandGunStand {
			variantsAI[] = {};
			equivalentTo = "";
		};
		class HandGunStandVar2:HandGunStand {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pstanistat.rtm";
			speed = -1;
			interpolateWith[] = {"HandGunStand",0.5};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class HandGunStandToHandGunCrouch:HandGunDefault {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pstani2pklek.rtm";
			speed = -0.5;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",1};
			connectTo[] = {"HandGunCrouch",1};
			interpolateTo[] = {"HandGunCrouchDying",0.5,"HandGunCrouchDyingVer2",0.5};
		};
		class HandGunStandReloadMagazine:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pstaninabit.rtm";
			speed = -1.6;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",2};
			connectTo[] = {"HandGunStand",2};
			interpolateTo[] = {"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
		};
		class HandGunStandThrowGrenade1:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\pstanigranat1.rtm";
			speed = -1.8;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			connectFrom[] = {"HandGunStand",2};
			connectTo[] = {"HandGunStandThrowGrenade2",2};
			interpolateTo[] = {"HandGunStandDyingVer2",0.7};
		};
		class HandGunStandThrowGrenade2:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\pstanigranat2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			connectTo[] = {"HandGunStand",2};
			interpolateTo[] = {"HandGunStand",1.9,"HandGunStandDyingVer2",0.7};
		};
		class HandGunStandWalkF:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pchuze0.rtm";
			speed = -1;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateWith[] = {"HandGunStand",1,"HandGunStandWalkF",1,"HandGunStandWalkLF",1,"HandGunStandWalkRF",1,"HandGunStandWalkL",1,"HandGunStandWalkR",1,"HandGunStandWalkB",1,"HandGunStandWalkLB",1,"HandGunStandWalkRB",1,"HandGunStandRunF",1,"HandGunStandRunLF",1,"HandGunStandRunRF",1,"HandGunStandRunL",1,"HandGunStandRunR",1,"HandGunStandRunB",1,"HandGunStandRunLB",1,"HandGunStandRunRB",1,"AHandGunStandRunF",1,"HandGunStandJogF",1,"HandGunStandJogLF",1,"HandGunStandJogRF",1,"HandGunStandJogL",1,"HandGunStandJogR",1,"NHandGunStandJogF",1,"HandGunStandJogLB",1,"HandGunStandJogRB",1,"HandGunStandJogB",1,"NHandGunStandJogLF",1,"NHandGunStandJogRF",1,"NHandGunStandJogL",1,"NHandGunStandJogR",1,"HandGunStandJogLB",1,"HandGunStandJogRB",1,"HandGunStandJogB",1,"NHandGunStandJogLB",1,"NHandGunStandJogRB",1,"NHandGunStandJogB",1,"HandGunCrouchWalkF",1,"HandGunCrouchWalkLF",1,"HandGunCrouchWalkRF",1,"HandGunCrouchWalkB",0.5,"HandGunCrouchWalkLB",0.5,"HandGunCrouchWalkRB",0.5,"HandGunCrouchWalkL",0.5,"HandGunCrouchWalkR",0.5,"HandGunCrouchRunF",0.5,"HandGunCrouchRunLF",0.5,"HandGunCrouchRunRF",0.5,"HandGunCrouchRunB",0.5,"HandGunCrouchRunLB",0.5,"HandGunCrouchRunRB",0.5,"HandGunCrouchRunL",0.5,"HandGunCrouchRunR",0.5,"HandGunCrouch",1,"APCrouchRunF",1,"APCrouchRunLF",1,"APCrouchRunRF",1,"APCrouchRunL",1,"APCrouchRunR",1,"PCrouchRunF",1,"PCrouchRunLF",1,"PCrouchRunRF",1,"PCrouchRunL",1,"PCrouchRunR",1};
		};
		class HandGunStandWalkLF:HandGunStandWalkF {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pchuze-45.rtm";
		};
		class HandGunStandWalkRF:HandGunStandWalkF {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pchuze45.rtm";
		};
		class HandGunStandWalkL:HandGunStandWalkF {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pchuze-90.rtm";
		};
		class HandGunStandWalkR:HandGunStandWalkF {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pchuze90.rtm";
		};
		class HandGunStandWalkB:HandGunStandWalkF {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pchuze180.rtm";
		};
		class HandGunStandWalkLB:HandGunStandWalkB {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pchuze-135.rtm";
		};
		class HandGunStandWalkRB:HandGunStandWalkB {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pchuze135.rtm";
		};
		class HandGunStandRunF:HandGunStandWalkF {
			actions = "HandGunStandRunFActions";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			file = "\TZK_Anims_4_0_0\civilbeh0l.rtm";
			speed = -0.45;
			looped = 1;
			duty = 0.5;
			showWeaponAim = 0;
			enableOptics = 0;
		};
		class AHandGunStandRunF:HandGunStandWalkF {
			actions = "AHandGunStandRunFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\APsprint.rtm";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.45;
			looped = 1;
			duty = 0.5;
			showWeaponAim = 0;
			enableOptics = 0;
		};
		class HandGunStandRunLF:HandGunStandRunF {
			file = "\TZK_Anims_4_0_0\civilbeh-45l.rtm";
		};
		class HandGunStandRunRF:HandGunStandRunF {
			file = "\TZK_Anims_4_0_0\civilbeh45l.rtm";
		};
		class HandGunStandRunL:HandGunStandRunF {
			file = "\TZK_Anims_4_0_0\civilbeh-90l.rtm";
		};
		class HandGunStandRunR:HandGunStandRunF {
			file = "\TZK_Anims_4_0_0\civilbeh90l.rtm";
		};
		class HandGunStandRunB:HandGunStandRunF {
			file = "\TZK_Anims_4_0_0\civilbeh180l.rtm";
			interpolateWith[] = {"HandGunStand",1,"HandGunStandWalkB",1,"HandGunStandWalkLB",1,"HandGunStandWalkRB",1,"HandGunStandWalkL",1,"HandGunStandWalkR",1,"HandGunStandRunB",1,"HandGunStandRunLB",1,"HandGunStandRunRB",1,"HandGunStandRunL",1,"HandGunStandRunR",1};
		};
		class HandGunStandRunLB:HandGunStandRunB {
			file = "\TZK_Anims_4_0_0\civilbeh-135l.rtm";
		};
		class HandGunStandRunRB:HandGunStandRunB {
			file = "\TZK_Anims_4_0_0\civilbeh135l.rtm";
		};
		class HandGunStandTurnL:HandGunStandBase {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pvlevo.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.5;
			relSpeedMax = 1.0;
			duty = -1;
			equivalentTo = "";
			variantsAI[] = {};
			interpolationSpeed = 5;
			interpolateWith[] = {"HandGunStand",1,"HandGunStandTurnR",1};
		};
		class HandGunStandTurnR:HandGunStandBase {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pvpravo.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.5;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
			interpolateWith[] = {"HandGunStand",1,"HandGunStandTurnL",1};
		};
		class HandGunStandRelaxed:HandGunStand {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pawarestat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			variantsAI[] = {"HandGunStandRelaxedStill",0.8,"HandGunStandRelaxed"};
			interpolateWith[] = {"HandGunStand",1,"HandGunStandRelaxed",1,"HandGunStandRelaxedStill",1,"HandGunStandTurnLRelaxed",1,"HandGunStandTurnRRelaxed",1};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunStandRelaxedStill:HandGunStandRelaxed {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pawarestat.rtm";
			speed = -5;
			looped = 1;
			disableWeapons = 0;
			equivalentTo = "HandGunStandRelaxed";
		};
		class HandGunStandTurnLRelaxed:HandGunStandTurnL {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pawarevlevo.rtm";
			speed = -2.5999999;
			interpolateWith[] = {"HandGunStand",1,"HandGunStandRelaxed",1,"HandGunStandRelaxedStill",1,"HandGunStandTurnLRelaxed",1,"HandGunStandTurnRRelaxed",1};
		};
		class HandGunStandTurnRRelaxed:HandGunStandTurnR {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pawarevpravo.rtm";
			speed = -2.5999999;
			interpolateWith[] = {"HandGunStand",1,"HandGunStandRelaxed",1,"HandGunStandRelaxedStill",1,"HandGunStandTurnLRelaxed",1,"HandGunStandTurnRRelaxed",1};
		};
		class HandGunStandToBinocHandGunStand:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pdalek1.rtm";
			speed = -0.8;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",2};
			interpolateTo[] = {"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
		};
		class BinocHandGunStand:HandGunDefault {
			actions = "BinocHandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pdalekstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 0;
			showItemInHand = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			connectFrom[] = {"HandGunStandToBinocHandGunStand",1};
			connectTo[] = {"BinocHandGunStandToHandGunStand",1};
		};
		class BinocHandGunStandToHandGunStand:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pdalek2.rtm";
			speed = -0.8;
			looped = 0;
			disableWeapons = 1;
			showItemInHand = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunstand",2};
			interpolateTo[] = {"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
		};
		class HandGunStandDying:HandGunDie {
			actions = "NoActions";
			file = "\o\Anim\pstanismrtA.rtm";
			speed = -1;
			looped = 0;
			connectFrom[] = {"HandGunStand",1};
			connectTo[] = {"HandGunStandDead",1};
		};
		class HandGunStandDyingVer2:HandGunStandDying {
			file = "\o\Anim\pstanismrtB.rtm";
			connectFrom[] = {"HandGunStand",1};
			connectTo[] = {"HandGunStandDeadVer2",1};
		};
		class HandGunStandDead:HandGunDie {
			actions = "DeadActions";
			file = "\o\Anim\pstanismrtA2.rtm";
			speed = 10000000000.0;
			looped = 1;
			onLandBeg = 1;
			variantsPlayer[] = {"HandGunStandDead",0.5,"HandGunStandDeadVer2"};
			equivalentTo = "HandGunStandDead";
			variantAfter[] = {0,0,0};
			terminal = 1;
			connectTo[] = {"DeadState",10};
		};
		class HandGunStandDeadVer2:HandGunStandDead {
			file = "\o\Anim\pstanismrtB2.rtm";
		};
		class HandGunCrouchWalkF:HandGunStandWalkF {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\PCRschuze0l.rtm";
			enableOptics = 1;
		};
		class HandGunCrouchWalkLF:HandGunStandWalkLF {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\PCRschuze-45l.rtm";
			enableOptics = 1;
		};
		class HandGunCrouchWalkRF:HandGunStandWalkRF {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\PCRschuze45l.rtm";
			enableOptics = 1;
		};
		class HandGunCrouchWalkL:HandGunStandWalkL {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\PCRschuze-90l.rtm";
			enableOptics = 1;
		};
		class HandGunCrouchWalkR:HandGunStandWalkR {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\PCRschuze90l.rtm";
			enableOptics = 1;
		};
		class HandGunCrouchWalkB:HandGunStandWalkB {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\PCRschuze180l.rtm";
			enableOptics = 1;
		};
		class HandGunCrouchWalkLB:HandGunStandWalkLB {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\PCRschuze-135l.rtm";
			enableOptics = 1;
		};
		class HandGunCrouchWalkRB:HandGunStandWalkRB {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\PCRschuze135l.rtm";
			enableOptics = 1;
		};
		class HandGunCrouchRunF:HandGunStandRunF {
			actions = "HandGunCrouchActions";
			connectAs = "HandGunStandRunF";
			enableOptics = 0;
		};
		class HandGunCrouchRunLF:HandGunStandRunLF {
			actions = "HandGunCrouchActions";
			connectAs = "HandGunStandRunLF";
			enableOptics = 0;
		};
		class HandGunCrouchRunRF:HandGunStandRunRF {
			actions = "HandGunCrouchActions";
			connectAs = "HandGunStandRunRF";
			enableOptics = 0;
		};
		class HandGunCrouchRunL:HandGunStandRunL {
			actions = "HandGunCrouchActions";
			connectAs = "HandGunStandRunL";
			enableOptics = 0;
		};
		class HandGunCrouchRunR:HandGunStandRunR {
			actions = "HandGunCrouchActions";
			connectAs = "HandGunStandRunR";
			enableOptics = 0;
		};
		class HandGunCrouchRunB:HandGunStandRunB {
			actions = "HandGunCrouchActions";
			connectAs = "HandGunStandRunB";
			enableOptics = 0;
		};
		class HandGunCrouchRunLB:HandGunStandRunLB {
			actions = "HandGunCrouchActions";
			connectAs = "HandGunStandRunLB";
			enableOptics = 0;
		};
		class HandGunCrouchRunRB:HandGunStandRunRB {
			actions = "HandGunCrouchActions";
			connectAs = "HandGunStandRunRB";
			enableOptics = 0;
		};
		class HandGunCrouchTurnL:HandGunCrouchBase {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pvlevo.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.5;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
			interpolateWith[] = {"HandGunCrouch",1,"HandGunCrouchTurnR",1};
		};
		class HandGunCrouchTurnR:HandGunCrouchBase {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pvpravo.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.5;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
			interpolateWith[] = {"HandGunCrouch",1,"HandGunCrouchTurnL",1};
		};
		class CombatToHandGunStand1:Default {
			actions = "HandGunStandActions";
			file = "\o\Anim\sstani2pstani1.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",0.5};
			connectTo[] = {"CombatToHandGunStand2",0.5};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class CombatToHandGunStand2:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\sstani2pstani2.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunStand",0.5};
			interpolateTo[] = {"HandGunStand",0.9,"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunStandToCombat1:HandGunDefault {
			actions = "CombatActions";
			file = "\o\Anim\pstani2sstani1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",0.5};
			connectTo[] = {"HandGunStandToCombat2",0.5};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class HandGunStandToCombat2:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pstani2sstani2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Combat",0.5};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class HandGunCivilBase:StandBase {
			aiming = "aimingNo";
			duty = -1;
			disableWapons = 1;
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\Civilstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			interpolationSpeed = 2;
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
			interpolateWith[] = {Civil,1};
		};
		class HandGunCivil:HandGunCivilBase {
		};
		class HandGunCivilStillV1:HandGunCivil {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\Civilstani.rtm";
			speed = -10;
			looped = 1;
			soundEnabled = 0;
		};
		class HandGunCivilWalkF:HandGunCivilBase {
			file = "\TZK_Anims_4_0_0\Civilchuze0l.rtm";
			soundEnabled = 1;
			speed = -1.2;
			looped = 1;
			duty = -0.7;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateWith[] = {"HandGunCivil",0.1,"HandGunCivilRunF",0.1,"HandGunCivilSprintF",0.1,"HandGunCivilWalkLF",0.1,"HandGunCivilWalkRF",0.1,"HandGunCivilWalkR",0.1,"HandGunCivilWalkL",0.1,"HandGunCivilWalkLB",0.1,"HandGunCivilWalkRB",0.1,"HandGunCivilWalkB",0.1,"HandGunCivilRunLF",0.1,"HandGunCivilRunRF",0.1,"HandGunCivilRunR",0.1,"HandGunCivilRunL",0.1,"HandGunCivilRunRB",0.1,"HandGunCivilRunLB",0.1,"HandGunCivilRunB",0.1};
		};
		class HandGunCivilWalkLF:HandGunCivilWalkF {
			file = "\TZK_Anims_4_0_0\Civilchuze-45l.rtm";
		};
		class HandGunCivilWalkRF:HandGunCivilWalkF {
			file = "\TZK_Anims_4_0_0\Civilchuze45l.rtm";
		};
		class HandGunCivilWalkL:HandGunCivilWalkF {
			file = "\TZK_Anims_4_0_0\Civilchuze90l.rtm";
		};
		class HandGunCivilWalkR:HandGunCivilWalkF {
			file = "\TZK_Anims_4_0_0\Civilchuze-90l.rtm";
		};
		class HandGunCivilWalkLB:HandGunCivilWalkF {
			file = "\TZK_Anims_4_0_0\Civilchuze-135l.rtm";
		};
		class HandGunCivilWalkRB:HandGunCivilWalkF {
			file = "\TZK_Anims_4_0_0\Civilchuze135l.rtm";
		};
		class HandGunCivilWalkB:HandGunCivilWalkF {
			file = "\TZK_Anims_4_0_0\Civilchuze180l.rtm";
		};
		class HandGunCivilRunF:HandGunCivilWalkF {
			actions = "HandGunCivilRunFActions";
			file = "\TZK_Anims_4_0_0\Civilbeh0l.rtm";
			speed = -0.5;
			looped = 1;
			duty = DutyTiringMed;
		};
		class HandGunCivilSprintF:HandGunCivilWalkF {
			actions = "HandGunCivilRunFActions";
			file = "\TZK_Anims_4_0_0\Civilbeh0l.rtm";
			speed = -0.25;
			looped = 1;
			duty = DutyTiringFull;
		};
		class HandGunCivilRunLF:HandGunCivilRunF {
			file = "\TZK_Anims_4_0_0\Civilbeh-45l.rtm";
		};
		class HandGunCivilRunRF:HandGunCivilRunF {
			file = "\TZK_Anims_4_0_0\Civilbeh45l.rtm";
		};
		class HandGunCivilRunL:HandGunCivilRunF {
			file = "\TZK_Anims_4_0_0\Civilbeh-90l.rtm";
		};
		class HandGunCivilRunR:HandGunCivilRunF {
			file = "\TZK_Anims_4_0_0\Civilbeh90l.rtm";
		};
		class HandGunCivilRunB:HandGunCivilRunF {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\Civilbeh180l.rtm";
		};
		class HandGunCivilRunLB:HandGunCivilRunB {
			file = "\TZK_Anims_4_0_0\Civilbeh-135l.rtm";
		};
		class HandGunCivilRunRB:HandGunCivilRunB {
			file = "\TZK_Anims_4_0_0\Civilbeh135l.rtm";
		};
		class HandGunCivilTurnR:HandGunCivilBase {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\Civildoprava.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1.0;
			interpolationSpeed = 5;
		};
		class HandGunCivilTurnL:HandGunCivilBase {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\Civildoleva.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.9;
			relSpeedMax = 1.0;
			interpolationSpeed = 5;
		};
		class HandGunCivilThrowGrenadeStart:Default {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\Civilgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = DutyTiringFull;
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunCivilThrowGrenadeEnd:Default {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\Civilgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = DutyTiringFull;
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunCivilRunThrowGrenadeStart:Default {
			actions = "HandGunCivilRunFActions";
			file = "\TZK_Anims_4_0_0\behgranat1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = DutyTiringFull;
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunCivilRunThrowGrenadeEnd:Default {
			actions = "HandGunCivilRunFActions";
			file = "\TZK_Anims_4_0_0\behgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = DutyTiringFull;
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunCivilToHandGunCivilLying:Default {
			file = "\TZK_Anims_4_0_0\Civil2leh.rtm";
			speed = -1.5;
			looped = 0;
			onLandEnd = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "laydown";
			soundEdge1 = 0.1;
			soundEdge2 = 0.1;
			interpolateTo[] = {"HandGunCivilLyingDying",1};
		};
		class HandGunCivilLyingToHandGunCivil:Default {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\leh2HandGunCivil.rtm";
			speed = -2;
			looped = 0;
			onLandBeg = 1;
			enableOptics = 0;
			soundEnabled = 1;
			soundOverride = "standup";
			soundEdge1 = 0.01;
			soundEdge2 = 0.01;
			interpolateTo[] = {"HandGunStandDying",1,"HandGunStandDyingVer2",1};
		};
		class StandToHandGunStand1:Default {
			actions = "HandGunStandActions";
			file = "\o\Anim\bezstani2pstani1.rtm";
			speed = -0.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",0.5};
			connectTo[] = {"StandToHandGunStand2",0.5};
			interpolateTo[] = {"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
		};
		class StandToHandGunStand2:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\bezstani2pstani2.rtm";
			speed = -0.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunStand",0.5};
			interpolateTo[] = {"HandGunStand",0.9,"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
		};
		class HandGunStandToStand1:HandGunDefault {
			actions = "StandActions";
			file = "\o\Anim\pstani2bezstani1.rtm";
			speed = -0.5;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",0.5};
			connectTo[] = {"HandGunStandToStand2",0.5};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class HandGunStandToStand2:Default {
			actions = "StandActions";
			file = "\o\Anim\pstani2bezstani2.rtm";
			speed = -0.5;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Stand",0.5};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CivilToHandGunStand1:Default {
			actions = "HandGunStandActions";
			file = "\o\Anim\civilstani2pstani1.rtm";
			speed = -0.32;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Civil",0.5};
			connectTo[] = {"CivilToHandGunStand2",0.5};
			interpolateTo[] = {"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
		};
		class CivilToHandGunStand2:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\civilstani2pstani2.rtm";
			speed = -0.32;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunStand",0.5};
			interpolateTo[] = {"HandGunstand",0.9,"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
		};
		class HandGunStandToCivil1:HandGunDefault {
			actions = "CivilActions";
			file = "\o\Anim\pstani2civilstani1.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",0.5};
			connectTo[] = {"HandGunStandToCivil2",0.5};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class HandGunStandToCivil2:Default {
			actions = "CivilActions";
			file = "\o\Anim\pstani2civilstani2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Civil",0.5};
			interpolateTo[] = {"Civil",0.9,"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CrouchToHandGunCrouch1:Default {
			actions = "HandGunCrouchActions";
			file = "\o\Anim\sklek2pklek1.rtm";
			speed = -1.2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",0.5};
			connectTo[] = {"CrouchToHandGunCrouch2",0.5};
			interpolateTo[] = {"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
		};
		class CrouchToHandGunCrouch2:HandGunDefault {
			actions = "HandGunCrouchActions";
			file = "\o\Anim\sklek2pklek2.rtm";
			speed = -0.5;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunCrouch",0.5};
			interpolateTo[] = {"HandgunCrouch",0.9,"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
		};
		class HandGunCrouchToCrouch1:HandGunDefault {
			actions = "CrouchActions";
			file = "\o\Anim\pklek2sklek1.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunCrouch",0.5};
			connectTo[] = {"HandGunCrouchToCrouch2",0.5};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class HandGunCrouchToCrouch2:Default {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pklek2sklek2.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Crouch",0.5};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class LyingToHandGunLying1:Default {
			actions = "HandGunLyingActions";
			file = "\o\Anim\sleh2pleh1.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Lying",0.5};
			connectTo[] = {"LyingToHandGunLying2",0.5};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class LyingToHandGunLying2:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\o\Anim\sleh2pleh2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunLying",0.5};
			interpolateTo[] = {"HandGunLying",0.9,"HandGunLyingDying",0.1};
		};
		class HandGunLyingToLying1:HandGunDefault {
			actions = "LyingActions";
			file = "\o\Anim\pleh2sleh1.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunLying",0.5};
			connectTo[] = {"HandGunLyingToLying2",0.5};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class HandGunLyingToLying2:Default {
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pleh2sleh2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Lying",0.5};
			interpolateTo[] = {"LyingDying",0.1};
		};
		class CivilLyingToHandGunLying1:Default {
			actions = "HandGunLyingActions";
			file = "\o\Anim\civilleh2pistleh1.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"CivilLying",0.5};
			connectTo[] = {"CivilLyingToHandGunLying2",0.5};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class CivilLyingToHandGunLying2:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\o\Anim\civilleh2pistleh2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunLying",0.5};
			interpolateTo[] = {"HandGunLying",0.9,"HandGunLyingDying",0.1};
		};
		class HandGunLyingToCivilLying1:HandGunDefault {
			actions = "CivilLyingActions";
			file = "\o\Anim\pistleh2civilleh1.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunLying",0.5};
			connectTo[] = {"HandGunLyingToCivilLying2",0.5};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class HandGunLyingToCivilLying2:Default {
			actions = "CivilLyingActions";
			file = "\o\Anim\pistleh2civilleh2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"CivilLying",0.5};
			interpolateTo[] = {"CivilLyingDying",0.1};
		};
		class WeaponToHandGunCrouch0:Default {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pat2crouch.rtm";
			speed = -2.25;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Weapon",0.5};
			connectTo[] = {"HandGunCrouch",1};
			interpolateTo[] = {"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
		};
		class HandGunCrouchToWeapon0:HandGunDefault {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pcrouch2at.rtm";
			speed = -2.25;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunCrouch",0.5};
			connectTo[] = {"Weapon",1};
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class HandGunGetInCar:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\posobak.rtm";
			speed = -2;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",1};
			connectTo[] = {"HandGunStand",1};
		};
		class HandGunGetInTank:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\pnastup.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",1};
			connectTo[] = {"HandGunStand",1};
		};
		class HandGunGetOutTank:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\pseskok.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",1};
			connectTo[] = {"HandGunStand",1};
			interpolateTo[] = {"HandGunStandDying",0.5,"HandGunStandDyingVer2",0.5};
		};
		class HandGunStandToHandGunMedic:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\pmedicstart.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",1};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunMedic:HandGunDefault {
			actions = "HandGunMedicActions";
			file = "\o\Anim\pmedicloop.rtm";
			speed = -3;
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"HandGunStandToHandGunMedic",2};
			connectTo[] = {"HandGunMedicToHandGunStand",2};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunMedicToHandGunStand:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\pmedicend.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunStand",1};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunStandToHandGunPutDown:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pstanipoloz1.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",1};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunPutDown:HandGunDefault {
			actions = "HandGunPutDownActions";
			file = "\o\Anim\pstanipolozstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"HandGunStandToHandGunPutDown",2};
			//connectTo[] = {"HandGunPutDownToHandGunStand",2};
			connectTo[] = {"HandGunCrouchPutDownToHandGunCrouch",2};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunPutDownToHandGunStand:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pstanipoloz2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunStand",1};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};		};
//tes
		class HandGunCrouchToHandGunCrouchPutDown:HandGunDefault {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pcstanipoloz1.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunCrouch",1};
			interpolateTo[] = {"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
		};
		class HandGunCrouchPutDown:HandGunDefault {
			actions = "HandGunCrouchPutDownActions";
			file = "\o\Anim\pstanipolozstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"HandGunCrouchToHandGunCrouchPutDown",2};
			connectTo[] = {"HandGunCrouchPutDownToHandGunCrouch",2};
			interpolateTo[] = {"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};
		};
		class HandGunCrouchPutDownToHandGunCrouch:HandGunDefault {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pcstanipoloz2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunCrouch",1};
			interpolateTo[] = {"HandGunCrouchDying",0.1,"HandGunCrouchDyingVer2",0.1};		};
		class HandGunStandToHandGunTakeFlag:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\pstanipoloz1.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",1};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunTakeFlag:HandGunDefault {
			actions = "HandGunTakeFlagActions";
			file = "\o\Anim\pstanipolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"HandGunStandToHandGunTakeFlag",2};
			connectTo[] = {"HandGunTakeFlagToHandGunStand",2};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunTakeFlagToHandGunStand:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\pstanipoloz2.rtm";
			speed = -1;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunStand",1};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunStandToHandGunTreated:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\pistosetrovanstart.rtm";
			speed = -3;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunStand",1};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunTreated:HandGunDefault {
			actions = "HandGunTreatedActions";
			file = "\o\Anim\pistosetrovanloop.rtm";
			speed = -3;
			looped = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"HandGunStandToHandGunTreated",2};
			connectTo[] = {"HandGunTreatedToHandGunStand",2};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunTreatedToHandGunStand:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\o\Anim\pistosetrovanend.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunStand",1};
			interpolateTo[] = {"HandGunStandDying",0.1,"HandGunStandDyingVer2",0.1};
		};
		class HandGunLyingToHandGunLyingPutDown:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pistlehpoloz1.rtm";
			speed = -1;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunLying",1};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class HandGunLyingPutDown:HandGunDefault {
			actions = "HandGunLyingPutDownActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pistlehpolozstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"HandGunLyingToHandGunLyingPutDown",2};
			connectTo[] = {"HandGunLyingPutDownToHandGunLying",2};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class HandGunLyingPutDownToHandGunLying:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pistlehpoloz2.rtm";
			speed = -1;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunLying",1};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class HandGunLyingToHandGunLyingTreated:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\o\Anim\pistlehosetrovanstart.rtm";
			speed = -2;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunLying",1};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class HandGunLyingTreated:HandGunDefault {
			actions = "HandGunLyingTreatedActions";
			file = "\o\Anim\pistlehosetrovanloop.rtm";
			speed = -3;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"HandGunLyingToHandGunLyingTreated",2};
			connectTo[] = {"HandGunLyingTreatedToHandGunLying",2};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		class HandGunLyingTreatedToHandGunLying:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\o\Anim\pistlehosetrovanend.rtm";
			speed = -1.0;
			looped = 0;
			visibleSize = 0.28;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"HandGunLying",1};
			interpolateTo[] = {"HandGunLyingDying",0.1};
		};
		
		class WW4pCrouchLeanLeft: HandGunCrouchWalkF {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\crchlenlft.rtm";
			speed = -0.800000;
			looped = 0;
			duty = -1;
			soundEnabled = 0;
			soundOverride = "halt";
			soundEdge1 = 0.100000;
			soundEdge2 = 0.2;
			enableOptics = 1;
			legs = "legsDefault";
			relSpeedMin = 0.700000;
			relSpeedMax = 1.000000;
			interpolationSpeed = 1;
			interpolateTo[] = {"HandGunCrouch",1};
			interpolateFrom[] = {"HandGunCrouch",1};
		};
		class WW4pCrouchLeanRight: WW4pCrouchLeanLeft {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\crchlenrgt.rtm";
			interpolationSpeed = 1;
		};
		class WW4pStandLeanLeft: HandGunStandWalkF {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\stanlenlft.rtm";
			speed = -0.800000;
			looped = 0;
			duty = -0.700000;
			soundOverride = "halt";
			soundEnabled = 0;
			soundEdge1 = 0.100000;
			soundEdge2 = 0.15;
			legs = "legsDefault";
			relSpeedMin = 0.700000;
			relSpeedMax = 1.000000;
			interpolationSpeed = 1;
			interpolateTo[] = {"HandGunStand",1};
			interpolateFrom[] = {"HandGunStand",1};
		};
		class WW4pStandLeanRight: WW4pStandLeanLeft {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\stanlenrgt.rtm";
			interpolationSpeed = 1;
		};

		class HandGunLying0:HandGunDefault {
			actions = "HandGunLyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pistlehstat.rtm";
			speed = 0.1;
			looped = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			duty = -1;
			interpolateTo[] = {"HandGunLying",0.1};
		};
		class WW4pProneRollRight:HandGunDefault {
			preload = 1;
			actions = "HandGunLyingActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\ProllRight.rtm";
			duty = 2;
			speed = -1.2;
			disableWeapons = 1;
			enableOptics = 0;
			connectFrom[] = {"HandGunLying",1};
			connectTo[] = {"HandGunLying0",1};
			soundEdge1 = 0.1;
			soundEdge2 = 0.6;
			soundEnabled = 1;
			soundOverride = "crawl";
			looped = 1;
		};
		class WW4pProneRollLeft:WW4pProneRollRight {
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\ProllLeft.rtm";
		};
		class HandGunStandJogF:HandGunStandWalkF {
			preload = 1;
			actions = "APStandJogFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pjoggin0l.rtm";
			speed = -0.7;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
		};
		class HandGunStandJogLF:HandGunStandWalkLF {
			preload = 1;
			actions = "APStandJogLFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pjoggin-45l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
		};
		class HandGunStandJogRF:HandGunStandWalkRF {
			preload = 1;
			actions = "APStandJogRFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pjoggin45l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
		};
		class HandGunStandJogL:HandGunStandWalkL {
			preload = 1;
			actions = "APStandJogLActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pjoggin-90l.rtm";
			speed = -0.95;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
		};
		class HandGunStandJogR:HandGunStandWalkR {
			preload = 1;
			actions = "APStandJogRActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pjoggin90l.rtm";
			speed = -0.95;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
		};
		class HandGunStandJogRB:HandGunStandWalkRB {
			preload = 1;
			actions = "APStandJogRBActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pjoggin135l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
		};
		class HandGunStandJogLB:HandGunStandWalkLB {
			preload = 1;
			actions = "APStandJogLBActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pjoggin-135l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
		};
		class HandGunStandJogB:HandGunStandWalkB {
			preload = 1;
			actions = "APStandJogBActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pjoggin180l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
		};
		class NHandGunStandJogF:HandGunStandWalkF {
			preload = 1;
			actions = "PStandJogFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\npjoggin0l.rtm";
			speed = -0.7;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
		};
		class NHandGunStandJogLF:HandGunStandWalkLF {
			preload = 1;
			actions = "PStandJogLFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\npjoggin-45l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
		};
		class NHandGunStandJogRF:HandGunStandWalkRF {
			preload = 1;
			actions = "PStandJogRFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\npjoggin45l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
		};
		class NHandGunStandJogL:HandGunStandWalkL {
			preload = 1;
			actions = "PStandJogLActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\npjoggin-90l.rtm";
			speed = -0.95;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
		};
		class NHandGunStandJogR:HandGunStandWalkR {
			preload = 1;
			actions = "PStandJogRActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\npjoggin90l.rtm";
			speed = -0.95;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
		};
		class NHandGunStandJogRB:HandGunStandWalkRB {
			preload = 1;
			actions = "PStandJogRBActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\npjoggin135l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
		};
		class NHandGunStandJogLB:HandGunStandWalkLB {
			preload = 1;
			actions = "PStandJogLBActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\npjoggin-135l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
		};
		class NHandGunStandJogB:HandGunStandWalkB {
			preload = 1;
			actions = "PStandJogBActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\npjoggin180l.rtm";
			speed = -0.8;
			looped = 1;
			duty = -0.5;
			showWeaponAim = 0;
			enableOptics = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
};
		class PCrouchRunF:HandGunStandJogF {
			actions = "PCrouchRunFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\Pcrouchrun0.rtm";
			duty = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			speed = -0.7;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"APCrouchRunF",0.1,"HandGunCrouchWalkF",1};
			interpolateTo[] = {"APCrouchRunF",0.1,"HandGunCrouch",1,"HandGunCrouchWalkF",1,"HandGunStandRunF",1};
			enableOptics = 0;
			interpolateWith[] = {"HandGunCrouch",1,"PCrouchRunF",0.5,"PCrouchRunLF",0.5,"PCrouchRunRF",0.5,"PCrouchRunL",0.5,"PCrouchRunR",0.5};
		};
		class PCrouchRunLF:HandGunStandJogLF {
			actions = "PCrouchRunLFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\Pcrouchrun-45.rtm";
			duty = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"APCrouchRunLF",0.1,"HandGunCrouchWalkF",1};
			interpolateTo[] = {"APCrouchRunLF",0.1,"HandGunCrouch",1,"HandGunCrouchWalkF",1,"HandGunStandRunF",1};
			interpolateWith[] = {"HandGunCrouch",1,"PCrouchRunF",0.5,"PCrouchRunLF",0.5,"PCrouchRunRF",0.5,"PCrouchRunL",0.5,"PCrouchRunR",0.5};
			enableOptics = 0;
		};
		class PCrouchRunRF:HandGunStandJogRF {
			actions = "PCrouchRunRFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\Pcrouchrun45.rtm";
			duty = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"APCrouchRunRF",0.1,"HandGunCrouchWalkF",1};
			interpolateTo[] = {"APCrouchRunRF",0.1,"HandGunCrouch",1,"HandGunCrouchWalkF",1,"HandGunStandRunF",1};
			interpolateWith[] = {"HandGunCrouch",1,"PCrouchRunF",0.5,"PCrouchRunLF",0.5,"PCrouchRunRF",0.5,"PCrouchRunL",0.5,"PCrouchRunR",0.5};
			enableOptics = 0;
		};
		class PCrouchRunL:HandGunStandJogL {
			actions = "PCrouchRunLActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\Pcrouchrun-90.rtm";
			duty = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"APCrouchRunL",0.1,"HandGunCrouchWalkF",1};
			interpolateTo[] = {"APCrouchRunL",0.1,"HandGunCrouch",1,"HandGunCrouchWalk",1,"HandGunStandRunF",1};
			interpolateWith[] = {"HandGunCrouch",1,"PCrouchRunF",0.5,"PCrouchRunLF",0.5,"PCrouchRunRF",0.5,"PCrouchRunL",0.5,"PCrouchRunR",0.5};
			enableOptics = 0;
		};
		class PCrouchRunR:HandGunStandJogR {
			actions = "PCrouchRunRActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\Pcrouchrun90.rtm";
			duty = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"APCrouchRunR",0.1,"HandGunCrouchWalkF",1};
			interpolateTo[] = {"APCrouchRunR",0.1,"HandGunCrouch",1,"HandGunCrouchWalk",1,"HandGunStandRunF",1};
			interpolateWith[] = {"HandGunCrouch",1,"PCrouchRunF",0.5,"PCrouchRunLF",0.5,"PCrouchRunRF",0.5,"PCrouchRunL",0.5,"PCrouchRunR",0.5};
			enableOptics = 0;
		};
		class APCrouchRunF:HandGunStandJogF {
			actions = "APCrouchRunFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\APcrouchrun0.rtm";
			duty = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.7;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"PCrouchRunF",0.1,"HandGunCrouchWalkF",1};
			interpolateTo[] = {"PCrouchRunF",0.1,"HandGunCrouch",1,"HandGunCrouchWalkF",1,"HandGunStandRunF",1};
			enableOptics = 0;
			interpolateWith[] = {"HandGunCrouch",1,"APCrouchRunF",0.5,"APCrouchRunLF",0.5,"APCrouchRunRF",0.5,"APCrouchRunL",0.5,"APCrouchRunR",0.5};
		};
		class APCrouchRunLF:HandGunStandJogLF {
			actions = "APCrouchRunLFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\APcrouchrun-45.rtm";
			duty = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"PCrouchRunLF",0.1,"HandGunCrouchWalkF",1};
			interpolateTo[] = {"PCrouchRunLF",0.1,"HandGunCrouch",1,"HandGunCrouchWalkF",1,"HandGunStandRunF",1};
			interpolateWith[] = {"HandGunCrouch",1,"APCrouchRunF",0.5,"APCrouchRunLF",0.5,"APCrouchRunRF",0.5,"APCrouchRunL",0.5,"APCrouchRunR",0.5};
			enableOptics = 0;
		};
		class APCrouchRunRF:HandGunStandJogRF {
			actions = "APCrouchRunRFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\APcrouchrun45.rtm";
			duty = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"PCrouchRunRF",0.1,"HandGunCrouchWalkF",1};
			interpolateTo[] = {"PCrouchRunRF",0.1,"HandGunCrouch",1,"HandGunCrouchWalkF",1,"HandGunStandRunF",1};
			interpolateWith[] = {"HandGunCrouch",1,"APCrouchRunF",0.5,"APCrouchRunLF",0.5,"APCrouchRunRF",0.5,"APCrouchRunL",0.5,"APCrouchRunR",0.5};
			enableOptics = 0;
		};
		class APCrouchRunL:HandGunStandJogL {
			actions = "APCrouchRunLActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\APcrouchrun-90.rtm";
			duty = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"PCrouchRunL",0.1,"HandGunCrouchWalkF",1};
			interpolateTo[] = {"PCrouchRunL",0.1,"HandGunCrouch",1,"HandGunCrouchWalk",1,"HandGunStandRunF",1};
			interpolateWith[] = {"HandGunCrouch",1,"APCrouchRunF",0.5,"APCrouchRunLF",0.5,"APCrouchRunRF",0.5,"APCrouchRunL",0.5,"APCrouchRunR",0.5};
			enableOptics = 0;
		};
		class APCrouchRunR:HandGunStandJogR {
			actions = "APCrouchRunRActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\APcrouchrun90.rtm";
			duty = 0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			speed = -0.8;
			looped = 1;
			relSpeedMin = 0.7;
			relSpeedMax = 1.0;
			interpolateFrom[] = {"PCrouchRunR",0.1,"HandGunCrouchWalkF",1};
			interpolateTo[] = {"PCrouchRunR",0.1,"HandGunCrouch",1,"HandGunCrouchWalk",1,"HandGunStandRunF",1};
			interpolateWith[] = {"HandGunCrouch",1,"APCrouchRunF",0.5,"APCrouchRunLF",0.5,"APCrouchRunRF",0.5,"APCrouchRunL",0.5,"APCrouchRunR",0.5};
			enableOptics = 0;
		};
		class PistolRunThrowGrenadeStart:HandGunDefault {
			actions = "HandGunStandRunFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\Psbehgranat.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CombatRunDying",0.1,"CombatRunDyingVer2",0.1};
			connectFrom[] = {"HandGunStandRunF",1};
			connectTo[] = {"PistolRunThrowGrenadeEnd",1};
		};
		class PistolRunThrowGrenadeEnd:HandGunDefault {
			actions = "HandGunStandRunFActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\Psbehgranat2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			connectFrom[] = {"PistolRunThrowGrenadeStart",1};
			connectTo[] = {"HandGunStand",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
//handgunend
		class Driver:Default {
			actions = "CargoActions";
			file = "\TZK_Anims_4_0_0\cargo.rtm";
			speed = -25;
			looped = 1;
			soundEnabled = 0;
		};
		class ah64Pilot:Driver {
			file = "\apac\ah64pilotstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ah64PilotV1",0.7,"ah64Pilot"};
			interpolateWith[] = {"ah64PilotV1",0.5};
			equivalentTo = "ah64Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"ah64PilotDying",1};
		};
		class ah64PilotV1:ah64Pilot {
			file = "\apac\ah64pilot.rtm";
			speed = "- 4";
			looped = 1;
		};
		class ah64PilotDying:DefaultDie {
			actions = "NoActions";
			file = "\apac\ah64pilotsmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ah64Pilot",1};
		};
		class ah64PilotDead:ah64PilotDying {
			actions = "DeadActions";
			file = "\apac\ah64pilotsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ah64PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ah64Gunner:Driver {
			file = "\apac\ah64gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ah64GunnerV1",0.7,"ah64Gunner"};
			interpolateWith[] = {"ah64GunnerV1",0.5};
			equivalentTo = "ah64Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"ah64GunnerDying",1};
		};
		class ah64GunnerV1:ah64Gunner {
			file = "\apac\ah64gunner.rtm";
			speed = "- 4";
			looped = 1;
		};
		class ah64GunnerDying:DefaultDie {
			actions = "NoActions";
			file = "\apac\ah64gunnersmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ah64Gunner",1};
		};
		class ah64GunnerDead:ah64GunnerDying {
			actions = "DeadActions";
			file = "\apac\ah64gunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ah64GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Pilot:Driver {
			file = "\TZK_Anims_4_0_0\cargo.rtm";
			speed = -1;
			looped = 1;
		};
		class Gunner:Driver {
			file = "\TZK_Anims_4_0_0\cargo.rtm";
			speed = -10;
			looped = 1;
		};
		class Commander:Driver {
			file = "\TZK_Anims_4_0_0\cargo.rtm";
			speed = -10;
			looped = 1;
		};
		class Cargo:Driver {
			actions = "CargoActions";
			file = "\TZK_Anims_4_0_0\cargostat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"CargoVer1",0.6,"CargoVer2",0.1,"CargoVer3",0.1,"CargoVer4",0.1,"CargoVer5",0.1,"Cargo"};
			equivalentTo = "Cargo";
			interpolationSpeed = 1;
		};
		class CargoVer1:Cargo {
			file = "\TZK_Anims_4_0_0\cargosoft.rtm";
			speed = -3.8;
			looped = 1;
		};
		class CargoVer2:Cargo {
			file = "\TZK_Anims_4_0_0\cargomenipusku.rtm";
			speed = -3.8;
			looped = 1;
		};
		class CargoVer3:Cargo {
			file = "\TZK_Anims_4_0_0\cargopuska.rtm";
			speed = -4.1999998;
			looped = 1;
		};
		class CargoVer4:Cargo {
			file = "\TZK_Anims_4_0_0\cargorozhlizise.rtm";
			speed = -3.2;
			looped = 1;
		};
		class CargoVer5:Cargo {
			file = "\TZK_Anims_4_0_0\cargo.rtm";
			speed = -9.6000004;
			looped = 1;
		};
		class M113Gunner:Driver {
			file = "\TZK_Anims_4_0_0\M113Gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M113GunnerV1",0.7,"M113Gunner"};
			interpolateWith[] = {"M113GunnerV1",0.5};
			equivalentTo = "M113Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"M113GunnerDying",1};
		};
		class M113GunnerV1:M113Gunner {
			file = "\TZK_Anims_4_0_0\M113Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M113GunnerDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\M113Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M113Gunner",1};
		};
		class M113GunnerDead:M113GunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\M113Gunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"M113GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M113Driver:Driver {
			file = "\TZK_Anims_4_0_0\M113Driverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M113DriverV1",0.7,"M113Driver"};
			interpolateWith[] = {"M113DriverV1",0.5};
			equivalentTo = "M113Driver";
			interpolationSpeed = 1;
		};
		class M113DriverV1:M113Driver {
			file = "\TZK_Anims_4_0_0\M113Driver.rtm";
			speed = -4;
			looped = 1;
		};
		class M113DriverOut:Driver {
			file = "\TZK_Anims_4_0_0\M113DriverOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M113DriverOutV1",0.7,"M113DriverOut"};
			interpolateWith[] = {"M113DriverOutV1",0.5};
			equivalentTo = "M113DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"M113DriverOutDying",1};
		};
		class M113DriverOutV1:M113DriverOut {
			file = "\TZK_Anims_4_0_0\M113DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M113DriverOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\M113DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M113DriverOut",1};
		};
		class M113DriverOutDead:M113DriverOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\M113DriverOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"M113DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M113Medic:Driver {
			file = "\TZK_Anims_4_0_0\M113Medicstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M113MedicV1",0.7,"M113Medic"};
			interpolateWith[] = {"M113MedicV1",0.5};
			equivalentTo = "M113Medic";
			interpolationSpeed = 1;
		};
		class M113MedicV1:M113Medic {
			file = "\TZK_Anims_4_0_0\M113Medic.rtm";
			speed = -4;
			looped = 1;
		};
		class Nemocnej:Driver {
			file = "\TZK_Anims_4_0_0\Nemocnejstat.rtm";
			speed = 10000000000.0;
			looped = 1;
		};
		class M60Gunner:Driver {
			file = "\TZK_Anims_4_0_0\M60Gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M60GunnerV1",0.7,"M60Gunner"};
			interpolateWith[] = {"M60GunnerV1",0.5};
			equivalentTo = "M60Gunner";
			interpolationSpeed = 1;
		};
		class M60GunnerV1:M60Gunner {
			file = "\TZK_Anims_4_0_0\M60Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M60Driver:Driver {
			file = "\TZK_Anims_4_0_0\M60Driverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M60DriverV1",0.7,"M60Driver"};
			interpolateWith[] = {"M60DriverV1",0.5};
			equivalentTo = "M60Driver";
			interpolationSpeed = 1;
		};
		class M60DriverV1:M60Driver {
			file = "\TZK_Anims_4_0_0\M60Driver.rtm";
			speed = -4;
			looped = 1;
		};
		class M60Commander:Driver {
			file = "\TZK_Anims_4_0_0\M60Commanderstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M60CommanderV1",0.7,"M60Commander"};
			interpolateWith[] = {"M60CommanderV1",0.5};
			equivalentTo = "M60Commander";
			interpolationSpeed = 1;
		};
		class M60CommanderV1:M60Commander {
			file = "\TZK_Anims_4_0_0\M60Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class M60DriverOut:Driver {
			file = "\TZK_Anims_4_0_0\M60DriverOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M60DriverOutV1",0.7,"M60DriverOut"};
			interpolateWith[] = {"M60DriverOutV1",0.5};
			equivalentTo = "M60DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"M60DriverOutDying",1};
		};
		class M60DriverOutV1:M60DriverOut {
			file = "\TZK_Anims_4_0_0\M60DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M60DriverOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\M60DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M60DriverOut",1};
		};
		class M60DriverOutDead:M60DriverOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\M60DriverOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"M60DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M60CommanderOut:Driver {
			file = "\TZK_Anims_4_0_0\M60CommanderOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M60CommanderOutV1",0.7,"M60CommanderOut"};
			interpolateWith[] = {"M60CommanderOutV1",0.5};
			equivalentTo = "M60CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"M60CommanderOutDying",1};
		};
		class M60CommanderOutV1:M60CommanderOut {
			file = "\TZK_Anims_4_0_0\M60CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M60CommanderOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\M60CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M60CommanderOut",1};
		};
		class M60CommanderOutDead:M60CommanderOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\M60CommanderOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"M60CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M1A1Commander:Driver {
			file = "\TZK_Anims_4_0_0\M1A1Commanderstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M1A1CommanderV1",0.7,"M1A1Commander"};
			interpolateWith[] = {"M1A1CommanderV1",0.5};
			equivalentTo = "M1A1Commander";
			interpolationSpeed = 1;
		};
		class M1A1CommanderV1:M1A1Commander {
			file = "\TZK_Anims_4_0_0\M1A1Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1Gunner:Driver {
			file = "\TZK_Anims_4_0_0\M1A1Gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M1A1GunnerV1",0.7,"M1A1Gunner"};
			interpolateWith[] = {"M1A1GunnerV1",0.5};
			equivalentTo = "M1A1Gunner";
			interpolationSpeed = 1;
		};
		class M1A1GunnerV1:M1A1Gunner {
			file = "\TZK_Anims_4_0_0\M1A1Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1Driver:Driver {
			file = "\TZK_Anims_4_0_0\M1A1Driverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
		};
		class M1A1DriverOut:Driver {
			file = "\TZK_Anims_4_0_0\M1A1DriverOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M1A1DriverOutV1",0.7,"M1A1DriverOut"};
			interpolateWith[] = {"M1A1DriverOutV1",0.5};
			equivalentTo = "M1A1DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"M1A1DriverOutDying",1};
		};
		class M1A1DriverOutV1:M1A1DriverOut {
			file = "\TZK_Anims_4_0_0\M1A1DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1DriverOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\M1A1DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M1A1DriverOut",1};
		};
		class M1A1DriverOutDead:M1A1DriverOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\M1A1DriverOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"M1A1DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M1A1CommanderOut:Driver {
			file = "\TZK_Anims_4_0_0\M1A1CommanderOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"M1A1CommanderOutV1",0.7,"M1A1CommanderOut"};
			interpolateWith[] = {"M1A1CommanderOutV1",0.5};
			equivalentTo = "M1A1CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"M1A1CommanderOutDying",1};
		};
		class M1A1CommanderOutV1:M1A1CommanderOut {
			file = "\TZK_Anims_4_0_0\M1A1CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class M1A1CommanderOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\M1A1CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M1A1CommanderOut",1};
		};
		class M1A1CommanderOutDead:M1A1CommanderOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\M1A1CommanderOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"M1A1CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class BMPGunner:Driver {
			file = "\TZK_Anims_4_0_0\BMPGunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"BMPGunnerV1",0.7,"BMPGunner"};
			interpolateWith[] = {"BMPGunnerV1",0.5};
			equivalentTo = "BMPGunner";
			interpolationSpeed = 1;
		};
		class BMPGunnerV1:BMPGunner {
			file = "\TZK_Anims_4_0_0\BMPGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPDriver:Driver {
			file = "\TZK_Anims_4_0_0\BMPDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"BMPDriverV1",0.7,"BMPDriver"};
			interpolateWith[] = {"BMPDriverV1",0.5};
			equivalentTo = "BMPDriver";
			interpolationSpeed = 1;
		};
		class BMPDriverV1:BMPDriver {
			file = "\TZK_Anims_4_0_0\BMPDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPCommander:Driver {
			file = "\TZK_Anims_4_0_0\BMPCommanderstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"BMPCommanderV1",0.7,"BMPCommander"};
			interpolateWith[] = {"BMPCommanderV1",0.5};
			equivalentTo = "BMPCommander";
			interpolationSpeed = 1;
		};
		class BMPCommanderV1:BMPCommander {
			file = "\TZK_Anims_4_0_0\BMPCommander.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPGunnerOut:Driver {
			file = "\TZK_Anims_4_0_0\BMPGunnerOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"BMPGunnerOutV1",0.7,"BMPGunnerOut"};
			interpolateWith[] = {"BMPGunnerOutV1",0.5};
			equivalentTo = "BMPGunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"BMPGunnerOutDying",1};
		};
		class BMPGunnerOutV1:BMPGunnerOut {
			file = "\TZK_Anims_4_0_0\BMPGunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPGunnerOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BMPGunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BMPGunnerOut",1};
		};
		class BMPGunnerOutDead:BMPGunnerOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BMPGunnerOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"BMPGunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class BMPDriverOut:Driver {
			file = "\TZK_Anims_4_0_0\BMPDriverOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"BMPDriverOutV1",0.7,"BMPDriverOut"};
			interpolateWith[] = {"BMPDriverOutV1",0.5};
			equivalentTo = "BMPDriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"BMPDriverOutDying",1};
		};
		class BMPDriverOutV1:BMPDriverOut {
			file = "\TZK_Anims_4_0_0\BMPDriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPDriverOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BMPDriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BMPDriverOut",1};
		};
		class BMPDriverOutDead:BMPDriverOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BMPDriverOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"BMPDriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class BMPCommanderOut:Driver {
			file = "\TZK_Anims_4_0_0\BMPCommanderOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"BMPCommanderOutV1",0.7,"BMPCommanderOut"};
			interpolateWith[] = {"BMPCommanderOutV1",0.5};
			equivalentTo = "BMPCommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"BMPCommanderOutDying",1};
		};
		class BMPCommanderOutV1:BMPCommanderOut {
			file = "\TZK_Anims_4_0_0\BMPCommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class BMPCommanderOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BMPCommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BMPCommanderOut",1};
		};
		class BMPCommanderOutDead:BMPCommanderOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BMPCommanderOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"BMPCommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T72Gunner:Driver {
			file = "\TZK_Anims_4_0_0\T72Gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T72GunnerV1",0.7,"T72Gunner"};
			interpolateWith[] = {"T72GunnerV1",0.5};
			equivalentTo = "T72Gunner";
			interpolationSpeed = 1;
		};
		class T72GunnerV1:T72Gunner {
			file = "\TZK_Anims_4_0_0\T72Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class T72Driver:Driver {
			file = "\TZK_Anims_4_0_0\T72Driverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
		};
		class T72Commander:Driver {
			file = "\TZK_Anims_4_0_0\T72Commanderstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T72CommanderV1",0.7,"T72Commander"};
			interpolateWith[] = {"T72CommanderV1",0.5};
			equivalentTo = "T72Commander";
			interpolationSpeed = 1;
		};
		class T72CommanderV1:T72Commander {
			file = "\TZK_Anims_4_0_0\T72Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class T72DriverOut:Driver {
			file = "\TZK_Anims_4_0_0\T72DriverOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T72DriverOutV1",0.7,"T72DriverOut"};
			interpolateWith[] = {"T72DriverOutV1",0.5};
			equivalentTo = "T72DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"T72DriverOutDying",1};
		};
		class T72DriverOutV1:T72DriverOut {
			file = "\TZK_Anims_4_0_0\T72DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T72DriverOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\T72DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T72DriverOut",1};
		};
		class T72DriverOutDead:T72DriverOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\T72DriverOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"T72DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T72GunnerOut:Driver {
			file = "\TZK_Anims_4_0_0\T72GunnerOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T72GunnerOutV1",0.7,"T72GunnerOut"};
			interpolateWith[] = {"T72GunnerOutV1",0.5};
			equivalentTo = "T72GunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"T72GunnerOutDying",1};
		};
		class T72GunnerOutV1:T72GunnerOut {
			file = "\TZK_Anims_4_0_0\T72GunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T72GunnerOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\T72GunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T72GunnerOut",1};
		};
		class T72GunnerOutDead:T72GunnerOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\T72GunnerOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"T72GunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T72CommanderOut:Driver {
			file = "\TZK_Anims_4_0_0\T72CommanderOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T72CommanderOutV1",0.7,"T72CommanderOut"};
			interpolateWith[] = {"T72CommanderOutV1",0.5};
			equivalentTo = "T72CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"T72CommanderOutDying",1};
		};
		class T72CommanderOutV1:T72CommanderOut {
			file = "\TZK_Anims_4_0_0\T72CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T72CommanderOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\T72CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T72CommanderOut",1};
		};
		class T72CommanderOutDead:T72CommanderOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\T72CommanderOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"T72CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T80GunnerOut:Driver {
			file = "\TZK_Anims_4_0_0\T80GunnerOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T80GunnerOutV1",0.7,"T80GunnerOut"};
			interpolateWith[] = {"T80GunnerOutV1",0.5};
			equivalentTo = "T80GunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"T80GunnerOutDying",1};
		};
		class T80GunnerOutV1:T80GunnerOut {
			file = "\TZK_Anims_4_0_0\T80GunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T80GunnerOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\T80GunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T80GunnerOut",1};
		};
		class T80GunnerOutDead:T80GunnerOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\T80GunnerOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"T80GunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T80CommanderOut:Driver {
			file = "\TZK_Anims_4_0_0\T80CommanderOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T80CommanderOutV1",0.7,"T80CommanderOut"};
			interpolateWith[] = {"T80CommanderOutV1",0.5};
			equivalentTo = "T80CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"T80CommanderOutDying",1};
		};
		class T80CommanderOutV1:T80CommanderOut {
			file = "\TZK_Anims_4_0_0\T80CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T80CommanderOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\T80CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T80CommanderOut",1};
		};
		class T80CommanderOutDead:T80CommanderOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\T80CommanderOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"T80CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T55Gunner:Driver {
			file = "\TZK_Anims_4_0_0\T55Gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T55GunnerV1",0.7,"T55Gunner"};
			interpolateWith[] = {"T55GunnerV1",0.5};
			equivalentTo = "T55Gunner";
			interpolationSpeed = 1;
		};
		class T55GunnerV1:T55Gunner {
			file = "\TZK_Anims_4_0_0\T55Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class T55Commander:Driver {
			file = "\TZK_Anims_4_0_0\T55Commanderstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T55CommanderV1",0.7,"T55Commander"};
			interpolateWith[] = {"T55CommanderV1",0.5};
			equivalentTo = "T55Commander";
			interpolationSpeed = 1;
		};
		class T55CommanderV1:T55Commander {
			file = "\TZK_Anims_4_0_0\T55Commander.rtm";
			speed = -4;
			looped = 1;
		};
		class T55DriverOut:Driver {
			file = "\TZK_Anims_4_0_0\T55DriverOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T55DriverOutV1",0.7,"T55DriverOut"};
			interpolateWith[] = {"T55DriverOutV1",0.5};
			equivalentTo = "T55DriverOut";
			interpolationSpeed = 1;
			connectTo[] = {"T55DriverOutDying",1};
		};
		class T55DriverOutV1:T55DriverOut {
			file = "\TZK_Anims_4_0_0\T55DriverOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T55DriverOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\T55DriverOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T55DriverOut",1};
		};
		class T55DriverOutDead:T55DriverOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\T55DriverOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"T55DriverOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class T55CommanderOut:Driver {
			file = "\TZK_Anims_4_0_0\T55CommanderOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"T55CommanderOutV1",0.7,"T55CommanderOut"};
			interpolateWith[] = {"T55CommanderOutV1",0.5};
			equivalentTo = "T55CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"T55CommanderOutDying",1};
		};
		class T55CommanderOutV1:T55CommanderOut {
			file = "\TZK_Anims_4_0_0\T55CommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class T55CommanderOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\T55CommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"T55CommanderOut",1};
		};
		class T55CommanderOutDead:T55CommanderOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\T55CommanderOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"T55CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ZSUGunner:Driver {
			file = "\TZK_Anims_4_0_0\ZSUGunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ZSUGunnerV1",0.7,"ZSUGunner"};
			interpolateWith[] = {"ZSUGunnerV1",0.5};
			equivalentTo = "ZSUGunner";
			interpolationSpeed = 1;
		};
		class ZSUGunnerV1:ZSUGunner {
			file = "\TZK_Anims_4_0_0\ZSUGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUDriver:Driver {
			file = "\TZK_Anims_4_0_0\ZSUDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ZSUDriverV1",0.7,"ZSUDriver"};
			interpolateWith[] = {"ZSUDriverV1",0.5};
			equivalentTo = "ZSUDriver";
			interpolationSpeed = 1;
			connectTo[] = {"ZSUDriverDying",1};
		};
		class ZSUDriverV1:ZSUDriver {
			file = "\TZK_Anims_4_0_0\ZSUDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ZSUDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ZSUDriver",1};
		};
		class ZSUDriverDead:ZSUDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ZSUDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ZSUDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ZSUCommander:Driver {
			file = "\TZK_Anims_4_0_0\ZSUCommanderstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ZSUCommanderV1",0.7,"ZSUCommander"};
			interpolateWith[] = {"ZSUCommanderV1",0.5};
			equivalentTo = "ZSUCommander";
			interpolationSpeed = 1;
		};
		class ZSUCommanderV1:ZSUCommander {
			file = "\TZK_Anims_4_0_0\ZSUCommander.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUGunnerOut:Driver {
			file = "\TZK_Anims_4_0_0\ZSUGunnerOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ZSUGunnerOutV1",0.7,"ZSUGunnerOut"};
			interpolateWith[] = {"ZSUGunnerOutV1",0.5};
			equivalentTo = "ZSUGunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"ZSUGunnerOutDying",1};
		};
		class ZSUGunnerOutV1:ZSUGunnerOut {
			file = "\TZK_Anims_4_0_0\ZSUGunnerOut.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUGunnerOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ZSUGunnerOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ZSUGunnerOut",1};
		};
		class ZSUGunnerOutDead:ZSUGunnerOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ZSUGunnerOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ZSUGunnerOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ZSUCommanderOut:Driver {
			file = "\TZK_Anims_4_0_0\ZSUCommanderOutstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ZSUCommanderOutV1",0.7,"ZSUCommanderOut"};
			interpolateWith[] = {"ZSUCommanderOutV1",0.5};
			equivalentTo = "ZSUCommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"ZSUCommanderOutDying",1};
		};
		class ZSUCommanderOutV1:ZSUCommanderOut {
			file = "\TZK_Anims_4_0_0\ZSUCommanderOut.rtm";
			speed = -4;
			looped = 1;
		};
		class ZSUCommanderOutDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ZSUCommanderOutsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ZSUCommanderOut",1};
		};
		class ZSUCommanderOutDead:ZSUCommanderOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ZSUCommanderOutsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ZSUCommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UH60Pilot:Driver {
			file = "\TZK_Anims_4_0_0\UH60Pilotstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"UH60PilotV1",0.7,"UH60Pilot"};
			interpolateWith[] = {"UH60PilotV1",0.5};
			equivalentTo = "UH60Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"UH60PilotDying",1};
		};
		class UH60PilotV1:UH60Pilot {
			file = "\TZK_Anims_4_0_0\UH60Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class UH60PilotDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\UH60Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UH60Pilot",1};
		};
		class UH60PilotDead:UH60PilotDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\UH60Pilotsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"UH60PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UH60Gunner:Driver {
			file = "\TZK_Anims_4_0_0\UH60Gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"UH60GunnerV1",0.7,"UH60Gunner"};
			interpolateWith[] = {"UH60GunnerV1",0.5};
			equivalentTo = "UH60Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"UH60GunnerDying",1};
		};
		class UH60GunnerV1:UH60Gunner {
			file = "\TZK_Anims_4_0_0\UH60Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class UH60GunnerDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\UH60Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UH60Gunner",1};
		};
		class UH60GunnerDead:UH60GunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\UH60Gunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"UH60GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class AH1Pilot:Driver {
			file = "\TZK_Anims_4_0_0\AH1Pilotstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"AH1PilotV1",0.7,"AH1Pilot"};
			interpolateWith[] = {"AH1PilotV1",0.5};
			equivalentTo = "AH1Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"AH1PilotDying",1};
		};
		class AH1PilotV1:AH1Pilot {
			file = "\TZK_Anims_4_0_0\AH1Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class AH1PilotDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\AH1Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"AH1Pilot",1};
		};
		class AH1PilotDead:AH1PilotDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\AH1Pilotsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"AH1PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class AH1Gunner:Driver {
			file = "\TZK_Anims_4_0_0\AH1Gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"AH1GunnerV1",0.7,"AH1Gunner"};
			interpolateWith[] = {"AH1GunnerV1",0.5};
			equivalentTo = "AH1Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"AH1GunnerDying",1};
		};
		class AH1GunnerV1:AH1Gunner {
			file = "\TZK_Anims_4_0_0\AH1Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class AH1GunnerDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\AH1Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"AH1Gunner",1};
		};
		class AH1GunnerDead:AH1GunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\AH1Gunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"AH1GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class A10Pilot:Driver {
			file = "\TZK_Anims_4_0_0\A10Pilotstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"A10PilotV1",0.7,"A10Pilot"};
			interpolateWith[] = {"A10PilotV1",0.5};
			equivalentTo = "A10Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"A10PilotDying",1};
		};
		class A10PilotV1:A10Pilot {
			file = "\TZK_Anims_4_0_0\A10Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class A10PilotDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\A10Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"A10Pilot",1};
		};
		class A10PilotDead:A10PilotDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\A10Pilotsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"A10PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class CesnaPilot:Driver {
			file = "\TZK_Anims_4_0_0\CesnaPilotstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"CesnaPilotV1",0.7,"CesnaPilot"};
			interpolateWith[] = {"CesnaPilotV1",0.5};
			equivalentTo = "CesnaPilot";
			interpolationSpeed = 1;
			connectTo[] = {"CesnaPilotDying",1};
		};
		class CesnaPilotV1:CesnaPilot {
			file = "\TZK_Anims_4_0_0\CesnaPilot.rtm";
			speed = -4;
			looped = 1;
		};
		class CesnaPilotDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\CesnaPilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"CesnaPilot",1};
		};
		class CesnaPilotDead:CesnaPilotDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\CesnaPilotsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"CesnaPilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class CesnaCargo:Driver {
			file = "\TZK_Anims_4_0_0\CesnaCargostat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"CesnaCargoV1",0.7,"CesnaCargo"};
			interpolateWith[] = {"CesnaCargoV1",0.5};
			equivalentTo = "CesnaCargo";
			interpolationSpeed = 1;
			connectTo[] = {"CesnaCargoDying",1};
		};
		class CesnaCargoV1:CesnaCargo {
			file = "\TZK_Anims_4_0_0\CesnaCargo.rtm";
			speed = -4;
			looped = 1;
		};
		class CesnaCargoDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\CesnaCargosmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"CesnaCargo",1};
		};
		class CesnaCargoDead:CesnaCargoDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\CesnaCargosmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"CesnaCargoDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Mi17Pilot:Driver {
			file = "\TZK_Anims_4_0_0\Mi17Pilotstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"Mi17PilotV1",0.7,"Mi17Pilot"};
			interpolateWith[] = {"Mi17PilotV1",0.5};
			equivalentTo = "Mi17Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"Mi17PilotDying",1};
		};
		class Mi17PilotV1:Mi17Pilot {
			file = "\TZK_Anims_4_0_0\Mi17Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class Mi17PilotDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\Mi17Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Mi17Pilot",1};
		};
		class Mi17PilotDead:Mi17PilotDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\Mi17Pilotsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"Mi17PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Mi24Pilot:Driver {
			file = "\TZK_Anims_4_0_0\Mi24Pilotstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"Mi24PilotV1",0.7,"Mi24Pilot"};
			interpolateWith[] = {"Mi24PilotV1",0.5};
			equivalentTo = "Mi24Pilot";
			interpolationSpeed = 1;
			connectTo[] = {"Mi24PilotDying",1};
		};
		class Mi24PilotV1:Mi24Pilot {
			file = "\TZK_Anims_4_0_0\Mi24Pilot.rtm";
			speed = -4;
			looped = 1;
		};
		class Mi24PilotDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\Mi24Pilotsmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Mi24Pilot",1};
		};
		class Mi24PilotDead:Mi24PilotDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\Mi24Pilotsmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"Mi24PilotDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Mi24Gunner:Driver {
			file = "\TZK_Anims_4_0_0\Mi24Gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"Mi24GunnerV1",0.7,"Mi24Gunner"};
			interpolateWith[] = {"Mi24GunnerV1",0.5};
			equivalentTo = "Mi24Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"Mi24GunnerDying",1};
		};
		class Mi24GunnerV1:Mi24Gunner {
			file = "\TZK_Anims_4_0_0\Mi24Gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class Mi24GunnerDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\Mi24Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Mi24Gunner",1};
		};
		class Mi24GunnerDead:Mi24GunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\Mi24Gunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"Mi24GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class 5TDriver:Driver {
			file = "\TZK_Anims_4_0_0\5TDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"5TDriverV1",0.7,"5TDriver"};
			interpolateWith[] = {"5TDriverV1",0.5};
			equivalentTo = "5TDriver";
			interpolationSpeed = 1;
			connectTo[] = {"5TDriverDying",1};
		};
		class 5TDriverV1:5TDriver {
			file = "\TZK_Anims_4_0_0\5TDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class 5TDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\5TDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"5TDriver",1};
		};
		class 5TDriverDead:5TDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\5TDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"5TDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class 5TCoDriver:Driver {
			file = "\TZK_Anims_4_0_0\5TCoDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"5TCoDriverV1",0.7,"5TCoDriver"};
			interpolateWith[] = {"5TCoDriverV1",0.5};
			equivalentTo = "5TCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"5TCoDriverDying",1};
		};
		class 5TCoDriverV1:5TCoDriver {
			file = "\TZK_Anims_4_0_0\5TCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class 5TCoDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\5TCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"5TCoDriver",1};
		};
		class 5TCoDriverDead:5TCoDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\5TCoDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"5TCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UralDriver:Driver {
			file = "\TZK_Anims_4_0_0\UralDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"UralDriverV1",0.7,"UralDriver"};
			interpolateWith[] = {"UralDriverV1",0.5};
			equivalentTo = "UralDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UralDriverDying",1};
		};
		class UralDriverV1:UralDriver {
			file = "\TZK_Anims_4_0_0\UralDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UralDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\UralDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UralDriver",1};
		};
		class UralDriverDead:UralDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\UralDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"UralDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UralCoDriver:Driver {
			file = "\TZK_Anims_4_0_0\UralCoDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"UralCoDriverV1",0.7,"UralCoDriver"};
			interpolateWith[] = {"UralCoDriverV1",0.5};
			equivalentTo = "UralCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UralCoDriverDying",1};
		};
		class UralCoDriverV1:UralCoDriver {
			file = "\TZK_Anims_4_0_0\UralCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UralCoDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\UralCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UralCoDriver",1};
		};
		class UralCoDriverDead:UralCoDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\UralCoDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"UralCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class V3SDriver:Driver {
			file = "\TZK_Anims_4_0_0\V3SDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"V3SDriverV1",0.7,"V3SDriver"};
			interpolateWith[] = {"V3SDriverV1",0.5};
			equivalentTo = "V3SDriver";
			interpolationSpeed = 1;
			connectTo[] = {"V3SDriverDying",1};
		};
		class V3SDriverV1:V3SDriver {
			file = "\TZK_Anims_4_0_0\V3SDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class V3SDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\V3SDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"V3SDriver",1};
		};
		class V3SDriverDead:V3SDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\V3SDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"V3SDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class V3SCoDriver:Driver {
			file = "\TZK_Anims_4_0_0\V3SCoDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"V3SCoDriverV1",0.7,"V3SCoDriver"};
			interpolateWith[] = {"V3SCoDriverV1",0.5};
			equivalentTo = "V3SCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"V3SCoDriverDying",1};
		};
		class V3SCoDriverV1:V3SCoDriver {
			file = "\TZK_Anims_4_0_0\V3SCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class V3SCoDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\V3SCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"V3SCoDriver",1};
		};
		class V3SCoDriverDead:V3SCoDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\V3SCoDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"V3SCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepDriver:Driver {
			file = "\TZK_Anims_4_0_0\JeepDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"JeepDriverV1",0.7,"JeepDriver"};
			interpolateWith[] = {"JeepDriverV1",0.5};
			equivalentTo = "JeepDriver";
			interpolationSpeed = 1;
			connectTo[] = {"JeepDriverDying",1};
		};
		class JeepDriverV1:JeepDriver {
			file = "\TZK_Anims_4_0_0\JeepDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\JeepDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepDriver",1};
		};
		class JeepDriverDead:JeepDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\JeepDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"JeepDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepGunner:Driver {
			file = "\TZK_Anims_4_0_0\JeepGunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"JeepGunnerV1",0.7,"JeepGunner"};
			interpolateWith[] = {"JeepGunnerV1",0.5};
			equivalentTo = "JeepGunner";
			interpolationSpeed = 1;
			connectTo[] = {"JeepGunnerDying",1};
		};
		class JeepGunnerV1:JeepGunner {
			file = "\TZK_Anims_4_0_0\JeepGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepGunnerDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\JeepGunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepGunner",1};
		};
		class JeepGunnerDead:JeepGunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\JeepGunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"JeepGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepCoDriver:Driver {
			file = "\TZK_Anims_4_0_0\JeepCoDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"JeepCoDriverV1",0.7,"JeepCoDriver"};
			interpolateWith[] = {"JeepCoDriverV1",0.5};
			equivalentTo = "JeepCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"JeepCoDriverDying",1};
		};
		class JeepCoDriverV1:JeepCoDriver {
			file = "\TZK_Anims_4_0_0\JeepCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepCoDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\JeepCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepCoDriver",1};
		};
		class JeepCoDriverDead:JeepCoDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\JeepCoDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"JeepCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class JeepCoDriverBack:Driver {
			file = "\TZK_Anims_4_0_0\JeepCoDriverBackstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"JeepCoDriverBackV1",0.7,"JeepCoDriverBack"};
			interpolateWith[] = {"JeepCoDriverBackV1",0.5};
			equivalentTo = "JeepCoDriverBack";
			interpolationSpeed = 1;
			connectTo[] = {"JeepCoDriverBackDying",1};
		};
		class JeepCoDriverBackV1:JeepCoDriverBack {
			file = "\TZK_Anims_4_0_0\JeepCoDriverBack.rtm";
			speed = -4;
			looped = 1;
		};
		class JeepCoDriverBackDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\JeepCoDriverBacksmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"JeepCoDriverBack",1};
		};
		class JeepCoDriverBackDead:JeepCoDriverBackDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\JeepCoDriverBacksmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"JeepCoDriverBackDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UazDriver:Driver {
			file = "\TZK_Anims_4_0_0\UazDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"UazDriverV1",0.7,"UazDriver"};
			interpolateWith[] = {"UazDriverV1",0.5};
			equivalentTo = "UazDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UazDriverDying",1};
		};
		class UazDriverV1:UazDriver {
			file = "\TZK_Anims_4_0_0\UazDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UazDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\UazDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UazDriver",1};
		};
		class UazDriverDead:UazDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\UazDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"UazDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class UazCoDriver:Driver {
			file = "\TZK_Anims_4_0_0\UazCoDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"UazCoDriverV1",0.7,"UazCoDriver"};
			interpolateWith[] = {"UazCoDriverV1",0.5};
			equivalentTo = "UazCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"UazCoDriverDying",1};
		};
		class UazCoDriverV1:UazCoDriver {
			file = "\TZK_Anims_4_0_0\UazCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class UazCoDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\UazCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"UazCoDriver",1};
		};
		class UazCoDriverDead:UazCoDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\UazCoDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"UazCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class SkodaDriver:Driver {
			file = "\TZK_Anims_4_0_0\SkodaDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"SkodaDriverV1",0.7,"SkodaDriver"};
			interpolateWith[] = {"SkodaDriverV1",0.5};
			equivalentTo = "SkodaDriver";
			interpolationSpeed = 1;
			connectTo[] = {"SkodaDriverDying",1};
		};
		class SkodaDriverV1:SkodaDriver {
			file = "\TZK_Anims_4_0_0\SkodaDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class SkodaDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\SkodaDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"SkodaDriver",1};
		};
		class SkodaDriverDead:SkodaDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\SkodaDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"SkodaDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class SkodaCoDriver:Driver {
			file = "\TZK_Anims_4_0_0\SkodaCoDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"SkodaCoDriverV1",0.7,"SkodaCoDriver"};
			interpolateWith[] = {"SkodaCoDriverV1",0.5};
			equivalentTo = "SkodaCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"SkodaCoDriverDying",1};
		};
		class SkodaCoDriverV1:SkodaCoDriver {
			file = "\TZK_Anims_4_0_0\SkodaCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class SkodaCoDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\SkodaCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"SkodaCoDriver",1};
		};
		class SkodaCoDriverDead:SkodaCoDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\SkodaCoDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"SkodaCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class SkodaCoDriverBack:Driver {
			file = "\TZK_Anims_4_0_0\SkodaCoDriverBackstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"SkodaCoDriverBackV1",0.7,"SkodaCoDriverBack"};
			interpolateWith[] = {"SkodaCoDriverBackV1",0.5};
			equivalentTo = "SkodaCoDriverBack";
			interpolationSpeed = 1;
			connectTo[] = {"SkodaCoDriverBackDying",1};
		};
		class SkodaCoDriverBackV1:SkodaCoDriverBack {
			file = "\TZK_Anims_4_0_0\SkodaCoDriverBack.rtm";
			speed = -4;
			looped = 1;
		};
		class SkodaCoDriverBackDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\SkodaCoDriverBacksmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"SkodaCoDriverBack",1};
		};
		class SkodaCoDriverBackDead:SkodaCoDriverBackDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\SkodaCoDriverBacksmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"SkodaCoDriverBackDying",1};
			connectTo[] = {"DeadState",1};
		};
		class PBRDriver:Driver {
			file = "\TZK_Anims_4_0_0\PBRDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"PBRDriverV1",0.7,"PBRDriver"};
			interpolateWith[] = {"PBRDriverV1",0.5};
			equivalentTo = "PBRDriver";
			interpolationSpeed = 1;
			connectTo[] = {"PBRDriverDying",1};
		};
		class PBRDriverV1:PBRDriver {
			file = "\TZK_Anims_4_0_0\PBRDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class PBRDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\PBRDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"PBRDriver",1};
		};
		class PBRDriverDead:PBRDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\PBRDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"PBRDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class PBRGunner:Driver {
			file = "\TZK_Anims_4_0_0\PBRGunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"PBRGunnerV1",0.7,"PBRGunner"};
			interpolateWith[] = {"PBRGunnerV1",0.5};
			equivalentTo = "PBRGunner";
			interpolationSpeed = 1;
			connectTo[] = {"PBRGunnerDying",1};
		};
		class PBRGunnerV1:PBRGunner {
			file = "\TZK_Anims_4_0_0\PBRGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class PBRGunnerDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\PBRGunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"PBRGunner",1};
		};
		class PBRGunnerDead:PBRGunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\PBRGunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"PBRGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class M2Gunner:Driver {
			actions = "M2CargoActions";
			file = "\TZK_Anims_4_0_0\M2Gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			equivalentTo = "M2Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"M2GunnerDying",0.1};
		};
		class M2GunnerV1:M2Gunner {
			file = "\TZK_Anims_4_0_0\M2Gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
		};
		class M2GunnerDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\M2Gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M2Gunner",0.1};
			connectTo[] = {"M2GunnerDead",1};
		};
		class M2GunnerDead:M2GunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\M2Gunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"M2GunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class HRLGunner:Driver {
			file = "\TZK_Anims_4_0_0\HRLGunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"HRLGunnerV1",0.7,"HRLGunner"};
			interpolateWith[] = {"HRLGunnerV1",0.5};
			equivalentTo = "HRLGunner";
			interpolationSpeed = 1;
			connectTo[] = {"HRLGunnerDying",1};
		};
		class HRLGunnerV1:HRLGunner {
			file = "\TZK_Anims_4_0_0\HRLGunner.rtm";
			speed = -4;
			looped = 1;
		};
		class HRLGunnerDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\HRLGunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HRLGunner",1};
		};
		class HRLGunnerDead:HRLGunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\HRLGunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"HRLGunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ScudDriver:Driver {
			file = "\TZK_Anims_4_0_0\ScudDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ScudDriverV1",0.7,"ScudDriver"};
			interpolateWith[] = {"ScudDriverV1",0.5};
			equivalentTo = "ScudDriver";
			interpolationSpeed = 1;
			connectTo[] = {"ScudDriverDying",1};
		};
		class ScudDriverV1:ScudDriver {
			file = "\TZK_Anims_4_0_0\ScudDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class ScudDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ScudDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ScudDriver",1};
		};
		class ScudDriverDead:ScudDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ScudDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ScudDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ScudCoDriver:Driver {
			file = "\TZK_Anims_4_0_0\ScudCoDriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ScudCoDriverV1",0.7,"ScudCoDriver"};
			interpolateWith[] = {"ScudCoDriverV1",0.5};
			equivalentTo = "ScudCoDriver";
			interpolationSpeed = 1;
			connectTo[] = {"ScudCoDriverDying",1};
		};
		class ScudCoDriverV1:ScudCoDriver {
			file = "\TZK_Anims_4_0_0\ScudCoDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class ScudCoDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ScudCoDriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ScudCoDriver",1};
		};
		class ScudCoDriverDead:ScudCoDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ScudCoDriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ScudCoDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class TractorDriver:Driver {
			file = "\TZK_Anims_4_0_0\traktordriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"TractorDriverV1",0.7,"TractorDriver"};
			interpolateWith[] = {"TractorDriverV1",0.5};
			equivalentTo = "TractorDriver";
			interpolationSpeed = 1;
			connectTo[] = {"TractorDriverDying",1};
		};
		class TractorDriverV1:TractorDriver {
			file = "\TZK_Anims_4_0_0\traktordriver.rtm";
			speed = -4;
			looped = 1;
		};
		class TractorDriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\traktordriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"TractorDriver",1};
		};
		class TractorDriverDead:TractorDriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\traktordriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"TractorDriverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class Para:Driver {
			file = "\TZK_Anims_4_0_0\Parastat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ParaV1",0.7,"Para"};
			interpolateWith[] = {"ParaV1",0.5};
			equivalentTo = "Para";
			interpolationSpeed = 1;
			connectTo[] = {"ParaDying",1};
		};
		class ParaV1:Para {
			file = "\TZK_Anims_4_0_0\Para.rtm";
			speed = -4;
			looped = 1;
		};
		class ParaDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\Parasmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Para",1};
		};
		class ParaDead:ParaDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\Parasmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ParaDying",1};
			connectTo[] = {"DeadState",1};
		};
		class StandTurnR:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\dopravabez.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.5;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
		};
		class StandTurnL:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\dolevabez.rtm";
			speed = -1.6;
			looped = 1;
			soundEnabled = 0;
			relSpeedMin = 0.5;
			relSpeedMax = 1.0;
			duty = -1;
			interpolationSpeed = 5;
		};
		class StandStrokeFist:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezuder.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
			connectFrom[] = {"Stand",1};
			connectTo[] = {"StandStrokeFistEnd",1};
		};
		class StandStrokeFistEnd:Default {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezstanistat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
			connectTo[] = {"Stand",1};
		};
		class OnChair:StandBase {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\zidle.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 2;
		};
		class EffectStand:StandBase {
			actions = "StandStandActions";
			file = "\TZK_Anims_4_0_0\bezstanistill.rtm";
			speed = -8.8000002;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 2;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class EffectStandStill:StandBase {
			actions = "StandStillActions";
			file = "\TZK_Anims_4_0_0\bezstanistat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			equivalentTo = "EffectStandStill";
			interpolationSpeed = 1;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class EffectStandTalk:StandBase {
			actions = "StandTalkActions";
			file = "\TZK_Anims_4_0_0\bezpovidani.rtm";
			speed = -14.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 2;
		};
		class EffectStandSaluteStart:StandBase {
			actions = "StandSaluteActions";
			file = "\TZK_Anims_4_0_0\bezhlas.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"Stand",2};
		};
		class EffectStandSaluteStartHG:StandBase {
			actions = "StandSaluteActions";
			file = "\TZK_Anims_4_0_0\bezhlas.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HandGunCivil",2};
		};
		class EffectStandSalute:StandBase {
			actions = "StandSaluteActions";
			file = "\TZK_Anims_4_0_0\bezhlasstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			connectFrom[] = {"EffectStandSaluteStart",1};
			connectTo[] = {"EffectStandSaluteEnd",1};
		};
		class EffectStandSaluteHG:StandBase {
			actions = "StandSaluteActions";
			file = "\TZK_Anims_4_0_0\bezhlasstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			connectFrom[] = {"EffectStandSaluteStartHG",1};
			connectTo[] = {"EffectStandSaluteEndHG",1};
		};
		class EffectStandSaluteEnd:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezhlas2.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectTo[] = {"Stand",2};
		};
		class EffectStandSaluteEndHG:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezhlas2.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectTo[] = {"HandGunCivil",2};
		};
		class EffectStandmove:StandBase {
			actions = "StandStillActions";
			file = "\TZK_Anims_4_0_0\bezstani.rtm";
			speed = -8.8000002;
			looped = 1;
			soundEnabled = 0;
			equivalentTo = "EffectStandStill";
			interpolationSpeed = 1;
		};
		class EffectStandSitDown:StandBase {
			actions = "SitActions";
			file = "\TZK_Anims_4_0_0\bezsedi2.rtm";
			speed = -4.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			variantsPlayer[] = {"EffectStandSitDown",0.3,"EffectStandSitDownVer2",0.3,"EffectStandSitDownVer1"};
			equivalentTo = "EffectStandSitDown";
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class EffectStandSitDownVer1:EffectStandSitDown {
			file = "\TZK_Anims_4_0_0\bezsedi2.rtm";
			speed = 10000000000.0;
			looped = 1;
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class EffectStandSitDownVer2:EffectStandSitDown {
			file = "\TZK_Anims_4_0_0\bezsedi.rtm";
			speed = -4.5999999;
			looped = 1;
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class EffectStandSitDownStill:EffectStandSitDown {
			file = "\TZK_Anims_4_0_0\bezsedi.rtm";
			speed = 10000000000.0;
			interpolateTo[] = {"SitDownDying",0.1};
		};
		class StandToSitDown:StandBase {
			actions = "SitActions";
			file = "\TZK_Anims_4_0_0\bezdosedu.rtm";
			speed = -3.2;
			looped = 0;
			soundEnabled = 0;
			duty = -1;
		};
		class SitDownToStand:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezvztava.rtm";
			speed = -2.5;
			looped = 0;
			soundEnabled = 0;
			duty = -1;
		};
		class FXBase:StandBase {
			actions = "StandActions";
			looped = 0;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 1;
		};
		class FXStandToTel:FXBase {
			file = "\TZK_Anims_4_0_0\ktelefonustart.rtm";
			speed = -0.5;
			connectTo[] = {"FXStandToTelHand",1};
		};
		class FXStandToTelHand:FXBase {
			file = "\TZK_Anims_4_0_0\ktelefonuend.rtm";
			speed = -4.5;
			showItemInRightHand = 1;
		};
		class FXStandTelLoop:FXBase {
			file = "\TZK_Anims_4_0_0\telloop.rtm";
			speed = -10.0;
			looped = 1;
			showItemInRightHand = 1;
		};
		class FXStandDropTel:FXBase {
			file = "\TZK_Anims_4_0_0\poloztelefon.rtm";
			speed = -4.0;
			interpolateWith[] = {"FXStandToTel",1};
		};
		class FXStandFromTable:FXBase {
			file = "\TZK_Anims_4_0_0\staniodstolu.rtm";
			speed = -3.0;
		};
		class FXStandUnivTable:FXBase {
			file = "\TZK_Anims_4_0_0\univsezeni.rtm";
			speed = -8.0;
			looped = 1;
		};
		class FXStandToTable:FXBase {
			file = "\TZK_Anims_4_0_0\sedkestolu.rtm";
			speed = -2.5;
		};
		class FXStandDangle:FXBase {
			file = "\TZK_Anims_4_0_0\houpese.rtm";
			speed = -4.0;
		};
		class FXStandToDip:FXBase {
			file = "\TZK_Anims_4_0_0\dokliku.rtm";
			speed = -2.0;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"FXStandDip",1};
		};
		class FXStandDip:FXBase {
			file = "\TZK_Anims_4_0_0\klik.rtm";
			speed = -1.5;
			looped = 1;
		};
		class FXStandFromDip:FXBase {
			file = "\TZK_Anims_4_0_0\zkliku.rtm";
			speed = -2.0;
			connectFrom[] = {"FXStandDip",1};
			connectTo[] = {"Stand",1};
		};
		class FXStandSur:FXBase {
			file = "\TZK_Anims_4_0_0\zajatecstani.rtm";
			speed = -2.0;
		};
		class FXStandSurDead:FXBase {
			file = "\TZK_Anims_4_0_0\zajatecsmrtb.rtm";
			speed = -2.0;
		};
		class FXStandSurUniv:FXBase {
			file = "\TZK_Anims_4_0_0\zajatecstat.rtm";
			speed = 10000000000.0;
		};
		class FXStandSurDown:FXBase {
			file = "\TZK_Anims_4_0_0\lehzajatec.rtm";
			speed = -3.5;
		};
		class FXStandRotateTable:FXBase {
			file = "\TZK_Anims_4_0_0\kestolu.rtm";
			speed = -2.0;
		};
		class FXStandShowTable:FXBase {
			file = "\TZK_Anims_4_0_0\ukazujeustolu.rtm";
			speed = -3.0;
		};
		class FXStandEndTable:FXBase {
			file = "\TZK_Anims_4_0_0\ukazodstolu.rtm";
			speed = -5.0;
		};
		class FXStandStraight:FXBase {
			file = "\TZK_Anims_4_0_0\staninic.rtm";
			speed = -2.0;
		};
		class FXStandBug:FXBase {
			file = "\TZK_Anims_4_0_0\buzeruje.rtm";
			speed = -10.0;
		};
		class FXStandhip:FXBase {
			file = "\TZK_Anims_4_0_0\rucevbok.rtm";
			speed = -5.0;
		};
		class FXStandAtt:FXBase {
			file = "\TZK_Anims_4_0_0\uspozorstat.rtm";
			speed = 10000000000.0;
		};
		class FXStandAttVar1:FXBase {
			file = "\TZK_Anims_4_0_0\rucevbok.rtm";
			speed = -3.0;
		};
		class FXangel:FXBase {
			file = "\TZK_Anims_4_0_0\fx_angel_stand.rtm";
			speed = 10000000000.0;
		};
		class FXangel2:FXBase {
			file = "\TZK_Anims_4_0_0\fx_angel_stand2.rtm";
			speed = 10000000000.0;
		};
		class LadderStatic:LadderBase {
			file = "\TZK_Anims_4_0_0\upDownStat2.rtm";
			looped = 1;
			soundEnabled = 0;
			speed = 10000000000.0;
			duty = -1;
		};
		class LadderUpStart:LadderUpBase {
			file = "\TZK_Anims_4_0_0\upstart2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -0.75;
			duty = -0.5;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"LadderStatic",1};
		};
		class LadderUpLoop:LadderUpBase {
			file = "\TZK_Anims_4_0_0\uploop2.rtm";
			looped = 1;
			soundEnabled = 0;
			speed = -0.6;
			duty = -0.5;
			interpolateWith[] = {"LadderStatic",1};
		};
		class LadderUpEnd:LadderBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\upend2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -1;
			duty = -0.5;
			onLadder = 0;
			connectFrom[] = {"LadderStatic",1};
			//connectTo[] = {"Stand",1};
			connectTo[] = {"Combat",1};
		};
		class LadderDownStart:LadderDownBase {
			file = "\TZK_Anims_4_0_0\downstart2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -1;
			duty = -0.5;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"LadderStatic",1};
		};
		class LadderDownLoop:LadderDownBase {
			file = "\TZK_Anims_4_0_0\downloop3.rtm";
			looped = 1;
			soundEnabled = 0;
			speed = -0.6;
			duty = -0.5;
			interpolateWith[] = {"LadderStatic",1};
		};
		class LadderDownEnd:LadderDownBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\downend2.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = -1;
			duty = -0.5;
			onLadder = 0;
			connectFrom[] = {"LadderStatic",1};
			//connectTo[] = {"Stand",0.9};
			connectTo[] = {"Combat",1};
		};
		class EffectWeaponPanic:Default {
			file = "\TZK_Anims_4_0_0\szmaten.rtm";
			speed = -9.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandEngageAtWill:Default {
			file = "\TZK_Anims_4_0_0\sengageatwill.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandFireAtWill:Default {
			file = "\TZK_Anims_4_0_0\sengageatwill.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandFormation:Default {
			file = "\TZK_Anims_4_0_0\sformace.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandHoldFire:Default {
			file = "\TZK_Anims_4_0_0\sholdfire.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandStop:Default {
			file = "\TZK_Anims_4_0_0\sstop.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class CommandForward:Default {
			file = "\TZK_Anims_4_0_0\svpred.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class EffectCombatStand:Default {
			file = "\TZK_Anims_4_0_0\sstani.rtm";
			speed = -3.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
		};
		class StandGetInCar:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezosobak.rtm";
			speed = -2.25;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandGetInTank:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\nastupbez.rtm";
			speed = -1.3;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class StandGetOutTank:StandBase {
			actions = "StandActions";
			file = "\TZK_Anims_4_0_0\bezseskok.rtm";
			speed = -3.0650001;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
		};
		class CombatGetInCar:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\sosobak.rtm";
			speed = -1.23;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatGetInTank:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\snastup.rtm";
			speed = -2.3800001;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CombatGetOutTank:Default {
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\sdoskok.rtm";
			speed = -0.915;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1,"CombatDyingVer3",0.1};
		};
		class CivilGetInCar:Default {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilosobak.rtm";
			speed = -1.23;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilGetInTank:Default {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilnastup.rtm";
			speed = -2.3800001;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			enableOptics = 0;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CivilGetOutTank:Default {
			actions = "CivilActions";
			file = "\TZK_Anims_4_0_0\civilseskok.rtm";
			speed = -0.915;
			looped = 0;
			soundEnabled = 0;
			disableWeapons = 1;
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class CrouchThrowGrenadeStart:Crouch {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchgren1.rtm";
			speed = -1.4;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchThrowGrenadeEnd:Crouch {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchgren2.rtm";
			speed = -0.97;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			duty = 0.6;
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchToTakeFlag:Default {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crspoloz.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",1};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchTakeFlag:Default {
			actions = "CrouchTakeFlagActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crspolozstat.rtm";
			speed = -2.5;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CrouchToTakeFlag",2};
			connectTo[] = {"TakeFlagToCrouch",2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class TakeFlagToCrouch:Default {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crspoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Crouch",1};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class CrouchToPutDown:Default {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crspoloz.rtm";
			speed = -0.7;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Crouch",1};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class PutDownCrouch:Default {
			actions = "PutDownCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crspolozstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			soundEnabled = 0;
			aiming = "aimingNo";
			connectFrom[] = {"CrouchToPutDown",2};
			connectTo[] = {"PutDownToCrouch",2};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class PutDownToCrouch:Default {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crspoloz2.rtm";
			speed = -1.0;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectTo[] = {"Crouch",1};
			interpolateTo[] = {"CrouchDying",0.1};
		};
		class WeaponToWeaponLying:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\atdown1.rtm";
			speed = -2.6;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Weapon",1};
			connectTo[] = {"WeaponLying",1};
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponLyingToWeapon:Default {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\atdown2.rtm";
			speed = -2.6;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"WeaponLying",1.2};
			connectTo[] = {"Weapon",1.2};
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponLying:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\atdownstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			enableMissile = 1;
			duty = -1;
			visibleSize = 0.6;
			aimPrecision = 0.1;
			recoilSuffix = "halffixed";
		};
		class WeaponToWeaponCrouching:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\gocrouchat.rtm";
			speed = -0.6;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Weapon",1};
			connectTo[] = {"WeaponCrouching",1};
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponCrouchingToWeapon:Default {
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\gostandat.rtm";
			speed = -0.6;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"WeaponCrouching",1.2};
			connectTo[] = {"Weapon",1.2};
			interpolateTo[] = {"WeaponDying",0.1,"WeaponDyingVer2",0.1};
		};
		class WeaponCrouching:Default {
			actions = "WeaponActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\crouchat.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			enableMissile = 1;
			duty = -1;
			visibleSize = 0.6;
			aimPrecision = 0.15;
			recoilSuffix = "halffixed";
		};
		class WW4LeanLeft:CombatWalkF {
			preload = 1;
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\LeanL.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			enableOptics = 1;
			duty = 0.1;
			visibleSize = 0.6;
			aimPrecision = 0.3;
			interpolationSpeed = 1.2;
			interpolateTo[] = {"Combat",1};
			interpolateFrom[] = {"Combat",1};
			variantsPlayer[] = {};
			variantsAI[] = {};
		};
		class WW4LeanRight:WW4LeanLeft {
			preload = 1;
			actions = "CombatActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\LeanR.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			enableOptics = 1;
			duty = 0.1;
			visibleSize = 0.6;
			aimPrecision = 0.3;
			interpolationSpeed = 1.2;
			interpolateTo[] = {"Combat",1};
			interpolateFrom[] = {"Combat",1};
			variantsPlayer[] = {};
			variantsAI[] = {};
		};
		class WW4CRLeanLeft:CrouchWalkF {
			preload = 1;
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRleanL.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			enableOptics = 1;
			duty = 0.1;
			visibleSize = 0.6;
			aimPrecision = 0.3;
			recoilSuffix = "halffixed";
			interpolationSpeed = 1.2;
			interpolateTo[] = {"Crouch",1};
			interpolateFrom[] = {"Crouch",1};
			variantsPlayer[] = {};
			variantsAI[] = {};
		};
		class WW4CRLeanRight:WW4CRLeanLeft {
			preload = 1;
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRleanR.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			enableOptics = 1;
			duty = 0.1;
			visibleSize = 0.6;
			aimPrecision = 0.3;
			recoilSuffix = "halffixed";
			interpolationSpeed = 1.2;
			interpolateTo[] = {"Crouch",1};
			interpolateFrom[] = {"Crouch",1};
			variantsPlayer[] = {};
			variantsAI[] = {};
		};
		class MoveOver:Combat {
			actions = "CombatActions";
			duty = 0.5;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jump1.rtm";
			legs = "legsNo";
			head = "headNo";
			speed = -4.6;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Combat",1};
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1};
		};
		class MoveOver2:Combat {
			actions = "StandActions";
			duty = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jump5.rtm";
			legs = "legsNo";
			head = "headNo";
			speed = -6.8;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"Combat",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1};
		};
		class MoveOverC1:Combat {
			actions = "CivilActions";
			duty = 0.5;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jump5.rtm";
			legs = "legsNo";
			head = "headNo";
			speed = -6.8;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class MoveOverRifle:Combat {
			actions = "StandActions";
			duty = 0.5;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jumpover.rtm";
			legs = "legsNo";
			head = "headNo";
			speed = -4.5;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Stand",1};
			connectTo[] = {"Stand",1};
			interpolateTo[] = {"CombatDying",0.1,"CombatDyingVer2",0.1};
		};
		class MoveOverCivil:Combat {
			actions = "CivilActions";
			duty = 0.5;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jumpoverP.rtm";
			legs = "legsNo";
			head = "headNo";
			speed = -4.2;
			looped = 0;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
			interpolateTo[] = {"CivilDying",0.1,"CivilDyingVer2",0.1};
		};
		class MoveOverHandGun:HandGunDefault {
			preload = 1;
			actions = "HandGunCivilActions";
			duty = 0.7;
			file = "\TZK_Anims_4_0_0\ww4_modanim\jumpoverP";
			legs = "legsNo";
			head = "headNo";
			speed = -4.2;
			looped = 1;
			disableWeapons = 1;
			soundEnabled = 0;
			//interpolateFrom[] = {"HandGunStand",1};
			connectFrom[] = {"HandGunCivil",1};
			connectTo[] = {"HandGunCivil",1};
			//interpolateTo[] = {"HandGunStandDying",0.1};
		};
		class HandGunStand0:HandGunDefault {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\pstanistat.rtm";
			speed = 0.1;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"HandGunStand",0.1};
		};
		class MoveOverP1:HandGunDefault {
			preload = 1;
			actions = "HandGunStandActions";
			duty = 0.7;
			file = "\TZK_Anims_4_0_0\ww4_modanim\climb5.rtm";
			legs = "legsNo";
			head = "headNo";
			speed = -6.8;
			looped = 1;
			disableWeapons = 1;
			soundEnabled = 0;
			//interpolateFrom[] = {"HandGunStand",1};
			connectFrom[] = {"HandGunStand",1};
			connectTo[] = {"HandGunStand0",1};
			//interpolateTo[] = {"HandGunStandDying",0.1};
		};
		class HandGunCivil0:HandGunCivil {
			actions = "HandGunCivilActions";
			file = "\TZK_Anims_4_0_0\Civilstat.rtm";
			speed = 0.1;
			looped = 0;
			soundEnabled = 0;
			interpolateTo[] = {"HandGunCivil",0.1};
		};
		class MoveOverCP1:HandGunDefault {
			preload = 1;
			actions = "HandGunCivilActions";
			duty = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\climb5.rtm";
			speed = -6.5;
			looped = 1;
			disableWeapons = 1;
			soundEnabled = 0;
			connectFrom[] = {"HandGunCivil",1};
			connectTo[] = {"HandGunCivil0",1};
		};
		class Lying0:Default {
			preload = 1;
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\leh.rtm";
			speed = 0.1;
			looped = 0;
			onLandBeg = 1;
			onLandEnd = 1;
			soundEnabled = 0;
			duty = -1;
			visibleSize = 0.25;
			aimPrecision = 0.11;
			recoilSuffix = "fixed";
			interpolateTo[] = {"Lying",0.1};
		};
		class WW4_RollRight:Default {
			preload = 1;
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\RollRight.rtm";
			duty = 2;
			speed = -1.2;
			disableWeapons = 1;
			enableOptics = 0;
			connectFrom[] = {"Lying",1};
			connectTo[] = {"Lying0",1};
			soundEdge1 = 0.1;
			soundEdge2 = 0.6;
			soundEnabled = 1;
			soundOverride = "crawl";
			looped = 1;
		};
		class WW4_RollLeft:WW4_RollRight {
			file = "\TZK_Anims_4_0_0\ww4_modanim\RollLeft.rtm";
		};
		class WW4LyingUp:Lying {
			preload = 1;
			actions = "LyingActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\lyingaimup.rtm";
			speed = 10000000000.0;
			duty = 0.0;
			looped = 1;
			disableWeapons = 0;
			aimPrecision = 0.15;
			recoilSuffix = "halffixed";
			enableOptics = 1;
			soundEnabled = 0;
			soundOverride = "crawl";
			interpolationSpeed = 1;
			interpolateTo[] = {"Lying",1};
			interpolateFrom[] = {"Lying",1};
			variantsPlayer[] = {};
			variantsAI[] = {};
		};
		class WW4LeanLeftStatic:Combat {
			actions = "CombatActions";
			preload = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\LeanL.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			variantsPlayer[] = {};
			variantsAI[] = {};
		};
		class WW4LeanRightStatic:Combat {
			actions = "CombatActions";
			preload = 1;
			file = "\TZK_Anims_4_0_0\ww4_modanim\LeanR.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			duty = -1;
			variantsPlayer[] = {};
			variantsAI[] = {};
		};
		class WW4CRLeanLeftStatic:Crouch {
			preload = 1;
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRleanL.rtm";
			speed = 10000000000.0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			visibleSize = 0.6;
			aimPrecision = 0.25;
			recoilSuffix = "halffixed";
		};
		class WW4CRLeanRightStatic:Crouch {
			preload = 1;
			actions = "CrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_modanim\CRleanR.rtm";
			speed = 10000000000.0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			visibleSize = 0.6;
			aimPrecision = 0.25;
			recoilSuffix = "halffixed";
		};
		class WW4pStandLeanLeftStatic:HandGunStand {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\stanlenlft.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {};
			equivalentTo = "HandGunStand";
		};
		class WW4pStandLeanRightStatic:HandGunStand {
			actions = "HandGunStandActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\stanlenrgt.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {};
			equivalentTo = "HandGunStand";
		};
		class WW4pCrouchLeanLeftStatic:HandGunCrouch {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\crchlenlft.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {};
			equivalentTo = "HandGunCrouch";
		};
		class WW4pCrouchLeanRightStatic:HandGunCrouch {
			actions = "HandGunCrouchActions";
			file = "\TZK_Anims_4_0_0\ww4_pistolanim\crchlenrgt.rtm";
			speed = 10000000000.0;
			looped = 1;
			soundEnabled = 0;
			variantAfter[] = {1,3,6};
			variantsAI[] = {};
			equivalentTo = "HandGunCrouch";
		};
	// States added in 2.01 Engine
		class CamelDriver: Driver {
			file = "\BIScamel\camelpilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"CamelDriverV1",0.7,"CamelDriver"};
			interpolateWith[] = {"CamelDriverV1",0.5};
			equivalentTo = "CamelDriver";
			interpolationSpeed = 1;
			connectTo[] = {"CamelDriverDying",1};
			interpolateTo[] = {"CamelDriverDying",0.1};
	};
		class CamelDriverV1: CamelDriver {
			file = "\BIScamel\camelpilot.rtm";
			speed = "- 4";
			looped = 1;
			interpolateTo[] = {"CamelDriverDying",0.1};
	};
		class CamelDriverDying: DefaultDie {
			actions = "NoActions";
			file = "\BIScamel\camelpilotsmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"CamelDriver",1};
	};
		class CamelDriverDead: CamelDriverDying {
			actions = "DeadActions";
			file = "\BIScamel\camelpilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"CamelDriverDying",1};
			connectTo[] = {"DeadState",1};
	};
		class Camelcargo: Driver {
			file = "\BISCamel\camelcargo.rtm";
			speed = 1e+010;
			looped = 1;
	};
		class Camelcargo2: Driver {
			file = "\BISCamel\camelcargo2.rtm";
			speed = 1e+010;
			looped = 1;
	};
		class CamelGrenadeThrow: Driver {
			file = "\BISCamel\camelgranat.rtm";
			speed = 1e+010;
			looped = 0;
	};
		class VulcanGunner: Driver {
			file = "\vulcan\vulcangunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"VulcanGunnerV1",0.7,"VulcanGunner"};
			interpolateWith[] = {"VulcanGunnerV1",0.5};
			equivalentTo = "VulcanGunner";
			interpolationSpeed = 1;
			connectTo[] = {"VulcanGunnerDying",1};
	};
		class VulcanGunnerV1: VulcanGunner {
			file = "\vulcan\vulcangunner.rtm";
			speed = "- 4";
			looped = 1;
	};
		class VulcanGunnerDying: DefaultDie {
			actions = "NoActions";
			file = "\vulcan\vulcangunnersmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"VulcanGunner",1};
	};
		class VulcanGunnerDead: VulcanGunnerDying {
			actions = "DeadActions";
			file = "\vulcan\vulcangunnersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"VulcanGunnerDying",1};
			connectTo[] = {"DeadState",1};
	};
		class oh58pilot: Driver {
			file = "uh60pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"oh58pilotV1",0.7,"oh58pilot"};
			interpolateWith[] = {"oh58pilotV1",0.5};
			equivalentTo = "oh58pilot";
			interpolationSpeed = 1;
			connectTo[] = {"oh58pilotDying",1};
	};
		class oh58pilotV1: oh58pilot {
			file = "uh60pilot.rtm";
			speed = "- 4";
			looped = 1;
	};
		class oh58pilotDying: DefaultDie {
			actions = "NoActions";
			file = "uh60pilotsmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"oh58pilot",1};
	};
		class oh58pilotDead: oh58pilotDying {
			actions = "DeadActions";
			file = "uh60pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"oh58pilotDying",1};
			connectTo[] = {"DeadState",1};
	};
		class oh58gunner: Driver {
			file = "uh60pilotstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"oh58gunnerV1",0.7,"oh58gunner"};
			interpolateWith[] = {"oh58gunnerV1",0.5};
			equivalentTo = "oh58gunner";
			interpolationSpeed = 1;
			connectTo[] = {"oh58gunnerDying",1};
	};
		class oh58gunnerV1: oh58gunner {
			file = "uh60pilot.rtm";
			speed = "- 4";
			looped = 1;
	};
		class oh58gunnerDying: DefaultDie {
			actions = "NoActions";
			file = "uh60pilotsmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"oh58gunner",1};
	};
		class oh58gunnerDead: oh58gunnerDying {
			actions = "DeadActions";
			file = "uh60pilotsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"oh58gunnerDying",1};
			connectTo[] = {"DeadState",1};
	};
		class MiniDriver: Driver {
			file = "\mini\minidriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"MiniDriverV1",0.7,"MiniDriver"};
			interpolateWith[] = {"MiniDriverV1",0.5};
			equivalentTo = "MiniDriver";
			connectTo[] = {"MiniDriverDying",1};
			interpolateTo[] = {"MiniDriverDying",0.1};
	};
		class MiniDriverV1: MiniDriver {
			file = "\mini\minidriver.rtm";
			speed = -4;
			looped = 1;
	};
		class MiniDriverDying: DefaultDie {
			actions = "NoActions";
			file = "\mini\minidriversmrt.rtm";
			speed = -1;
			looped = "flase";
			soundEnabled = 0;
			connectFrom[] = {"MiniDriver",1};
	};
		class MiniDriverDead: MiniDriverDying {
			actions = "DeadActions";
			file = "\mini\minidriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"MiniDriverDying",1};
			connectTo[] = {"DeadState",1};
	};
		class M2A2Driver: Driver {
			file = "\m2a2\m2a2driverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M2A2DriverV1",0.7,"M2A2Driver"};
			interpolateWith[] = {"M2A2DriverV1",0.5};
			equivalentTo = "M2A2Driver";
			interpolationSpeed = 1;
	};
		class M2A2DriverV1: M2A2Driver {
			file = "\m2a2\m2a2driver.rtm";
			speed = "- 4";
			looped = 1;
	};
		class M2A2Gunner: Driver {
			file = "\m2a2\m2a2gunnerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M2A2GunnerV1",0.7,"M2A2Gunner"};
			interpolateWith[] = {"M2A2GunnerV1",0.5};
			equivalentTo = "M2A2Gunner";
			interpolationSpeed = 1;
	};
		class M2A2GunnerV1: M2A2Gunner {
			file = "\m2a2\m2a2gunner.rtm";
			speed = "- 4";
			looped = 1;
	};
		class M2A2GunnerOut: Driver {
			file = "\m2a2\m2a2gunneroutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M2A2GunnerOutV1",0.7,"M2A2GunnerOut"};
			interpolateWith[] = {"M2A2GunnerOutV1",0.5};
			equivalentTo = "M2A2GunnerOut";
			interpolationSpeed = 1;
			connectTo[] = {"M2A2GunnerOutDying",1};
	};
		class M2A2GunnerOutV1: M2A2GunnerOut {
			file = "\m2a2\m2a2gunnerout.rtm";
			speed = "- 4";
			looped = 1;
	};
		class M2A2GunnerOutDying: DefaultDie {
			actions = "NoActions";
			file = "\m2a2\m2a2gunneroutsmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M2A2GunnerOut",1};
	};
		class M2A2GunnerOutDead: M2A2GunnerOutDying {
			actions = "DeadActions";
			file = "\m2a2\m2a2gunneroutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M2A2GunnerOutDying",1};
			connectTo[] = {"DeadState",1};
	};
		class M2A2Commander: Driver {
			file = "\m2a2\m2a2commanderstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M2A2CommanderV1",0.7,"M2A2Commander"};
			interpolateWith[] = {"M2A2CommanderV1",0.5};
			equivalentTo = "M2A2Commander";
			interpolationSpeed = 1;
	};
		class M2A2CommanderV1: M2A2Commander {
			file = "\m2a2\m2a2commander.rtm";
			speed = "- 4";
			looped = 1;
	};
		class M2A2CommanderOut: Driver {
			file = "\m2a2\m2a2commanderoutstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"M2A2CommanderOutV1",0.7,"M2A2CommanderOut"};
			interpolateWith[] = {"M2A2CommanderOutV1",0.5};
			equivalentTo = "M2A2CommanderOut";
			interpolationSpeed = 1;
			connectTo[] = {"M2A2CommanderOutDying",1};
	};
		class M2A2CommanderOutV1: M2A2CommanderOut {
			file = "\m2a2\m2a2commanderout.rtm";
			speed = "- 4";
			looped = 1;
	};
		class M2A2CommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "\m2a2\m2a2commanderoutsmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"M2A2CommanderOut",1};
	};
		class M2A2CommanderOutDead: M2A2CommanderOutDying {
			actions = "DeadActions";
			file = "\m2a2\m2a2commanderoutsmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"M2A2CommanderOutDying",1};
			connectTo[] = {"DeadState",1};
	};
		class koloDriver: Driver {
			file = "\kolo\kolo.rtm";
			speed = 2;
			looped = 1;
	};
		class TrabiDriverDying: DefaultDie {
			actions = "NoActions";
			file = "\trab\trabidriversmrt.rtm";
			speed = "-1";
			looped = "false";
			soundEnabled = "false";
			connectFrom[] = {"TrabiDriver",1};
	};
		class TrabiDriverDead: TrabiDriverDying {
			actions = "DeadActions";
			file = "\trab\trabidriversmrt2.rtm";
			speed = "10000000000";
			terminal = "true";
			connectFrom[] = {"TrabiDriverDying",1};
			connectTo[] = {"DeadState",1};
	};
		class TrabiDriver: Driver {
			file = "\trab\trabidriverstat.rtm";
			speed = "10000000000";
			looped = "true";
			variantsAI[] = {"TrabiDriverV1",0.7,"TrabiDriver"};
			interpolateWith[] = {"TrabiDriverV1",0.5};
			equivalentTo = "TrabiDriver";
			interpolationSpeed = 1;
			connectTo[] = {"TrabiDriverDying",1};
	};
		class TrabiDriverV1: TrabiDriver {
			file = "\trab\trabidriver.rtm";
			speed = "-4";
			looped = "true";
	};
		class Ch47GunnerDying: DefaultDie {
			actions = "NoActions";
			file = "\ch47\ch47gunnersmrt.rtm";
			speed = "-1";
			looped = "false";
			soundEnabled = "false";
			connectFrom[] = {"Ch47Gunner",1};
	};
		class Ch47GunnerDead: Ch47GunnerDying {
			actions = "DeadActions";
			file = "\ch47\ch47gunnersmrt2.rtm";
			speed = "10000000000";
			terminal = "true";
			connectFrom[] = {"Ch47GunnerDying",1};
			connectTo[] = {"DeadState",1};
	};
		class Ch47Gunner: Driver {
			file = "\ch47\ch47gunnerstat.rtm";
			speed = "10000000000";
			looped = "true";
			variantsAI[] = {"Ch47GunnerV1",0.7,"Ch47Gunner"};
			interpolateWith[] = {"Ch47GunnerV1",0.5};
			equivalentTo = "Ch47Gunner";
			interpolationSpeed = 1;
			connectTo[] = {"Ch47GunnerDying",1};
	};
		class Ch47GunnerV1: Ch47Gunner {
			file = "\ch47\ch47gunner.rtm";
			speed = "-4";
			looped = "true";
	};
		class busDriver: Driver {
			file = "\O\Anim\BusDriverstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"busDriverV1",0.7,"busDriver"};
			interpolateWith[] = {"busDriverV1",0.5};
			equivalentTo = "busDriver";
			interpolationSpeed = 1;
			connectTo[] = {"busDriverDying",1};
	};
		class busDriverV1: busDriver {
			file = "\O\Anim\BusDriver.rtm";
			speed = "- 4";
			looped = 1;
	};
		class busDriverDying: DefaultDie {
			actions = "NoActions";
			file = "\O\Anim\BusDriversmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"busDriver",1};
	};
		class busDriverDead: busDriverDying {
			actions = "DeadActions";
			file = "\O\Anim\BusDriversmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"busDriverDying",1};
			connectTo[] = {"DeadState",1};
	};
		class busCargo: Driver {
			file = "\O\Anim\BusPassangerstat.rtm";
			speed = 1e+010;
			looped = 1;
			variantsAI[] = {"busCargoV1",0.7,"busCargo"};
			interpolateWith[] = {"busCargoV1",0.5};
			equivalentTo = "busCargo";
			interpolationSpeed = 1;
			connectTo[] = {"busCargoDying",1};
	};
		class busCargoV1: busCargo {
			file = "\O\Anim\BusPassanger.rtm";
			speed = "- 4";
			looped = 1;
	};
		class busCargoDying: DefaultDie {
			actions = "NoActions";
			file = "\O\Anim\BusPassangersmrt.rtm";
			speed = "- 1";
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"busCargo",1};
	};
		class busCargoDead: busCargoDying {
			actions = "DeadActions";
			file = "\O\Anim\BusPassangersmrt2.rtm";
			speed = 1e+010;
			terminal = 1;
			connectFrom[] = {"busCargoDying",1};
			connectTo[] = {"DeadState",1};
	};
		class jawaCoDriver: Driver {
			file = "\O\Anim\motorkaspolujezdecstat.rtm";
			speed = 1e+010;
			looped = 1;
	};
		class jawaDriver: Driver {
			file = "\O\Anim\motorkastat.rtm";
			speed = 1e+010;
			looped = 1;
	};		class FXBase0: StandBase {
			actions = "StandActions";
			looped = 0;
			soundEnabled = 0;
			duty = -1;
			interpolationSpeed = 1;
	};
		class FXexecution: FXBase0 {
			file = "\o\Anim\poprava.rtm";
			speed = -3.0;
			connectTo[] = {"Stand",1};
	};
		class FXexecutionDead: FXBase0 {
			file = "\o\Anim\poprava2.rtm";
			speed = -1.0;
			connectTo[] = {"Stand",1};
	};
		class FXdismay: FXBase0 {
			file = "\o\Anim\ulek.rtm";
			speed = -2.0;
			connectTo[] = {"Stand",1};
	};
		class FXToKneel: FXBase0 {
			file = "\o\Anim\dobobku.rtm";
			speed = -1.5;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"FXInKneel",1};
	};
		class FXInKneel: FXBase0 {
			actions = "noactions";
			file = "\o\Anim\bobek.rtm";
			speed = -6.0;
			looped = 1;
	};
		class FXFromKneel: FXBase0 {
			file = "\o\Anim\zbobku.rtm";
			speed = -2;
			connectFrom[] = {"FXInKneel",1};
			connectTo[] = {"Civil",1};
	};
		class FXshow1: FXBase0 {
			file = "\o\Anim\ukazovani1.rtm";
			speed = -4;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXshow2: FXBase0 {
			file = "\o\Anim\ukazovani2.rtm";
			speed = -6;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXshow3: FXBase0 {
			file = "\o\Anim\ukazovani3.rtm";
			speed = -3;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXshow4: FXBase0 {
			file = "\o\Anim\ukazovani4.rtm";
			speed = -3;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXshow5: FXBase0 {
			file = "\o\Anim\ukazovani5.rtm";
			speed = -3;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXCivilLookaround: FXBase0 {
			file = "\o\Anim\stanirozhlizi.rtm";
			speed = -4;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXCivilLookaround2: FXBase0 {
			file = "\o\Anim\stanirozhlizi2.rtm";
			speed = -3;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXCivilLookback: FXBase0 {
			file = "\o\Anim\staniohlidnese.rtm";
			speed = -4;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXCivilHandMouth: FXBase0 {
			file = "\o\Anim\stanimluvisrukouupusy.rtm";
			speed = -6;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXCivilFoldOnesArms: FXBase0 {
			file = "\o\Anim\stanizaloziruce.rtm";
			speed = -6;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXCivilArmsAkimboR: FXBase0 {
			file = "\o\Anim\stanipravavbok.rtm";
			speed = -6;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXCivilArmsAkimboL: FXBase0 {
			file = "\o\Anim\stanilevavavbok.rtm";
			speed = -5;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"Civil",1};
	};
		class FXFromTable: FXBase0 {
			file = "\o\Anim\odstolu.rtm";
			speed = -5;
			connectTo[] = {"Civil",1};
	};
		class FXToTable: FXBase0 {
			actions = "noactions";
			file = "\o\Anim\kestolu.rtm";
			speed = -3;
			connectFrom[] = {"Civil",1};
	};
		class FXSitLeftHandDown: FXBase0 {
			file = "\o\Anim\sedilevackadolu.rtm";
			speed = -10;
	};
		class FXSitRightHandDown: FXBase0 {
			file = "\o\Anim\sedipravackadolu.rtm";
			speed = -6;
	};
		class FXSitHandsOnTable: FXBase0 {
			file = "\o\Anim\sediopirasihlavu.rtm";
			speed = -6;
	};
		class FXToHand: FXBase0 {
			file = "\o\Anim\stanizaloziruce1.rtm";
			speed = -1.5;
			connectFrom[] = {"Civil",1};
			connectTo[] = {"FXInHand",1};
	};
		class FXInHand: FXBase0 {
			actions = "noactions";
			file = "\o\Anim\stanizaloziruce2.rtm";
			speed = -6.0;
			looped = 1;
	};
		class FXInHandStat: FXBase0 {
			file = "\o\Anim\stanizalozirucestat.rtm";
			speed = 1e+010;
			looped = 1;
			connectFrom[] = {"FXInHand",1};
			connectTo[] = {"Civil",1};
	};
		class FXFromHand: FXBase0 {
			file = "\o\Anim\stanizaloziruce3.rtm";
			speed = -2;
			connectFrom[] = {"FXInHand",1};
			connectTo[] = {"Civil",1};
	};
		class FXNewcivil: FXBase0 {
			file = "\o\Anim\pokusnystanistat.rtm";
			speed = -2;
	};
		class FXWomanSur: FXBase0 {
			file = "\o\Anim\zenskarucevzhuru.rtm";
			speed = -2;
	};



		// zodiac driver **************************
		class CWKZodiacDriverA_xj400: pbrdriver {
			file = "\cwkzodiac\rtm\cwkZodiacDriver.rtm";
			speed = 10000000000;
			looped = 1;
			variantsAI[] = {"cwkzodiacdriverAV1_xj400",0.700000,"cwkzodiacdriverA_xj400"};
			interpolateWith[] = {"cwkzodiacdriverAV1_xj400",0.500000};
			equivalentTo = "CWKZodiacDriverA_xj400";
			interpolationSpeed = 1;
			connectTo[] = {"cwkzodiacdriverDyingA_xj400",1};
		};
		class cwkzodiacdriverAV1_xj400: cwkzodiacdriverA_xj400 {
			file = "\cwkzodiac\rtm\cwkZodiacDriver.rtm";
			speed = -4;
			looped = 1;
		};
		class cwkzodiacdriverDyingA_xj400: DefaultDie {
			actions = "NoActions";
			file = "\cwkzodiac\rtm\cwkZodiacDriver.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"cwkzodiacdriverA_xj400",1};
		};

		class BWMODLeo2A6drv: Driver {
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6drv.rtm";
			speed = -1;
			looped = 1;
			connectTo[] = {"BWMODLeo2A6drvsmrt.rtm",1};
			interpolateTo[] = {"BWMODLeo2A6drvsmrt",0.100000};
		};
		class BWMODLeo2A6drvsmrt: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6drvsmrt.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BWMODLeo2A6drv",1};
		};
		class BWMODLeo2A6drvsmrt2: BWMODLeo2A6drvsmrt {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6drvsmrt2.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"BWMODLeo2A6drvsmrt",1};
			connectTo[] = {"DeadState",1};
		};
		class BWMODLeo2A6drvout: Driver {
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6drvout.rtm";
			speed = -1;
			looped = 1;
			connectTo[] = {"BWMODLeo2A6drvoutsmrt.rtm",1};
			interpolateTo[] = {"BWMODLeo2A6drvoutsmrt",0.100000};
		};
		class BWMODLeo2A6drvoutsmrt: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6drvoutsmrt.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BWMODLeo2A6drvout",1};
		};
		class BWMODLeo2A6drvoutsmrt2: BWMODLeo2A6drvoutsmrt {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6drvoutsmrt2.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"BWMODLeo2A6drvoutsmrt",1};
			connectTo[] = {"DeadState",1};
		};
		class BWMODLeo2A6gun: Cargo {
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6gun.rtm";
			speed = -1;
			looped = 1;
			connectTo[] = {"BWMODLeo2A6gunsmrt.rtm",1};
			interpolateTo[] = {"BWMODLeo2A6gunsmrt",0.100000};
		};
		class BWMODLeo2A6gunsmrt: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6gunsmrt.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BWMODLeo2A6gun",1};
		};
		class BWMODLeo2A6gunsmrt2: BWMODLeo2A6gunsmrt {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6gunsmrt2.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"BWMODLeo2A6gunsmrt",1};
			connectTo[] = {"DeadState",1};
		};
		class BWMODLeo2A6cmd: Commander {
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6cmd.rtm";
			speed = -1;
			looped = 1;
			connectTo[] = {"BWMODLeo2A6cmdsmrt.rtm",1};
			interpolateTo[] = {"BWMODLeo2A6cmdsmrt",0.100000};
		};
		class BWMODLeo2A6cmdsmrt: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6cmdsmrt.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BWMODLeo2A6cmd",1};
		};
		class BWMODLeo2A6cmdsmrt2: BWMODLeo2A6cmdsmrt {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6cmdsmrt2.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"BWMODLeo2A6cmdsmrt",1};
			connectTo[] = {"DeadState",1};
		};
		class BWMODLeo2A6cmdout: Commander {
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6cmdout.rtm";
			speed = -1;
			looped = 1;
			connectTo[] = {"BWMODLeo2A6cmdoutsmrt.rtm",1};
			interpolateTo[] = {"BWMODLeo2A6cmdoutsmrt",0.100000};
		};
		class BWMODLeo2A6cmdoutsmrt: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6cmdoutsmrt.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BWMODLeo2A6cmdout",1};
		};
		class BWMODLeo2A6cmdoutsmrt2: BWMODLeo2A6cmdoutsmrt {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BWMODLeo2A6cmdoutsmrt2.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"BWMODLeo2A6cmdoutsmrt",1};
			connectTo[] = {"DeadState",1};
		};	

		class BWMOD_TigerPilot: Driver {
			file = "\TZK_Anims_4_0_0\BWMOD_TigerPilot.rtm";
			speed = -1;
			looped = 1;
			connectTo[] = {"BWMOD_TigerPilotsmrt",1};
			interpolateTo[] = {"BWMOD_TigerPilotsmrt",0.100000};
		};	
		class BWMOD_TigerGunner: Gunner {
			file = "\TZK_Anims_4_0_0\BWMOD_Tigergun.rtm";
			speed = -1;
			looped = 1;
			connectTo[] = {"BWMOD_TigerGunnersmrt",1};
			interpolateTo[] = {"BWMOD_TigerGunnersmrt",0.100000};
		};
		class BWMOD_TigerPilotStartup: BWMOD_TigerPilot {
			file = "\TZK_Anims_4_0_0\BWMOD_TigerPilotStartup.rtm";
			speed = -9; //-10;
			looped = 0;
			connectTo[] = {"BWMOD_TigerPilot",1};
			interpolateTo[] = {"BWMOD_TigerPilot",0.100000};
		};
		class BWMod_TigerPilotShutdown: BWMOD_TigerPilot {
			file = "\TZK_Anims_4_0_0\BWMOD_TigerPilotStartup.rtm";
			speed = -9; //-10;
			looped = 0;
			connectTo[] = {"BWMOD_TigerPilot",1};
			interpolateTo[] = {"BWMOD_TigerPilot",0.100000};
		};
		class BWMOD_TigerPilotsmrt: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BWMOD_TigerPilotsmrt.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BWMOD_TigerPilot",1};
		};
		class BWMOD_TigerPilotsmrt2: BWMOD_TigerPilotsmrt {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BWMOD_TigerPilotsmrt2.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"BWMOD_TigerPilotsmrt",1};
			connectTo[] = {"DeadState",1};
		};
		class BWMOD_TigerGunnersmrt: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BWMOD_Tigergunsmrt.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BWMOD_TigerGunner",1};
		};
		class BWMOD_TigerGunnersmrt2: BWMOD_TigerGunnersmrt {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BWMOD_Tigergunsmrt2.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"BWMOD_TigerGunnersmrt",1};
			connectTo[] = {"DeadState",1};
		};

		class ven_brdm2_driver:Driver {
			file = "\TZK_Anims_4_0_0\ven_brdm2_driverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ven_brdm2_driverV1",0.7,"ven_brdm2_driver"};
			interpolateWith[] = {"ven_brdm2_driverV1",0.5};
			equivalentTo = "ven_brdm2_driver";
			interpolationSpeed = 1;
			connectTo[] = {"ven_brdm2_driverDying",1};
		};
		class ven_brdm2_driverV1:ven_brdm2_driver {
			file = "\TZK_Anims_4_0_0\ven_brdm2_driver.rtm";
			speed = -4;
			looped = 1;
		};
		class ven_brdm2_driverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ven_brdm2_driversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ven_brdm2_driver",1};
		};
		class ven_brdm2_driverDead:ven_brdm2_driverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ven_brdm2_driversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ven_brdm2_driverDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ven_brdm2_gunner:Driver {
			file = "\TZK_Anims_4_0_0\ven_brdm2_gunnerstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ven_brdm2_gunnerV1",0.7,"ven_brdm2_gunner"};
			interpolateWith[] = {"ven_brdm2_gunnerV1",0.5};
			equivalentTo = "ven_brdm2_gunner";
			interpolationSpeed = 1;
			connectTo[] = {"ven_brdm2_gunnerDying",1};
		};
		class ven_brdm2_gunnerV1:ven_brdm2_gunner {
			file = "\TZK_Anims_4_0_0\ven_brdm2_gunner.rtm";
			speed = -4;
			looped = 1;
		};
		class ven_brdm2_gunnerDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ven_brdm2_gunnersmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ven_brdm2_gunner",1};
		};
		class ven_brdm2_gunnerDead:ven_brdm2_gunnerDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ven_brdm2_gunnersmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ven_brdm2_gunnerDying",1};
			connectTo[] = {"DeadState",1};
		};
		class ven_brdm2_codriver:Driver {
			file = "\TZK_Anims_4_0_0\ven_brdm2_codriverstat.rtm";
			speed = 10000000000.0;
			looped = 1;
			variantsAI[] = {"ven_brdm2_codriverV1",0.7,"ven_brdm2_codriver"};
			interpolateWith[] = {"ven_brdm2_codriverV1",0.5};
			equivalentTo = "ven_brdm2_codriver";
			interpolationSpeed = 1;
			connectTo[] = {"ven_brdm2_codriverDying",1};
		};
		class ven_brdm2_codriverV1:ven_brdm2_codriver {
			file = "\TZK_Anims_4_0_0\ven_brdm2_codriver.rtm";
			speed = -4;
			looped = 1;
		};
		class ven_brdm2_codriverDying:DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\ven_brdm2_codriversmrt.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"ven_brdm2_codriver",1};
		};
		class ven_brdm2_codriverDead:ven_brdm2_codriverDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\ven_brdm2_codriversmrt2.rtm";
			speed = 10000000000.0;
			terminal = 1;
			connectFrom[] = {"ven_brdm2_codriverDying",1};
			connectTo[] = {"DeadState",1};
		};
	 
		#define VEH_DIE_CONN(Name,anim,time) \
			class Name##Dying: DefaultDie { \
				actions = NoActions; \
				file = anim##smrt.rtm; \
				speed = -time; \
				looped = false; \
				soundEnabled = false; \
				connectFrom[] = {Name,1}; \
			}; \
			class Name##Dead: Name##Dying { \
				actions = DeadActions; \
				file = anim##smrt2.rtm; \
				speed = SPEED_STATIC; \
				terminal = true; \
				connectFrom[] = {Name##Dying,1}; \
				connectTo[] = {DeadState,1}; \
			}
		#define VEHIN_MOVES_VAR(Name,anim,vartime) \
			class Name: Driver { \
				file = anim##stat.rtm; \
				speed = SPEED_STATIC; \
				looped = true; \
				variantsAI[] = {Name##V1,0.7,Name};\
				interpolateWith[] = {Name##V1,0.5};\
				equivalentTo = Name; \
				interpolationSpeed = 1; \
				connectTo[] = {Name##Dying,1}; \
			} \
			class Name##V1: Name { \
				file = anim.rtm; \
				speed = -vartime; \
				looped = true; \
			}
		#define VEH_MOVES_VAR(Name,anim,time,vartime) \
			VEHIN_MOVES_VAR(Name,anim,vartime); \
			VEH_DIE_CONN(Name,anim,time)
		VEH_MOVES_VAR(BAS_RUSGunner,\TZK_Anims_4_0_0\BAS_RUSGunner,0.6,4);
		
		class HmmwvGunner01: JeepGunner {
			file = "\TZK_Anims_4_0_0\HmmwvGunner01_stat.rtm";
			speed = 10000000000;
			looped = 1;
			variantsAI[] = {"HmmwvGunner01V1",0.700000,"HmmwvGunner01"};
			interpolateWith[] = {"HmmwvGunner01V1",0.500000};
			equivalentTo = "HmmwvGunner01";
			interpolationSpeed = 1;
			connectTo[] = {"HmmwvGunner01Dying",1};
		};
		class HmmwvGunner01V1: HmmwvGunner01 {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvGunner01.rtm";
			speed = -2;//-1
			looped = 1;
		};
		class HmmwvGunner01Dying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvGunner01_dying.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HmmwvGunner01",1};
		};
		class HmmwvGunner01Dead: HmmwvGunner01Dying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvGunner01_dead.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"HmmwvGunner01Dying",1};
			connectTo[] = {"DeadState",1};
		};

//////////////////////Gunnner TOW Car////////////////////////////
		class HmmwvGunner02: JeepGunner {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvGunner02_stat.rtm";
			speed = 10000000000;
			looped = 1;
			variantsAI[] = {"HmmwvGunner02V1",0.700000,"HmmwvGunner02"};
			interpolateWith[] = {"HmmwvGunner02V1",0.500000};
			equivalentTo = "HmmwvGunner02";
			interpolationSpeed = 1;
			connectTo[] = {"HmmwvGunner02Dying",1};
		};
		class HmmwvGunner02V1: HmmwvGunner02 {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvGunner02_stat.rtm";
			speed = -1;//-1
			looped = 1;
		};
		class HmmwvGunner02Dying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvGunner02_dying.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HmmwvGunner02",1};
		};
		class HmmwvGunner02Dead: HmmwvGunner02Dying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvGunner02_dead.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"HmmwvGunner02Dying",1};
			connectTo[] = {"DeadState",1};
		};
		class HmmwvCargo01: JeepDriver {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo01_stat.rtm";
			speed = 10000000000;
			looped = 1;
			variantsAI[] = {"HmmwvCargo01V1",0.700000,"HmmwvCargo01"};
			interpolateWith[] = {"HmmwvCargo01V1",0.500000};
			equivalentTo = "HmmwvCargo01";
			interpolationSpeed = 1;
			connectTo[] = {"HmmwvCargo01Dying",1};
		};
		class HmmwvCargo01V1: HmmwvCargo01 {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo01.rtm";
			speed = -6;
			looped = 1;
		};
		class HmmwvCargo01Dying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo01_dying.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HmmwvCargo01",1};
		};
		class HmmwvCargo01Dead: HmmwvCargo01Dying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo01_dead.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"HmmwvCargo01Dying",1};
			connectTo[] = {"DeadState",1};
		};
//////////////////////Cargo02////////////////////////////
		class HmmwvCargo02: JeepDriver {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo02_stat.rtm";
			speed = 10000000000;
			looped = 1;
			variantsAI[] = {"HmmwvCargo02V1",0.700000,"HmmwvCargo02"};
			interpolateWith[] = {"HmmwvCargo02V1",0.500000};
			equivalentTo = "HmmwvCargo02";
			interpolationSpeed = 1;
			connectTo[] = {"HmmwvCargo02Dying",1};
		};
		class HmmwvCargo02V1: HmmwvCargo02 {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo02.rtm";
			speed = -6;
			looped = 1;
		};
		class HmmwvCargo02Dying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo02_dying.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HmmwvCargo02",1};
		};
		class HmmwvCargo02Dead: HmmwvCargo02Dying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo02_dead.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"HmmwvCargo02Dying",1};
			connectTo[] = {"DeadState",1};
		};
//////////////////////Cargo03////////////////////////////
		class HmmwvCargo03: JeepDriver {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo03_stat.rtm";
			speed = 10000000000;
			looped = 1;
			variantsAI[] = {"HmmwvCargo03V1",0.700000,"HmmwvCargo03"};
			interpolateWith[] = {"HmmwvCargo03V1",0.500000};
			equivalentTo = "HmmwvCargo03";
			interpolationSpeed = 1;
			connectTo[] = {"HmmwvCargo03Dying",1};
		};
		class HmmwvCargo03V1: HmmwvCargo03 {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo03.rtm";
			speed = -6;
			looped = 1;
		};
		class HmmwvCargo03Dying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo03_dying.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HmmwvCargo03",1};
		};
		class HmmwvCargo03Dead: HmmwvCargo03Dying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo03_dead.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"HmmwvCargo03Dying",1};
			connectTo[] = {"DeadState",1};
		};
//////////////////////Cargo04////////////////////////////
		class HmmwvCargo04: JeepDriver {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo04_stat.rtm";
			speed = 10000000000;
			looped = 1;
			variantsAI[] = {"HmmwvCargo04V1",0.700000,"HmmwvCargo04"};
			interpolateWith[] = {"HmmwvCargo04V1",0.500000};
			equivalentTo = "HmmwvCargo04";
			interpolationSpeed = 1;
			connectTo[] = {"HmmwvCargo04Dying",1};
		};
		class HmmwvCargo04V1: HmmwvCargo04 {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo04.rtm";
			speed = -6;
			looped = 1;
		};
		class HmmwvCargo04Dying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo04_dying.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HmmwvCargo04",1};
		};
		class HmmwvCargo04Dead: HmmwvCargo04Dying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo04_dead.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"HmmwvCargo04Dying",1};
			connectTo[] = {"DeadState",1};
		};
//////////////////////Cargo05////////////////////////////
		class HmmwvCargo05: JeepDriver {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo05_stat.rtm";
			speed = 10000000000;
			looped = 1;
			variantsAI[] = {"HmmwvCargo05V1",0.700000,"HmmwvCargo05"};
			interpolateWith[] = {"HmmwvCargo05V1",0.500000};
			equivalentTo = "HmmwvCargo05";
			interpolationSpeed = 1;
			connectTo[] = {"HmmwvCargo05Dying",1};
		};
		class HmmwvCargo05V1: HmmwvCargo05 {
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo05.rtm";
			speed = -6;
			looped = 1;
		};
		class HmmwvCargo05Dying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo05_dying.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"HmmwvCargo05",1};
		};
		class HmmwvCargo05Dead: HmmwvCargo05Dying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\FK_HMMWV\HmmwvCargo05_dead.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"HmmwvCargo05Dying",1};
			connectTo[] = {"DeadState",1};
		};

		class RUS_ZSUCommander: Driver {
			file = "ZSUCommanderstat.rtm";
			speed = 10000000000;
			looped = 1
			variantsAI[] = {"RUS_ZSUCommanderV1",0.700000,"RUS_ZSUCommander"};
			interpolateWith[] = {"RUS_ZSUCommanderV1",0.500000};
			equivalentTo = "RUS_ZSUCommander";
			interpolationSpeed = 1
		};
		class RUS_ZSUCommanderV1: RUS_ZSUCommander {
			file = "ZSUCommander.rtm";
			speed = 4294967292
			looped = 1
		};
		class RUS_ZSUCommanderOut: Driver {
			file = "\TZK_Anims_4_0_0\MNF_ZSU\zsu1out1.rtm";
			speed = 1;
			looped = 0;
			variantsAI[] = {"RUS_ZSUCommanderOutV1",0.700000,"RUS_ZSUCommanderOut"};
			interpolateWith[] = {"RUS_ZSUCommanderOutV1",0.500000};
			equivalentTo = "RUS_ZSUCommanderOut";
			interpolationSpeed = 1
			connectTo[] = {"RUS_ZSUCommanderOutDying",1};
		};
		class RUS_ZSUCommanderOutV1: RUS_ZSUCommanderOut {
			file = "\TZK_Anims_4_0_0\MNF_ZSU\zsu1out1.rtm";
			speed = 1;
			looped = 0;
		};
		class RUS_ZSUCommanderOutDying: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\MNF_ZSU\zsudead1.rtm";
			speed = 4294967295
			looped = 0
			soundEnabled = 0
			connectFrom[] = {"RUS_ZSUCommanderOut",1};
		};
		class RUS_ZSUCommanderOutDead: RUS_ZSUCommanderOutDying {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\MNF_ZSU\zsudead2.rtm";
			speed = 10000000000;
			terminal = 1
			connectFrom[] = {"RUS_ZSUCommanderOutDying",1};
			connectTo[] = {"DeadState",1};
		};
		class RUS_ZSUproxy1: StandBase {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\MNF_ZSU\cargo\1.rtm";
			looped = true;
			equivalentTo = "Combat";
			soundEnabled = false;
			duty = "RestDuty";
			interpolationSpeed = 2; 
			connectFrom[] = {"Stand",1,"StandVar2",1,"StandVar3",1};
			connectTo[] = {"Stand",1,"StandVar2",1,"StandVar3",1};
			interpolateTo[] = {"StandDying",0.1,"StandDyingVer2",0.1};
			speed = -4.2;
			variantsAI[] = {RUS_ZSUproxy1,0.6,};
		};
		class RUS_ZSUproxy2: RUS_ZSUproxy1 {
			file = "\TZK_Anims_4_0_0\MNF_ZSU\cargo\2.rtm";
			speed = -4.2;
			variantsAI[] = {RUS_ZSUproxy2,0.6,};
		};
		class RUS_ZSUproxy3: RUS_ZSUproxy1 {
			file = "\TZK_Anims_4_0_0\MNF_ZSU\cargo\3.rtm";
			speed = -4.2;
			variantsAI[] = {RUS_ZSUproxy3,0.6,};
		};
		class RUS_ZSUproxy4: RUS_ZSUproxy1 {
			file = "\TZK_Anims_4_0_0\MNF_ZSU\cargo\4.rtm";
			speed = -4.2;
			variantsAI[] = {RUS_ZSUproxy4,0.6,};
		};
	};
	class Interpolations {
		standF[] = {1,"Stand","StandWalkF","StandWalkLF","StandWalkRF","StandWalkL","StandWalkR","StandRunF","StandJogF","StandJogRF","StandJogLF","StandRunRF","StandRunLF"};
		standB[] = {1,"Stand","StandWalkLB","StandWalkRB","StandWalkB"};
		combatF[] = {0.9,"Combat","CombatStillPlayer","CombatRelaxed","CombatRunF","CombatRunLF","CombatRunRF","CombatRunL","CombatRunR","CombatSprintF","CombatSprintLF","CombatSprintRF","CombatWalkF","CombatWalkLF","CombatWalkRF","CombatWalkL","CombatWalkR","CombatWalkLB","CombatWalkRB","CombatWalkB","AimCombatRunF","AimCombatRunLF","AimCombatRunRF","AimCombatRunL","AimCombatRunR","OroCombatRunF","OroCombatRunLF","OroCombatRunRF","OroCombatRunL","OroCombatRunR","AimCombatSprintF","AimCombatSprintLF","AimCombatSprintRF"};
		combatB[] = {1,"Combat","CombatStillPlayer","CombatRelaxed","CombatRunLB","CombatRunRB","CombatRunB","AimCombatRunLB","AimCombatRunRB","AimCombatRunB"};
		crouchF[] = {0.5,"CrouchIM","CrouchRunF","CrouchRunLF","CrouchRunRF","CrouchRunL","CrouchRunR","CrouchSprintF","CrouchSprintLF","CrouchSprintRF","AimCrouchRunF","AimCrouchRunLF","AimCrouchRunRF","AimCrouchRunL","AimCrouchRunR","AimCrouchSprintF","AimCrouchSprintLF","AimCrouchSprintRF"};
		crouchFW[] = {0.5,"CrouchIM","CrouchWalkF","CrouchWalkLF","CrouchWalkRF","CrouchWalkL","CrouchWalkR","CrouchWalkLB","CrouchWalkRB","CrouchWalkB"};
		crouchB[] = {0.5,"CrouchIM","CrouchRunLB","CrouchRunRB","CrouchRunB"};
		civilF[] = {1,"Civil","CivilRunF","CivilRunLF","CivilRunRF","CivilRunL","CivilRunR","CivilWalkF","CivilWalkLF","CivilWalkRF","CivilWalkL","CivilWalkR"};
		civilB[] = {1,"Civil","CivilWalkLB","CivilWalkRB","CivilWalkB","CivilRunLB","CivilRunRB","CivilRunB"};
		lyingF[] = {1,"Lying","LyingCrawlF","LyingFastCrawlF","LyingCrawlLF","LyingCrawlRF","LyingCrawlL","LyingCrawlR"};
		lyingB[] = {1,"Lying","LyingCrawlLB","LyingCrawlRB","LyingCrawlB"};
		civilLyingF[] = {1,"CivilLying","CivilLyingCrawlF","CivilLyingFastCrawlF","CivilLyingCrawlLF","CivilLyingCrawlRF","CivilLyingCrawlL","CivilLyingCrawlR"};
		civilLyingB[] = {1,"CivilLying","CivilLyingCrawlLB","CivilLyingCrawlRB","CivilLyingCrawlB"};
		lyingVars[] = {0.1,"Lying","LyingStillV1","LyingTurnL","LyingTurnR"};
		civilLyingVars[] = {0.1,"CivilLying","CivilLyingStillV1"};
		combatVars[] = {0.1,"Combat","CombatStillPlayer","CombatStillV1"};
		combatReleaxedVars[] = {0.1,"Combat","CombatRelaxed","CombatRelaxedStill","CombatRelaxedNew1","CombatRelaxedNew2","CombatRelaxedNew3","CombatRelaxedNew4","CombatRelaxedNew5","CombatRelaxedNew6"};
		combatTurnRelaxed[] = {0.1,"CombatRelaxed","CombatTurnLRelaxed","CombatTurnRRelaxed"};
		combatTurn[] = {0.1,"Combat","CombatStillPlayer","CombatTurnL","CombatTurnR"};
		standTurn[] = {0.1,"Stand","StandTurnL","StandTurnR"};
		standFX[] = {1,"Stand","EffectStand","EffectStandTalk","EffectStand","EffectCombatStand","EffectStandStill","CommandFireAtWill","CommandFormation","CommandHoldFire","CommandStop","CommandForward"};
		standVars[] = {1,"Stand","StandVar2"};
		weaponF[] = {1,"Weapon","WeaponWalkF","WeaponWalkLF","WeaponWalkRF","WeaponWalkL","WeaponWalkR","WeaponRunF","WeaponRunRF","WeaponRunLF","SlowWeaponRunLF","SlowWeaponWalkF","SlowWeaponWalkLF","SlowWeaponWalkRF","SlowWeaponWalkL","SlowWeaponWalkR"};
		weaponB[] = {1,"Weapon","WeaponWalkLB","WeaponWalkRB","WeaponWalkB","SlowWeaponWalkLB","SlowWeaponWalkRB","SlowWeaponWalkB"};
		weaponTurn[] = {1,"Weapon","WeaponTurnL","WeaponTurnR"};
		civilLyingTrans[] = {2,"CivilLying","Lying"};
		civilCombatTrans[] = {2,"Combat","Civil"};
		civilStandTrans[] = {2,"Stand","Civil"};
		civilVars[] = {0.1,"Civil","CivilStillV1"};
		civilTurn[] = {1,"Civil","CivilTurnL","CivilTurnR"};
		cargoEquiv[] = {2,"M113Gunner","M113Driver","M113DriverOut","M60Gunner","M60Driver","M60DriverOut","M60Commander","M60CommanderOut","M1A1Gunner","M1A1Driver","M1A1DriverOut","M1A1Commander","Cargo"};
		cargoVars[] = {0.1,"Cargo","CargoVer1","CargoVer2","CargoVer3","CargoVer4","CargoVer5"};
		sitDownVars[] = {1.0,"EffectStandSitDown","EffectStandSitDownVer2","EffectStandSitDownVer1"};
	};
};
class CfgMovesMC {
	class Default {};
	class DefaultDie: Default {};
	class States {
		class Driver: Default {};
		class Gunner: Default {};
		class Cargo: Default {};
		class Commander: Default {};
		
		class BWMOD_TigerPilot: Driver {
			file = "\TZK_Anims_4_0_0\BWMOD_TigerPilot.rtm";
			speed = -1;
			looped = 1;
			connectTo[] = {"BWMOD_TigerPilotsmrt",1};
			interpolateTo[] = {"BWMOD_TigerPilotsmrt",0.100000};
		};	
		class BWMOD_TigerGunner: Gunner {
			file = "\TZK_Anims_4_0_0\BWMOD_Tigergun.rtm";
			speed = -1;
			looped = 1;
			connectTo[] = {"BWMOD_TigerGunnersmrt",1};
			interpolateTo[] = {"BWMOD_TigerGunnersmrt",0.100000};
		};
		class BWMOD_TigerPilotStartup: BWMOD_TigerPilot {
			file = "\TZK_Anims_4_0_0\BWMOD_TigerPilotStartup.rtm";
			speed = -9; //-10;
			looped = 0;
			connectTo[] = {"BWMOD_TigerPilot",1};
			interpolateTo[] = {"BWMOD_TigerPilot",0.100000};
		};
		class BWMod_TigerPilotShutdown: BWMOD_TigerPilot {
			file = "\TZK_Anims_4_0_0\BWMOD_TigerPilotStartup.rtm";
			speed = -9; //-10;
			looped = 0;
			connectTo[] = {"BWMOD_TigerPilot",1};
			interpolateTo[] = {"BWMOD_TigerPilot",0.100000};
		};
		class BWMOD_TigerPilotsmrt: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BWMOD_TigerPilotsmrt.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BWMOD_TigerPilot",1};
		};
		class BWMOD_TigerPilotsmrt2: BWMOD_TigerPilotsmrt {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BWMOD_TigerPilotsmrt2.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"BWMOD_TigerPilotsmrt",1};
			connectTo[] = {"DeadState",1};
		};
		class BWMOD_TigerGunnersmrt: DefaultDie {
			actions = "NoActions";
			file = "\TZK_Anims_4_0_0\BWMOD_Tigergunsmrt.rtm";
			speed = -0.5;
			looped = 0;
			soundEnabled = 0;
			connectFrom[] = {"BWMOD_TigerGunner",1};
		};
		class BWMOD_TigerGunnersmrt2: BWMOD_TigerGunnersmrt {
			actions = "DeadActions";
			file = "\TZK_Anims_4_0_0\BWMOD_Tigergunsmrt2.rtm";
			speed = 10000000000;
			terminal = 1;
			connectFrom[] = {"BWMOD_TigerGunnersmrt",1};
			connectTo[] = {"DeadState",1};
		};

	};
};

//EOF