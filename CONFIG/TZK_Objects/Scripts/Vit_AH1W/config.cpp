// some basic defines
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

// type scope
#define private 0
#define protected 1
#define public 2

#define WeaponNoSlot				0// dummy weapons
#define WeaponSlotPrimary		1// primary weapons
#define WeaponSlotSecondary	16// secondary weapons
#define WeaponSlotItem			256// items
#define WeaponSlotBinocular	4096// binocular
#define WeaponHardMounted		65536

class CfgPatches
{
	class Vit_AH1W
	{
		units[]={Vit_AH1W1,Vit_AH1W1b,Vit_AH1W2,Vit_AH1W3,Vit_AH1Wb,Vit_AH1Wc,Vit_AH1z1,Vit_AH1z1b,Vit_AH1z1c};

		weapons[]={};
		requiredVersion=1.91;
	};
};


class CfgModels
{
	class Default {};
	class Air: Default {};
	class Helicopter: Air {};
	class Vit_AH1W1: Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
                        "n1",
                        "n2",
                        "podsvit pristroju",
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"clan",
			"clan_sign",
                        "miss1",
                        "miss2"
		};

	};
class Vit_AH1W1b: Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
                        "n1",
                        "n2",
                        "podsvit pristroju",
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"clan",
			"clan_sign",
                        "miss1",
                        "miss2"
		};

	};
class Vit_AH1W2: Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
                        "n1",
                        "n2",
                        "podsvit pristroju",
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"clan",
			"clan_sign",
                        "miss1",
                        "miss2"
		};

	};
class Vit_AH1W3: Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
                        "n1",
                        "n2",
                        "podsvit pristroju",
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"clan",
			"clan_sign",
                        "miss1",
                        "miss2"
		};

	};
class Vit_AH1Wb: Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
                        "n1",
                        "n2",
                        "podsvit pristroju",
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"clan",
			"clan_sign",
                        "miss1",
                        "miss2"
		};

	};
class Vit_AH1Wc: Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
                        "n1",
                        "n2",
                        "podsvit pristroju",
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"clan",
			"clan_sign",
                        "miss1",
                        "miss2"
		};

	};
class Vit_AH1z1: Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
                        "n1",
                        "n2",
                        "podsvit pristroju",
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"clan",
			"clan_sign",
                        "miss1",
                        "miss2"
		};

	};

class Vit_AH1z1b: Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
                        "n1",
                        "n2",
                        "podsvit pristroju",
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"clan",
			"clan_sign",
                        "miss1",
                        "miss2"
		};

	};

class Vit_AH1z1c: Helicopter
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
                        "n1",
                        "n2",
                        "podsvit pristroju",
			"sklo predni p",
			"sklo predni l",
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur",
			"clan",
			"clan_sign",
                        "miss1",
                        "miss2"
		};

	};
};






class CfgRadio
{
class ah1ACSFailure_xj400
	{
		name = "ah1ACSFailure_xj400";
		sound[] = {\vit_ah-1w\fx\f\ACSFailure.wav, db-60, 1.0};
		title = ;
	};
class ah1BingoFuel_xj400
	{
		name = "ah1BingoFuel_xj400";
		sound[] = {\vit_ah-1w\fx\f\BingoFuel.wav, db-60, 1.0};
		title = ;
	};
class ah1HydrolicsFailure_xj400
	{
		name = "ah1HydrolicsFailure_xj400";
		sound[] = {\vit_ah-1w\fx\f\HydrolicsFailure.wav, db-60, 1.0};
		title = ;
	};
class ah1LeftEngineFire_xj400
	{
		name = "ah1LeftEngineFire_xj400";
		sound[] = {\vit_ah-1w\fx\f\LeftEngineFire.wav, db-60, 1.0};
		title = ;
	};
class ah1missilemissile_xj400
	{
		name = "ah1missilemissile_xj400";
		sound[] = {\vit_ah-1w\fx\f\missilemissile.wav, db-60, 1.0};
		title = ;
	};
class ah1NCSFailure_xj400
	{
		name = "ah1NCSFailure_xj400";
		sound[] = {\vit_ah-1w\fx\f\NCSFailure.wav, db-60, 1.0};
		title = ;
	};
class ah1RightEngineFire_xj400
	{
		name = "ah1RightEngineFire_xj400";
		sound[] = {\vit_ah-1w\fx\f\RightEngineFire.wav.wav, db-60, 1.0};
		title = ;
	};

class ah1SystemsFailure_xj400
	{
		name = "ah1SystemsFailure_xj400";
		sound[] = {\vit_ah-1w\fx\f\SystemsFailure.wav, db-60, 1.0};
		title = ;
	};
};






