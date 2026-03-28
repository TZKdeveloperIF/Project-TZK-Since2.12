// TZK CTI - Global Script Registry (TzkScripts)
// Mirrors OFP: Init/GblScripts.sqf
// Preserves index positions for maintainer cross-reference with OFP TZK
// Paths point to A3 .sqf files; empty strings = not yet migrated / OFP-mod-only

TzkScripts = [];
TzkScripts resize 408;
for "_i" from 0 to 407 do { TzkScripts set [_i, ""] };

// === Core system scripts (indices match OFP GblScripts.sqf) ===

// 003: NewOrder - unit purchase entry (Phase C)
TzkScripts set [3, "Server/BuyUnit/fn_newOrder.sqf"];
// 004: LeaderAI start (Phase B)
TzkScripts set [4, ""];
// 006: AI_Stop
TzkScripts set [6, ""];
// 075: Factory loop (Phase C)
TzkScripts set [75, "Server/BuyUnit/fn_factory.sqf"];

// 100-111: Server AI orders (Phase D)
TzkScripts set [100, "Server/Order/fn_takeTowns.sqf"];
TzkScripts set [101, ""];  // TakeHoldTowns
TzkScripts set [102, "Server/Order/fn_holdTown.sqf"];
TzkScripts set [103, "Server/Order/fn_guardArea.sqf"];
TzkScripts set [105, ""];  // PatrolArea
TzkScripts set [107, "Server/Order/fn_advance.sqf"];
TzkScripts set [111, "Server/Order/fn_halt.sqf"];

// 138: CheckWinTowns (Phase B)
TzkScripts set [138, "Server/fn_checkWinTowns.sqf"];
// 152: TimeUntilTownWin info
TzkScripts set [152, ""];
// 156: UnitBuilding info
TzkScripts set [156, ""];
// 158: GroupFull info
TzkScripts set [158, ""];
// 159: NoMoneyUnit info
TzkScripts set [159, ""];
// 160: TimeLimitRemind info
TzkScripts set [160, ""];

// 162: Marker struct (Phase E)
TzkScripts set [162, ""];
// 166-168: Money Add/Spend/Transfer (Phase B/C)
TzkScripts set [166, "Server/Money/fn_moneyAdd.sqf"];
TzkScripts set [167, "Server/Money/fn_moneySpend.sqf"];
TzkScripts set [168, ""];  // Transfer

// 174: Score (Phase B)
TzkScripts set [174, "Net/fn_score.sqf"];
// 180: TownSideChange (Phase B)
TzkScripts set [180, "Net/fn_townSideChange.sqf"];

// 210: BuildStruct (Phase C)
TzkScripts set [210, "Server/fn_buildStruct.sqf"];
// 214: ResetStructureUp
TzkScripts set [214, ""];
// 216: PrimaryStruct init
TzkScripts set [216, ""];

// 229: TriggerGameEnd (Phase B)
TzkScripts set [229, ""];
// 231: TownTrigger (Phase B)
TzkScripts set [231, "Server/fn_townTrigger.sqf"];

// 244: Options_Init (Phase E)
TzkScripts set [244, "UI/fn_optionsInit.sqf"];
// 256: buildingMenu (Phase E)
TzkScripts set [256, "UI/fn_buildMenu.sqf"];
// 257: BuyUnits (Phase E)
TzkScripts set [257, "UI/fn_buyUnits.sqf"];
// 269: Options dialog (Phase E)
TzkScripts set [269, "UI/fn_options.sqf"];
// 270: Options_Update (Phase E)
TzkScripts set [270, "UI/fn_optionsUpdate.sqf"];

// 307: Income calculation (Phase B)
TzkScripts set [307, "Server/fn_income.sqf"];
// 311: svrStartVehs (Phase B)
TzkScripts set [311, ""];
// 312: CheckWinDestruction (Phase B)
TzkScripts set [312, "Server/fn_checkWinDestruction.sqf"];
// 314: CheckWinSurrender
TzkScripts set [314, ""];

// Script count check (matches OFP: 407+1 = 408)
if (count TzkScripts != 408) then {
	diag_log format ["TZK CTI ERROR: TzkScripts count mismatch! Expected 408, got %1", count TzkScripts];
};

diag_log "TZK CTI: TzkScripts registry loaded (408 slots)";
