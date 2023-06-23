/*
#########################################
# Config Mi-8 by DPS, Voyager           #
# http:\\ofp.ussr-online.net\naseorujie #
#########################################
*/
class CfgAmmo
{
	access=1;
	class Default {};
	class owp_mi8_trigger : default {};
	class owp_mi8_trigger_is_alarm : owp_mi8_trigger {};
	class owp_mi8_trigger_dammage_fuel : owp_mi8_trigger {};
	class owp_mi8_trigger_dammage_cms : owp_mi8_trigger {};
	class owp_mi8_trigger_dammage_1engine : owp_mi8_trigger {};
	class owp_mi8_trigger_dammage_2engine : owp_mi8_trigger {};
	class owp_mi8_trigger_dammage_transmission : owp_mi8_trigger {};
	class owp_mi8_trigger_dammage_engines : owp_mi8_trigger {};
	class owp_mi8_trigger_dammage_pkt : owp_mi8_trigger {};
	class owp_mi8_trigger_dammage_weapons : owp_mi8_trigger {};
	class owp_flaremag : owp_mi8_trigger {};
	class owp_flarelightmag : owp_mi8_trigger {};
	class owp_mi8_trigger_drop_flares_active : owp_mi8_trigger {};
	class owp_mi8_trigger_drop_light_flares_active : owp_mi8_trigger {};
	class owp_mi8_trigger_movie_dammage : owp_mi8_trigger {};
	class owp_mi8_ropehook_active : owp_mi8_trigger {};
	class owp_mi8_ropehook_active_fix : owp_mi8_trigger {};
	class owp_mi8_unit_attach : owp_mi8_trigger {};
	class owp_mi8_load : owp_mi8_trigger {};
	class owp_mi8_rope_active : owp_mi8_trigger {};
	class BulletSingle:Default {};
	class Bullet7_6:BulletSingle {};
	class Bullet7_6E:Bullet7_6 {};
	class OWP_762:Bullet7_6E
	{
		soundFly[]={objects\bulletnoise,1,0.5};
		hit=10;
		indirectHit=3;
		indirectHitRange=0.65;
		minRange=20;minRangeProbab=0.60;
		midRange=250;midRangeProbab=0.80;
		maxRange=1000;maxRangeProbab=0.05;
		cost=10;
		airLock=true;
	};
	class AT3:Default {};
	class Hellfire:AT3 {};
	class Zuni:Hellfire {};
	class OWP_762x2:Zuni
	{
		proxyShape="";
		model="\owp_mi8\weap\OWP_tracer1.p3d";
		//sideAirFriction=0.01;
		sideAirFriction=0;
		maneuvrability=0.000000;
		maxControlRange=0;
		initTime=0.000;
		thrustTime=0.000;
		explosive=0;
		thrust=0;
		
