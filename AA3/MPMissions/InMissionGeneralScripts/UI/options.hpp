// TZK CTI for Arma 3 - Options Dialog (Phase E)
// Mirrors OFP: TZK_Patch5_4_0_6/s/description_10_options.h
// IDC base: IDC_OPTIONS_BASE (10000) from defines.hpp
// Layout: safezone-based, PuristaMedium, OFP colour-block proportions
//
// 按钮继承 RscButton（sound*）；勿在此 import RscButton — rtsDialogs.hpp 已 import，重复会 RPT。
// ListBox / Combo 须继承 RscListBox / RscCombo，否则缺 colorDisabled、ListScrollBar、arrowFull 等 → 大量 RPT。

import RscListBox;
import RscCombo;

class TZK_OptButton: RscButton {};

#define OPT_IDC(n) (IDC_OPTIONS_BASE + n)

// --- Text/label IDCs ---
#define OPT_IDC_MONEY       OPT_IDC(1)
#define OPT_IDC_SCORE       OPT_IDC(2)
#define OPT_IDC_TOWNS       OPT_IDC(3)
#define OPT_IDC_INCOME      OPT_IDC(4)
#define OPT_IDC_GAMETIME    OPT_IDC(5)

// --- Listbox / combo IDCs ---
#define OPT_IDC_TRANSFER_GRP   OPT_IDC(10)
#define OPT_IDC_TRANSFER_AMT   OPT_IDC(11)
#define OPT_IDC_REPORTS         OPT_IDC(12)
#define OPT_IDC_INCOME_CO       OPT_IDC(13)
#define OPT_IDC_INCOME_PLAYER   OPT_IDC(14)
#define OPT_IDC_CMD_TRANSFER    OPT_IDC(15)
#define OPT_IDC_WORKER_BHV      OPT_IDC(16)
#define OPT_IDC_AI_RESPAWN      OPT_IDC(17)
#define OPT_IDC_UPGRADE_LIST    OPT_IDC(18)

// --- Button IDCs (for show/hide control) ---
#define OPT_IDC_BTN_GIVE        OPT_IDC(30)
#define OPT_IDC_BTN_GIVE_AI     OPT_IDC(31)
#define OPT_IDC_BTN_GIVE_ALL    OPT_IDC(32)
#define OPT_IDC_BTN_TAKE        OPT_IDC(33)
#define OPT_IDC_BTN_CMD_XFER    OPT_IDC(34)
#define OPT_IDC_BTN_UPGRADE     OPT_IDC(35)
#define OPT_IDC_BTN_UPG_CANCEL  OPT_IDC(36)
#define OPT_IDC_BTN_DESTRUCT    OPT_IDC(37)
#define OPT_IDC_BTN_SPYSAT_BG   OPT_IDC(38)
#define OPT_IDC_BTN_NUMBERED_BG OPT_IDC(39)

// --- Shared geometry macros ---
#define OPT_X0   (safezoneX + safezoneW * 0.02)
#define OPT_W    (safezoneW * 0.96)
#define OPT_Y0   (safezoneY + safezoneH * 0.04)
#define OPT_H_FULL (safezoneH * 0.92)

#define OPT_COL1_X  (OPT_X0)
#define OPT_COL1_W  (safezoneW * 0.14)
#define OPT_COL2_X  (OPT_X0 + safezoneW * 0.15)
#define OPT_COL2_W  (safezoneW * 0.30)
#define OPT_COL3_X  (OPT_X0 + safezoneW * 0.46)
#define OPT_COL3_W  (safezoneW * 0.24)
#define OPT_COL4_X  (OPT_X0 + safezoneW * 0.71)
#define OPT_COL4_W  (safezoneW * 0.25)

#define OPT_ROW(r)  (OPT_Y0 + safezoneH * 0.04 + safezoneH * 0.032 * r)
#define OPT_ROW_H   (safezoneH * 0.028)
#define OPT_LBL_H   (safezoneH * 0.022)
#define OPT_LB_H    (safezoneH * 0.30)

