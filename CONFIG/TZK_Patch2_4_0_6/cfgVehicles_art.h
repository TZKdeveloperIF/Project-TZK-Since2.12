	class M109A6G_Base_xj400: M1Abrams_Base_xj400 {};
	class M109A6G_xj400: M109A6G_Base_xj400 {
		class UserActions {
			class prepfire {
				displayName = "Take firing position";
				position = "osahlavne";
				radius = 5;
				condition = local this && "_x == {DeploySwitch_xj400}" count magazines this == 0;
				statement = "[this,1] exec localize {TZK_BEHAVIOUR_DEPLOY_M109A6G}";
			};
			class prepdrive {
				displayName = "Driving mode";
				position = "osahlavne";
				radius = 5;
				condition = local this && "_x == {DeploySwitch_xj400}" count magazines this > 0;
				statement = "[this,0] exec localize {TZK_BEHAVIOUR_DEPLOY_M109A6G}";
			};
		};
		class EventHandlers {Init = "(_this select 0) exec {\TZK_Patch2_4_0_6\Script\InitM109a6g.sqs}";};
	};
	class PLZ05_VME_Base_xj400: T72_Base_xj400 { icon = "\TZK_Texture_4_0_0\icon\uiM109.paa"; };
	class PLZ05_TZK_xj400: PLZ05_VME_Base_xj400 {
        model = "\TZK_Patch2_4_0_6\Model\PLZ05.p3d";
		class UserActions {
			class prepfire {
				displayName = "Take Firing Position";
				position = "osahlavne";
				radius = 5;
				condition = local this && "_x == {DeploySwitch_xj400}" count magazines this == 0;
				statement = "[this,1] exec localize {TZK_BEHAVIOUR_DEPLOY_PLZ05}";
			};
			class prepdrive {
				displayName = "Driving Mode";
				position = "osahlavne";
				radius = 5;
				condition = local this && "_x == {DeploySwitch_xj400}" count magazines this > 0;
				statement = "[this,0] exec localize {TZK_BEHAVIOUR_DEPLOY_PLZ05}";
			};
		};
		class EventHandlers {Init = "(_this select 0) exec {\TZK_Patch2_4_0_6\Script\InitPlz05.sqs}";};
	};
	class TOS1_TZK_xj400: T72_Base_xj400 {
		hiddenSelections[] ={
			"n1", "n2", "n3", "lidF","lidR", "TZK_Grad1","TZK_Grad2","TZK_Grad3","TZK_Grad4","TZK_Grad5","TZK_Grad6", "m01","m02","m03","m04","m05","m06","m07","m08","m09","m10","m11","m12","m13","m14","m15","m16","m17","m18","m19","m20","m21","m22","m23","m24","m25","m26","m27","m28","m29","m30", tzk_tex_00,
			tex_T55_infra.pac,tex_t55_sum.pac
			,tex_pal1.pac,tex_rcog..paa,tex_TOST1.pac,tex_TOST2.pac,tex_tos_1g.paa
				, tzk_tex_99
		};
		class EventHandlers {
			Init = "(_this select 0) exec {\TZK_Patch2_4_0_6\Script\InitTos1.sqs}";
		};
		class UserActions {
			class prepfire {
				statement = "[this,1] exec localize {TZK_BEHAVIOUR_DEPLOY_TOS1}";
			};
			class prepdrive {
				statement = "[this,0] exec localize {TZK_BEHAVIOUR_DEPLOY_TOS1}";
			};
		};
	};