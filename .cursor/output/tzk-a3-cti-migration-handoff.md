---
project: Project-TZK-Since2.12
topic: TZK CTI → Arma 3 Malden migration
last_context_update: 2026-03-28
doc_roles: [agent_digest, human_narrative]
related_files:
  - .cursor/output/tzk-cti-project-context.md
  - c:/Users/IFthe/.cursor/plans/tzk_cti_arma3_migration_7a0fdef0.plan.md
---

<!-- 新会话：优先只读下方 AGENT_DIGEST；实施细节以本文件 + 计划文件为准。人类读者可跳至「人类可读」。 -->

<!-- AGENT_DIGEST_START -->

**是否新开会话**：上下文约 131.8k/200k 时仍有余量；实施会大量读文件，**建议在开始写代码前固化本 handoff**（已完成）。新会话首读本文件 + `tzk-cti-project-context.md`（OFP 原架构）。

**输出根**：`AA3/MPMissions/`

| 桶 | 路径 |
|----|------|
| 通用（对应 OFP `MPMissions/General Scripts in Mission/`） | `AA3/MPMissions/InMissionGeneralScripts/` |
| 地图绑定（对应 OFP `mission.sqm(and Extra folder)/`） | `AA3/MPMissions/mission.sqm/TZK_CTI.Malden/` |

**整合**：建 `TZK_CTI.Malden` → xcopy InMissionGeneralScripts 全部 → xcopy `mission.sqm/TZK_CTI.Malden` 全部（覆盖）→ 放入 A3 `MPMissions/`。`init.sqf`、`initServer.sqf`、`initPlayerLocal.sqf`、`description.ext` 必须与 `mission.sqm` 同级（在通用桶根层）。

**阶段**：A 骨架 → B 经济/城镇/胜利 → C 工厂/建造 → D RTS → **E Options+UI**（Options 先于子菜单）。

**语法**：SQS→SQF；`loadFile`→`compile preprocessFileLineNumbers`；`publicExec`→`remoteExec`；`getPos`/`setPos`→ATL 优先；`createVehicle` 后关随机化。

**TzkScripts**：保留索引表对照 OFP `Init/GblScripts.sqf`；模组专属槽位可 `""`；关键索引示例：003 NewOrder, 075 Factory, 138 CheckWinTowns, 167 Spend, 180 TownSideChange, 229 TriggerGameEnd, 231 TownTrigger, 307 Income, 312 CheckWinDestruction, **269 Options**。

**数据**：`towns[]` `[flag,name,value,side]`；`structDefs`/`unitDefs` 保留 sd*/ud*；无 vanilla 对应则空/不可购；Malden 9 城坐标见计划 §六。

**Options（曾遗漏，已纳入）**：OFP `TZK_Patch5_4_0_6/s/UI/Options.sqs`（269）、`Options_Init.sqf`（244）、`Options_Update.sqf`（270）、`description_10_options.h`；入口 `Player/Action/Options.sqs`、`TZK_Scripts_4_0_5/Player/UpdateOptionsAction.sqs`；跳伞时 Radio 见 `Player/Radio/entrance.sqs`（195）。

**OFP 权威链**（对照用）：`MPMissions/General Scripts in Mission/init.sqs`；`Init/MissionEnv.sqf`；`Init/GblScripts.sqf`；`Init/SvrFormalStart.sqf`；`Server/Loop/Server.sqs`、`TownTrigger.sqs`、`Income.sqs`；`Net/sTownSideChange.sqs`；`Server/BuyUnit/NewOrder.sqs`、`Factory.sqs`；`Server/SQF/BuildStruct.sqf`；`Rts/Framework/Distributor.sqs`、`Rts/Install.sqf`。

**计划全文**：用户本机 Cursor 计划 `tzk_cti_arma3_migration_7a0fdef0.plan.md`（路径因环境而异）；仓库内可同步摘要到本文件。

**Git**：若 `.cursor/` 被 ignore，本笔记仅本地。

<!-- AGENT_DIGEST_END -->

---

## 人类可读

### 要不要换会话？

不是硬性要求。当前 token 还没到上限，但**实施阶段**会反复打开大量脚本，容易把上下文吃满。**已经把结论写进** [`.cursor/output/tzk-a3-cti-migration-handoff.md`](tzk-a3-cti-migration-handoff.md)（本文件），新会话只要先读该文件和 [`.cursor/output/tzk-cti-project-context.md`](tzk-cti-project-context.md) 即可接续，不必依赖超长聊天历史。

### 本文件包含什么？

- **AGENT_DIGEST**：目录约定、整合步骤、五阶段顺序、语法对照、TzkScripts 要点、Options 与 OFP 源文件锚点、OFP 入口链引用。
- **人类可读**：换会话建议与文档索引。

完整表格化计划（Malden 城镇表、建筑/单位映射、description.ext 草图等）在 Cursor 计划 **TZK CTI Arma3 Migration** 中；实施时以计划 + 本 handoff 双源为准。

### Options 为何重要？

TZK 的 Options 是 CTI 中枢：经济分配、转账、建造/购买入口、指挥权、工人行为、AI 重生点、升级、投票、投降。成熟 A3 CTI（如 BECTI）也有同类「基地/指挥菜单」。迁移中阶段 E 必须把 Options 放在子菜单之前完成。