class CfgSounds
{
	class Vit_AH1WPowerup
	{
	sound[]={"\Vit_AH-1W\Fx\powerup.ogg",db-30,1};
	name = "Vit_AH1WPowerup";
	titles[] = {};
 	};

                  class Vit_AH1WPoweroff
	{
	sound[]={"\Vit_AH-1W\Fx\powerdown.ogg",db-30,1};
	name = "Vit_AH1WPoweroff";
	titles[] = {};
 	};

	class Chokekio_xj400
	{
	sound[]={"\Vit_AH-1W\Fx\choke.wav",db-30,1};
	name = "Chokekio_xj400";
	titles[] = {};
 	};

                 class flarelaunch_xj400
	{
	sound[]={"\Vit_AH-1W\Fx\flare.wav",db-30,1};
	name = "flarelaunch_xj400";
	titles[] = {};
 	};

                   class chefflaunch_xj400
	{
	sound[]={"\Vit_AH-1W\Fx\flare.wav",db-30,1};
	name = "chefflaunch_xj400";
	titles[] = {};
 	};

	class IncomingWarning_xj400
	{
	sound[]={"\Vit_AH-1W\Fx\missile.wav",db-30,1};
	name = "IncomingWarning_xj400";
	titles[] = {};
 	};
                  class Vit_AH1W_Fire_xj400
	{
	sound[]={"\Vit_AH-1W\Fx\fire1.ogg",db-30,1};
	name = "Vit_AH1W_Fire_xj400";
	titles[] = {};
 	};
};

class CfgAmmo
{
	class Default {};
	class AT3: Default {};
	class CarlGustav: AT3 {};
 	class AA : CarlGustav {};
	class ah1aim9 : AA
	{
	minRange=100;			
       	minRangeProbab=0.8;		
        midRange=500;			
        midRangeProbab=1.5;		
        maxRange=2000;			
        maxRangeProbab=1.5;
	maneuvrability=60.7;
	airLock=true;
	irLock=true;
	laserLock=true;
	initTime=0.01;
	maxleadspeed=4000;
	ThrustTime=2000;
	maxControlRange=2000;
	thrust=2000;
	maxSpeed=4000;
	hit=400;indirectHit=200;indirectHitRange=50;		
	model = "\Vit_AH-1W\store\aim9";
        proxyShape="\Vit_AH-1W\store\aim9";
	};

	class Hellfire: AT3{};
	class Zuni: Hellfire{};
	class Rocket57: Zuni{};
	class BLLHydra: Rocket57
	{
		soundHit[]={"\Vit_AH-1W\Fx\FFARhit.ogg",75,1};
		hit=600;indirectHit=350;indirectHitRange=2;
	};


class Ah1Hellfire: AT3 
	{
		hit=1200;indirectHit=700;indirectHitRange=2.5;
		minRange=50;minRangeProbab=0.50;
		midRange=300;midRangeProbab=0.95;
		maxRange=1500;maxRangeProbab=0.50;
		maxSpeed=350;
               
		soundHit[]={"\Vit_AH-1W\fx\exp.wav",db40,1};
		cost=20000;
		irLock=true;
		laserLock=true;
		manualControl=false;
		maxControlRange=100000; 
		maneuvrability=20.0;
                model = "\Vit_AH-1W\store\ah1hellfire";
                proxyShape= "\Vit_AH-1W\store\ah1hellfire";
		initTime=0.15;
		thrustTime=5.5;
		thrust=1200;
	};

};

class CfgWeapons
{
	class Default {};
	class LAWLauncher: Default {};
	class CarlGustavLauncher : LAWLauncher {};
	class AT3Launcher: CarlGustavLauncher {};
	class HellfireLauncher: AT3Launcher {};
	class MaverickLauncher: HellfireLauncher {};
	class ah1Aim9: MaverickLauncher
	{
		
