class OptionsDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {OptionsBackgroundWindow_Light, OptionsBackgroundWindow, OptionsBackgroundWindow_Dark};
	objects[] = { };
	controls[] = {
		OptionsTitle,
		Money, Score, Leaderboard, Destruction, Towns, Income, CleanupGround,
		NumberedAIBG, NumberedAI, ReportsLabel, Reports,
		OptionsTimeLabel, OptionsGameTime,
		TransferLabel, TransferTarget, TransferAmount,Transfer, TransferAIs, TransferAll, TransferTake, AICheck,
		BuyUnits, CustomSoldiers, CommandAI, ShowStats, UnitCam, SatCam, SpySatBG, SpySat, RadioONBG, RadioONBtn,
		IncomeRatioLabel, IncomeRatio, IncomeRatioPlayer, CommanderLabel, Commander, CommanderTransfer,
		WorkerBehaviourLabel, WorkerBehaviour, AIRespawnLabel, AIRespawn,
		UpgradesLabel, Upgrades, Upgrade, Exit, HiddenDefault, UpgSwitch, UpgCancel, 
		VoteButton, TZK_Mission_Setting_1, TZK_Mission_Setting_2, 
		CmdRuleButton, 
		SuicideButton,
		Console, 
		ShowsGroupsDialog, 
		CommandTemporary, 
		Query,
	};
	class OptionsBackgroundWindow: BackgroundWindow {
		x = 0.2;
		y = 0.0;
		w = 0.8;
		h = 0.73;
	};
	class OptionsBackgroundWindow_Light: Light_BG_Window {
		x = 0.0;
		y = 0.0;
		w = 1.0;
		h = 0.73;
	};
	class OptionsBackgroundWindow_Dark: Dark_BG_Window {
		x = 0.0;
		y = 0.0;
		w = 0.2;
		h = 0.73;
	};

	class OptionsTitle: Title {
		style = ST_CENTER;
		x = 0.2;
		y = 0.0;
		w = 0.8;
		text = "Options";
	};
	class Money: Text {
		idc = IDC+0;
		x = 0.21;
		y = 0.06;
		w = 0.38;
	};
	class Score: Text {
		idc = IDC+1;
		x = 0.21;
		y = 0.10;
		w = 0.24;
	};
	class Leaderboard: Button {
		idc = IDC + 100 + 6;
		x = 0.42;
		y = 0.09;
		w = 0.18;
		text = "Leaderboard...";
		action = "btnValue01 = 6";
	};
	class Destruction: Button {
		idc = IDC + 17
		x = 0.42;
		y = 0.13;
		w = 0.18;
		text = "Destruction...";
		action = "btnDestruction = true";
	};
	class Towns: Text {
		idc = IDC+2;
		x = 0.21;
		y = 0.14;
		w = 0.19;
	};
	class CleanupGround: Button {
		idc = IDC + 100 + 5;
		x = 0.42;
		y = 0.05;
		w = 0.18;
		text = "Cleanup Ground";
		action = "closeDialog 0; [getPos player] exec (TzkScripts select 076)";
	};
	class Income: Text {
		idc = IDC+3;
		x = 0.21;
		y = 0.18;
		w = 0.38;
	};

	class NumberedAI: Button {
		x = 0.21;
		y = 0.23;
		w = 0.18;
		text = "Numbered AI";
		action = "btnNumberedAI = true";
	};
	class NumberedAIBG: SelectedBG {
		idc = IDC+4;
		x = 0.21;
		y = 0.23;
		w = 0.18;
	};

	class ReportsLabel: Label {
		x = 0.40;
		y = 0.20;
		w = 0.19;
		text = "Enemy Reports";
	};
	class Reports: ComboBox {
		idc = IDC+8;
		x = 0.40;
		y = 0.23;
		w = 0.19;
	};

	class OptionsTimeLabel: Label {
		x = 0.40;
		y = 0.28;
		w = 0.19;
		text = "GameTime";
	};
	class OptionsGameTime: Text {
		idc = IDC_TEXT_GAMETIME_Options;
		style = ST_CENTER;
		x = 0.40;
		y = 0.31;
		w = 0.09;
		h = 0.03;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.3};
	};
	
	class MemberMarkersLabel: Label {
		x = 0.21;
		y = 0.28;
		w = 0.18;
		text = "Extra AI Markers";
	};
	class MemberMarkers: ComboBox {
		idc = IDC+7;
		x = 0.21;
		y = 0.31;
		w = 0.18;
	};

	class TransferLabel: Label {
		x = 0.21;
		y = 0.35;
		w = 0.2;
		text = "Transfer Money";
	};
	class Transfer: Button {
		x = 0.50;
		y = 0.35;
		w = 0.09;
		h = 0.03;
		text = "Give";
		action = "btnGive = true";
	colorBackground[] = {0.82,0.82,0.82,1};
	};
	class TransferAIs: Button {
		idc = IDC+19;
		x = 0.50;
		y = 0.29;
		w = 0.04;
		h = 0.03;
		text = "AIs";
		action = "btnGiveAIs = true";
	colorBackground[] = {0.82,0.82,0.82,1};
	};
	class TransferAll: Button {
		idc = IDC+23;
		x = 0.55;
		y = 0.29;
		w = 0.04;
		h = 0.03;
		text = "All";
		action = "btnGiveAll = true";
	colorBackground[] = {0.82,0.82,0.82,1};
	};
	class TransferTake: Button {
		idc = IDC+20;
		x = 0.50;
		y = 0.32;
		w = 0.09;
		h = 0.03;
		text = "Take";
		action = "btnTake = true";
	colorBackground[] = {0.82,0.82,0.82,1};
	};
	class TransferTarget: ListBox {
		idc = IDC+5;
		x = 0.21;
		y = 0.38;
		w = 0.31;
		h = 0.33;
	};
	class TransferAmount: ListBox {
		idc = IDC+6;
		x = 0.52;
		y = 0.38;
		w = 0.07;
		h = 0.33;
	};

	class BuyUnits: Button {
		idc = IDC + 100 + 7;
		x = 0.61;
		y = 0.05;
		w = 0.18;
		text = "Buy Units...";
		action = "btnValue01 = 7";
	};
	class CustomSoldiers: Button {
		idc = IDC + 100 + 8;
		x = 0.61;
		y = 0.09;
		w = 0.18;
		text = "Custom Soldiers...";
		action = "btnValue01 = 8";
	};
	class CommandAI: Button {
		idc = IDC + 12;
		x = 0.61;
		y = 0.13;
		w = 0.18;
		text = "AI Group Orders...";
		action = "btnCommandAI = true";
	};
	class ShowStats: Button {
		idc = IDC + 100 + 9;
		x = 0.81;
		y = 0.05;
		w = 0.18;
		text = "Statistics...";
		action = "btnValue01 = 9";
	};
	class UnitCam: Button {
		idc = IDC + 100 + 10;
		x = 0.81;
		y = 0.09;
		w = 0.18;
		text = "Unit Cam...";
		action = "btnValue01 = 10";
	};
	class SatCam: Button {
		idc = IDC + 100 + 11;
		x = 0.81;
		y = 0.13;
		w = 0.18;
		text = "Sat Cam...";
		action = "btnValue01 = 11";
	};

	class GameInfo: Button {
		x = 0.81;
		y = 0.17;
		w = 0.18;
		text = "Game Info...";
		action = "closeDialog 0; 0 exec (TzkScripts select 077)";
	};

	class IncomeRatioLabel: Label {
		idc = IDC + 100 + 13;
		x = 0.61;
		y = 0.27;
		w = 0.17;
		text = "Income CO/PLAYER";
	};
	class IncomeRatio: ComboBox {
		idc = IDC+9;
		x = 0.61;
		y = 0.30;
		w = 0.08;
	};
	class IncomeRatioPlayer: ComboBox {
		idc = IDC+18;
		x = 0.69;
		y = 0.30;
		w = 0.09;
	};

	class WorkerBehaviourLabel: Label {
		idc = IDC + 100 + 15;
		x = 0.61;
		y = 0.34;
		w = 0.17;
		text = "Worker behaviour";
	};
	class WorkerBehaviour: ComboBox {
		idc = IDC+16;
		x = 0.61;
		y = 0.37;
		w = 0.17;
	};

	class CommanderLabel: Label {
		idc = IDC + 100 + 14;
		x = 0.79;
		y = 0.27;
		w = 0.11;
		text = "Commander";
	};
	class CommanderTransfer: Button {
		idc = IDC + 100 + 17;
		x = 0.90;
		y = 0.27;
		w = 0.09;
		h = 0.03;
		text = "Transfer";
		action = "btnValue01 = 17";
	};
	class Commander: ComboBox {
		idc = IDC+11;
		x = 0.79;
		y = 0.30;
		w = 0.20;
	};

	class AIRespawnLabel: Label {
		idc = IDC + 100 + 16;
		x = 0.79;
		y = 0.34;
		w = 0.20;
		text = "AI Respawn Pos";
	};
	class AIRespawn: ComboBox {
		idc = IDC+13;
		x = 0.79;
		y = 0.37;
		w = 0.20;
	};

	class UpgradesLabel: Label {
		idc = IDC + 100 + 18;
		x = 0.61;
		y = 0.44;
		w = 0.2;
		text = "Upgrades";
	};
	class Upgrade: Button {
		idc = IDC + 100 + 20;
		x = 0.89;
		y = 0.44;
		w = 0.1;
		h = 0.03;
		text = "Upgrade";
		action = "btnValue01 = 20";
	};
	class Upgrades: ListBox {
		idc = IDC+15;
		x = 0.61;
		y = 0.47;
		w = 0.38;
		h = 0.24
	};

	class Exit: Button {
		x = 0.95;
		y = 0.0;
		w = 0.05;
		h = 0.03;
		text = "Exit";
		action = "closeDialog 0";
	};

	class HiddenDefault: Button {
		idc = IDC_DEFAULT;
		default = true;
		x = -1;
		y = -1;
		w = 0;
		h = 0;
		text = "";
		action = "";
	};

	class AICheck: Button {
		x = 0.40;
		y = 0.35;
		w = 0.09;
		h = 0.03;
		text = "AICheck";
		action = "btnAICheck = true";
		colorBackground[] = {0.82,0.82,0.82,1};
	};
	class CommandTemporary: Button {
		sizeEX = 0.024;
 		idc = IDC + 21;
		x = 0.61;
		y = 0.17;
		w = 0.18;
		text = "Concurrent Orders...";
		action = "btnCommandTemporary = true";
	};
	class SpySatBG: SelectedBG {
		idc = IDC + 22
		x = 0.81;
		y = 0.17;
		w = 0.18;
	};
	class SpySat: Button {
		idc = IDC + 100 + 12;
		x = 0.81;
		y = 0.17;
		w = 0.18;
		text = "Spy Satellite...";
		action = "btnValue01 = 12";
	};

	class RadioONBG: SelectedBG {
		idc = IDC + 24
		x = 0.80;
		y = 0.0;
		w = 0.15;
		h = 0.03;
	};
	class RadioONBtn: Button {
		idc = IDC + 25
		x = 0.80;
		y = 0.0;
		w = 0.15;
		h = 0.03;
		text = "Receive Radio";
		action = "btnRadioON = true";
	};
	
	class UpgSwitch: Button {
		idc = IDC+26;
		x = 0.79;
		y = 0.44;
		w = 0.1;
		h = 0.03;
		text = "Switch";
		action = "btnUpgSwitch = true";
	};


	class VoteButton: Button {
		idc = IDC + 100 + 4;
		x = 0.025;
		y = 0.26;
		w = 0.15;
		text = "";
		action = "btnValue01 = 4";
	};
	class HelpButton: Button {
		x = 0.025;
		y = 0.305;
		w = 0.15;
		text = "Online Help";
	};
	class TZK_Mission_Setting_1: Button {
		x = 0.025;
		y = 0.35;
		w = 0.15;
		colorText[] = {0.9,0.7,0.2,1.0};
		text = "TZK Setting 1";
		action = "closeDialog 0; 0.4 exec (TzkScripts select 025) ";
		sizeEx = 0.023;
	};
	class TZK_Mission_Setting_2: TZK_Mission_Setting_1 {
		y = 0.395;
		text = "TZK Setting 2";
		action = "closeDialog 0; 0 exec (TzkScripts select 026) ";
	};
	class UpgCancel: Upgrade {
		idc = IDC + 100 + 19;
		x = 0.79;
		text = "Cancel";
		action = "btnValue00 = 0";
	};
	class SuicideButton: Button {
		idc = IDC + 100 + 3;
		x = 0;
		y = 0;
		w = 0.10;
		text = "Suicide";
		action = "btnValue01 = 3";

		colorText[] = {0.9,0.1,0.1,1.0};
		sizeEx = 0.023;
	};
	class CmdRuleButton: Button {
		idc = IDC + 100 + 2;
		x = 0.025;
		y = 0.18;
		w = 0.15;
		text = "CMD Rules Menu";
		action = "btnValue01 = 2";

		colorText[] = {0.9,0.4,0.2,1.0};
		sizeEx = 0.023;
	};
	class ShowsGroupsDialog: Button {
		idc = IDC + 7;
		x = 0.21;
		y = 0.31;
		w = 0.18;
		text = "Shown Groups";
		action = "closeDialog 0; 0 exec (TzkScripts select 023)";
	};
	class Console: Button {
		idc = IDC + 100 + 0;
		x = 0.025;
		y = 0.60;
		w = 0.15;
		colorText[] = {0.9,0.7,0.2,1.0};
		text = "Console";
		action = "closeDialog 0; 0 exec (TzkScripts select 018)";
		sizeEx = 0.023;
	};
	class Query: Button {
		idc = IDC + 100 + 1;
		x = 0.025;
		y = 0.05;
		w = 0.15;
		text = "Query";
		action = "closeDialog 0; 0 exec (TzkScripts select 021)";
	};
};