class TZK_OptionsDialog
{
	idd = 9200;
	movingEnable = false;
	enableSimulation = true;
	onLoad = "uiNamespace setVariable ['TZK_OptionsDisplay', _this select 0]";
	onUnload = "uiNamespace setVariable ['TZK_OptionsDisplay', displayNull]";

	class controlsBackground
	{
		class OptBG
		{
			idc = -1;
			type = 0; style = 0;
			x = OPT_X0; y = OPT_Y0;
			w = OPT_W;  h = OPT_H_FULL;
			colorBackground[] = {0, 0, 0, 0.75};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium"; sizeEx = 0.001;
			text = "";
		};
		class OptSidebar
		{
			idc = -1;
			type = 0; style = 0;
			x = OPT_COL1_X; y = OPT_Y0;
			w = OPT_COL1_W; h = OPT_H_FULL;
			colorBackground[] = {0.08, 0.08, 0.12, 0.9};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium"; sizeEx = 0.001;
			text = "";
		};
	};

	class controls
	{
		// ==================== Title Bar ====================
		class OptTitle
		{
			idc = -1;
			type = 0; style = 2;
			x = OPT_COL2_X; y = OPT_Y0;
			w = (safezoneW * 0.81); h = (safezoneH * 0.035);
			colorBackground[] = {0.15, 0.35, 0.55, 0.85};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.025;
			text = "Options";
		};
		class OptExit: TZK_OptButton
		{
			idc = -1;
			style = 2;
			x = (OPT_X0 + OPT_W - safezoneW * 0.04);
			y = OPT_Y0;
			w = (safezoneW * 0.04);
			h = (safezoneH * 0.035);
			colorBackground[] = {0.6, 0.1, 0.1, 0.85};
			colorText[] = {1,1,1,1};
			colorFocused[] = {0.8, 0.2, 0.2, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.022;
			text = "X";
			action = "closeDialog 0";
		};

		// ==================== Column 1: Left sidebar buttons ====================
		class OptBtnSuicide: TZK_OptButton
		{
			idc = -1;
			style = 2;
			x = OPT_COL1_X; y = OPT_ROW(0);
			w = OPT_COL1_W; h = OPT_ROW_H;
			colorBackground[] = {0.25, 0.08, 0.08, 0.85};
			colorText[] = {0.9, 0.2, 0.2, 1};
			colorFocused[] = {0.5, 0.1, 0.1, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Suicide";
			action = "TZK_optResult = 'suicide'";
		};
		class OptBtnCmdRule: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = OPT_COL1_X; y = OPT_ROW(2);
			w = OPT_COL1_W; h = OPT_ROW_H;
			colorBackground[] = {0.15, 0.15, 0.2, 0.85};
			colorText[] = {0.9, 0.5, 0.25, 1};
			colorFocused[] = {0.25, 0.25, 0.35, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "CMD Rules";
			action = "TZK_optResult = 'cmdrule'";
		};
		class OptBtnVote: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = OPT_COL1_X; y = OPT_ROW(3.5);
			w = OPT_COL1_W; h = OPT_ROW_H;
			colorBackground[] = {0.15, 0.15, 0.2, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.25, 0.25, 0.35, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Vote";
			action = "TZK_optResult = 'vote'";
		};
		class OptBtnShowGroups: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = OPT_COL1_X; y = OPT_ROW(5);
			w = OPT_COL1_W; h = OPT_ROW_H;
			colorBackground[] = {0.15, 0.15, 0.2, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.25, 0.25, 0.35, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Shown Groups";
			action = "TZK_optResult = 'showngroups'";
		};
		class OptBtnConsole: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = OPT_COL1_X; y = OPT_ROW(18);
			w = OPT_COL1_W; h = OPT_ROW_H;
			colorBackground[] = {0.15, 0.15, 0.2, 0.85};
			colorText[] = {0.9, 0.7, 0.2, 1};
			colorFocused[] = {0.25, 0.25, 0.35, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Console";
			action = "TZK_optResult = 'console'";
		};