		ammo=ah1Aim9;
		displayName="AIM-9L Sidewinder";
		displayNameMagazine="AIM-9L Sidewinder";
		shortNameMagazine="AIM-9L";
		count=2;
		initspeed=15;	
		model = "\Vit_AH-1W\store\aim9.p3d";	
		canLock=2;
		sound[]={Weapons\Missile,db+5,1};
		aiRateOfFire=12.000000;
		aiRateOfFireDistance=2500;		
	};
	class ZuniLauncher38: AT3Launcher{};
	class Rocket57x64: ZuniLauncher38{};
	class BLLHydraLauncher: Rocket57x64
	{
		//--
		ammo=BLLHydra;
		displayName="Hydra 70mm FFAR";
		displayNameMagazine="Hydra 70mm FFAR";
		shortNameMagazine="Hydra 70mm FFAR";
		count=38;
		sound[]={"\Vit_AH-1W\Fx\Hydra70.ogg",5,1};
	};
	class MGun: Default {};
	class MachineGun7_6: MGun {};
	class MachineGun30: MachineGun7_6 {};
	class BLLM197: MachineGun30
	{
		displayName="M197 20mm";
		displayNameMagazine="M197 20mm";
		shortNameMagazine="M197_20mm";
		ammo=Bullet30;
		count=750;
		reloadTime=0.08;
		initSpeed=2000;
		sound[]={"\Vit_AH-1W\Fx\Cannon.wav",50,1};
		soundContinuous=0;
		flashSize=2.000000;
		maxLeadSpeed=950;
		optics=1;
	};

class Ah1Hellfire: AT3Launcher
	{
		//--
		scopeWeapon = public;
		scopeMagazine = public;
		ammo=Ah1Hellfire;
		displayName="Hellfire K";
		displayNameMagazine="Hellfire C";
		shortNameMagazine="Hellfire C";
		count=8;
		reloadTime=0.5;
		sound[]={"\Vit_AH-1W\Fx\miss.wav",db30,1};
		reloadSound[]={Weapons\missload,db-70,1};
		initSpeed=0;
                model = "\Vit_AH-1W\store\ah1hellfire";
		aiRateOfFire=13.0; // delay between shots at given distance
		aiRateOfFireDistance=2500; // at shorter distance delay goes lineary to zero
	};

	
};


