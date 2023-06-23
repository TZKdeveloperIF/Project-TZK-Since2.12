/*
#########################################
# Config Mi-8 by DPS, Voyager           #
# http:\\ofp.ussr-online.net\naseorujie #
#########################################
*/
#include "OWP_Mi8\config\owp_eventHandlers.cpp"

class CfgVehicles
{
	class All{};
	class AllVehicles:All{};
	class Air: AllVehicles{};
	class Helicopter: Air{};
	class Mi17: Helicopter{};
	class OWP_Mi17bis: Mi17
	{
		accuracy=0.1;	
		vehicleClass ="$STR_RCWC_Air_LTO";
		model="\OWP_Mi8\Mi17_bis.p3d";
		crew="OWP_Pilot2hm";
		displayName = $STR_OWP_Mi17_bis;
		gunnerUsesPilotView = false;
		soundEngine[]={"\OWP_Mi8\Sounds\Mi8.ogg",1,1};
		insideSoundCoef = 0.004;
	};
	class OWP_Mi8bis: Mi17
	{
		vehicleClass ="$STR_RCWC_Air_LTO";
		model="\OWP_Mi8\Mi8_bis.p3d";
		crew="OWP_Pilothm";
		displayName = $STR_OWP_Mi8_bis;
		soundEngine[]={"\OWP_Mi8\Sounds\Mi8.ogg",1,1};
		insideSoundCoef = 0.004;
		gunnerUsesPilotView = false;
		driverAction = ManActOWPMi8pilot;
		gunnerAction = ManActOWPMi8LeftGunner;
		gunnerOpticsModel = "\OWP_Mi8\optika_pkt.p3d";
		weapons[]={Browning};
		magazines[]={Browning};
		class TurretBase {};
		class Turret: TurretBase
		{
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={};
			minElev=-42; maxElev=+5;
			minTurn=30; maxTurn=150;
			initTurn=90;
			body="OtocVez";
			gun="OtocHlaven";
		};
	};
	class OWP_Mi8base: Mi17
	{
		scope=0;
		armor=50;
		accuracy=0.1;
		insideSoundCoef = 0.004;
		//model="\OWP_Mi8\Mi8MTt.p3d";
		vehicleClass = "$STR_RCWC_Air_LTO";
		driverAction = ManActOWPMi8pilot;
		gunnerAction = ManActOWPMi8copilot;
		cargoAction[] = {ManActOWPMi8copilot,ManActCargo};
		gunnerUsesPilotView = false;
		DriverOpticsColor[] = {1,1,1,0,3};
		hideWeaponsDriver = false;
		hideWeaponsGunner = false;
		displayName = "$STR_mi8_report";
		threat[]={0.6, 1, 0.8};
		//                      0    1      2     3      4      5        6      7       8      9          10         11       12      13      14      15    16   17
		hiddenSelections[] = {cdln1,cdrn1,cdln2,cdrn2,zasleh2,zasleh3,zasleh4,zasleh5,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
		//soundEngine[]={\OWP_Mi8\Sounds\mi8rotor.ogg,db+8,1};
		soundEngine[]={"\OWP_Mi8\Sounds\Mi8.ogg",1,1};
		extCameraPosition[] = {0,1,-20};
		mainRotorSpeed = 0.7; // rotor animation parameters
		backRotorSpeed = 3.0;
		transportSoldier=13;
		steerAheadSimul=0.1;
		steerAheadPlan=0.2;
		rotorBig = \OWP_Mi8\t\shared.pac;
		rotorBigBlend = \OWP_Mi8\t\bigrotor.paa;
		rotorSmall = \OWP_Mi8\t\shared.pac;
		rotorSmallBlend = \OWP_Mi8\t\smallrotor.paa;
		class EventHandlers :OWP_EventHandlers 
		{
		};

		class ViewOpticsBase{};
		class ViewOptics : ViewOpticsBase
		{
			initAngleX=0; minAngleX=-40; maxAngleX=17;
			initAngleY=0; minAngleY=-100; maxAngleY=100;
			initFov=0.2; minFov=0.2; maxFov=0.2;
		};
		class IndicatorAltBaro
		{
			selection = "alt";
			axis = "osa_alt";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltBaro2
		{
			selection = "alt2";
			axis = "osa_alt2";
			angle = -360;
			min = 0;
			max = 1000;
		};
		class IndicatorAltRadar
		{
			selection = "nm_alt";
			axis = "osa_nm_alt";
			angle = -320;
			min = 0;
			max = 320;
		};
		class IndicatorSpeed
		{
			selection = "mph";
			axis = "osa_mph";
			angle = -340;
			min = 0;
			max = 130;
		};
		class IndicatorSpeed2
		{
			selection = "mph2";
			axis = "osa_mph2";
			angle = -340;
			min = 0;
			max = 130;
		};
		class IndicatorRPM
		{
			selection = "rpm";
			axis = "osa_rpm";
			angle = -330;
			min = 0;
			max = 11;
		};
		class IndicatorRPM2
		{
			selection = "rpm2";
			axis = "osa_rpm2";
			angle = -330;
			min = 0;
			max = 11;
		};
		class IndicatorVertSpeed
		{
			selection = "vert_speed";
			axis = "osa_vert_speed";
			angle = -360;
			min = -30;
			max = 30;
		};
		class IndicatorVertSpeed2
		{
			selection = "vert_speed2";
			axis = "osa_vert_speed2";
			angle = -360;
			min = -30;
			max = 30;
		};
		class Reflectors
		{
			class Left
			{
				color[]={0.800000,0.800000,1.000000,1.000000};
				ambient[]={0.070000,0.070000,0.070000,1.000000};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=0.600000;
				brightness=1.000000;
			};
			class Right
			{
				color[]={0.800000,0.800000,1.000000,1.000000};
				ambient[]={0.070000,0.070000,0.070000,1.000000};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=0.600000;
				brightness=1.000000;
			};
		};
		class Animations
		{
			class Susp_R
			{
				type="rotation";
				animPeriod=0.1;
				selection="R_susp";
				axis="R_susp_osa";
				angle0=0;
				angle1=0.20;
			};
			class Susp_L
			{
				type="rotation";
				animPeriod=0.1;
				selection="L_susp";
				axis="L_susp_osa";
				angle0=0;
				angle1=-0.20;
			};
			class Susp_RD
			{
				type="rotation";
				animPeriod=0.1;
				selection="RD_susp";
				axis="RD_susp_osa";
				angle0=0;
				angle1=-0.08;
			};
			class Susp_LD
			{
				type="rotation";
				animPeriod=0.1;
				selection="LD_susp";
				axis="LD_susp_osa";
				angle0=0;
				angle1=0.08;
			};
			class OWP_Mi8_CDL
			{
				type="rotation";
				animPeriod=3;
				selection="cdl";
				axis="cdlosa";
				angle0=0;
				angle1= 1.0;
			};
			class OWP_Mi8_CDR
			{
				type="rotation";
				animPeriod=3;
				selection="cdr";
				axis="cdrosa";
				angle0=0;
				angle1= -1.0;
			};
			class OWP_Mi8_DOOR
			{
				type="rotation";
				animPeriod=1.5;
				selection="door";
				axis="door_osa";
				angle0=0;
				angle1= -0.05;
			};
			class OWP_Mi8_FLG
			{
				type="rotation";
				animPeriod=1.5;
				selection="flg";
				axis="flgosa";
				angle0=0;
				angle1= 0.075;
			};
			class OWP_Mi8_FRG
			{
				type="rotation";
				animPeriod=1.5;
				selection="frg";
				axis="frgosa";
				angle0=0;
				angle1=-0.075;
			};
			class OWP_Mi8_lenta
			{
				type="rotation";
				animPeriod=0.1;
				selection="kup";
				axis="velka osa";
				angle0=0;
				angle1=0.1;
				
			};
		};
		class CargoLight
		{
			color[] = {0, 1, 0, 0};
			ambient[] = {0.8, 0, 0.01, 1};
			brightness = 0.007;
		};
	};
	class OWP_Mi8Tbase: OWP_Mi8base
	{
		accuracy=1000;
		crew = OWP_Pilothm;
		weapons[]={OWP_PKT};
		magazines[]={OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT};
		armor=80;
		maxspeed=250;
		class TurretBase {};
		class Turret: TurretBase
		{
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={};
			minElev=-42; maxElev=+5;
			minTurn=30; maxTurn=150;
			initTurn=90;
			body="OtocVez";
			gun="OtocHlaven";
		};
		/*
		armorStructural=2.0; // structural dammage
		armorHull=0.1;
		armorEngine=1.5;
		armorAvionics=0.7;
		armorVRotor=0.65;
		armorHRotor=0.8;
		armorMissiles=1.6;
		armorGlass=0.3;
*/
		class ViewGunner
		{
			initFov=0.5; minFov=0.4; maxFov=1.0;
			initAngleY=+90; minAngleY=+10; maxAngleY=+180;
			initAngleX=0; minAngleX=-15; maxAngleX=+40;
		};
		gunnerOpticsModel = "\OWP_Mi8\optika_pkt.p3d";
		gunnerAction = ManActOWPMi8LeftGunner;
		gunnerCanSee = CanSeeEye+CanSeeOptics+CanSeeEar+CanSeeCompass;
		driverCanSee = CanSeeEye+CanSeeOptics+CanSeeEar+CanSeeCompass;
		class UserActions
		{
			class alerteject
			{
				displayName="$STR_OWP_Mi8_comm_alerteject";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && getpos this select 2 > 55";
				statement="this exec ""\OWP_Mi8\scripts\owp_alerteject.sqs""";
			};
			class desant
			{
				displayName="$STR_OWP_Mi8_comm_para";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && count (crew this) > 3 && getpos this select 2 > 55";
				statement="[this,180,1] exec ""\OWP_Mi8\scripts\owp_desant.sqs""";
			};
			class MoveToDriver
			{
				displayName="$STR_OWP_Mi8_comm_movetodriver";
				position="copilot_comm";
				radius=1;
				condition="(format[{%1},driver this]!=""<NULL-object>"") && (not alive driver this) && (player in this)";
				statement="player action [""MOVETODRIVER"", this]";
			};
			class DropLightFlare
			{
				displayName="$STR_OWP_Mi8_comm_droplightflare";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_drop_light_flares_active"" in magazines this) && (""owp_flarelightmag"" in magazines this)";
				statement="this addmagazine ""owp_mi8_trigger_drop_light_flares_active""";
			};
			class OpenMi8CargoBay
			{
				displayName="$STR_OWP_Mi8_comm_Copen";
				position="gtctrl";
				radius=5;
				condition="this animationPhase ""OWP_Mi8_CDL"" < 0.01";
				statement="this exec ""\OWP_Mi8\scripts\owp_COpen.sqs"";";
			};
			class CloseMi8CargoBay
			{
				displayName="$STR_OWP_Mi8_comm_Cclose";
				position="gtctrl";
				radius=5;
				condition="this animationPhase ""OWP_Mi8_CDL"" >= 0.99";
				statement="this exec ""\OWP_Mi8\scripts\owp_CClose.sqs"";";
			};
			class OpenMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_flgopen.sqs"";";
			};
			class CloseMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FLG"",0];";
			};           
			class OpenMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_frgopen.sqs"";";
			};
			class CloseMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FRG"",0];";
			};
		};
	};
	class OWP_Mi8MTbase: OWP_Mi8Tbase
	{
		crew = OWP_Pilot2hm;
		maxspeed=270;
		armor=100;
		class UserActions
		{
			class alerteject
			{
				displayName="$STR_OWP_Mi8_comm_alerteject";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && getpos this select 2 > 55";
				statement="this exec ""\OWP_Mi8\scripts\owp_alerteject.sqs""";
			};
			class desant
			{
				displayName="$STR_OWP_Mi8_comm_para";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && count (crew this) > 3 && getpos this select 2 > 55";
				statement="[this,180,1] exec ""\OWP_Mi8\scripts\owp_desant.sqs""";
			};
			class MoveToDriver
			{
				displayName="$STR_OWP_Mi8_comm_movetodriver";
				position="copilot_comm";
				radius=1;
				condition="(format[{%1},driver this]!=""<NULL-object>"") && (not alive driver this) && (player in this)";
				statement="player action [""MOVETODRIVER"", this]";
			};
			class RopeDown
			{
				displayName="$STR_OWP_Mi8_comm_ropedown";
				position="pilot_comm";
				radius=1;
				condition="count (crew this) < 15 && getpos this select 2 < 40 && getpos this select 2 > 6 && (isEngineon this) && (driver this == player) && abs(speed this) < 10 && !(""owp_mi8_ropehook_active"" in magazines this) && !(""owp_mi8_ropehook_active_fix"" in magazines this) && !(""owp_mi8_rope_active"" in magazines this)";
				statement="this exec ""\OWP_Mi8\scripts\owp_RopeDown.sqs"";";
			};
			class RopeUp
			{
				displayName="$STR_OWP_Mi8_comm_ropeup";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && (""owp_mi8_ropehook_active"" in magazines this) && !(""owp_mi8_unit_attach"" in magazines this) && !(""owp_mi8_load"" in magazines this)";
				statement="this removemagazine ""owp_mi8_ropehook_active""";
			};
			class FastRope
			{
				displayName="$STR_OWP_Mi8_comm_fastrope";
				position="pilot_comm";
				radius=1;
				condition="count (crew this) > 3 && getpos this select 2 < 40 && getpos this select 2 > 6 && (isEngineon this) && (driver this == player) && abs(speed this) < 15 && !(""owp_mi8_ropehook_active"" in magazines this) && !(""owp_mi8_ropehook_active_fix"" in magazines this) && !(""owp_mi8_rope_active"" in magazines this)";
				statement="this exec ""\OWP_Mi8\scripts\owp_FastRope.sqs"";";
			};
			class DropLightFlare
			{
				displayName="$STR_OWP_Mi8_comm_droplightflare";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_drop_light_flares_active"" in magazines this) && (""owp_flarelightmag"" in magazines this)";
				statement="this addmagazine ""owp_mi8_trigger_drop_light_flares_active""";
			};
			class OpenMi8CargoBay
			{
				displayName="$STR_OWP_Mi8_comm_Copen";
				position="gtctrl";
				radius=5;
				condition="this animationPhase ""OWP_Mi8_CDL"" < 0.01";
				statement="this exec ""\OWP_Mi8\scripts\owp_COpen.sqs"";";
			};
			class CloseMi8CargoBay
			{
				displayName="$STR_OWP_Mi8_comm_Cclose";
				position="gtctrl";
				radius=5;
				condition="this animationPhase ""OWP_Mi8_CDL"" >= 0.99";
				statement="this exec ""\OWP_Mi8\scripts\owp_CClose.sqs"";";
			};
			class OpenMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_flgopen.sqs"";";
			};
			class CloseMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FLG"",0];";
			};           
			class OpenMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_frgopen.sqs"";";
			};
			class CloseMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FRG"",0];";
			};
		};
	};
	class OWP_Mi8TVbase: OWP_Mi8base
	{
		accuracy=1000;	
		crew = OWP_Pilot2hm;
		maxspeed=230;
		armor=120;
		class TurretBase {};
		class Turret: TurretBase
		{
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={};
			minElev=-35; maxElev=+7;
			minTurn=-15; maxTurn=+15;
			body="OtocVez";
			gun="OtocHlaven";
		};
		/*
		armorStructural=3.0; // structural dammage
		armorHull=0.1;
		armorEngine=1.5;
		armorAvionics=0.7;
		armorVRotor=0.65;
		armorHRotor=0.8;
		armorMissiles=1.6;
		armorGlass=0.3;
*/
		class ViewGunner
		{
			initFov=0.5; minFov=0.4; maxFov=1.0;
			initAngleX=0; minAngleX=-35; maxAngleX=+35;
			initAngleY=0; minAngleY=-130; maxAngleY=+130;
		};
		gunnerOpticsModel = "\OWP_Mi8\optika_pkt.p3d";
		gunnerAction = ManActOWPMi8GunnerFront;
		driverOpticsModel = "\OWP_Mi8\optika_pkv.p3d";
		//driverCanSee = CanSeeEye+CanSeeOptics+CanSeeEar+CanSeeCompass;
		class UserActions
		{
			class alerteject
			{
				displayName="$STR_OWP_Mi8_comm_alerteject";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && getpos this select 2 > 55";
				statement="this exec ""\OWP_Mi8\scripts\owp_alerteject.sqs""";
			};
			class desant
			{
				displayName="$STR_OWP_Mi8_comm_para";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && count (crew this) > 3 && getpos this select 2 > 55";
				statement="[this,180,1] exec ""\OWP_Mi8\scripts\owp_desant.sqs""";
			};
			class MoveToDriver
			{
				displayName="$STR_OWP_Mi8_comm_movetodriver";
				position="copilot_comm";
				radius=1;
				condition="(format[{%1},driver this]!=""<NULL-object>"") && (not alive driver this) && (player in this)";
				statement="player action [""MOVETODRIVER"", this]";
			};
			class DropFlares
			{
				displayName="$STR_OWP_Mi8_comm_CMS_on";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_dammage_cms"" in magazines this) && !(""owp_mi8_trigger_drop_flares_active"" in magazines this) && (""owp_flaremag"" in magazines this)";
				statement="this addmagazine ""owp_mi8_trigger_drop_flares_active""";
			};
			class DropFlaresCancel
			{
				displayName="$STR_OWP_Mi8_comm_CMS_off";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_dammage_cms"" in magazines this) && (""owp_mi8_trigger_drop_flares_active"" in magazines this) && (""owp_flaremag"" in magazines this)";
				statement="this removemagazine ""owp_mi8_trigger_drop_flares_active""";
			};
			class DropLightFlare
			{
				displayName="$STR_OWP_Mi8_comm_droplightflare";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_drop_light_flares_active"" in magazines this) && (""owp_flarelightmag"" in magazines this)";
				statement="this addmagazine ""owp_mi8_trigger_drop_light_flares_active""";
			};
			class OpenMi8CargoBay
			{
				displayName="$STR_OWP_Mi8_comm_Copen";
				position="gtctrl";
				radius=5;
				condition="this animationPhase ""OWP_Mi8_CDL"" < 0.01";
				statement="this exec ""\OWP_Mi8\scripts\owp_COpen.sqs"";";
			};
			class CloseMi8CargoBay
			{
				displayName="$STR_OWP_Mi8_comm_Cclose";
				position="gtctrl";
				radius=5;
				condition="this animationPhase ""OWP_Mi8_CDL"" >= 0.99";
				statement="this exec ""\OWP_Mi8\scripts\owp_CClose.sqs"";";
			};
			class OpenMi8Door
			{
				displayName="$STR_OWP_Mi8_comm_dooropen";
				position="doorcntrl";
				radius=2;
				condition="this animationPhase ""OWP_Mi8_DOOR"" < 0.01";
				statement="this animate[""OWP_Mi8_DOOR"",1];";
			};
			class CloseMi8Door
			{
				displayName="$STR_OWP_Mi8_comm_doorclos";
				position="doorcntrl";
				radius=2;
				condition="this animationPhase ""OWP_Mi8_DOOR"" >= 0.99";
				statement="this animate[""OWP_Mi8_DOOR"",0];";
			};
			class OpenMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_flgopen.sqs"";";
			};
			class CloseMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FLG"",0];";
			};           
			class OpenMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_frgopen.sqs"";";
			};
			class CloseMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FRG"",0];";
			};
		};
	};
	class OWP_Mi8MTVbase:OWP_Mi8TVbase
	{
		crew = OWP_Pilot2hm;
		maxspeed=250;
		armor=150;
		class UserActions
		{
			class alerteject
			{
				displayName="$STR_OWP_Mi8_comm_alerteject";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && getpos this select 2 > 55";
				statement="this exec ""\OWP_Mi8\scripts\owp_alerteject.sqs""";
			};
			class desant
			{
				displayName="$STR_OWP_Mi8_comm_para";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && count (crew this) > 3 && getpos this select 2 > 55";
				statement="[this,180,1] exec ""\OWP_Mi8\scripts\owp_desant.sqs""";
			};
			class MoveToDriver
			{
				displayName="$STR_OWP_Mi8_comm_movetodriver";
				position="copilot_comm";
				radius=1;
				condition="(format[{%1},driver this]!=""<NULL-object>"") && (not alive driver this) && (player in this)";
				statement="player action [""MOVETODRIVER"", this]";
			};
			class RopeDown
			{
				displayName="$STR_OWP_Mi8_comm_ropedown";
				position="pilot_comm";
				radius=1;
				condition="count (crew this) < 15 && getpos this select 2 < 40 && getpos this select 2 > 6 && (isEngineon this) && (driver this == player) && abs(speed this) < 10 && !(""owp_mi8_ropehook_active"" in magazines this) && !(""owp_mi8_ropehook_active_fix"" in magazines this) && !(""owp_mi8_rope_active"" in magazines this)";
				statement="this exec ""\OWP_Mi8\scripts\owp_RopeDown.sqs"";";
			};
			class RopeUp
			{
				displayName="$STR_OWP_Mi8_comm_ropeup";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && (""owp_mi8_ropehook_active"" in magazines this) && !(""owp_mi8_unit_attach"" in magazines this) && !(""owp_mi8_load"" in magazines this)";
				statement="this removemagazine ""owp_mi8_ropehook_active""";
			};
			class FastRope
			{
				displayName="$STR_OWP_Mi8_comm_fastrope";
				position="pilot_comm";
				radius=1;
				condition="count (crew this) > 3 && getpos this select 2 < 40 && getpos this select 2 > 6 && (isEngineon this) && (driver this == player) && abs(speed this) < 15 && !(""owp_mi8_ropehook_active"" in magazines this) && !(""owp_mi8_ropehook_active_fix"" in magazines this) && !(""owp_mi8_rope_active"" in magazines this)";
				statement="this exec ""\OWP_Mi8\scripts\owp_FastRope.sqs"";";
			};
			class DropFlares
			{
				displayName="$STR_OWP_Mi8_comm_CMS_on";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_dammage_cms"" in magazines this) && !(""owp_mi8_trigger_drop_flares_active"" in magazines this) && (""owp_flaremag"" in magazines this)";
				statement="this addmagazine ""owp_mi8_trigger_drop_flares_active""";
			};
			class DropFlaresCancel
			{
				displayName="$STR_OWP_Mi8_comm_CMS_off";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_dammage_cms"" in magazines this) && (""owp_mi8_trigger_drop_flares_active"" in magazines this) && (""owp_flaremag"" in magazines this)";
				statement="this removemagazine ""owp_mi8_trigger_drop_flares_active""";
			};
			class DropLightFlare
			{
				displayName="$STR_OWP_Mi8_comm_droplightflare";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_drop_light_flares_active"" in magazines this) && (""owp_flarelightmag"" in magazines this)";
				statement="this addmagazine ""owp_mi8_trigger_drop_light_flares_active""";
			};
			class OpenMi8CargoBay
			{
				displayName="$STR_OWP_Mi8_comm_Copen";
				position="gtctrl";
				radius=5;
				condition="this animationPhase ""OWP_Mi8_CDL"" < 0.01";
				statement="this exec ""\OWP_Mi8\scripts\owp_COpen.sqs"";";
			};
			class CloseMi8CargoBay
			{
				displayName="$STR_OWP_Mi8_comm_Cclose";
				position="gtctrl";
				radius=5;
				condition="this animationPhase ""OWP_Mi8_CDL"" >= 0.99";
				statement="this exec ""\OWP_Mi8\scripts\owp_CClose.sqs"";";
			};
			class OpenMi8Door
			{
				displayName="$STR_OWP_Mi8_comm_dooropen";
				position="doorcntrl";
				radius=2;
				condition="this animationPhase ""OWP_Mi8_DOOR"" < 0.01";
				statement="this animate[""OWP_Mi8_DOOR"",1];";
			};
			class CloseMi8Door
			{
				displayName="$STR_OWP_Mi8_comm_doorclos";
				position="doorcntrl";
				radius=2;
				condition="this animationPhase ""OWP_Mi8_DOOR"" >= 0.99";
				statement="this animate[""OWP_Mi8_DOOR"",0];";
			};
			class OpenMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_flgopen.sqs"";";
			};
			class CloseMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FLG"",0];";
			};           
			class OpenMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_frgopen.sqs"";";
			};
			class CloseMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FRG"",0];";
			};
		};
	};
	class OWP_Mi8T_d: OWP_Mi8Tbase
	{
		scope=2;
		model="\OWP_Mi8\Mi8T_d.p3d";
		displayName = "$STR_OWP_Mi8T_d";
		picture="\OWP_Mi8\pics\Mi8_d.paa";
	};
	class OWP_Mi8T_w: OWP_Mi8Tbase
	{
		scope=2;
		model="\OWP_Mi8\Mi8T_w.p3d";
		displayName = "$STR_OWP_Mi8T_w";
		picture="\OWP_Mi8\pics\Mi8_w.paa";
	};
	class OWP_Mi8TV_g: OWP_Mi8TVbase
	{
		scope=2;
		weapons[]={OWP_PKT,OWP_Ub16};
		magazines[]={OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_Ub16C5K,OWP_Ub16C5M,owp_flaremag};
		model="\OWP_Mi8\Mi8TV_g.p3d";
		driverCanSee = CanSeeEye+CanSeeOptics+CanSeeEar+CanSeeCompass;
		displayName = "$STR_OWP_Mi8TV_g";
		picture="\OWP_Mi8\pics\Mi8_g.paa";
	};
	class OWP_Mi8TV_d: OWP_Mi8TVbase
	{
		scope=2;
		weapons[]={OWP_PKT,OWP_Ub16,OWP_Fab250};
		magazines[]={OWP_Fab250,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_Ub16C5M,owp_flaremag};
		model="\OWP_Mi8\Mi8TV_d.p3d";
		driverCanSee = CanSeeEye+CanSeeOptics+CanSeeEar+CanSeeCompass;
		displayName = "$STR_OWP_Mi8TV_d";
		picture="\OWP_Mi8\pics\Mi8_d.paa";
	};
	class OWP_Mi8TV_m: OWP_Mi8TVbase
	{
		scope=2;
		weapons[]={OWP_PKT,OWP_PKTx2,OWP_Ub16};
		magazines[]={OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_Ub16C5K,OWP_Ub16C5K,OWP_PKTx2,owp_flaremag};
		model="\OWP_Mi8\Mi8TV_m.p3d";
		driverCanSee = CanSeeEye+CanSeeOptics+CanSeeEar+CanSeeCompass;
		displayName = "$STR_OWP_Mi8TV_m";
		picture="\OWP_Mi8\pics\Mi8_m.paa";
	};
	class OWP_Mi8TV_w: OWP_Mi8TVbase
	{
		scope=2;
		weapons[]={OWP_PKT,OWP_PKTx2,OWP_Ub16,OWP_Fab250};
		magazines[]={OWP_Fab250,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_Ub16C5K,OWP_PKTx2,owp_flaremag};
		model="\OWP_Mi8\Mi8TV_w.p3d";
		displayName = "$STR_OWP_Mi8TV_w";
		driverCanSee = CanSeeEye+CanSeeOptics+CanSeeEar+CanSeeCompass;
		picture="\OWP_Mi8\pics\Mi8_w.paa";
	};
	class OWP_Mi8MT_g: OWP_Mi8MTbase
	{
		scope=2;
		model="\OWP_Mi8\Mi8MT_g.p3d";
		displayName = "$STR_OWP_Mi8MT_g";
		picture="\OWP_Mi8\pics\Mi8_g.paa";
	};
	class OWP_Mi8MT_m: OWP_Mi8MTbase
	{
		scope=2;
		model="\OWP_Mi8\Mi8MT_m.p3d";
		displayName = "$STR_OWP_Mi8MT_m";
		picture="\OWP_Mi8\pics\Mi8_m.paa";
	};
	class OWP_Mi8MTV_g: OWP_Mi8MTVbase
	{
		scope=2;
		weapons[]={OWP_PKT,OWP_Ub32,OWP_UPK};
		magazines[]={OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_Ub32C5K,OWP_Ub32C5M,OWP_UPK,owp_flaremag};
		model="\OWP_Mi8\Mi8MTV_g.p3d";
		displayName = "$STR_OWP_Mi8MTV_g";
		picture="\OWP_Mi8\pics\Mi8_g.paa";
	};
	class OWP_Mi8MTV_d: OWP_Mi8MTVbase
	{
		scope=2;
		weapons[]={OWP_PKT,OWP_Ub32,OWP_Fab500};
		magazines[]={OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_Ub32C5K,OWP_Ub32C5M,OWP_Fab500,owp_flaremag};
		model="\OWP_Mi8\Mi8MTV_d.p3d";
		displayName = "$STR_OWP_Mi8MTV_d";
		picture="\OWP_Mi8\pics\Mi8_d.paa";
	};
	class OWP_Mi8MTV_m: OWP_Mi8MTVbase
	{
		scope=2;
		weapons[]={OWP_PKT,OWP_Ub32};
		magazines[]={OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_Ub32C5K,OWP_Ub32C5K,OWP_Ub32C5M,owp_flaremag};
		model="\OWP_Mi8\Mi8MTV_m.p3d";
		displayName = "$STR_OWP_Mi8MTV_m";
		picture="\OWP_Mi8\pics\Mi8_m.paa";
	};
	class OWP_Mi8MTV_w: OWP_Mi8MTVbase
	{
		scope=2;
		weapons[]={OWP_PKT,OWP_Ub32,OWP_UPK,OWP_Fab500};
		magazines[]={OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_PKT,OWP_Ub32C5K,OWP_UPK,OWP_Fab500,owp_flaremag};
		model="\OWP_Mi8\Mi8MTV_w.p3d";
		displayName = "$STR_OWP_Mi8MTV_w";
		picture="\OWP_Mi8\pics\Mi8_w.paa";
	};

	class OWP_Mi17bis_b: OWP_Mi17bis
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		crew="sov_b_Pilot";
		displayName = $STR_OWP_Mi17_bis;
	};
	class OWP_Mi8bis_b: OWP_Mi8bis
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		crew="sov_b_Pilot";
		displayName = $STR_OWP_Mi8_bis;
	};
	class OWP_Mi8T_d_b: OWP_Mi8T_d
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8T_d";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8T_w_b: OWP_Mi8T_w
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8T_w";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8TV_g_b: OWP_Mi8TV_g
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8TV_g";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8TV_d_b: OWP_Mi8TV_d
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8TV_d";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8TV_m_b: OWP_Mi8TV_m
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8TV_m";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8TV_w_b: OWP_Mi8TV_w
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8TV_w";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8MT_g_b: OWP_Mi8MT_g
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8MT_g";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8MT_m_b: OWP_Mi8MT_m
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8MT_m";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8MTV_g_b: OWP_Mi8MTV_g
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8MTV_g";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8MTV_d_b: OWP_Mi8MTV_d
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8MTV_d";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8MTV_m_b: OWP_Mi8MTV_m
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8MTV_m";
		crew="sov_b_Pilot";
	};
	class OWP_Mi8MTV_w_b: OWP_Mi8MTV_w
	{
		vehicleClass ="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_OWP_Mi8MTV_w";
		crew="sov_b_Pilot";
	};

	class OWP_Mi17bis_p: OWP_Mi17bis
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		crew="sov_p_Pilot";
		displayName = $STR_OWP_Mi17_bis;
	};
	class OWP_Mi8bis_p: OWP_Mi8bis
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		crew="sov_p_Pilot";
		displayName = $STR_OWP_Mi8_bis;
	};
	class OWP_Mi8T_d_p: OWP_Mi8T_d
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8T_d";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8T_w_p: OWP_Mi8T_w
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8T_w";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8TV_g_p: OWP_Mi8TV_g
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8TV_g";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8TV_d_p: OWP_Mi8TV_d
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8TV_d";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8TV_m_p: OWP_Mi8TV_m
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8TV_m";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8TV_w_p: OWP_Mi8TV_w
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8TV_w";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8MT_g_p: OWP_Mi8MT_g
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8MT_g";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8MT_m_p: OWP_Mi8MT_m
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8MT_m";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8MTV_g_p: OWP_Mi8MTV_g
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8MTV_g";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8MTV_d_p: OWP_Mi8MTV_d
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8MTV_d";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8MTV_m_p: OWP_Mi8MTV_m
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8MTV_m";
		crew="sov_p_Pilot";
	};
	class OWP_Mi8MTV_w_p: OWP_Mi8MTV_w
	{
		vehicleClass ="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_OWP_Mi8MTV_w";
		crew="sov_p_Pilot";
	};


	class OWP_Mi8T_c: OWP_Mi8base
	{
		accuracy=1000;
		vehicleClass ="RCWC Air";
		scope=2;
		side=3;
		crew="dc3_pilot";
		weapons[]={};
		magazines[]={};
		transportSoldier=16;
		model="\OWP_Mi8\Mi8T_c.p3d";
		displayName = "$STR_OWP_Mi8T_C";
		driverAction = ManActOWPMi8pilot;
		gunnerAction = ManActOWPMi8copilot;
		cargoAction[] = {ManActUralCoDriver};
		picture="\OWP_Mi8\pics\Mi8_a.paa";
		class UserActions
		{
			class MoveToDriver
			{
				displayName="$STR_OWP_Mi8_comm_movetodriver";
				position="copilot_comm";
				radius=1;
				condition="(format[{%1},driver this]!=""<NULL-object>"") && (not alive driver this) && (player in this)";
				statement="player action [""MOVETODRIVER"", this]";
			};
			class DropLightFlare
			{
				displayName="$STR_OWP_Mi8_comm_droplightflare";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_drop_light_flares_active"" in magazines this) && (""owp_flarelightmag"" in magazines this)";
				statement="this addmagazine ""owp_mi8_trigger_drop_light_flares_active""";
			};
			class OpenMi8Door
			{
				displayName="$STR_OWP_Mi8_comm_dooropen";
				position="doorcntrl";
				radius=2;
				condition="this animationPhase ""OWP_Mi8_DOOR"" < 0.01";
				statement="this animate[""OWP_Mi8_DOOR"",1];";
			};
			class CloseMi8Door
			{
				displayName="$STR_OWP_Mi8_comm_doorclos";
				position="doorcntrl";
				radius=2;
				condition="this animationPhase ""OWP_Mi8_DOOR"" >= 0.99";
				statement="this animate[""OWP_Mi8_DOOR"",0];";
			};
			class OpenMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_flgopen.sqs"";";
			};
			class CloseMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FLG"",0];";
			};           
			class OpenMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_frgopen.sqs"";";
			};
			class CloseMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FRG"",0];";
			};
		};
	};
	class OWP_Mi8T_un: OWP_Mi8MTbase
	{
		vehicleClass ="RCWC Air";
		driverAction = ManActOWPMi8pilot;
		gunnerAction = ManActOWPMi8copilot;
		cargoAction[] = {ManActCargo};
		scope=2;
		side=3;
		crew="dc3_pilot";
		weapons[]={};
		magazines[]={owp_flaremag};
		model="\OWP_Mi8\Mi8MT_c.p3d";
		displayName = "$STR_OWP_Mi8MT_UN";
		picture="\OWP_Mi8\pics\Mi8_un.paa";
		class ViewGunner
		{
			initFov=0.5; minFov=0.4; maxFov=1.0;
			initAngleX=0; minAngleX=-35; maxAngleX=+35;
			initAngleY=0; minAngleY=-130; maxAngleY=+130;
		};
		class UserActions
		{
			class alerteject
			{
				displayName="$STR_OWP_Mi8_comm_alerteject";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && getpos this select 2 > 55";
				statement="this exec ""\OWP_Mi8\scripts\owp_alerteject.sqs""";
			};
			class desant
			{
				displayName="$STR_OWP_Mi8_comm_para";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && count (crew this) > 3 && getpos this select 2 > 55";
				statement="[this,180,1] exec ""\OWP_Mi8\scripts\owp_desant.sqs""";
			};
			class MoveToDriver
			{
				displayName="$STR_OWP_Mi8_comm_movetodriver";
				position="copilot_comm";
				radius=1;
				condition="(format[{%1},driver this]!=""<NULL-object>"") && (not alive driver this) && (player in this)";
				statement="player action [""MOVETODRIVER"", this]";
			};
			class RopeDown
			{
				displayName="$STR_OWP_Mi8_comm_ropedown";
				position="pilot_comm";
				radius=1;
				condition="count (crew this) < 14 && getpos this select 2 < 40 && getpos this select 2 > 6 && (isEngineon this) && (driver this == player) && abs(speed this) < 10 && !(""owp_mi8_ropehook_active"" in magazines this) && !(""owp_mi8_ropehook_active_fix"" in magazines this) && !(""owp_mi8_rope_active"" in magazines this)";
				statement="this exec ""\OWP_Mi8\scripts\owp_RopeDown.sqs"";";
			};
			class RopeUp
			{
				displayName="$STR_OWP_Mi8_comm_ropeup";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && (""owp_mi8_ropehook_active"" in magazines this) && !(""owp_mi8_unit_attach"" in magazines this) && !(""owp_mi8_load"" in magazines this)";
				statement="this removemagazine ""owp_mi8_ropehook_active""";
			};
			class FastRope
			{
				displayName="$STR_OWP_Mi8_comm_fastrope";
				position="pilot_comm";
				radius=1;
				condition="count (crew this) > 3 && getpos this select 2 < 40 && getpos this select 2 > 6 && (isEngineon this) && (driver this == player) && abs(speed this) < 15 && !(""owp_mi8_ropehook_active"" in magazines this) && !(""owp_mi8_ropehook_active_fix"" in magazines this) && !(""owp_mi8_rope_active"" in magazines this)";
				statement="this exec ""\OWP_Mi8\scripts\owp_FastRope.sqs"";";
			};
			class DropFlares
			{
				displayName="$STR_OWP_Mi8_comm_CMS_on";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_dammage_cms"" in magazines this) && !(""owp_mi8_trigger_drop_flares_active"" in magazines this) && (""owp_flaremag"" in magazines this)";
				statement="this addmagazine ""owp_mi8_trigger_drop_flares_active""";
			};
			class DropFlaresCancel
			{
				displayName="$STR_OWP_Mi8_comm_CMS_off";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_dammage_cms"" in magazines this) && (""owp_mi8_trigger_drop_flares_active"" in magazines this) && (""owp_flaremag"" in magazines this)";
				statement="this removemagazine ""owp_mi8_trigger_drop_flares_active""";
			};
			class DropLightFlare
			{
				displayName="$STR_OWP_Mi8_comm_droplightflare";
				position="pilot_comm";
				radius=1;
				condition="(driver this == player) && !(""owp_mi8_trigger_drop_light_flares_active"" in magazines this) && (""owp_flarelightmag"" in magazines this)";
				statement="this addmagazine ""owp_mi8_trigger_drop_light_flares_active""";
			};
			class OpenMi8CargoBay
			{
				displayName="$STR_OWP_Mi8_comm_Copen";
				position="gtctrl";
				radius=5;
				condition="this animationPhase ""OWP_Mi8_CDL"" < 0.01";
				statement="this exec ""\OWP_Mi8\scripts\owp_COpen.sqs"";";
			};
			class CloseMi8CargoBay
			{
				displayName="$STR_OWP_Mi8_comm_Cclose";
				position="gtctrl";
				radius=5;
				condition="this animationPhase ""OWP_Mi8_CDL"" >= 0.99";
				statement="this exec ""\OWP_Mi8\scripts\owp_CClose.sqs"";";
			};
			class OpenMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_flgopen.sqs"";";
			};
			class CloseMi8FLG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="pilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FLG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FLG"",0];";
			};           
			class OpenMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_OpenWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" < 0.5";
				statement="this exec ""\OWP_MI8\scripts\owp_frgopen.sqs"";";
			};
			class CloseMi8FRG
			{
				displayName=$STR_OWP_Mi8_comm_CloseWin;
				position="copilot_comm";
				radius=1;
				condition="this animationPhase ""OWP_Mi8_FRG"" >= 0.5";
				statement="this animate[""OWP_Mi8_FRG"",0];";
			};
		};
	};
	class Static: All {};
	class EmptySource: Static
	{
		scope=1;
		model="empty"
	};
	class Building: Static {}; 
	class NonStrategic : Building {};
	class OWP_Mi8_ropehook: NonStrategic
	{
		scope=1;
		model="\OWP_Mi8\rope_hook.p3d"
		ladders[]={};
		class Animations
		{
			class OWP_Mi8_rope
			{
				type="rotation";
				animPeriod=5;
				selection="rope_down";
				axis="rope_osa";
				angle0=0;
				angle1=0.42;
			};
		};
	};
	class OWP_Mi8_rope: OWP_Mi8_ropehook
	{
		model="\OWP_Mi8\rope.p3d"
	};
	class Fountain : NonStrategic{}; 
	class OWP_Mi8_Sound_sm: Fountain
	{
		scope=1;
		animated=0;
		icon="Unknown_object";
		model = "empty";
		simulation="fountain";
		sound="mi8smallrotor";
		animPeriod=2.995000;
		class EventHandlers
		{
			Init="_this exec ""\OWP_MI8\scripts\owp_null.sqs""";
		};
	};
	class OWP_Mi8_Sound_smw: OWP_Mi8_Sound_sm
	{
		sound="mi8smallrotorw";
		animPeriod=2.995000;
	};
};

class CfgNonAIVehicles
{
	class ProxyWeapon {};
	class ProxyOWP_Fab250 : ProxyWeapon {model = "\OWP_Mi8\weap\OWP_Fab250"; simulation = "maverickweapon";};
	class ProxyOWP_Fab500 : ProxyWeapon {model = "\OWP_Mi8\weap\OWP_Fab500"; simulation = "maverickweapon";};
};
