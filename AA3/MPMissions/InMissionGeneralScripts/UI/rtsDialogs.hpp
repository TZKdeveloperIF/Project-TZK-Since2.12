// TZK CTI - RTS Dialog (A3 full-screen recreation of OFP TzkCmdMapDlgRts)
//
// Source references:
//   description_29_rtsDlgBase.h     — background regions, IDC scheme, DownBtn/RightDownBtn
//   description_30_rtsMainDialog.h  — TzkCmdMapDlgRts left command buttons
//   RtsMap.sqs + stringtable.csv    — button labels (Chinese column)
//   UpdateRtsDownBoard.sqf          — DownBtn initial labels
//   InitSwitchDialogBtns.sqf        — RightDownBtn tab labels
//
// All coordinates use safezone expressions → fills entire screen on any aspect ratio.
// OFP 0-1 coords → (frac * safezoneW + safezoneX, frac * safezoneH + safezoneY).
//
// 字体：PuristaMedium（A3 原版）。不少玩家认为较默认 Roboto 更易读；中文仍由系统回退字形渲染。

import RscText;
import RscButton;

class TZK_RtsOrderDlg {
	idd = 9100;
	movingEnable = 1;
	onLoad = "uiNamespace setVariable ['TZK_RtsOrderDisplay', _this select 0]";

	// ==================== Background regions ====================
	class controlsBackground {
		class LeftBg : RscText {
			idc = -1;
			x = "safezoneX";
			y = "safezoneY";
			w = "0.30 * safezoneW";
			h = "0.80 * safezoneH";
			colorBackground[] = {0.15, 0.15, 0.15, 0.88};
		};
		class MapBg : RscText {
			idc = -1;
			x = "0.30 * safezoneW + safezoneX";
			y = "safezoneY";
			w = "0.70 * safezoneW";
			h = "0.80 * safezoneH";
			colorBackground[] = {0.1, 0.1, 0.1, 0.12};
		};
		class LeftDownArea : RscText {
			idc = -1;
			x = "safezoneX";
			y = "0.80 * safezoneH + safezoneY";
			w = "0.30 * safezoneW";
			h = "0.14 * safezoneH";
			colorBackground[] = {0.4, 0.6, 0.5, 0.75};
		};
		class DownArea : RscText {
			idc = -1;
			x = "0.30 * safezoneW + safezoneX";
			y = "0.80 * safezoneH + safezoneY";
			w = "0.40 * safezoneW";
			h = "0.14 * safezoneH";
			colorBackground[] = {0.6, 0.5, 0.4, 0.75};
		};
		class RightDownArea : RscText {
			idc = -1;
			x = "0.70 * safezoneW + safezoneX";
			y = "0.80 * safezoneH + safezoneY";
			w = "0.30 * safezoneW";
			h = "0.14 * safezoneH";
			colorBackground[] = {0.4, 0.5, 0.6, 0.75};
		};
		class Bg4Group : RscText {
			idc = -1;
			x = "safezoneX";
			y = "0.94 * safezoneH + safezoneY";
			w = "safezoneW";
			h = "0.06 * safezoneH";
			colorBackground[] = {0, 0.2, 0.9, 0.05};
		};
	};

	// ==================== Controls ====================
	class controls {

		// ---------- Info / utility ----------
		class SelectionInfo : RscText {
			idc = 9102;
			font = "PuristaMedium";
			text = "";
			x = "0.31 * safezoneW + safezoneX";
			y = "0.005 * safezoneH + safezoneY";
			w = "0.35 * safezoneW";
			h = "0.035 * safezoneH";
			colorBackground[] = {0, 0, 0, 0};
			SizeEx = "0.028 * safezoneH";
		};

		class BtnUnselect : RscButton {
			font = "PuristaMedium";
			idc = 9130;
			text = "取消选择";
			x = "0.30 * safezoneW + safezoneX";
			y = "0.76 * safezoneH + safezoneY";
			w = "0.10 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnExit : RscButton {
			font = "PuristaMedium";
			idc = 9140;
			text = "退出";
			x = "0.95 * safezoneW + safezoneX";
			y = "safezoneY";
			w = "0.05 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};

