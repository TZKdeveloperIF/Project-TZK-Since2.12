/*
#########################################
# Config Mi-8 by DPS, Voyager           #
# http:\\ofp.ussr-online.net\naseorujie #
#########################################
*/
#define SPEED_STATIC 1e10

class CfgVehicleActions
{
	OWPMi8pilot = "OWPMi8pilot";
	OWPMi8copilot = "OWPMi8copilot";
	OWPMi8GunnerFront = "OWPMi8GunnerFront";
	OWPMi8LeftGunner = "OWPMi8LeftGunner";

};

class CfgMovesMC
{


	class Default {};
	class DefaultDie: Default {};	
	class StandBase: Default {};
	class States
	{
		class Driver: Default {};
		#define VEH_DIE_CONN(Name,anim,time) \
		class Name##Dying: DefaultDie \
		{ \
			actions = NoActions; \
			file=anim##smrt2.rtm; \
			speed=-time; \
			looped=false; \
			soundEnabled=false; \
			connectFrom[]={Name,1}; \
		}; \
		class Name##Dead: Name##Dying \
		{ \
			actions = DeadActions; \
			file=anim##smrt.rtm; \
			speed=SPEED_STATIC; \
			terminal = true; \
			connectFrom[]={Name##Dying,1}; \
			connectTo[]={DeadState,1}; \
		}
		#define VEHIN_MOVES_VAR(Name,anim,vartime) \
		class Name: Driver \
		{ \
			file=anim##stat.rtm; \
			speed=SPEED_STATIC; \
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
		VEH_MOVES_VAR(OWPMi8pilot, \owp_mi8\anim\OWPMi8pilot, 1, 5);
		VEH_MOVES_VAR(OWPMi8copilot, \owp_mi8\anim\OWPMi8copilot, 1, 5);
		VEH_MOVES_VAR(OWPMi8GunnerFront, \owp_mi8\anim\OWPMi8GunnerFront, 1, 5);
		VEH_MOVES_VAR(OWPMi8LeftGunner, \owp_mi8\anim\OWPMi8LeftGunner, 1, 5);