		simulation="shotRocket";
		simulationStep=0.010000;
		hit=18;
		indirectHit=5;
		indirectHitRange=1.3;
		minRange=50;minRangeProbab=0.40;
		midRange=200;midRangeProbab=0.80;
		maxRange=800;maxRangeProbab=0.05;
		cost=50;
		airLock=true;
		maxspeed=750;
		soundFly[]={objects\bulletnoise,1,0.5};
		soundHit1[]={weapons\bulletricochet1,1,1};
		soundHit2[]={weapons\bulletricochet2,1,1};
		soundHit3[]={"\bmp2\bmp2_expl.wss",1,1};
		soundHitMan1[]={weapons\bullethitman1,1,1};
		soundHitMan2[]={weapons\bullethitman2,1,1};
		soundHitArmor1[]={"\bmp2\bmp2_expl.wss",1,1};
		soundHitArmor2[]={weapons\Big_Impact2,1,1};
		soundHitBuilding1[]={weapons\bulletricochet4,1,1};
		soundHitBuilding2[]={"\bmp2\bmp2_expl.wss",1,1};
		hitGround[]={soundHit1,0.25,soundHit2,0.25,soundHit3,0.50};
		hitMan[]={soundHitMan1,0.5,soundHitMan2,0.5};
		hitArmor[]={soundHitArmor1,0.7, soundHitArmor2, 0.3};
		hitBuilding[]={soundHitBuilding1,0.5,soundHitBuilding2,0.5};
	};
	class OWP_23:OWP_762x2
    {
	  soundFly[]={objects\bulletnoise,3,0.7};
       	  model="\owp_mi8\weap\OWP_tracer2.p3d";
          hit=60;indirectHit=10;indirectHitRange=2;
          minRange=60;minRangeProbab=0.05;
          midRange=250;midRangeProbab=0.90;
          maxRange=900;maxRangeProbab=0.05;
          cost=150;
          soundHit1[]={weapons\bulletricochet1,4,1};
          soundHit2[]={weapons\bulletricochet2,4,1};
          soundHit3[]={"\bmp2\bmp2_expl.wss",4,1};
          soundHitMan1[]={weapons\bullethitman1,4,1};
          soundHitMan2[]={weapons\bullethitman2,4,1};
          soundHitArmor1[]={"\bmp2\bmp2_expl.wss",6,1};
          soundHitArmor2[]={weapons\Big_Impact2,6,1};
          soundHitBuilding1[]={weapons\bulletricochet4,6,1};
          soundHitBuilding2[]={"\bmp2\bmp2_expl.wss",6,1};
    };
	class Rocket57:Zuni	{};
	class OWP_C5M:Rocket57
	{
		model="\owp_mi8\weap\OWP_c5.p3d";
		hit=100;
		indirectHit=3;
		indirectHitRange=12;
		initTime=0.001;
		thrustTime=1;
		thrust=1300;
		minRange=50;minRangeProbab=0.20;
		midRange=250;midRangeProbab=0.90;
		maxRange=1000;maxRangeProbab=0.05;
		maxSpeed=1300;
		cost=500;
		simulation="shotRocket";
		simulationStep=0.010000;
		sideAirFriction=0.1;
		maneuvrability=0;
	};
	class OWP_C5K:OWP_C5M
	{
		hit=200;
		indirectHit=70;
		indirectHitRange=3;
		cost=600;
	};
	class LaserGuidedBomb:default {};
	class OWP_Fab250bomb:LaserGuidedBomb
	{
		hit=3000;
		indirectHit=1000;
		indirectHitRange=15;
		minRange=20;
		minRangeProbab=0.05;
		midRange=95;
		midRangeProbab=0.90;
		maxRange=150;
		maxRangeProbab=0.05;
		soundHit[]={"\LaserGuided\expl2",50,1};
		soundFly[]={"\OWP_Mi8\Sounds\bombfall.ogg",1,1};
		model="\OWP_Mi8\weap\OWP_Fab250";
		proxyShape="\OWP_Mi8\weap\OWP_Fab250";
		irLock=0;
		laserLock=0;
		manualControl=0;
		maxControlRange=10;
		maneuvrability=16.0;
		sideAirFriction=0.5;
		simulation="shotMissile";
		maxSpeed=200;
		initTime=0;
		thrustTime=0;
		thrust=0;
	};
	class OWP_Fab500bomb:OWP_Fab250bomb
	{
		hit=6000;
		indirectHit=2000;
		indirectHitRange=16;
		soundHit[]={"\LaserGuided\expl2",150,1.5};
		model="\OWP_Mi8\weap\OWP_Fab500";
		proxyShape="\OWP_Mi8\weap\OWP_Fab500";
	};
};

