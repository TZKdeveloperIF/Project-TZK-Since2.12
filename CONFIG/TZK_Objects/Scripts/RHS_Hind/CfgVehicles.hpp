class CfgVehicles
{
	class All{};
	class AllVehicles:All{};
	class Air: AllVehicles{};
	class Helicopter: Air{};
	class Mi24: helicopter {};
	
	class RHS_Mi24P_CAS: Mi24
	{
		scope=2;
		vehicleClass="$STR_RCWC_Air_LTO";
		displayName = "$STR_DN_RHS_Mi24P_CAS";
		model="\RHS_Hind\RHS_Mi24P_CAS.p3d";
		picture="\RHS_hind\picP_CAS.paa";
		icon="\RHS_hind\icon.paa";
		mapSize=20;
		crew="OWP_Pilot2hm";
		maxSpeed=320;
		side=0;
		nameSound="hind";
		accuracy=0.5;
		cost=4000000;
		armor=100;
		transportSoldier=8;
		transportAmmo=0;
		type=2;
		threat[]={0.6,1,0.8};
		typicalCargo[]={"Soldier","SoldierLAW"};
		driverAction="ManActMi24Pilot";
		gunnerAction="ManActMi24Gunner";
		soundEngine[]={"\RHS_Hind\sounds\engine.ogg",3,1.1};
		soundGetIn[]={"\RHS_Hind\sounds\get_in",0.03,1};
		soundGetOut[]={"\RHS_Hind\sounds\get_out",0.03,1};
		hiddenSelections[]={"n1","n2","gearlight","enginelight","fire","fireB","missilelight"};
		weapons[]={RHS_30mmTwinGun,RHS_AT6d,RHS_Rocket80x80};
		magazines[]={RHS_30mmTwinGun,RHS_AT6d,RHS_Rocket80x80};
		class Turret
		{
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			soundServo[]={};
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			minElev=0;
			maxElev=0;
			minTurn=0;
			maxTurn=0;
			body="OtocVez";
			gun="OtocHlaven";
		};
		class IndicatorAltRadar
		{
			selection="alt";
			axis="osa_alt";
			angle=-360;
			min=0;
			max=304;
		};
		class IndicatorAltBaro
		{
			selection="nm_alt";
			axis="osa_nm_alt";
			angle=-300;
			min=0;
			max=700;
		};
		class IndicatorSpeed
		{
			selection="mph";
			axis="osa_mph";
			angle=-300;
			min=0;
			max=105;
		};
		class IndicatorVertSpeed
		{
			selection="vert_speed";
			axis="osa_vert_speed";
			angle=-300;
			min=-30;
			max=30;
		};
		class IndicatorRPM
		{
			selection="rpm";
			axis="osa_rpm";
			angle=-330;
			min=0;
			max=8;
		};
		class IndicatorCompass
		{
			selection="kompas";
			axis="osa_kompas";
			angle=-360;
			min=-3.141593;
			max=3.141593;
		};
		class IndicatorWatch
		{
			hour="hodinova";
			minute="minutova";
			axis="osa_time";
			reversed=1;
		};
		class IndicatorRPM2
		{
			selection="rpm2";
			axis="osa_rpm2";
			angle=-330;
			min=0;
			max=8;
		};
		class IndicatorCompass2
		{
			selection="kompas2";
			axis="osa_kompas2";
			angle=-360;
			min=-3.141593;
			max=3.141593;
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
				size=0.500000;
				brightness=1.000000;
			};
		};
		class Animations
		{
			class gearL
			{
				type="rotation";
				animperiod = 1;
				selection ="gearL";
				axis = "osa_gearL";
				angle0=0;
				angle1=0.8;
			};
			class gearR
			{
				type="rotation";
				animperiod = 1;
				selection ="gearR";
				axis = "osa_gearR";
				angle0=0;
				angle1=-0.8;
			};
			class gearF
			{
				type="rotation";
				animperiod = 1;
				selection ="gearF";
				axis = "osa_gearF";
				angle0=0;
				angle1=-1.3;
			};
			class gcL
			{
				type = "rotation";
				animperiod = 1;
				selection ="gcL";
				axis = "osa_gcL";
				angle0 = 0;
				angle1= 1.8;
			};
			class gcR
			{
				type = "rotation";
				animperiod = 1;
				selection ="gcR";
				axis = "osa_gcR";
				angle0 = 0;
				angle1= -1.8;
			};
			class gcF
			{
				type = "rotation";
				animperiod = 1;
				selection ="gcF";
				axis = "osa_gcF";
				angle0 = 0;
				angle1= -2.5;
			};
			class rightgear
			{
				type = "rotation";
				animperiod = 0.5;
				selection ="gearR2";
				axis = "osa_gearR2";
				angle0 = 0;
				angle1= -0.296705;          
			};
			class leftgear
			{
				type = "rotation";
				animperiod = 0.5;
				selection ="gearL2";
				axis = "osa_gearL2";
				angle0 = 0;
				angle1= -0.296705;          
			};
			class frontgear
			{
				type = "rotation";
				animperiod = 0.5;
				selection ="gearF2";
				axis = "osa_gearF2";
				angle0 = 0;
				angle1= -0.296705;          
			};
			class Pdoor
			{
				type="rotation";
				animPeriod=0.5;
				selection="pdoor";
				axis="osa_pdoor";
				angle0=0;
				angle1=1.0;
			};
			class Gdoor
			{
				type="rotation";
				animPeriod=0.5;
				selection="gdoor";
				axis="osa_gdoor";
				angle0=0;
				angle1=-1.3;
			};
			class Rtdoor
			{
				type="rotation";
				animPeriod=1;
				selection="rtdoor";
				axis="osa_rtdoor";
				angle0=0;
				angle1=-1.5;
			};
			class Rudoor
			{
				type="rotation";
				animPeriod=1;
				selection="rudoor";
				axis="osa_rudoor";
				angle0=0;
				angle1=2.3;
			};
			class Ltdoor
			{
				type="rotation";
				animPeriod=1;
				selection="ltdoor";
				axis="osa_ltdoor";
				angle0=0;
				angle1=1.5;
			};
			class Ludoor
			{
				type="rotation";
				animPeriod=1;
				selection="ludoor";
				axis="osa_ludoor";
				angle0=0;
				angle1=-2.3;
			};
			class flareTrigger
			{
				type ="rotation";
				animPeriod =.1;
				selection ="flaretrigger";
				axis ="os flare";
				angle0 =0;
				angle1 =-.45;
			};	
			class cabinlight
			{
				type ="rotation";
				animPeriod =.001;
				selection ="flaretrigger";
				axis ="os flare";
				angle0 =0;
				angle1 =0;
			};		
		};
		class UserActions
		{
			class OpenPdoor
			{
				displayName ="$STR_DN_RHS_HIND_PdoorOpen";
				position = "pos p";
				radius =3;
				condition = "this animationPhase ""pdoor"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3) && alive this";
				statement = "[this] exec ""\RHS_hind\scripts\pdoorop.sqs"""; 
			};
			class ClosePdoor
			{
				displayName ="$STR_DN_RHS_HIND_PdoorClose";
				position = "pos p";
				radius =3;
				condition = "this animationPhase ""pdoor"" > 0.5 && alive this";
				statement = "[this] exec ""\RHS_hind\scripts\pdoorcl.sqs"""; 
			};
			class OpenGdoor
			{
				displayName ="$STR_DN_RHS_HIND_GdoorOpen";
				position = "pos g";
				radius =3;
				condition = "this animationPhase ""gdoor"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3) && alive this";
				statement = "[this] exec ""\RHS_hind\scripts\gdoorop.sqs"""; 
			};
			class CloseGdoor
			{
				displayName ="$STR_DN_RHS_HIND_GdoorClose";
				position = "pos g";
				radius =3;
				condition = "this animationPhase ""gdoor"" > 0.5 && alive this";
				statement = "[this] exec ""\RHS_hind\scripts\gdoorcl.sqs"""; 
			};
			class OpenRdoor
			{
				displayName ="$STR_DN_RHS_HIND_RdoorOpen";
				position = "pos r";
				radius =3;
				condition = "this animationPhase ""rtdoor"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3) && alive this";
				statement = "[this] exec ""\RHS_hind\scripts\rdoorop.sqs"""; 
			};
			class CloseRdoor
			{
				displayName ="$STR_DN_RHS_HIND_RdoorClose";
				position = "pos r";
				radius =3;
				condition = "this animationPhase ""rtdoor"" > 0.5 && alive this";
				statement = "[this] exec ""\RHS_hind\scripts\rdoorcl.sqs"""; 
			};
			class OpenLdoor
			{
				displayName ="$STR_DN_RHS_HIND_LdoorOpen";
				position = "pos l";
				radius =3;
				condition = "this animationPhase ""ltdoor"" < 0.5 && (getpos this select 2) < 3 && (speed this < 3) && alive this";
				statement = "[this] exec ""\RHS_hind\scripts\ldoorop.sqs"""; 
			};
			class CloseLdoor
			{
				displayName ="$STR_DN_RHS_HIND_LdoorClose";
				position = "pos l";
				radius =3;
				condition = "this animationPhase ""ltdoor"" > 0.5 && alive this";
				statement = "[this] exec ""\RHS_hind\scripts\ldoorcl.sqs"""; 
			};
		};
		class EventHandlers
		{
			init="_this exec ""\RHS_Hind\scripts\check_dammage.sqs""; _this exec ""\RHS_Hind\scripts\engineDammage.sqs"";_this exec ""\RHS_Hind\scripts\numrandr.sqs""; [_this select 0] exec ""\RHS_Hind\scripts\checkgear.sqs"";_this exec ""\RHS_Hind\scripts\engine.sqs"";_this exec ""\RHS_Hind\scripts\init.sqs"";_this call localize {fn_reg_chopper}";
			incomingMissile = "if ((_this select 0)==(_this select 0)) then { [_this] exec ""\RHS_hind\scripts\SpoofMissile.sqs""; [_this] exec ""\RHS_hind\scripts\autoflaresP.sqs""; } ";
			getin  = "_this exec {\RHS_hind\scripts\getin.sqs}";
			getout = "_this exec {\RHS_hind\scripts\getout.sqs}";			
			killed = "_this exec {\RHS_hind\scripts\fire.sqs}";
			fired  = "_this exec {\RHS_hind\scripts\firedAT6.sqs};_this exec {\RHS_hind\scripts\fired.sqs}";
			engine = "_this exec {\RHS_hind\scripts\eng.sqs};"
		}; 
	};
	class RHS_Mi24P_AT: RHS_Mi24P_CAS
	{
		displayName = "$STR_DN_RHS_Mi24P_AT";
		model="\RHS_Hind\RHS_Mi24P_AT.p3d";
		picture="\RHS_hind\picP_AT.paa";
		weapons[]={RHS_30mmTwinGun,RHS_AT6b,RHS_Rocket80x40};
		magazines[]={RHS_30mmTwinGun,RHS_AT6b,RHS_Rocket80x40};
		class EventHandlers
		{
			init="_this exec ""\RHS_Hind\scripts\check_dammage.sqs""; _this exec ""\RHS_Hind\scripts\engineDammage.sqs"";_this exec ""\RHS_Hind\scripts\numrandw.sqs""; [_this select 0] exec ""\RHS_Hind\scripts\checkgear.sqs"";_this exec ""\RHS_Hind\scripts\engine.sqs"";_this exec ""\RHS_Hind\scripts\init.sqs"";_this call localize {fn_reg_chopper}";
			incomingMissile = "if ((_this select 0)==(_this select 0)) then { [_this] exec ""\RHS_hind\scripts\SpoofMissile.sqs""; [_this] exec ""\RHS_hind\scripts\autoflaresP.sqs""; } ";
			getin  = "_this exec {\RHS_hind\scripts\getin.sqs}";
			getout = "_this exec {\RHS_hind\scripts\getout.sqs}";			
			killed = "_this exec {\RHS_hind\scripts\fire.sqs}";
			fired  = "_this exec {\RHS_hind\scripts\firedAT6.sqs};_this exec {\RHS_hind\scripts\fired.sqs}";
			engine = "_this exec {\RHS_hind\scripts\eng.sqs};"
		}; 
	};
	class RHS_Mi24V_CAS: RHS_Mi24P_CAS
	{
		displayName = "$STR_DN_RHS_Mi24V_CAS";
		picture="\RHS_hind\picV_CAS.paa";
		model="\RHS_Hind\RHS_Mi24V_CAS.p3d";
		fuelCapacity=1300;
		weapons[]={"RHS_12_7mmGun","RHS_AT6c","RHS_UPK23"};
		magazines[]={"RHS_12_7mmGun","RHS_AT6c","RHS_UPK23"};
		class Turret
		{
			gunAxis="OsaHlavne";
			turretAxis="OsaVeze";
			gunBeg="usti hlavne";
			gunEnd="konec hlavne";
			soundServo[]={""};
			body="OtocVez";
			gun="OtocHlaven";
			minElev=-40;
			maxElev=10;
			minTurn=-30;
			maxTurn=30;
		};		
		class ReloadAnimations
		{
			class RHS_12_7mmGun
			{
				weapon = RHS_12_7mmGun;
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
		class EventHandlers
		{
			init="_this exec ""\RHS_Hind\scripts\check_dammage.sqs""; _this exec ""\RHS_Hind\scripts\engineDammage.sqs"";_this exec ""\RHS_Hind\scripts\numrandout.sqs""; [_this select 0] exec ""\RHS_Hind\scripts\checkgear.sqs"";_this exec ""\RHS_Hind\scripts\engine.sqs"";_this exec ""\RHS_Hind\scripts\init.sqs"";_this call localize {fn_reg_chopper}";
			incomingMissile = "if ((_this select 0)==(_this select 0)) then { [_this] exec ""\RHS_hind\scripts\SpoofMissile.sqs""; [_this] exec ""\RHS_hind\scripts\autoflaresV.sqs""; } ";
			getin  = "_this exec {\RHS_hind\scripts\getin.sqs}";
			getout = "_this exec {\RHS_hind\scripts\getout.sqs}";			
			killed = "_this exec {\RHS_hind\scripts\fire.sqs}";
			fired  = "_this exec {\RHS_hind\scripts\firedAT6.sqs};_this exec {\RHS_hind\scripts\fired.sqs}";
			engine = "_this exec {\RHS_hind\scripts\eng.sqs}";
		}; 
	};
	class RHS_Mi24V_AT: RHS_Mi24V_CAS
	{
		displayName = "$STR_DN_RHS_Mi24V_AT";
		picture="\RHS_hind\picV_AT.paa";
		fuelCapacity=1000;
		model="\RHS_Hind\RHS_Mi24V_AT.p3d";
		weapons[]={RHS_12_7mmGun,RHS_AT6a,RHS_Rocket57x64};
		magazines[]={RHS_12_7mmGun,RHS_AT6a,RHS_Rocket57x64};
		class EventHandlers
		{
			init="_this exec ""\RHS_Hind\scripts\check_dammage.sqs""; _this exec ""\RHS_Hind\scripts\engineDammage.sqs"";_this exec ""\RHS_Hind\scripts\numrandg.sqs""; [_this select 0] exec ""\RHS_Hind\scripts\checkgear.sqs"";_this exec ""\RHS_Hind\scripts\engine.sqs"";_this exec ""\RHS_Hind\scripts\init.sqs"";_this call localize {fn_reg_chopper}";
			incomingMissile = "if ((_this select 0)==(_this select 0)) then { [_this] exec ""\RHS_hind\scripts\SpoofMissile.sqs""; [_this] exec ""\RHS_hind\scripts\autoflaresV.sqs""; } ";
			getin  = "_this exec {\RHS_hind\scripts\getin.sqs}";
			getout = "_this exec {\RHS_hind\scripts\getout.sqs}";			
			killed = "_this exec {\RHS_hind\scripts\fire.sqs}";
			fired  = "_this exec {\RHS_hind\scripts\firedAT6.sqs};_this exec {\RHS_hind\scripts\fired.sqs}";
			engine = "_this exec {\RHS_hind\scripts\eng.sqs}";
		}; 
	};
	class RHS_Mi24D: RHS_Mi24V_CAS
	{
		displayName = "$STR_DN_RHS_Mi24D";
		picture="\RHS_hind\picD.paa";
		fuelCapacity=1000;
		model="\RHS_Hind\RHS_Mi24D.p3d";
		weapons[]={RHS_12_7mmGun,RHS_AT2,RHS_Rocket57x128};
		magazines[]={RHS_12_7mmGun,RHS_AT2,RHS_Rocket57x128};
		class EventHandlers
		{
			init="_this exec ""\RHS_Hind\scripts\check_dammage.sqs""; _this exec ""\RHS_Hind\scripts\engineDammage.sqs"";_this exec ""\RHS_Hind\scripts\numrandg.sqs""; [_this select 0] exec ""\RHS_Hind\scripts\checkgear.sqs"";_this exec ""\RHS_Hind\scripts\engine.sqs"";_this exec ""\RHS_Hind\scripts\init.sqs"";_this call localize {fn_reg_chopper}";
			incomingMissile = "if ((_this select 0)==(_this select 0)) then { [_this] exec ""\RHS_hind\scripts\SpoofMissile.sqs""; [_this] exec ""\RHS_hind\scripts\autoflaresV.sqs""; } ";
			getin  = "_this exec {\RHS_hind\scripts\getin.sqs}";
			getout = "_this exec {\RHS_hind\scripts\getout.sqs}";			
			killed = "_this exec {\RHS_hind\scripts\fire.sqs}";
			fired  = "_this exec {\RHS_hind\scripts\firedAT6.sqs};_this exec {\RHS_hind\scripts\fired.sqs}";
			engine = "_this exec {\RHS_hind\scripts\eng.sqs}";
		}; 
	};
	class RHS_Mi24D_Gun: RHS_Mi24D
	{
		displayName = "$STR_DN_RHS_Mi24D_Gun";
		picture="\RHS_hind\picD_Gun.paa";
		fuelCapacity=1300;
		model="\RHS_Hind\RHS_Mi24D_Gun.p3d";
		weapons[]={RHS_12_7mmGun,RHS_AT2,RHS_AGS17};
		magazines[]={RHS_12_7mmGun,RHS_AT2,RHS_AGS17};
		class EventHandlers
		{
			init="_this exec ""\RHS_Hind\scripts\check_dammage.sqs""; _this exec ""\RHS_Hind\scripts\engineDammage.sqs"";_this exec ""\RHS_Hind\scripts\numrandr.sqs""; [_this select 0] exec ""\RHS_Hind\scripts\checkgear.sqs"";_this exec ""\RHS_Hind\scripts\engine.sqs"";_this exec ""\RHS_Hind\scripts\init.sqs"";_this call localize {fn_reg_chopper}";
			incomingMissile = "if ((_this select 0)==(_this select 0)) then { [_this] exec ""\RHS_hind\scripts\SpoofMissile.sqs""; [_this] exec ""\RHS_hind\scripts\autoflaresV.sqs""; } ";
			getin  = "_this exec {\RHS_hind\scripts\getin.sqs}";
			getout = "_this exec {\RHS_hind\scripts\getout.sqs}";			
			killed = "_this exec {\RHS_hind\scripts\fire.sqs""";
			fired  = "_this exec {\RHS_hind\scripts\firedAT6.sqs};_this exec {\RHS_hind\scripts\fired.sqs}";
			engine = "_this exec {\RHS_hind\scripts\eng.sqs}";
		}; 
	};

	class RHS_Mi24P_CAS_b: RHS_Mi24P_CAS
	{
		vehicleClass="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_DN_RHS_Mi24P_CAS";
		crew="sov_b_Pilot";
	};
	class RHS_Mi24P_AT_b: RHS_Mi24P_AT
	{
		vehicleClass="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_DN_RHS_Mi24P_AT";
		crew="sov_b_Pilot";
	};
	class RHS_Mi24V_CAS_b: RHS_Mi24V_CAS
	{
		vehicleClass="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_DN_RHS_Mi24V_CAS";
		crew="sov_b_Pilot";
	};
	class RHS_Mi24V_AT_b: RHS_Mi24V_AT
	{
		vehicleClass="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_DN_RHS_Mi24V_AT";
		crew="sov_b_Pilot";
	};
	class RHS_Mi24D_b: RHS_Mi24D
	{
		vehicleClass="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_DN_RHS_Mi24D";
		crew="sov_b_Pilot";
	};
	class RHS_Mi24D_Gun_b: RHS_Mi24D_Gun
	{
		vehicleClass="$STR_RCWC_Air_LTO_butan";
		displayName = "$STR_DN_RHS_Mi24D_Gun";
		crew="sov_b_Pilot";
	};

	class RHS_Mi24P_CAS_p: RHS_Mi24P_CAS
	{
		vehicleClass="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_DN_RHS_Mi24P_CAS";
		crew="sov_p_Pilot";
	};
	class RHS_Mi24P_AT_p: RHS_Mi24P_AT
	{
		vehicleClass="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_DN_RHS_Mi24P_AT";
		crew="sov_p_Pilot";
	};
	class RHS_Mi24V_CAS_p: RHS_Mi24V_CAS
	{
		vehicleClass="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_DN_RHS_Mi24V_CAS";
		crew="sov_p_Pilot";
	};
	class RHS_Mi24V_AT_p: RHS_Mi24V_AT
	{
		vehicleClass="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_DN_RHS_Mi24V_AT";
		crew="sov_p_Pilot";
	};
	class RHS_Mi24D_p: RHS_Mi24D
	{
		vehicleClass="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_DN_RHS_Mi24D";
		crew="sov_p_Pilot";
	};
	class RHS_Mi24D_Gun_p: RHS_Mi24D_Gun
	{
		vehicleClass="$STR_RCWC_Air_LTO_sandy";
		displayName = "$STR_DN_RHS_Mi24D_Gun";
		crew="sov_p_Pilot";
	};

	class RHS_Mi24D_IRQ: RHS_Mi24D
	{
		scope=1;
		displayName = "$STR_DN_RHS_Mi24D_IRQ";
		crew="SoldierEPilot";
		picture="\RHS_hind\picD_IRQ.paa";
		model="\RHS_Hind\RHS_Mi24D_IRQ.p3d";
		hiddenSelections[]={"n1","n2","gearlight","enginelight","fire","fireB","missilelight",n3","n4"};
		class EventHandlers
		{
			init="_this exec ""\RHS_Hind\scripts\check_dammage.sqs""; _this exec ""\RHS_Hind\scripts\engineDammage.sqs"";_this exec ""\RHS_Hind\scripts\numranda.sqs""; [_this select 0] exec ""\RHS_Hind\scripts\checkgear.sqs"";_this exec ""\RHS_Hind\scripts\engine.sqs"";_this exec ""\RHS_Hind\scripts\init.sqs"";_this call localize {fn_reg_chopper}";
					incomingMissile = "if ((_this select 0)==(_this select 0)) then { [_this] exec ""\RHS_hind\scripts\SpoofMissile.sqs""; [_this] exec ""\RHS_hind\scripts\autoflaresV.sqs""; } ";
			getin  = "_this exec {\RHS_hind\scripts\getin.sqs}";
			getout = "_this exec {\RHS_hind\scripts\getout.sqs}";			
			killed = "_this exec {\RHS_hind\scripts\fire.sqs}";
			fired  = "_this exec {\RHS_hind\scripts\firedAT6.sqs};_this exec {\RHS_hind\scripts\fired.sqs}";
			engine = "_this exec {\RHS_hind\scripts\eng.sqs}";
		}; 
	};
};
