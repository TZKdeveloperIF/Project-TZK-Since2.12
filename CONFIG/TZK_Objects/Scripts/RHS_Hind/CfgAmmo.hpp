class CfgAmmo
{
	class Default{}; 
	class AT3: Default{};
	class Hellfire: AT3{};
	class Zuni: Hellfire{};
	class RHS_57mmS5: Zuni
	{
		model = "\RHS_hind\RHS_S5.p3d";
		soundHit[]={\RHS_hind\sounds\S5_explo,100,1};
		hit=200;indirectHit=100;indirectHitRange=2.5;
		initTime=0.020;
		thrustTime=8;
		thrust=1200;

		minRange=50;
		minRangeProbab=0.300000;
		midRange=500;
		midRangeProbab=0.990000;
		maxRange=1000;
		maxRangeProbab=0.650000;
	};
	class RHS_80mmS8: Zuni
	{
		model = "\RHS_hind\RHS_S8.p3d";
		soundHit[]={\RHS_hind\sounds\S8_explo,100,1};
		hit=300;indirectHit=200;indirectHitRange=2.5;
		initTime=0.020;
		thrustTime=8;
		thrust=1200;

		minRange=50;
		minRangeProbab=0.300000;
		midRange=500;
		midRangeProbab=0.990000;
		maxRange=1000;
		maxRangeProbab=0.650000;
	};
	class RHS_Gunpodammo: RHS_57mmS5
	{
		soundHit[]={"\RHS_hind\sounds\23hit",10,1};
		soundHitArmor[]={"\RHS_hind\sounds\23hitarmor",10,1};
		hitGround[]={"soundHit",1};
		hitMan[]={"soundHit",1};
		hitArmor[]={"soundHitArmor",1};
		hitBuilding[]={"soundHit",1};
		hit=40;indirectHit=15;indirectHitRange=2.5;
		minRange=30;
		minRangeProbab=0.600000;
		midRange=450;
		midRangeProbab=0.990000;
		maxRange=750;
		maxRangeProbab=0.350000;
		model = "\RHS_hind\RHS_23mm.p3d";
		irLock=1;
		explosive=0;
		airLock=1;
		manualControl=0;
		initTime=10;
		thrustTime=16;
		thrust=2400;
	};
	class RHS_AGS17ammo: RHS_57mmS5
	{
		soundHit[]={"\RHS_hind\sounds\AGS_explo",10,0.7};
		hit=40;indirectHit=20;indirectHitRange=5;
		minRange=30;
		minRangeProbab=0.500000;
		midRange=450;
		midRangeProbab=0.990000;
		maxRange=750;
		maxRangeProbab=0.300000;
		model = "\RHS_hind\RHS_AGS17.p3d";
		irLock=0;
		explosive=1;
		airLock=0;
		manualControl=0;
		initTime=10;
		thrustTime=2;
		thrust=50;
	};
	class RHS_AT2:Hellfire
	{
		hit=400;
		indirectHit=120;
		indirectHitRange=2;
		proxyShape="\RHS_Hind\RHS_AT2_Proxy.p3d";
		model="\RHS_Hind\RHS_AT2.p3d";
		soundHit[]={"\RHS_hind\sounds\AT2_explo",100,1};
		initTime=0.015;
		thrustTime=8;
		thrust=250;
		maneuvrability=3;

		minRange=500;
		minRangeProbab=0.010000;
		midRange=1200;
		midRangeProbab=0.900000;
		maxRange=1750;
		maxRangeProbab=0.400000;
	};
	class AT6: Hellfire {};
	class RHS_AT6a: AT6
	{
		model = "\RHS_Hind\RHS_AT6.p3d";
		proxyShape="\RHS_Hind\RHS_AT6a_Proxy.p3d";
		hit=790;indirectHit=450;indirectHitRange=5;
		soundHit[]={"\RHS_hind\sounds\AT6_explo",100,1};
		initTime=0.015;
		thrustTime=10;
		thrust=300;
		maneuvrability=10;

		minRange=50;
		minRangeProbab=0.030000;
		midRange=1000;
		midRangeProbab=0.950000;
		maxRange=1800;
		maxRangeProbab=0.500000;
	};
	class RHS_AT6b: RHS_AT6a
	{
		proxyShape="\RHS_Hind\RHS_AT6b_Proxy.p3d";
		maneuvrability=20;

		minRange=500;
		minRangeProbab=0.050000;
		midRange=1000;
		midRangeProbab=0.990000;
		maxRange=1800;
		maxRangeProbab=0.500000;
	};
	class RHS_AT6c: RHS_AT6a
	{
		proxyShape="\RHS_Hind\RHS_AT6c_Proxy.p3d";
	};
	class RHS_AT6d: RHS_AT6a
	{
		proxyShape="\RHS_Hind\RHS_AT6d_Proxy.p3d";
		maneuvrability=20;

		minRange=500;
		minRangeProbab=0.050000;
		midRange=1000;
		midRangeProbab=0.990000;
		maxRange=1800;
		maxRangeProbab=0.500000;
	};
	class BulletSingle : Default {};
	class ExplosiveBullet: BulletSingle {};
	class Bullet30: ExplosiveBullet{};
	class Bullet30E: Bullet30{};
	class RHS_30mm: Bullet30E
	{
		soundHit[]={"\RHS_hind\sounds\30hit",1,1};
		soundHitMan[]={"\RHS_hind\sounds\30hitman",1,1};
		soundHitArmor1[]={"\RHS_hind\sounds\30hitarmor1",1,1};
		soundHitArmor2[]={"\RHS_hind\sounds\30hitarmor2",1,1};
		soundHitArmor3[]={"\RHS_hind\sounds\30hitarmor3",1,1};
		hitGround[]={"soundHit",1};
		hitMan[]={"soundHitMan",1};
		hitArmor[]={"soundHitArmor1",0.7,"soundHitArmor2",0.15,"soundHitArmor3",0.15};
		hitBuilding[]={"soundHit",1};
		explosive=0;
		hit=50; 
		indirectHit=20; 
		indirectHitRange=3;
		tracerColor[]={0,0,0,0.000000};
		tracerColorR[]={0,0,0,0.000000};
 
		// DASH: вероятности как у 30мм снаряда от БИС
		minRange=10;
		minRangeProbab=0.2;
		midRange=250;
		midRangeProbab=0.5;
		maxRange=1000;
		maxRangeProbab=0.05;	
	};
	
	class Bullet7_6: BulletSingle{};
	class Bullet12_7: Bullet7_6{};
	
	class RHS_12_7mm: Bullet30E
	{
		soundHit1[]={"weapons\bulletricochet1",0.4,1};
		soundHit2[]={"weapons\bulletricochet2",0.4,1};
		soundHit3[]={"weapons\bulletricochet3",0.4,1};
		soundHitMan1[]={"weapons\bullethitman1",0.3,1};
		soundHitMan2[]={"weapons\bullethitman2",0.3,1};
		soundHitArmor1[]={"weapons\small_impact1",0.5,1};
		soundHitArmor2[]={"weapons\Big_Impact2",0.5,1};
		soundHitBuilding1[]={"weapons\bulletricochet4",0.4,1};
		soundHitBuilding2[]={"weapons\bulletricochet5",0.4,1};
		hitGround[]={"soundHit1",0.33,"soundHit2",0.33,"soundHit3",0.33};
		hitMan[]={"soundHitMan1",0.5,"soundHitMan2",0.5};
		hitArmor[]={"soundHitArmor1",0.7,"soundHitArmor2",0.3};
		hitBuilding[]={"soundHitBuilding1",0.5,"soundHitBuilding2",0.5};
		
		/*  
		DASH: убрал нах непрямой урон
		прямой урон позволяет ботам гасить цели с броней до 250
		hit=20;
		indirectHit=8;
		indirectHitRange=1.5; 
		*/
		hit=25;
		indirectHit=0;
		indirectHitRange=0; 
		
		explosive=0;
        tracerColor[]={0,0,0,0.000000};
		tracerColorR[]={0,0,0,0.000000};
		
		// DASH: вероятности как у 30мм снаряда от БИС
		minRange=10;
		minRangeProbab=0.2;
		midRange=250;
		midRangeProbab=0.5;
		maxRange=1000;
		maxRangeProbab=0.05;
	};
};

