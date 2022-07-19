	class A10_Base_xj400: A10 {
		accuracy = 0.29;
		armor = 2;
		magazines[]={"MaverickLauncher","MachineGun30A10", "AfterBurnerSwitch_xj400"};
	};
	class A10_xj400: A10_Base_xj400 {};
	class A10_xj406: A10_xj400 {
		accuracy = 1000;
		armor = 50;
		fuelCapacity = 25;
	};
	class A10_Support_xj406: A10_xj406 {
		maxSpeed = 400; // 2/3 of A10's maxspeed thus A10 can approach it easier.
		displayName = "A10 Support";
		weapons[] = {};
		magazines[] = {"AfterBurnerSwitch_xj400"};
	};
	class A10_AAOnly_xj406: A10_xj406 {
		displayName = "A10 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30W" };
		magazines[] = {"MachineGun30W", "MachineGun30W", "MachineGun30W", "AfterBurnerSwitch_xj400"};
	};
	class A10_Vanilla_Base_xj400: A10 {
		accuracy = 0.29;
		armor = 2;
	};
	class A10_Vanilla_xj405: A10_Vanilla_Base_xj400 {
		accuracy = 1000;
		armor = 50;
		fuelCapacity = 25;
	};

	class Su25_Base_xj400: Plane {
		accuracy = 0.29;
		armor = 2;
		magazines[]={"Ch29TLauncher_xj400", "Rocket57x64", "MachineGun30A10", "AfterBurnerSwitch_xj400"};
	};
	class Su25_xj400: Su25_Base_xj400 {};
	class Su25_xj406: Su25_xj400 {
		accuracy = 1000;
		armor = 24;
		fuelCapacity = 25;
	};
	class Su25_Support_xj406: Su25_xj406 {
		displayName = "Su25 Support";
		weapons[] = {};
		magazines[] = {"AfterBurnerSwitch_xj400"};
		maxSpeed = 533; // 2/3 of Su25's maxspeed thus Su25 can approach it easier.
	};
	class Su25_AAOnly_xj406: Su25_xj406 {
		displayName = "Su25 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30E" };
		magazines[] = {"MachineGun30E", "MachineGun30E", "MachineGun30E", "AfterBurnerSwitch_xj400"};
	};
	// Fill missed definition and fix broken definition of vanilla plane
	class Su25_Vanilla_Base_xj405: Su25 {
		accuracy = 0.29;
		armor = 2;
	};
	class Su25_Vanilla_xj405: Su25_Vanilla_Base_xj405 {
		accuracy = 1000;
		armor = 24;
		fuelCapacity = 25;
	};
	class Su25_AAOnly_Vanilla_xj405: Su25_Vanilla_xj405 {
		displayName = "Su25 AA";
		irScanGround = 0; // Not allowed scanning ground.
		weapons[] = {"MachineGun30E" };
		magazines[] = {"MachineGun30E", "MachineGun30E", "MachineGun30E", "AfterBurnerSwitch_xj400"};
	};

	class C130_Base_xj400: Plane {};
	class C130_xj400: C130_Base_xj400 {
		model = "\TZK_Model_4_0_6\C130.p3d";
	};
	class AN72_Base_xj400: Plane {
		model = "\TZK_Model_4_0_6\AN72.p3d";
	};