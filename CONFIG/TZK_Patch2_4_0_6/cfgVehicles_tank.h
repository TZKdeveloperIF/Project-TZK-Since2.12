	class TZK_HeavyWestTank_Base_xj400: M1Abrams_Base_xj400 {};
	class M1A1_xj400: TZK_HeavyWestTank_Base_xj400 {
		maxSpeed = 56;
	};
	class M1A1_C_xj400: M1A1_xj400 {
		unitInfoType = 8;

		model = "\TZK_Patch2_4_0_6\Model\M1A1_TZK_C.p3d";
		class EventHandlers {
			Init = _vehicle = _this select 0, _vehicle animate [{suspension}, 0.5];
		};
		hiddenSelections[] = {};
	};
	class M1A1_G_xj400: M1A1_C_xj400 {
		model = "\TZK_Patch2_4_0_6\Model\M1A1_TZK_G.p3d";
	};
	class M1A2_INQ_xj400: TZK_HeavyWestTank_Base_xj400 {
		maxSpeed = 56;
	};
	class Leo2A6_xj400: TZK_HeavyWestTank_Base_xj400 {
		maxSpeed = 56;
		class Turret {
			gunAxis = "OsaHlavne";
			turretAxis = "OsaVeze";

			soundServo[] = {"\TZK_Sounds_4_0_0\Leo2A6\Turret.wss",0.0316228,1};

			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";

			minElev = -7; maxElev = +20;
			minTurn = -360; maxTurn = +360;

			body = "OtocVez";
			gun = "OtocHlaven";
		};
	};
	class Leo2A6_C_xj400: Leo2A6_xj400 {
		unitInfoType = 8;

		model = "\TZK_Patch2_4_0_6\Model\Leo2A6_C.p3d";
		hiddenSelections[] = {
			"zadni svetlo","Takt_Kp","Takt_Symbol","Takt_Btl_1","Takt_Btl_2","Takt_Btl_3","nr1","nr2","nr3"
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, _vehicle animate [{suspension}, 0.5], [_vehicle, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {nr}, {0}] exec localize {TZK_EVENT_INIT_TEX_RSC_NUM};
		};
	};

	class T80_Base_xj400: T72_Base_xj400 {};
	class TZK_HeavyEastTank_Base_xj400: T80_Base_xj400 {};
	class T80_xj400: TZK_HeavyEastTank_Base_xj400 {
		maxSpeed = 56;
	};
	class T80_C_xj400: T80_xj400 {
		unitInfoType = 8;

		model = "\TZK_Patch2_4_0_6\Model\T80_TZK_C.p3d";
		hiddenSelections[] = {
			"pruh", 
			// for oil drum
			tex_tank_04_bednyuvalce_.pac, tex_tank_04_krabic_back.pac, tex_tank_04_krabic_sidet.pac, tex_tank_04_v_lec_norm.pac, tex_tank_04_v_lec_side.paa
		};
		class EventHandlers {
			Init = _vehicle = _this select 0, _vehicle animate [{suspension}, 0.5], [_vehicle, true] exec "\TZK_Patch2_4_0_6\Script\T80Drum.sqs";
		};
	};
	class T80_G_xj400: T80_C_xj400 {
		model = "\TZK_Patch2_4_0_6\Model\T80_TZK_G.p3d";
	};
	class T90_xj400: TZK_HeavyEastTank_Base_xj400 {
		maxSpeed = 56;
	};
	class ZTZ99_xj400: TZK_HeavyEastTank_Base_xj400 {
		maxSpeed = 56;
	};
	class ZTZ99_C_xj400: ZTZ99_xj400 {
		unitInfoType = 8;

		model = "\TZK_Patch2_4_0_6\Model\ZTZ99_C.p3d";
		hiddenSelections[] = {"n1", "n2", "n3"};
		class EventHandlers {
			Init = _vehicle = _this select 0, _vehicle animate [{suspension}, 0.5], [_vehicle, {\TZK_Texture_4_0_0\BWMOD\leo2A6\num\}, {n}, {0}] exec localize {TZK_EVENT_INIT_TEX_RSC_NUM};
		};
	};

	class ResistanceTank_xj400: Tank_xj400 {};
	class T80Res_Base_xj406: ResistanceTank_xj400 {
		maxSpeed = 56;
	};
	class T80Res_TZK_xj406: T80Res_Base_xj406 {};
	class T80Res_TZK_C_xj406: T80Res_TZK_xj406 {
		unitInfoType = 8;

		model = "t80";
		hiddenSelections[] = {"pruh"};
		class EventHandlers {
			Init = _vehicle = _this select 0, _vehicle animate [{suspension}, 0.5], [_vehicle, {red}] exec "\TZK_Patch2_4_0_6\Script\GuerPruh.sqs";
		};
	};
	class T80Res_TZK_G_xj406: T80Res_TZK_C_xj406 {
		model = "\TZK_Patch2_4_0_6\Model\T80_TZK_G.p3d";
		class EventHandlers {
			Init = _vehicle = _this select 0, _vehicle animate [{suspension}, 0.5], [_vehicle, true] exec "\TZK_Patch2_4_0_6\Script\T80Drum.sqs", [_vehicle, {red}] exec "\TZK_Patch2_4_0_6\Script\GuerPruh.sqs";
		};
	};