class CfgWeapons
{
	access=1;
	class Default {};
	class owp_mi8_trigger_is_alarm : Default { count = 1; ammo = owp_mi8_trigger_is_alarm; };
	class owp_mi8_trigger_dammage_cms : Default { count = 1; ammo = owp_mi8_trigger_dammage_cms; };
	class owp_mi8_trigger_dammage_fuel : Default { count = 1; ammo = owp_mi8_trigger_dammage_fuel; };
	class owp_mi8_trigger_dammage_1engine : Default { count = 1; ammo = owp_mi8_trigger_dammage_1engine; };
	class owp_mi8_trigger_dammage_2engine : Default { count = 1; ammo = owp_mi8_trigger_dammage_2engine; };
	class owp_mi8_trigger_dammage_transmission : Default { count = 1; ammo = owp_mi8_trigger_dammage_transmission; };
	class owp_mi8_trigger_dammage_engines : Default { count = 1; ammo = owp_mi8_trigger_dammage_engines; };
	class owp_mi8_trigger_dammage_pkt : Default { count = 1; ammo = owp_mi8_trigger_dammage_pkt; };
	class owp_mi8_trigger_dammage_weapons : Default { count = 1; ammo = owp_mi8_trigger_dammage_weapons; };
	class owp_mi8_trigger_drop_flares_active : Default { count = 1; ammo = owp_mi8_trigger_drop_flares_active; };
	class owp_flaremag : Default { count = 128; ammo = owp_flaremag; };
	class owp_flarelightmag : Default { count = 128; ammo = owp_flarelightmag; };
	class owp_mi8_trigger_drop_light_flares_active : Default { count = 1; ammo = owp_mi8_trigger_drop_light_flares_active; };
	class owp_mi8_trigger_movie_dammage : Default { count = 1; ammo = owp_mi8_trigger_movie_dammage; };
	class owp_mi8_ropehook_active : Default { count = 1; ammo = owp_mi8_ropehook_active; };
	class owp_mi8_ropehook_active_fix : Default { count = 1; ammo = owp_mi8_ropehook_active_fix; };
	class owp_mi8_unit_attach : Default { count = 1; ammo = owp_mi8_unit_attach; };
	class owp_mi8_load : Default { count = 1; ammo = owp_mi8_load; };
	class owp_mi8_rope_active : Default { count = 1; ammo = owp_mi8_load; };
	class MGun:Default {};
	class MachineGun7_6:MGun {};
	class MachineGun12_7:MachineGun7_6 {};
	class OWP_PKT:MachineGun12_7
	{
		ammo="OWP_762";
		reloadTime=0.08;
		count=100;
		modelOptics="\OWP_Mi8\optika_pkt";
		sound[]={"\OWP_Mi8\sounds\PKT.ogg",3.1622777,1};
		soundContinuous=0;
		reloadSound[]={"",1,1};
		reloadMagazineSound[]={"\OWP_Mi8\sounds\mg_reload.wss",0.003162,1};
		magazineReloadTime=6;
		dispersion=0.010;
		displayName="$STR_OWP_Mi8_PKT";
		displayNameMagazine="$STR_OWP_Mi8_PKT";
		shortNameMagazine="$STR_OWP_Mi8_PKT";
		maxLeadSpeed=450;
		optics = true;
		aiRateOfFire=0.5; // delay between shots at given distance
		aiRateOfFireDistance=1000;
	};
	class OWP_PKTx2:OWP_PKT
	{
		reloadTime=0.08;
		flash="gunfire";
		ammo="OWP_762x2";
		multiplier=2;
		burst=1;
		count=400;
		sound[]={"\OWP_Mi8\sounds\2xPKT.ogg",4,1};
		displayName="$STR_OWP_Mi8_PKTx2";
		displayNameMagazine="$STR_OWP_Mi8_PKTx2";
		shortNameMagazine="$STR_OWP_Mi8_PKTx2";
		initspeed=850;
		ffCount=25;
	};
	class OWP_UPK:OWP_PKTx2
	{
		reloadTime=0.04;
		//flash="gunfire";
		ammo="OWP_23";
		multiplier=2;
		burst=2;
		//dispersion=0.025;
		count=500;
		sound[]={"\OWP_Mi8\sounds\gsh23mm.ogg",8,1};
		displayName="$STR_OWP_Mi8_UPK";
		displayNameMagazine="$STR_OWP_Mi8_UPK";
		shortNameMagazine="$STR_OWP_Mi8_UPK";
		initspeed=1000;
	};
	class LAWLauncher:Default {};
	class CarlGustavLauncher:LAWLauncher {};
	class AT3Launcher:CarlGustavLauncher {};
	class ZuniLauncher38:AT3Launcher {};
	class Rocket57x64:ZuniLauncher38 {};
	class OWP_Ub16C5M:Rocket57x64
	{
		sound[]={"\OWP_Mi8\sounds\C5.ogg",2,1};
		ammo="OWP_C5M";
		count=32;
		burst=2;
		reloadTime=0.05;
		initSpeed=0;
		aiRateOfFire=2;
		//dispersion=0.9999;
		aiRateOfFireDistance=1500;
		displayName="$STR_OWP_Mi8_C5M";
		displayNameMagazine="$STR_OWP_Mi8_C5M";
		shortNameMagazine="$STR_OWP_Mi8_C5M";
	};
	class OWP_Ub16C5K:OWP_Ub16C5M
	{
		ammo="OWP_C5K";
		displayName="$STR_OWP_Mi8_C5K";
		displayNameMagazine="$STR_OWP_Mi8_C5K";
		shortNameMagazine="$STR_OWP_Mi8_C5K";
	};
	class OWP_Ub16:Default
	{
		magazines[] = {OWP_Ub16C5K, OWP_Ub16C5M};
		reloadSound[]={"\OWP_Mi8\Sounds\click.wav",-10,1};
		backgroundReload = 0;
	};
	class OWP_Ub32C5M:OWP_Ub16C5M
	{
	count=64;
	};
	class OWP_Ub32C5K:OWP_Ub16C5K
	{
	count=64;
	};
	class OWP_Ub32:Default
	{
		magazines[] = {OWP_Ub32C5K, OWP_Ub32C5M};
		reloadSound[]={"\OWP_Mi8\Sounds\click.wav",-10,1};
		backgroundReload = 0;
	};
	class HellfireLauncher:AT3Launcher{};
	class LaserGuidedBombLauncher:HellfireLauncher{};
	class OWP_Fab250:LaserGuidedBombLauncher
	{
		burst=2;
		autoreload=1;
		ammo="OWP_Fab250bomb";
		displayName="$STR_OWP_Mi8_Fab250";
		displayNameMagazine="$STR_OWP_Mi8_Fab250";
		shortNameMagazine="$STR_OWP_Mi8_Fab250";
		count=2;
		reloadTime=0.05;
		sound[]={"\OWP_Mi8\sounds\bomblock.ogg",1,1};
		reloadSound[]={"",0.0003162,1};
		initSpeed=-1;
		aiRateOfFire=13.0;
		aiRateOfFireDistance=170;
	};
	class OWP_Fab500:OWP_Fab250
	{
		ammo="OWP_Fab500bomb";
		displayName="$STR_OWP_Mi8_Fab500";
		displayNameMagazine="$STR_OWP_Mi8_Fab500";
		shortNameMagazine="$STR_OWP_Mi8_Fab500";
		count=2;
	};
};