		class OWPropehook: StandBase
		{
	//		actions="StandTalkActions";
			actions="CargoActions";
			file="\OWP_Mi8\anim\OWPMi8hookstat.rtm";
			speed = SPEED_STATIC;
			looped=true;
			soundEnabled=false;
			duty = RestDuty;
			//interpolationSpeed=2; // inverse of interpolation time
			limitGunMovement=1;
			aiming = aimingOWPRope;
			disableWeapons=0;
			disableWeaponsLong=0;
			//die=OWPropehookdying;
			variantsAI[]= {OWPropehookV1,0.7,OWPropehook};
			interpolateWith[]={OWPropehookV1,0.5};
			connectTo[]={OWPropehookdying,1};

		}; 
		class OWPropehookV1: OWPropehook
		{
			looped=0;
			speed = -1
			file="\OWP_Mi8\anim\OWPMi8hook.rtm";
		}; 
		class OWPropehookdying: DefaultDie
		{
			actions="NoActions";
			limitGunMovement=0;
			aiming=aimingNo;
			legs=legsNo; // all animation copies slope
			head=headNo;
			disableWeapons=true;
			interpolationRestart=true;
			file="\OWP_Mi8\anim\OWPMi8hookdying.rtm";
			speed = -3.0;
			connectFrom[]={OWPropehook,1};
        	};
		class OWPropehookdead: OWPropehookdying
		{
			actions = DeadActions;
			file="\OWP_Mi8\anim\OWPMi8hookdead.rtm";
			speed = -5.0;
			connectFrom[]={OWPropehookdying,1};
			connectTo[]={DeadState,1};
        	};
		class OWPfastrope: StandBase
		{
			actions="CargoActions";
			file="\OWP_Mi8\anim\OWPMi8rope.rtm";
			speed = -0.6;
			looped=true;
			soundEnabled=false;
			duty = RestDuty;
			//interpolationSpeed=2; // inverse of interpolation time
			limitGunMovement=1;
			aiming = aimingOWPRope;
			disableWeapons=0;
			disableWeaponsLong=0;
			//die=OWPropehookdying;
			variantsAI[]= {OWPfastrope,0.7,OWPfastrope};
			interpolateWith[]={OWPfastrope,0.5};
			connectTo[]={DeadState,1};
        	};
		class OWPdesant1: StandBase
		{
			actions="CargoActions";
			file="\OWP_Mi8\anim\OWPMi8desant1.rtm";
			speed = -1.5;
			looped=true;
			soundEnabled=false;
			duty = RestDuty;
			variantsAI[]= {OWPdesant1,0.7,OWPdesant1};
			interpolateWith[]={OWPdesant1,0.5};
			connectTo[]={DeadState,1};
        	};
		class OWPdesant2: OWPdesant1
		{
			speed = -0.9;
			file="\OWP_Mi8\anim\OWPMi8desant2.rtm";
			variantsAI[]= {OWPdesant2,0.7,OWPdesant2};
			interpolateWith[]={OWPdesant2,0.5};
        	};
		class OWPMi8PilotOpenBlister: StandBase
		{
			speed = -1;
			looped=0;
			file="\OWP_Mi8\anim\OWPMi8PilotOpenBlister.rtm";
			variantsAI[]= {OWPMi8PilotOpenBlister,0.7,OWPMi8PilotOpenBlister};
			interpolateWith[]={OWPMi8PilotOpenBlister,0.5};
        	};
		class OWPMi8CoPilotOpenBlister: StandBase
		{
			speed = -1;
			looped=0;
			file="\OWP_Mi8\anim\OWPMi8CoPilotOpenBlister.rtm";
			variantsAI[]= {OWPMi8CoPilotOpenBlister,0.7,OWPMi8CoPilotOpenBlister};
			interpolateWith[]={OWPMi8CoPilotOpenBlister,0.5};
        	};
		class OWPMi8PilotDisembark: StandBase
		{
			speed = -4;
			looped=0;
			file="\OWP_Mi8\anim\OWPMi8PilotDisembark.rtm";
			variantsAI[]= {OWPMi8CoPilotDisembark,0.7,OWPMi8PilotDisembark};
			interpolateWith[]={OWPMi8PilotDisembark,0.5};
        	};
		class OWPMi8CoPilotDisembark: StandBase
		{
			speed = -4;
			looped=0;
			file="\OWP_Mi8\anim\OWPMi8CoPilotDisembark.rtm";
			variantsAI[]= {OWPMi8CoPilotDisembark,0.7,OWPMi8CoPilotDisembark};
			interpolateWith[]={OWPMi8CoPilotDisembark,0.5};
        	};
		class OWPMi8Pilotengineon: StandBase
		{
			speed = -4;
			looped=0;
			file="\OWP_Mi8\anim\OWPMi8Pilotengineon.rtm";
			variantsAI[]= {OWPMi8Pilotengineon,0.7,OWPMi8Pilotengineon};
			interpolateWith[]={OWPMi8Pilotengineon,0.5};
        	};
		class OWPMi8CoPilotengineon: StandBase
		{
			speed = -4;
			looped=0;
			file="\OWP_Mi8\anim\OWPMi8CoPilotengineon.rtm";
			variantsAI[]= {OWPMi8CoPilotengineon,0.7,OWPMi8CoPilotengineon};
			interpolateWith[]={OWPMi8CoPilotengineon,0.5};
        	};
		

		};
		class BlendAnims
	        {
		// different ways to blend animations (head, arms, legs...)
		aimingOWPRope[]=
		{
			hlava,0.5,krk,0.3,
			zbran,2,roura,0,
			lrameno,0,prameno,0.7,
			lbiceps,0,lloket,0,lruka,0,
			pbiceps,1,ploket,2,pruka,2,
			hrudnik,0.05,zebra,0,bricho,0
		};
		};
};
