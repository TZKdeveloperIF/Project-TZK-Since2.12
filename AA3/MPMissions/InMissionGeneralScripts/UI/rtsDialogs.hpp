// TZK CTI - RTS Dialog Definitions (Phase D interim, Phase E full)
// Mirrors OFP: description_30_rtsMainDialog.h (simplified for initial build)
//
// 使用引擎主配置中的控件基类（A3 2.02+），避免 #include 依赖 ui_f 内 .inc 路径/版本差异

import RscText;
import RscButton;

class TZK_RtsOrderDlg {
	idd = 9100;
	movingEnable = 1;
	onLoad = "uiNamespace setVariable ['TZK_RtsOrderDisplay', _this select 0]";

	class controlsBackground {
		class Background : RscText {
			idc = -1;
			x = "0.30 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.40 * safezoneW";
			h = "0.42 * safezoneH";
			colorBackground[] = {0, 0, 0, 0.75};
		};
	};

	class controls {
		class Title : RscText {
			idc = 9101;
			text = "RTS Command";
			x = "0.30 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.40 * safezoneW";
			h = "0.04 * safezoneH";
			colorBackground[] = {0.15, 0.25, 0.45, 0.9};
			SizeEx = 0.04;
		};

		class SelectionInfo : RscText {
			idc = 9102;
			text = "";
			x = "0.30 * safezoneW + safezoneX";
			y = "0.29 * safezoneH + safezoneY";
			w = "0.40 * safezoneW";
			h = "0.03 * safezoneH";
			colorBackground[] = {0, 0, 0, 0};
			SizeEx = 0.03;
		};

		class BtnTakeTowns : RscButton {
			idc = 9110;
			text = "Take Towns";
			x = "0.32 * safezoneW + safezoneX";
			y = "0.33 * safezoneH + safezoneY";
			w = "0.36 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = 0; closeDialog 0";
		};
		class BtnHoldTown : RscButton {
			idc = 9111;
			text = "Hold Town";
			x = "0.32 * safezoneW + safezoneX";
			y = "0.38 * safezoneH + safezoneY";
			w = "0.36 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = 1; closeDialog 0";
		};
		class BtnGuardArea : RscButton {
			idc = 9112;
			text = "Guard Area";
			x = "0.32 * safezoneW + safezoneX";
			y = "0.43 * safezoneH + safezoneY";
			w = "0.36 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = 2; closeDialog 0";
		};
		class BtnAdvance : RscButton {
			idc = 9113;
			text = "Advance";
			x = "0.32 * safezoneW + safezoneX";
			y = "0.48 * safezoneH + safezoneY";
			w = "0.36 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = 3; closeDialog 0";
		};
		class BtnHalt : RscButton {
			idc = 9114;
			text = "Halt";
			x = "0.32 * safezoneW + safezoneX";
			y = "0.53 * safezoneH + safezoneY";
			w = "0.36 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = 4; closeDialog 0";
		};

		class BtnClose : RscButton {
			idc = 9120;
			text = "Cancel";
			x = "0.40 * safezoneW + safezoneX";
			y = "0.59 * safezoneH + safezoneY";
			w = "0.20 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
	};
};
