class WeaponFireGun {};
class WeaponFireMGun: WeaponFireGun {};
class WeaponCloudsGun {};
class WeaponCloudsMGun: WeaponCloudsGun {};
class mortar1Clouds : WeaponCloudsMGun {
	access=3;
	cloudletGrowUp=0.050000;
	cloudletFadeIn=0;
	cloudletFadeOut=0.100000;
	cloudletDuration=0.050000;
	cloudletAlpha=0.300000;
	cloudletAccY=0;
	cloudletMinYSpeed=-100;
	cloudletMaxYSpeed=100;
	interval=0.020000;
	size=0.000000;
	sourceSize=0.020000;
};
class ICPT72FireGun: WeaponFireGun {cloudletShape="empty";};
class mcar_WeaponCloudsTOW {
	access = 3;
	cloudletDuration = 0.7;
	size = 1.2;
	sourceSize = 0.1;
	cloudletAnimPeriod = 0.6;
	cloudletSize = 2.0;
	cloudletAlpha = 1.0;
	cloudletGrowUp = 0.2;
	cloudletFadeIn = 0;
	cloudletFadeOut = 0.7;
	cloudletAccY = 0;
	cloudletMinYSpeed = -100;
	cloudletMaxYSpeed = 2;
	cloudletShape = "cl_basic";
	cloudletColor[] = {1, 1, 1, 0};
	interval = 0.02;
	timeToLive = 0;
	initT = 4500;
	deltaT = -3000;
	class Table
	{
		class T0 {maxT = 0; color[] = {0.82, 0.95, 0.93, 0};}
		class T1 {maxT = 200; color[] = {0.75, 0.77, 0.9, 0};}
		class T2 {maxT = 400; color[] = {0.56, 0.62, 0.67, 0};}
		class T3 {maxT = 600; color[] = {0.39, 0.46, 0.47, 0};}
		class T4 {maxT = 800; color[] = {0.24, 0.31, 0.31, 0};}
		class T5 {maxT = 1000; color[] = {0.23, 0.31, 0.29, 0};}
		class T6 {maxT = 1500; color[] = {0.21, 0.29, 0.27, 0};}
		class T7 {maxT = 2000; color[] = {0.05, 0.03, 0.11, 0};}
		class T8 {maxT = 2300; color[] = {0.22, 0.19, 0.1, 0};}
		class T9 {maxT = 2500; color[] = {0.05, 0.03, 0.11, 0};}
		class T10 {maxT = 2600; color[] = {0.62, 0.29, 0.03, 0};}
		class T11 {maxT = 2650; color[] = {0.59, 0.35, 0.05, 0};}
		class T12 {maxT = 2700; color[] = {0.75, 0.37, 0.03, 0};}
		class T13 {maxT = 2750; color[] = {0.88, 0.34, 0.03, 0};}
		class T14 {maxT = 2800; color[] = {0.91, 0.5, 0.17, 0};}
		class T15 {maxT = 2850; color[] = {1, 0.6, 0.2, 0};}
		class T16 {maxT = 2900; color[] = {1, 0.71, 0.3, 0};}
		class T17 {maxT = 2950; color[] = {0.98, 0.83, 0.41, 0};}
		class T18 {maxT = 3000; color[] = {1, 0.91, 0.94, 0};}
		class T19 {maxT = 3100; color[] = {0, 0, 0, 0};}
		class T20 {maxT = 3300; color[] = {0.96, 0.99, 0.82, 0};}
		class T21 {maxT = 3600; color[] = {1, 0.98, 0.91, 0};}
		class T22 {maxT = 4200; color[] = {1, 1, 1, 0};}
	}
};
class mcar_WeaponCloudsGaskin {
	access = 3;
	cloudletDuration = 2.0;
	cloudletAnimPeriod = 0.6;
	cloudletSize = 2.0;
	cloudletAlpha = 1.0;
	cloudletGrowUp = 0.2;
	cloudletFadeIn = 0;
	cloudletFadeOut = 0.7;
	cloudletAccY = 0;
	cloudletMinYSpeed = -100;
	cloudletMaxYSpeed = 2;
	cloudletShape = "cl_basic";
	cloudletColor[] = {1, 1, 1, 0};
	interval = 0.02;
	size = 6;
	sourceSize = 0.6;
	timeToLive = 0;
	initT = 4500;
	deltaT = -3000;
	class Table
	{
		class T0 {maxT = 0; color[] = {0.82, 0.95, 0.93, 0};}
		class T1 {maxT = 200; color[] = {0.75, 0.77, 0.9, 0};}
		class T2 {maxT = 400; color[] = {0.56, 0.62, 0.67, 0};}
		class T3 {maxT = 600; color[] = {0.39, 0.46, 0.47, 0};}
		class T4 {maxT = 800; color[] = {0.24, 0.31, 0.31, 0};}
		class T5 {maxT = 1000; color[] = {0.23, 0.31, 0.29, 0};}
		class T6 {maxT = 1500; color[] = {0.21, 0.29, 0.27, 0};}
		class T7 {maxT = 2000; color[] = {0.05, 0.03, 0.11, 0};}
		class T8 {maxT = 2300; color[] = {0.22, 0.19, 0.1, 0};}
		class T9 {maxT = 2500; color[] = {0.05, 0.03, 0.11, 0};}
		class T10 {maxT = 2600; color[] = {0.62, 0.29, 0.03, 0};}
		class T11 {maxT = 2650; color[] = {0.59, 0.35, 0.05, 0};}
		class T12 {maxT = 2700; color[] = {0.75, 0.37, 0.03, 0};}
		class T13 {maxT = 2750; color[] = {0.88, 0.34, 0.03, 0};}
		class T14 {maxT = 2800; color[] = {0.91, 0.5, 0.17, 0};}
		class T15 {maxT = 2850; color[] = {1, 0.6, 0.2, 0};}
		class T16 {maxT = 2900; color[] = {1, 0.71, 0.3, 0};}
		class T17 {maxT = 2950; color[] = {0.98, 0.83, 0.41, 0};}
		class T18 {maxT = 3000; color[] = {1, 0.91, 0.94, 0};}
		class T19 {maxT = 3100; color[] = {0, 0, 0, 0};}
		class T20 {maxT = 3300; color[] = {0.96, 0.99, 0.82, 0};}
		class T21 {maxT = 3600; color[] = {1, 0.98, 0.91, 0};}
		class T22 {maxT = 4200; color[] = {1, 1, 1, 0};}
	}
};
class CoC_81mortarClouds : WeaponCloudsMGun {
	cloudletDuration=0.100000;
	cloudletAnimPeriod=1.000000;
	cloudletSize=0.5000000;
	cloudletAlpha=0.1000000;
	cloudletGrowUp=0.1
	cloudletFadeIn=0.0010000;
	cloudletFadeOut=0.1
	cloudletAccY=0.0400000;
	cloudletMinYSpeed=0.200000;
	cloudletMaxYSpeed=0.800000;
	cloudletShape="cl_basic";
	cloudletColor[]={1,1,1,0};
	interval=0.050000;
	size=1
	sourceSize=0.500000;
	timeToLive=0
	initT=0
	deltaT=0
	class Table
	{
		class T0
		{
			maxT=0
			color[]={1,1,1,0};
		};
	};
};


//EOF