		// ==================== Column 2: Status + Transfer ====================
		class OptMoney
		{
			idc = OPT_IDC_MONEY;
			type = 0; style = 0;
			x = OPT_COL2_X; y = OPT_ROW(1);
			w = OPT_COL2_W; h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.3, 1, 0.3, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.02;
			text = "$ You/Side: ---";
		};
		class OptScore
		{
			idc = OPT_IDC_SCORE;
			type = 0; style = 0;
			x = OPT_COL2_X; y = OPT_ROW(2);
			w = (safezoneW * 0.14); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.9};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.02;
			text = "Score: ---";
		};
		class OptTowns
		{
			idc = OPT_IDC_TOWNS;
			type = 0; style = 0;
			x = OPT_COL2_X; y = OPT_ROW(3);
			w = (safezoneW * 0.14); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.9};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.02;
			text = "Towns: ---";
		};
		class OptIncome
		{
			idc = OPT_IDC_INCOME;
			type = 0; style = 0;
			x = OPT_COL2_X; y = OPT_ROW(4);
			w = OPT_COL2_W; h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 0.85, 0.3, 0.9};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.02;
			text = "Income: ---";
		};
		class OptTimeLabel
		{
			idc = -1;
			type = 0; style = 0;
			x = (OPT_COL2_X + safezoneW * 0.16); y = OPT_ROW(2);
			w = (safezoneW * 0.06); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.7, 0.7, 0.7, 0.7};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			text = "GameTime";
		};
		class OptGameTime
		{
			idc = OPT_IDC_GAMETIME;
			type = 0; style = 2;
			x = (OPT_COL2_X + safezoneW * 0.22); y = OPT_ROW(2);
			w = (safezoneW * 0.06); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0.3};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "0:00:00";
		};

		// --- Sub-menu buttons row ---
		class OptBtnLeaderboard: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = (OPT_COL2_X + safezoneW * 0.16); y = OPT_ROW(3);
			w = (safezoneW * 0.13); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Leaderboard";
			action = "TZK_optResult = 'leaderboard'";
		};
		class OptBtnCleanup: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = (OPT_COL2_X + safezoneW * 0.16); y = OPT_ROW(4);
			w = (safezoneW * 0.13); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Cleanup Ground";
			action = "TZK_optResult = 'cleanup'";
		};

		// --- Transfer Money section ---
		class OptTransferLabel
		{
			idc = -1;
			type = 0; style = 0;
			x = OPT_COL2_X; y = OPT_ROW(5.5);
			w = (safezoneW * 0.12); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.7, 0.7, 0.7, 0.9};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Transfer Money";
		};
		class OptBtnGive: TZK_OptButton
		{
			idc = OPT_IDC_BTN_GIVE;
			style = 2;
			x = (OPT_COL2_X + safezoneW * 0.13); y = OPT_ROW(5.5);
			w = (safezoneW * 0.04); h = OPT_ROW_H;
			colorBackground[] = {0.3, 0.5, 0.3, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.4, 0.65, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			text = "Give";
			action = "TZK_optResult = 'give'";
		};
		class OptBtnGiveAI: TZK_OptButton
		{
			idc = OPT_IDC_BTN_GIVE_AI;
			style = 2;
			x = (OPT_COL2_X + safezoneW * 0.175); y = OPT_ROW(5.5);
			w = (safezoneW * 0.03); h = OPT_ROW_H;
			colorBackground[] = {0.3, 0.45, 0.5, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.4, 0.55, 0.6, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.016;
			text = "AIs";
			action = "TZK_optResult = 'giveAIs'";
		};
		class OptBtnGiveAll: TZK_OptButton
		{
			idc = OPT_IDC_BTN_GIVE_ALL;
			style = 2;
			x = (OPT_COL2_X + safezoneW * 0.21); y = OPT_ROW(5.5);
			w = (safezoneW * 0.03); h = OPT_ROW_H;
			colorBackground[] = {0.3, 0.45, 0.5, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.4, 0.55, 0.6, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.016;
			text = "All";
			action = "TZK_optResult = 'giveAll'";
		};
		class OptBtnTake: TZK_OptButton
		{
			idc = OPT_IDC_BTN_TAKE;
			style = 2;
			x = (OPT_COL2_X + safezoneW * 0.245); y = OPT_ROW(5.5);
			w = (safezoneW * 0.045); h = OPT_ROW_H;
			colorBackground[] = {0.5, 0.3, 0.3, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.65, 0.4, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			text = "Take";
			action = "TZK_optResult = 'take'";
		};
		class OptBtnAICheck: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = (OPT_COL2_X + safezoneW * 0.13); y = OPT_ROW(6.5);
			w = (safezoneW * 0.06); h = (safezoneH * 0.024);
			colorBackground[] = {0.2, 0.2, 0.28, 0.7};
			colorText[] = {0.8, 0.8, 0.8, 0.8};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.015;
			text = "AI Check";
			action = "TZK_optResult = 'aicheck'";
		};
		class OptTransferGroup: RscListBox
		{
			idc = OPT_IDC_TRANSFER_GRP;
			style = 0;
			x = OPT_COL2_X; y = OPT_ROW(7.5);
			w = (safezoneW * 0.24); h = OPT_LB_H;
			colorBackground[] = {0.1, 0.1, 0.15, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {0.2, 0.35, 0.5, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			rowHeight = safezoneH * 0.024;
			maxHistoryDelay = 0.5;
		};
		class OptTransferAmount: RscListBox
		{
			idc = OPT_IDC_TRANSFER_AMT;
			style = 0;
			x = (OPT_COL2_X + safezoneW * 0.25); y = OPT_ROW(7.5);
			w = (safezoneW * 0.05); h = OPT_LB_H;
			colorBackground[] = {0.1, 0.1, 0.15, 0.85};
			colorText[] = {0.3, 1, 0.3, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {0.2, 0.35, 0.5, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			rowHeight = safezoneH * 0.024;
			maxHistoryDelay = 0.5;
		};

		// ==================== Column 3: Right-top buttons + income/worker ====================
		class OptBtnBuyUnits: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = OPT_COL3_X; y = OPT_ROW(1);
			w = (safezoneW * 0.115); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Buy Units...";
			action = "TZK_optResult = 'buyunits'";
		};
		class OptBtnCustomSoldiers: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = OPT_COL3_X; y = OPT_ROW(2);
			w = (safezoneW * 0.115); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Custom Soldiers...";
			action = "TZK_optResult = 'customsoldiers'";
		};
		class OptBtnCommandAI: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = OPT_COL3_X; y = OPT_ROW(3);
			w = (safezoneW * 0.115); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "AI Group Orders...";
			action = "TZK_optResult = 'commandai'";
		};
		class OptBtnShowStats: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = (OPT_COL3_X + safezoneW * 0.125); y = OPT_ROW(1);
			w = (safezoneW * 0.115); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Statistics...";
			action = "TZK_optResult = 'stats'";
		};
		class OptBtnUnitCam: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = (OPT_COL3_X + safezoneW * 0.125); y = OPT_ROW(2);
			w = (safezoneW * 0.115); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Unit Cam...";
			action = "TZK_optResult = 'unitcam'";
		};
		class OptBtnSatCam: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = (OPT_COL3_X + safezoneW * 0.125); y = OPT_ROW(3);
			w = (safezoneW * 0.115); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Sat Cam...";
			action = "TZK_optResult = 'satcam'";
		};
		class OptBtnDestruction: TZK_OptButton
		{
			idc = OPT_IDC_BTN_DESTRUCT;
			style = 0;
			x = OPT_COL3_X; y = OPT_ROW(4);
			w = (safezoneW * 0.115); h = OPT_ROW_H;
			colorBackground[] = {0.35, 0.15, 0.15, 0.85};
			colorText[] = {1, 0.6, 0.6, 1};
			colorFocused[] = {0.5, 0.2, 0.2, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Destruction...";
			action = "TZK_optResult = 'destruction'";
		};
		class OptBtnSpySat: TZK_OptButton
		{
			idc = OPT_IDC_BTN_SPYSAT_BG;
			style = 0;
			x = (OPT_COL3_X + safezoneW * 0.125); y = OPT_ROW(4);
			w = (safezoneW * 0.115); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Spy Satellite";
			action = "TZK_optResult = 'spysat'";
		};
		class OptBtnNumberedAI: TZK_OptButton
		{
			idc = OPT_IDC_BTN_NUMBERED_BG;
			style = 0;
			x = OPT_COL3_X; y = OPT_ROW(5.2);
			w = (safezoneW * 0.115); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Numbered AI";
			action = "TZK_optResult = 'numberedai'";
		};
		class OptBtnConcurrentRts: TZK_OptButton
		{
			idc = -1;
			style = 0;
			x = (OPT_COL3_X + safezoneW * 0.125); y = OPT_ROW(5.2);
			w = (safezoneW * 0.115); h = OPT_ROW_H;
			colorBackground[] = {0.2, 0.2, 0.28, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.3, 0.3, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.018;
			text = "Concurrent Orders";
			action = "TZK_optResult = 'concurrentrts'";
		};

		// --- Reports combo ---
		class OptReportsLabel
		{
			idc = -1;
			type = 0; style = 0;
			x = OPT_COL3_X; y = OPT_ROW(6.5);
			w = (safezoneW * 0.10); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.7, 0.7, 0.7, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.016;
			text = "Enemy Reports";
		};
		class OptReports: RscCombo
		{
			idc = OPT_IDC_REPORTS;
			style = 0;
			x = (OPT_COL3_X + safezoneW * 0.10); y = OPT_ROW(6.5);
			w = (safezoneW * 0.14); h = OPT_ROW_H;
			colorBackground[] = {0.12, 0.12, 0.18, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {0.2, 0.35, 0.5, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			wholeHeight = safezoneH * 0.12;
			maxHistoryDelay = 0.5;
		};

		// --- Income Ratio (Commander) ---
		class OptIncomeCoLabel
		{
			idc = -1;
			type = 0; style = 0;
			x = OPT_COL3_X; y = OPT_ROW(8);
			w = (safezoneW * 0.10); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.7, 0.7, 0.7, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.016;
			text = "Income CO";
		};
		class OptIncomeCo: RscCombo
		{
			idc = OPT_IDC_INCOME_CO;
			style = 0;
			x = (OPT_COL3_X + safezoneW * 0.10); y = OPT_ROW(8);
			w = (safezoneW * 0.06); h = OPT_ROW_H;
			colorBackground[] = {0.12, 0.12, 0.18, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {0.2, 0.35, 0.5, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			wholeHeight = safezoneH * 0.20;
			maxHistoryDelay = 0.5;
		};

		// --- Income Ratio (Player) ---
		class OptIncomePlayerLabel
		{
			idc = -1;
			type = 0; style = 0;
			x = (OPT_COL3_X + safezoneW * 0.17); y = OPT_ROW(8);
			w = (safezoneW * 0.04); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.7, 0.7, 0.7, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.016;
			text = "PLR";
		};
		class OptIncomePlayer: RscCombo
		{
			idc = OPT_IDC_INCOME_PLAYER;
			style = 0;
			x = (OPT_COL3_X + safezoneW * 0.21); y = OPT_ROW(8);
			w = (safezoneW * 0.03); h = OPT_ROW_H;
			colorBackground[] = {0.12, 0.12, 0.18, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {0.2, 0.35, 0.5, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			wholeHeight = safezoneH * 0.20;
			maxHistoryDelay = 0.5;
		};

		// --- Worker Behaviour ---
		class OptWorkerLabel
		{
			idc = -1;
			type = 0; style = 0;
			x = OPT_COL3_X; y = OPT_ROW(9.5);
			w = (safezoneW * 0.10); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.7, 0.7, 0.7, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.016;
			text = "Worker Behaviour";
		};
		class OptWorkerBhv: RscCombo
		{
			idc = OPT_IDC_WORKER_BHV;
			style = 0;
			x = (OPT_COL3_X + safezoneW * 0.10); y = OPT_ROW(9.5);
			w = (safezoneW * 0.14); h = OPT_ROW_H;
			colorBackground[] = {0.12, 0.12, 0.18, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {0.2, 0.35, 0.5, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			wholeHeight = safezoneH * 0.08;
			maxHistoryDelay = 0.5;
		};

		// --- Commander transfer ---
		class OptCmdLabel
		{
			idc = -1;
			type = 0; style = 0;
			x = OPT_COL3_X; y = OPT_ROW(11);
			w = (safezoneW * 0.08); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.7, 0.7, 0.7, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.016;
			text = "Commander";
		};
		class OptBtnCmdXfer: TZK_OptButton
		{
			idc = OPT_IDC_BTN_CMD_XFER;
			style = 2;
			x = (OPT_COL3_X + safezoneW * 0.08); y = OPT_ROW(11);
			w = (safezoneW * 0.06); h = OPT_ROW_H;
			colorBackground[] = {0.3, 0.3, 0.5, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.4, 0.4, 0.65, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			text = "Transfer";
			action = "TZK_optResult = 'cmdtransfer'";
		};
		class OptCmdCombo: RscCombo
		{
			idc = OPT_IDC_CMD_TRANSFER;
			style = 0;
			x = OPT_COL3_X; y = OPT_ROW(12);
			w = (safezoneW * 0.24); h = OPT_ROW_H;
			colorBackground[] = {0.12, 0.12, 0.18, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {0.2, 0.35, 0.5, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			wholeHeight = safezoneH * 0.20;
			maxHistoryDelay = 0.5;
		};

		// --- AI Respawn Pos ---
		class OptAIRespawnLabel
		{
			idc = -1;
			type = 0; style = 0;
			x = OPT_COL3_X; y = OPT_ROW(13.5);
			w = (safezoneW * 0.12); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.7, 0.7, 0.7, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.016;
			text = "AI Respawn Pos";
		};
		class OptAIRespawn: RscCombo
		{
			idc = OPT_IDC_AI_RESPAWN;
			style = 0;
			x = OPT_COL3_X; y = OPT_ROW(14.5);
			w = (safezoneW * 0.24); h = OPT_ROW_H;
			colorBackground[] = {0.12, 0.12, 0.18, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {0.2, 0.35, 0.5, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			wholeHeight = safezoneH * 0.15;
			maxHistoryDelay = 0.5;
		};

		// --- Upgrades section ---
		class OptUpgradesLabel
		{
			idc = -1;
			type = 0; style = 0;
			x = OPT_COL3_X; y = OPT_ROW(16);
			w = (safezoneW * 0.08); h = OPT_LBL_H;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {0.7, 0.7, 0.7, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.016;
			text = "Upgrades";
		};
		class OptBtnUpgrade: TZK_OptButton
		{
			idc = OPT_IDC_BTN_UPGRADE;
			style = 2;
			x = (OPT_COL3_X + safezoneW * 0.09); y = OPT_ROW(16);
			w = (safezoneW * 0.06); h = OPT_ROW_H;
			colorBackground[] = {0.3, 0.5, 0.3, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.4, 0.65, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			text = "Upgrade";
			action = "TZK_optResult = 'upgrade'";
		};
		class OptBtnUpgCancel: TZK_OptButton
		{
			idc = OPT_IDC_BTN_UPG_CANCEL;
			style = 2;
			x = (OPT_COL3_X + safezoneW * 0.16); y = OPT_ROW(16);
			w = (safezoneW * 0.06); h = OPT_ROW_H;
			colorBackground[] = {0.5, 0.3, 0.3, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorFocused[] = {0.65, 0.4, 0.4, 1};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			text = "Cancel";
			action = "TZK_optResult = 'upgcancel'";
		};
		class OptUpgradeList: RscListBox
		{
			idc = OPT_IDC_UPGRADE_LIST;
			style = 0;
			x = OPT_COL3_X; y = OPT_ROW(17);
			w = (safezoneW * 0.24); h = (safezoneH * 0.18);
			colorBackground[] = {0.1, 0.1, 0.15, 0.85};
			colorText[] = {1, 1, 1, 1};
			colorSelect[] = {1, 1, 1, 1};
			colorSelectBackground[] = {0.2, 0.35, 0.5, 0.8};
			font = "PuristaMedium"; sizeEx = safezoneH * 0.017;
			rowHeight = safezoneH * 0.024;
			maxHistoryDelay = 0.5;
		};
	};
};