		// =====================================================================
		//  Left column (OFP TzkCmdMapDlgRts LeftBtn0-16)
		//  Chinese labels from stringtable.csv
		// =====================================================================

		class BtnClearOrder : RscButton {
			font = "PuristaMedium";
			idc = 9201;
			text = "清除 RTS 命令";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.04 * safezoneH + safezoneY";
			w = "0.25 * safezoneW";
			h = "0.04 * safezoneH";
			colorText[] = {0, 0.7, 0.9, 1.0};
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnStop : RscButton {
			font = "PuristaMedium";
			idc = 9213;
			text = "停止";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.10 * safezoneH + safezoneY";
			w = "0.12 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnMove : RscButton {
			font = "PuristaMedium";
			idc = 9200;
			text = "移动";
			x = "0.155 * safezoneW + safezoneX";
			y = "0.10 * safezoneH + safezoneY";
			w = "0.12 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnShootArea : RscButton {
			font = "PuristaMedium";
			idc = 9202;
			text = "炮击 区域";
			x = "0.115 * safezoneW + safezoneX";
			y = "0.15 * safezoneH + safezoneY";
			w = "0.16 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnMoveShoot : RscButton {
			font = "PuristaMedium";
			idc = 9203;
			text = "移动 和 炮击";
			x = "0.115 * safezoneW + safezoneX";
			y = "0.20 * safezoneH + safezoneY";
			w = "0.16 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnBoard : RscButton {
			font = "PuristaMedium";
			idc = 9204;
			text = "登车";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.25 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnOccupy : RscButton {
			font = "PuristaMedium";
			idc = 9205;
			text = "占领建筑";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.30 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnDisableMine : RscButton {
			font = "PuristaMedium";
			idc = 9209;
			text = "解除 地雷";
			x = "0.115 * safezoneW + safezoneX";
			y = "0.30 * safezoneH + safezoneY";
			w = "0.16 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnReclaim : RscButton {
			font = "PuristaMedium";
			idc = 9207;
			text = "回收载具";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.35 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnMineArea : RscButton {
			font = "PuristaMedium";
			idc = 9208;
			text = "埋雷 区域";
			x = "0.115 * safezoneW + safezoneX";
			y = "0.35 * safezoneH + safezoneY";
			w = "0.16 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnLand : RscButton {
			font = "PuristaMedium";
			idc = 9206;
			text = "降落";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.40 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnCrossBridge : RscButton {
			font = "PuristaMedium";
			idc = 9212;
			text = "穿过桥";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.45 * safezoneH + safezoneY";
			w = "0.12 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnRepair : RscButton {
			font = "PuristaMedium";
			idc = 9210;
			text = "维修";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.50 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnBuyEquip : RscButton {
			font = "PuristaMedium";
			idc = 9216;
			text = "购买 装备";
			x = "0.115 * safezoneW + safezoneX";
			y = "0.50 * safezoneH + safezoneY";
			w = "0.16 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnRearm : RscButton {
			font = "PuristaMedium";
			idc = 9211;
			text = "装弹";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.55 * safezoneH + safezoneY";
			w = "0.08 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnMoveLand : RscButton {
			font = "PuristaMedium";
			idc = 9214;
			text = "移动 陆地";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.60 * safezoneH + safezoneY";
			w = "0.12 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class BtnMoveShip : RscButton {
			font = "PuristaMedium";
			idc = 9215;
			text = "移动 船";
			x = "0.025 * safezoneW + safezoneX";
			y = "0.65 * safezoneH + safezoneY";
			w = "0.12 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};

		// =====================================================================
		//  Bottom-center (OFP DownBtn grid)
		//  Layout: 4 columns × 3 rows inside DownArea（宽 0.40，按钮总宽 0.32 → 左右各留 0.04 居中）
		//  x: 0.34 / 0.42 / 0.50 / 0.58
		//  OFP y: row0=0.81    row1=0.85   row2=0.89
		//  w = 0.080,  h = 0.04
		//  Labels from UpdateRtsDownBoard.sqf initial state + stringtable Chinese
		// =====================================================================

		// Row 0
		class DownBtnWatch : RscButton {
			font = "PuristaMedium";
			idc = 9309;
			text = "观察";
			x = "0.34 * safezoneW + safezoneX";
			y = "0.81 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class DownBtnDisband : RscButton {
			font = "PuristaMedium";
			idc = 9300;
			text = "删除";
			x = "0.42 * safezoneW + safezoneX";
			y = "0.81 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class DownBtnEject : RscButton {
			font = "PuristaMedium";
			idc = 9301;
			text = "跳车";
			x = "0.50 * safezoneW + safezoneX";
			y = "0.81 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class DownBtnGetOff : RscButton {
			font = "PuristaMedium";
			idc = 9302;
			text = "下车";
			x = "0.58 * safezoneW + safezoneX";
			y = "0.81 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};

		// Row 1
		class DownBtnSeat : RscButton {
			font = "PuristaMedium";
			idc = 9310;
			text = "座位";
			x = "0.34 * safezoneW + safezoneX";
			y = "0.85 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class DownBtnJoin : RscButton {
			font = "PuristaMedium";
			idc = 9303;
			text = "Join";
			x = "0.42 * safezoneW + safezoneX";
			y = "0.85 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class DownBtnAttach : RscButton {
			font = "PuristaMedium";
			idc = 9304;
			text = "Attach";
			x = "0.50 * safezoneW + safezoneX";
			y = "0.85 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class DownBtnAir : RscButton {
			font = "PuristaMedium";
			idc = 9305;
			text = "Air";
			x = "0.58 * safezoneW + safezoneX";
			y = "0.85 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};

		// Row 2
		class DownBtnEngOff : RscButton {
			font = "PuristaMedium";
			idc = 9311;
			text = "关引擎";
			x = "0.34 * safezoneW + safezoneX";
			y = "0.89 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class DownBtnTransp : RscButton {
			font = "PuristaMedium";
			idc = 9306;
			text = "运输";
			x = "0.42 * safezoneW + safezoneX";
			y = "0.89 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class DownBtnTank : RscButton {
			font = "PuristaMedium";
			idc = 9307;
			text = "Tank";
			x = "0.50 * safezoneW + safezoneX";
			y = "0.89 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class DownBtnArt : RscButton {
			font = "PuristaMedium";
			idc = 9308;
			text = "火炮";
			x = "0.58 * safezoneW + safezoneX";
			y = "0.89 * safezoneH + safezoneY";
			w = "0.080 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};

		// =====================================================================
		//  Bottom-right (OFP RightDownBtn — dialog tab switching)
		//  OFP x: 0.71 + 0.09*col,  y: 0.81 + 0.04*row,  w=0.09
		//  Labels from InitSwitchDialogBtns.sqf + stringtable Chinese
		// =====================================================================

		class RightBtnRts : RscButton {
			font = "PuristaMedium";
			idc = 9400;
			text = "RTS";
			x = "0.71 * safezoneW + safezoneX";
			y = "0.81 * safezoneH + safezoneY";
			w = "0.09 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class RightBtnArea : RscButton {
			font = "PuristaMedium";
			idc = 9401;
			text = "区域";
			x = "0.80 * safezoneW + safezoneX";
			y = "0.81 * safezoneH + safezoneY";
			w = "0.09 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class RightBtnWpCo : RscButton {
			font = "PuristaMedium";
			idc = 9402;
			text = "WP/CO";
			x = "0.89 * safezoneW + safezoneX";
			y = "0.81 * safezoneH + safezoneY";
			w = "0.09 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class RightBtnOrder : RscButton {
			font = "PuristaMedium";
			idc = 9403;
			text = "命令";
			x = "0.71 * safezoneW + safezoneX";
			y = "0.85 * safezoneH + safezoneY";
			w = "0.09 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
		class RightBtnPoint : RscButton {
			font = "PuristaMedium";
			idc = 9404;
			text = "坐标";
			x = "0.80 * safezoneW + safezoneX";
			y = "0.85 * safezoneH + safezoneY";
			w = "0.09 * safezoneW";
			h = "0.04 * safezoneH";
			action = "TZK_rtsDialogResult = -1; closeDialog 0";
		};
	};
};
