---
project: Project-TZK-Since2.12
game: Operation Flashpoint (OFP) / CWA / Arma Resistance 2.01
mission_type: CTI / crCTI
primary_language: SQF + SQS
last_context_update: 2026-03-29
doc_roles: [agent_digest, human_narrative]
related_skills: [session-notes-export]
---

<!-- 新会话：优先只读下方 AGENT_DIGEST，再按需读「人类可读」。人类读者可直接跳至「人类可读」。 -->

<!-- AGENT_DIGEST_START -->

**A3 迁移接续**：阶段 A–D 已完成 → 见 **[`tzk-a3-cti-migration-handoff.md`](tzk-a3-cti-migration-handoff.md)**（含地图 RTS 快捷键、阶段 E 锚点）。本文件仍以 **OFP 原版** 架构为主。

**类型**：OFP 联机 CTI；逻辑在 `MPMissions/General Scripts in Mission/`，插件脚本 `\TZK_*` 在 `MPMissions/TZK_*`。

| 链 | 路径（均相对仓库根；子路径以 `MPMissions/General Scripts in Mission/` 为前缀除非另写） |
|---|------------------------|
| 入口 | `MPMissions/General Scripts in Mission/init.sqs` |
| mission 最早 | `MPMissions/General Scripts in Mission/Init/MissionEnv.sqf` → `towns`/`si*`/`groupMatrix` 等 |
| 注册表 | `MPMissions/General Scripts in Mission/Init/GblScripts.sqf` → `TzkScripts[]`；**禁止改注册顺序**；末尾校验 `_i == 407+1`（共 408 项） |
| Svr 链 | 同上目录下 `Server/InitServer.sqs` → `Init/SvrBriefing.sqf` → `SvrBegun.sqf` → `SvrCustomPveInfo.sqf` → `SvrCustomPveFinished.sqs`（含 `SvrStartMoney.sqf`）→ `SvrPreprocMatchRule.sqs` → `SvrFormalStart.sqf` |
| Cli | `Player/InitClient.sqs` → `InitPlayer.sqs`；开战 `Init/PplFormalStart.sqf`（均在 `General Scripts in Mission/`） |
| UI 壳 | `MPMissions/General Scripts in Mission/description.ext` → `#include` `TZK_Scripts_4_0_6`、`TZK_Patch4_4_0_6`、`TZK_Patch5_4_0_6` |
| 胜负文案 | `MPMissions/General Scripts in Mission/briefing.html` |

**GblScripts.sqf 关键索引（行号约 2026-03 仓库状态）**：

| idx | 锚点 | 目标 |
|-----|------|------|
| 138 | `MPMissions/General Scripts in Mission/Init/GblScripts.sqf` ~L176 | `CheckWinTowns.sqs` |
| 180 | 同上 ~L222 | `Net/sTownSideChange.sqs` 城镇归属 |
| 229 | 同上 ~L282 | `TriggerGameEnd.sqs` |
| 307 | 同上 ~L367 | `Server/Loop/Income.sqf` |
| 312 | 同上 ~L374 | `CheckWinDestruction.sqs` |

**全局符号**：`si0/si1/siRes`；`towns[]` + `tdFlag/tdName/tdValue/tdSide`；`groupMatrix`/`groupAiMatrix`/`groupMoneyMatrix`/`groupCommander`；`structDefs`/`structMatrix`；`unitDefs`；`factoryQueues`+`Algo/CirBuf`；`pvGameOver`；`Vote_Matrix`（`init.sqs`）；`TzkCmdRules`+`TzkServer.cfg`。

**循环**：`Server/Loop/Server.sqs`（MHQ/MCV/时限/`pvGameOver`）；`TownTrigger.sqs`；`Income.sqs`；RTS `Rts/Framework/Distributor.sqs`。

**建造/生产**：`Server/SQF/BuildStruct.sqf`；`Server/BuyUnit/NewOrder.sqs` → `Factory.sqs` → `Create.sqf`。

**迁移优先级**：矩阵+钱+城镇+`pvGameOver` → 工厂/建造抽象 → RTS+网络 → 投票/CmdRule/AICO/升级 → Art/Bridge/Attach → UI。

