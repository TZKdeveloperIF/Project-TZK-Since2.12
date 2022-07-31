	class FakeC4_1000_xj400: Grenade {
		hit = 0;
		indirectHit = 1000;
		indirectHitRange = 6;
		soundHit[] = {"Explosions\timebomb", 100, 1};
		soundFly[] = {"",0,1};
		soundEngine[] = {"",0,1};
		visibleFire = 0;
		audibleFire = 0;
		visibleFireTime = 0;
	};
	class FakeC4_1100_xj400: FakeC4_1000_xj400 {
		indirectHit = 1100;
	};
	class FakeC4_1200_xj400: FakeC4_1000_xj400 {
		indirectHit = 1200;
	};
	class FakeC4_1300_xj400: FakeC4_1000_xj400 {
		indirectHit = 1300;
	};
	class FakeC4_1400_xj400: FakeC4_1000_xj400 {
		indirectHit = 1400;
	};
	class FakeC4_1500_xj400: FakeC4_1000_xj400 {
		indirectHit = 1500;
	};

	class RKG3M_xj400: GrenadeHand {
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2.5;
		// ================ above same as LAW ================
		cost = 500; // less cost to make AI use it more
		// ================ below same as Kasap ================
		model = "\TZK_Config_4_0_6\Model\RGK3M.p3d";
		soundHit1[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Boom2.ogg",db40,1};
		soundHit2[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Boom3.ogg",db40,1};
		soundHit3[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Boom4.ogg",db40,1};
		soundHit4[] = {"\TZK_Sounds_4_0_0\KYL_KASAP\Boom5.ogg",db40,1};
		hitGround[] = {soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitMan[] = {soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitArmor[] = {soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
		hitBuilding[] = {soundHit1,0.25,soundHit2,0.25,soundHit3,0.25,soundHit4,0.25};
	};

	class Carl_I_1_TZK_xj400: CarlGustav {};
	class Carl_I_2_TZK_xj400: Carl_I_1_TZK_xj400 { hit = 900; };
	class Carl_II_1_TZK_xj400: Carl_I_1_TZK_xj400 {
		maxControlRange = 400; maneuvrability = 1.3;
	};
	class Carl_II_2_TZK_xj400: Carl_II_1_TZK_xj400 { hit = 900; };
	class Carl_III_1_TZK_xj400: Carl_I_1_TZK_xj400 {
		maxControlRange = 600; maneuvrability = 1.6;
	};
	class Carl_III_2_TZK_xj400: Carl_III_1_TZK_xj400 { hit = 900; };
	class Carl_IV_1_TZK_xj400: Carl_I_1_TZK_xj400 {
		maxControlRange = 800; maneuvrability = 2; maxRange = 800; thrustTime = 2.5;
	};
	class Carl_IV_2_TZK_xj400: Carl_IV_1_TZK_xj400 { hit = 900; };
	class AT4_I_1_TZK_xj400: Carl_I_1_TZK_xj400 { model = "RPG"; };
	class AT4_II_1_TZK_xj400: Carl_II_1_TZK_xj400 { model = "RPG"; };
	class AT4_III_1_TZK_xj400: Carl_III_1_TZK_xj400 { model = "RPG"; };
	class AT4_IV_1_TZK_xj400: Carl_IV_1_TZK_xj400 { model = "RPG"; };
	class AT4_I_2_TZK_xj400: Carl_I_2_TZK_xj400 { model = "RPG"; };
	class AT4_II_2_TZK_xj400: Carl_II_2_TZK_xj400 { model = "RPG"; };
	class AT4_III_2_TZK_xj400: Carl_III_2_TZK_xj400 { model = "RPG"; };
	class AT4_IV_2_TZK_xj400: Carl_IV_2_TZK_xj400 { model = "RPG"; };
	class AA_II_TZK_xj400: AA { maxRange = 1500; };
	class 9K32_II_TZK_xj400: AA_II_TZK_xj400 {};