class ECP_EventHandlers {}; 
class CfgVehicles
{
	class All {};
	class AllVehicles: All {};
	class Air: AllVehicles {};
	class Helicopter: Air {};
	class Vit_AH1W1: Helicopter
	{
		picture=\Vit_AH-1W\pic.paa;
		icon=\Vit_AH-1W\icon.paa;
		crew = SoldierWPilot;
		scope=public;
		side=TWest;
                hiddenSelections[] = {"n1","n2","miss1","miss2"};
		vehicleClass = "VIT Addons - Air";
		displayName="AH-1W - Grey (Shark 1)";
		nameSound="cobra";
		accuracy=5;
		gunnerUsesPilotView = false;
		driverAction = ManActAH1Pilot;
		gunnerAction = ManActAH1Gunner;
		maxSpeed = 170;
		armor=90;
		cost=10000000;
		model="\Vit_AH-1W\Vit_AH1W1";
                weapons[]={BLLM197,BLLHydraLauncher,Ah1Hellfire};
     		magazines[]={BLLM197,BLLHydraLauncher,Ah1Hellfire};
                rotorBig = vrtule_velka;
		rotorBigBlend = vrtule_velka_blur;
		rotorSmall = vrtule_mala;
		rotorSmallBlend = vrtule_mala_blur;
		type=VAir;
		//threat[] VSoft, VArmor, VAir 
		threat[]={1.0, 0.8, 0.5};
                soundEngine[]={"\Vit_AH-1W\Fx\engine.wav",5,1};

dammageHalf[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine\Lside.pac","\Vit_AH-1W\Marine\LsideB.pac","\Vit_AH-1W\Marine\Sside.pac","\Vit_AH-1W\Marine\SsideB.pac"};
		

dammageFull[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1c.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1c.paa","\Vit_AH-1W\Marine\Lside.pac","\Vit_AH-1W\Marine\LsideC.pac","\Vit_AH-1W\Marine\Sside.pac","\Vit_AH-1W\Marine\SsideC.pac"};



class ReloadAnimations
		{
			class BLLM197
			{
				weapon = BLLM197;
				angle0 = 0;
				angle1 = -2 * 3.141592654;
				multiplier = 500;
				type = rotation;
				animPeriod = 1;
				selection = gatling;
				begin = "usti hlavne";
				end = "konec hlavne";
			};
		};

		class TurretBase
		{
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={};
			minElev=-50;
			maxElev=20;
			minTurn=-90;
			maxTurn=90;
			body="OtocVez";
			gun="OtocHlaven";

                        

		};
		class Turret : TurretBase
		{
		};

		class EventHandlers : ECP_EventHandlers 

		{
                        Init=_this exec "\Vit_AH-1W\Sqs\AH1num1.sqs",_this exec "\Vit_AH-1W\Sqs\ah1hit.sqs";
			engine=if (_this select 1) then {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineon.sqs"} else {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineoff.sqs"};                  
                        killed = "_this exec {\Vit_AH-1W\sqs\ah1fire.sqs}";
                        IncomingMissile = "if ((_this select 0)==(_this select 0)) then {[_this] exec {\Vit_AH-1W\Sqs\ah1EastCM.sqs},[_this select 0] exec {\Vit_AH-1W\Sqs\ah1flares.sqs}}";
                        Fired = "_this exec {\Vit_AH-1W\Sqs\AH1wep.sqs}";
                        Hit = "if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\Vit_AH-1W\Sqs\ah1incomming.sqs}}";

	};
};







class Vit_AH1W2: Vit_AH1W1
	{
		model="\Vit_AH-1W\Vit_AH1W2";
		displayName="AH-1W - Grey (Cobra)";
		dammageHalf[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine\Lside2.pac","\Vit_AH-1W\Marine\Lside2B.pac","\Vit_AH-1W\Marine\Sside.pac","\Vit_AH-1W\Marine\SsideB.pac"};
		dammageFull[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine\Lside2.pac","\Vit_AH-1W\Marine\Lside2C.pac","\Vit_AH-1W\Marine\Sside.pac","\Vit_AH-1W\Marine\SsideC.pac"};
	

class EventHandlers : ECP_EventHandlers 

		{
                        Init=_this exec "\Vit_AH-1W\Sqs\AH1num1.sqs",_this exec "\Vit_AH-1W\Sqs\ah1hit.sqs";
			engine=if (_this select 1) then {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineon.sqs"} else {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineoff.sqs"};                  
                        killed = "_this exec {\Vit_AH-1W\sqs\ah1fire.sqs}";
                        IncomingMissile = "if ((_this select 0)==(_this select 0)) then {[_this] exec {\Vit_AH-1W\Sqs\ah1EastCM.sqs},[_this select 0] exec {\Vit_AH-1W\Sqs\ah1flares.sqs}}";
                        Fired = "_this exec {\Vit_AH-1W\Sqs\AH1wep.sqs}";
                        Hit = "if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\Vit_AH-1W\Sqs\ah1incomming.sqs}}";

	};
};







class Vit_AH1W3: Vit_AH1W1
	{
		model="\Vit_AH-1W\Vit_AH1W3";
		displayName="AH-1W - Grey (Shark 2)";
		dammageHalf[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine\Lside3.pac","\Vit_AH-1W\Marine\Lside3B.pac","\Vit_AH-1W\Marine\Sside.pac","\Vit_AH-1W\Marine\SsideB.pac"};
		dammageFull[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine\Lside3.pac","\Vit_AH-1W\Marine\Lside3C.pac","\Vit_AH-1W\Marine\Sside.pac","\Vit_AH-1W\Marine\SsideC.pac"};
	

class EventHandlers : ECP_EventHandlers 

		{
                        Init=_this exec "\Vit_AH-1W\Sqs\AH1num1.sqs",_this exec "\Vit_AH-1W\Sqs\ah1hit.sqs";
			engine=if (_this select 1) then {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineon.sqs"} else {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineoff.sqs"};                  
                        killed = "_this exec {\Vit_AH-1W\sqs\ah1fire.sqs}";
                        IncomingMissile = "if ((_this select 0)==(_this select 0)) then {[_this] exec {\Vit_AH-1W\Sqs\ah1EastCM.sqs},[_this select 0] exec {\Vit_AH-1W\Sqs\ah1flares.sqs}}";
                        Fired = "_this exec {\Vit_AH-1W\Sqs\AH1wep.sqs}";
                        Hit = "if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\Vit_AH-1W\Sqs\ah1incomming.sqs}}";

	};
};















class Vit_AH1Wb: Vit_AH1W1
	{
		model="\Vit_AH-1W\Vit_AH1Wb";
		displayName="AH-1W - Camo Jungle";
		dammageHalf[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine2\Lside.pac","\Vit_AH-1W\Marine2\LsideB.pac","\Vit_AH-1W\Marine2\Sside.pac","\Vit_AH-1W\Marine2\SsideB.pac"};
		dammageFull[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine2\Lside.pac","\Vit_AH-1W\Marine2\LsideC.pac","\Vit_AH-1W\Marine2\Sside.pac","\Vit_AH-1W\Marine2\SsideC.pac"};
	

class EventHandlers : ECP_EventHandlers 

		{
                        Init=_this exec "\Vit_AH-1W\Sqs\AH1num1.sqs",_this exec "\Vit_AH-1W\Sqs\ah1hit.sqs";
			engine=if (_this select 1) then {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineon.sqs"} else {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineoff.sqs"};                  
                        killed = "_this exec {\Vit_AH-1W\sqs\ah1fire.sqs}";
                        IncomingMissile = "if ((_this select 0)==(_this select 0)) then {[_this] exec {\Vit_AH-1W\Sqs\ah1EastCM.sqs},[_this select 0] exec {\Vit_AH-1W\Sqs\ah1flares.sqs}}";
                        Fired = "_this exec {\Vit_AH-1W\Sqs\AH1wep.sqs}";
                        Hit = "if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\Vit_AH-1W\Sqs\ah1incomming.sqs}}";

	};
};









class Vit_AH1Wc: Vit_AH1W1
	{
		model="\Vit_AH-1W\Vit_AH1Wc";
		displayName="AH-1W - Desert Storm";
		dammageHalf[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine3\Lside.pac","\Vit_AH-1W\Marine3\LsideB.pac","\Vit_AH-1W\Marine3\Sside.pac","\Vit_AH-1W\Marine3\SsideB.pac"};
		dammageFull[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine3\Lside.pac","\Vit_AH-1W\Marine3\LsideC.pac","\Vit_AH-1W\Marine3\Sside.pac","\Vit_AH-1W\Marine3\SsideC.pac"};
	

class EventHandlers : ECP_EventHandlers 

		{
                        Init=_this exec "\Vit_AH-1W\Sqs\AH1num1.sqs",_this exec "\Vit_AH-1W\Sqs\ah1hit.sqs";
			engine=if (_this select 1) then {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineon.sqs"} else {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineoff.sqs"};                  
                        killed = "_this exec {\Vit_AH-1W\sqs\ah1fire.sqs}";
                        IncomingMissile = "if ((_this select 0)==(_this select 0)) then {[_this] exec {\Vit_AH-1W\Sqs\ah1EastCM.sqs},[_this select 0] exec {\Vit_AH-1W\Sqs\ah1flares.sqs}}";
                        Fired = "_this exec {\Vit_AH-1W\Sqs\AH1wep.sqs}";
                        Hit = "if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\Vit_AH-1W\Sqs\ah1incomming.sqs}}";

	};
};










class Vit_AH1z1: Vit_AH1W1
	{
		model="\Vit_AH-1W\Vit_AH1Z1.p3d";
		displayName="AH-1Z - Super Cobra - Grey (Shark 1)";
		dammageHalf[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\z1\Lside.pac","\Vit_AH-1W\z1\LsideB.pac","\Vit_AH-1W\z1\Sside.pac","\Vit_AH-1W\z1\SsideB.pac"};
		dammageFull[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\z1\Lside.pac","\Vit_AH-1W\z1\LsideC.pac","\Vit_AH-1W\z1\Sside.pac","\Vit_AH-1W\z1\SsideC.pac"};
	        icon=\Vit_AH-1W\icon2.paa;
                weapons[]={BLLM197,BLLHydraLauncher,Ah1Hellfire,ah1aim9};
     		magazines[]={BLLM197,BLLHydraLauncher,Ah1Hellfire,ah1aim9};


class EventHandlers : ECP_EventHandlers 

		{
                        Init=_this exec "\Vit_AH-1W\Sqs\AH1num1.sqs",_this exec "\Vit_AH-1W\Sqs\ah1hit.sqs",_this exec "\Vit_AH-1W\Sqs\ah1wepcheck.sqs";
			engine=if (_this select 1) then {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineon.sqs"} else {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineoff.sqs"};                  
                        killed = "_this exec {\Vit_AH-1W\sqs\ah1fire.sqs}";
                        IncomingMissile = "if ((_this select 0)==(_this select 0)) then {[_this] exec {\Vit_AH-1W\Sqs\ah1EastCM.sqs},[_this select 0] exec {\Vit_AH-1W\Sqs\ah1flares.sqs}}";
                        Fired = _this exec "\Vit_AH-1W\Sqs\AH1wep.sqs",_this exec "\Vit_AH-1W\Sqs\ah1wepcheck.sqs";
                        Hit = "if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\Vit_AH-1W\Sqs\ah1incomming.sqs}}";

	};
};



class Vit_AH1z1b: Vit_AH1W1
	{
		model="\Vit_AH-1W\Vit_AH1Z1b.p3d";
		displayName="AH-1Z Super Cobra - Camo Jungle";
		dammageHalf[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine2\Lside.pac","\Vit_AH-1W\Marine2\LsideB.pac","\Vit_AH-1W\Marine2\Sside.pac","\Vit_AH-1W\Marine2\SsideB.pac"};
		dammageFull[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine2\Lside.pac","\Vit_AH-1W\Marine2\LsideC.pac","\Vit_AH-1W\Marine2\Sside.pac","\Vit_AH-1W\Marine2\SsideC.pac"};
	        icon=\Vit_AH-1W\icon2.paa;
                weapons[]={BLLM197,BLLHydraLauncher,Ah1Hellfire,ah1aim9};
     		magazines[]={BLLM197,BLLHydraLauncher,Ah1Hellfire,ah1aim9};


class EventHandlers : ECP_EventHandlers 

		{
                        Init=_this exec "\Vit_AH-1W\Sqs\AH1num1.sqs",_this exec "\Vit_AH-1W\Sqs\ah1hit.sqs",_this exec "\Vit_AH-1W\Sqs\ah1wepcheck.sqs";
			engine=if (_this select 1) then {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineon.sqs"} else {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineoff.sqs"};                  
                        killed = "_this exec {\Vit_AH-1W\sqs\ah1fire.sqs}";
                        IncomingMissile = "if ((_this select 0)==(_this select 0)) then {[_this] exec {\Vit_AH-1W\Sqs\ah1EastCM.sqs},[_this select 0] exec {\Vit_AH-1W\Sqs\ah1flares.sqs}}";
                        Fired = _this exec "\Vit_AH-1W\Sqs\AH1wep.sqs",_this exec "\Vit_AH-1W\Sqs\ah1wepcheck.sqs";
                        Hit = "if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\Vit_AH-1W\Sqs\ah1incomming.sqs}}";

	};
};


class Vit_AH1z1c: Vit_AH1W1
	{
		model="\Vit_AH-1W\Vit_AH1Z1c.p3d";
		displayName="AH-1Z Super Cobra - Desert Storm";
		icon=\Vit_AH-1W\icon2.paa;
                dammageHalf[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine3\Lside.pac","\Vit_AH-1W\Marine3\LsideB.pac","\Vit_AH-1W\Marine3\Sside.pac","\Vit_AH-1W\Marine3\SsideB.pac"};
		dammageFull[]={"\Vit_AH-1W\window1.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Canopy.paa","\Vit_AH-1W\window1b.paa","\Vit_AH-1W\Marine3\Lside.pac","\Vit_AH-1W\Marine3\LsideC.pac","\Vit_AH-1W\Marine3\Sside.pac","\Vit_AH-1W\Marine3\SsideC.pac"};
	        weapons[]={BLLM197,BLLHydraLauncher,Ah1Hellfire,ah1aim9};
     		magazines[]={BLLM197,BLLHydraLauncher,Ah1Hellfire,ah1aim9};


class EventHandlers : ECP_EventHandlers 

		{
                        Init=_this exec "\Vit_AH-1W\Sqs\AH1num1.sqs",_this exec "\Vit_AH-1W\Sqs\ah1hit.sqs",_this exec "\Vit_AH-1W\Sqs\ah1wepcheck.sqs";
			engine=if (_this select 1) then {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineon.sqs"} else {_this select 0 exec "\Vit_AH-1W\sqs\ah1engineoff.sqs"};                  
                        killed = "_this exec {\Vit_AH-1W\sqs\ah1fire.sqs}";
                        IncomingMissile = "if ((_this select 0)==(_this select 0)) then {[_this] exec {\Vit_AH-1W\Sqs\ah1EastCM.sqs},[_this select 0] exec {\Vit_AH-1W\Sqs\ah1flares.sqs}}";
                        Fired = _this exec "\Vit_AH-1W\Sqs\AH1wep.sqs",_this exec "\Vit_AH-1W\Sqs\ah1wepcheck.sqs";
                        Hit = "if ((""ZSU"" countType [(_this select 1)]) == 1 ) then {[_this select 0,_this select 1] exec {\Vit_AH-1W\Sqs\ah1incomming.sqs}}";

	};
};