**路径约定**：任务内无 `\`；插件脚本 `loadFile "\TZK_..."`。脚本失踪 → git 历史+同名文件。

<!-- AGENT_DIGEST_END -->

---

## 人类可读

（以下供人阅读与教学式回顾；**自动化可跳过本节**，除非用户要简报或迁移叙述。）

### 读者速览

本任务为 **TZK crCTI**：西东两阵营夺城、建工厂、买单位、指挥官用 **RTS 地图命令**指挥 AI；胜法见 `briefing.html`（毁敌方 MHQ+工厂 / 占满城镇并保持约 2 分钟 / 投降；时限可平局）。**机器用摘要**见文首 `AGENT_DIGEST`。

### 项目概述

本仓库为 **TZK** 版 **crCTI**（类 CRCTI）联机任务：**征服全岛**。玩家分为 **WEST** 与 **EAST**，通过**指挥官**建造建筑、购买单位，并用 **RTS 式地图命令**指挥 AI 编组与工人；普通玩家操控步兵与载具。无人阵营由 **AICO（AI 指挥官）** 接管。

根目录 **`README.md`** 说明如何从 `General Scripts in Mission` 与 `mission.sqm(and Extra folder)` 打包 PBO；**`IDE/readme.md`** 提及 VS Code SQF 扩展。

### CONFIG 目录（模组层）

- **带 `bin`（或 `Bin`）的顶层包**（如 `@TZK_CWA-CE_2.03`、`@TZK_4.0.6`、`binarize`）：偏发布/合并用配置；说明中的「bin\config」为概念上的基础配置汇聚点，具体布局以目录为准。
- **其余**：`TZK_Config_4_0_4/5/6`、`TZK_Objects`、`TZK_Patch*_4_0_6`、`TZK_Art_*`、语言包等——**单位/模型/贴图/武器**多在此；向 Arma 续作迁移时通常**整类替换**，仅保留「有哪些系统需要配置」的清单即可。

### MPMissions 目录（任务层）

| 区域 | 作用 |
|------|------|
| `General Scripts in Mission/` | 主逻辑；**init.sqs** 为脚本总入口。 |
| `TZK_Scripts_4_0_4` / `4_0_5` / `4_0_6` | 随插件发布的脚本（`\` 路径）。 |
| `TZK_Patch4_4_0_6` / `TZK_Patch5_4_0_6` | 大块补丁脚本（init、UI、Net、Server 等）。 |
| `mission.sqm(and Extra folder)/` | 各岛 **mission.sqm**；需与地图匹配。 |
| `MOD *` | 特殊模组叠加；按仓库约定可忽略。 |

### 启动与初始化顺序

1. **mission.sqm** 中各物体 `init`：先跑 **`Init/MissionEnv.sqf`**（全局常量与数组），再为 **`towns`** 追加城镇定义。
2. **`init.sqs`**：`GblScripts` 填充 **`TzkScripts`**、本地化、各子系统 `Install`、**`loadFile`** 加载 Patch 内 init、排序城镇、**`CmdRule`**、**`isServer`** 分支 **`Server/InitServer.sqs`** / 客户端 **`Player/InitClient.sqs`**、投票与天气等。
3. **服务器**：`InitServer.sqs` → 简报阶段 **`SvrBriefing.sqf`** → 短暂延迟后 **`SvrBegun.sqf`**（AI 编组分类、PVE 信息）→ **`SvrCustomPveInfo`** / **`SvrCustomPveFinished`** → **`SvrPreprocMatchRule.sqs`**（出生点/指挥官划界）→ 后续正式开局由 **`SvrFormalStart.sqf`** 等串联（部署起始载具、启动城镇触发、收入循环、主循环等）。
4. **客户端玩家**：`InitPlayer.sqs` 设置 `siPlayer`/`giPlayer`、对话框快捷键、标记延迟初始化等；**正式开战**后还有 **`Init/PplFormalStart.sqf`** 等。

### 玩法与胜负

**简报**（`briefing.html`）中的目标（完成其一即可胜，除非另有规则）：

1. 摧毁敌方 **MHQ** 与全部关键工厂（兵营、轻/重/空工厂）。
2. **控制所有城镇**并保持约 **2 分钟**（实现上见城镇触发与 `CheckWinTowns` 等）。
3. 敌方**指挥官投降**。

**时限**：`Server/Loop/Server.sqs` 中 `timeLimit` 到期可将 `pvGameOver` 设为平局类结果。MHQ/MCV 存活检测亦在此循环中触发摧毁胜利检查（`TzkScripts select 312` 等）。

### 主要系统设计（框架级）

#### 经济

- 启动资金在 **`Init/SvrStartMoney.sqf`** 等中按模式（如 MF、纯 AI 边）调整。
- **`Server/Loop/Income.sqs`** 周期性结算并同步阵营总收入（调用 **`TzkScripts select 307`** 对应 SQF）。
- 编组级消费：**`Server/Money/Spend.sqs`** 等（索引见 `GblScripts.sqf`）。

#### 城镇

- **`Server/Loop/TownTrigger.sqs`**：按触发器内单位数量判定倾向阵营，稳定后通过 **`TzkScripts select 180`**（`Net/sTownSideChange.sqs`）更新归属并计分。
- 城镇守备：**`Server/Start/TownGroup*.sqs`** 与 **`townGroupGeneral.sqs`** 等（索引 221–228、225）。

#### 生产与建造

- **建筑**：`BuildStruct.sqf` 按 `structDefs` 多部件生成物体并登记 **`structMatrix`**。
- **单位**：**`Server/BuyUnit/NewOrder.sqs`** 入队；**`Factory.sqs`** 循环消费 **`Algo/CirBuf`** 队列，扣费、计时后 **`Create.sqf`** 生成单位。

#### RTS 指挥

- 客户端地图交互状态见 **`Rts/Init/PplInteraction.sqf`**（选区、标记、多种 RTS 对话框枚举）。
- 服务器侧分发：**`Rts/Framework/Distributor.sqs`**（区分为 AI 与玩家、Order/Framework/Trigger 子目录）。
- 具体命令脚本在 **`Server/Order/*.sqs`** 与 **`Player/Order/*.sqs`**，并通过 **`TzkScripts`** 索引被调用。

#### 投票与指挥官规则

- **投票矩阵**在 **`init.sqs`** 初始化（天气、时间加速、时段、视距、时限、抵抗强度、收入、残骸消失等）。
- **TzkCmdRules**：双方在自定义出生点等流程中协商的规则项，见 **`Common/Init/CmdRule.sqf`** 与 **`RuleCmd/*.sqf`**。

#### 子模块（可后迁移）

- **炮兵**：`Art/Install.sqf`、`TzkArtSpeeds` 等。
- **桥梁**：`Bridge/Install.sqf`，`TzkBrdigeProjects`（代码中拼写如此）。
- **载具挂接**：`Attach/Install.sqf`，拖车位与 ID 管理。
- **升级**：`Server/Upgrade/Init.sqf`，订单 ID 与互斥量。
- **日志**：`Log/Install.sqf`（服务器与条件性客户端）。

### TzkScripts 索引说明

- **`Init/GblScripts.sqf`** 按顺序 `call _f` 注册路径字符串；**注释中的序号与最终索引必须一致**，且文件末尾校验 `407+1`（即共 408 项）。
- 代码中大量使用 **`(TzkScripts select N)`** 避免字符串散落；**不得打乱注册顺序**（否则全任务调用错位）。
- 续作迁移时可改为 **函数表** 或 **CBA/预处理器宏**，但需一次性替换所有 `select` 索引或保留兼容层。

### 与武装突袭（续作）的差异提示

- **SQS**：续作不再使用；需改为 **SQF** 或引擎事件驱动。
- **网络**：`publicVariable` / `publicExec` / `local` 语义需按 **Arma 2/3/Reforger** 目标版本替换。
- **任务格式**：`mission.sqm`、`description.ext`、对话框控件 **IDC** 均需重做。
- **实体创建**：`createVehicle`、阵营、装备 API 随版本变化；**逻辑数据结构（矩阵、队列、城镇表）可保留**。

### 文档维护与会话导出约定

- 架构或 `GblScripts` 计数/顺序变化时：同步更新 **YAML**、`AGENT_DIGEST` 内表格（含 `GblScripts.sqf` 行号）及本节冲突处。
- 按 **`.cursor/skills/session-notes-export/SKILL.md`**：导出会话结论时**不必在聊天贴全文**，回复**文件路径**即可；长期 handoff 与会话导出**共用**该 skill（YAML + digest + 人类可读）。
- **Git**：若日后将 `.cursor/` 加入 `.gitignore`，这些笔记默认仅本地；需协作时请复制到 tracked 路径或调整忽略规则。
