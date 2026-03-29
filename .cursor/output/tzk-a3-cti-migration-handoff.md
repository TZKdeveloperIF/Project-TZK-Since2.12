---
project: Project-TZK-Since2.12
topic: TZK CTI → Arma 3 Malden migration
last_context_update: 2026-03-29
doc_roles: [agent_digest, human_narrative]
related_files:
  - .cursor/output/tzk-cti-project-context.md
  - AA3/MPMissions/InMissionGeneralScripts/description.ext
  - AA3/MPMissions/InMissionGeneralScripts/Player/fn_rtsMapClick.sqf
  - AA3/MPMissions/InMissionGeneralScripts/UI/rtsDialogs.hpp
---

<!-- 新会话：只读下方 AGENT_DIGEST 即可接「阶段 E 子菜单」。OFP 老架构细节见 tzk-cti-project-context.md。 -->

<!-- AGENT_DIGEST_START -->

**阶段**：**A–D 已完成**。**E-Options 已落地**（对话框+转账+收入率+指挥转移+工人行为+AI重生+升级桩）。**E 子菜单待做**：Buy Units 对话框、Vote、Leaderboard、Statistics、AI Group Orders、Custom Soldiers、Unit/Sat Cam、Destruction、CmdRule、Console 等尚为 stub。

**输出根**：`AA3/MPMissions/`  
- 通用逻辑：`InMissionGeneralScripts/`  
-  playable 任务：`mission.sqm/TZK_CTI.Malden/`（整合时 xcopy 覆盖；`init*.sqf` / `description.ext` 与 `mission.sqm` 同级）

---

### 地图 RTS 快捷键（A3 当前方案，已替代 OFP 旧键位）

| 操作 | 行为 |
|------|------|
| **Alt + 地图第 1 次点击** | 清空已有选中；画整图尺度十字（蓝底+红细线，对齐 OFP 25600m 半轴） |
| **Alt + 地图第 2 次点击** | 完成矩形框选；框内多队 `rtsSelectedGroups`；区域标记 + OFP 风格对角条/角点 |
| **Alt+Shift + 地图点击** | 若 `rtsSelectedGroups` 非空 → `createDialog "TZK_RtsOrderDlg"` |
| **无修饰键点队长附近** | 独占选中该 AI 队 |
| **Shift + 点队长** | 开关增减选中 |
| **无修饰键点空地** | 清空选中与框选标记 |
| **框选首角 15s 无第二角** | 超时清除十字状态 |

**实现**：`Player/fn_rtsMapClick.sqf`（`onMapSingleClick`）；凡带 **Alt** 的分支必须整体结束，**不得**再执行「无 Alt」队长检测（否则会覆盖多选）。  
**选中表现**：`Player/fn_rtsIcons.sqf` — Draw3D 图标 + **地图 `mil_dot` 标记**均对选中队伍闪烁（alpha 正弦 + `ColorRed`）。  
**发令**：`TZK_fnc_aiGrpOrder`（服务器）；`rtsSelectedGroups` 元素为 `[si, gi]`。

---

### 阶段 D 已落地文件（续 E 时一般只改 UI/选项，不必重做地图层）

| 用途 | 路径 |
|------|------|
| RTS 地图点击 | `Player/fn_rtsMapClick.sqf` |
| 3D/地图标记 | `Player/fn_rtsIcons.sqf` |
| RTS 命令对话框壳 | `UI/rtsDialogs.hpp`（`idd=9100`，`9102` 为选中信息；全屏 `safezone*`；`import RscText/RscButton`；**PuristaMedium**；OFP 色块比例；中下按钮组在 DownArea 内水平居中；多数按钮仍为占位关闭） |
| 任务入口含对话框 | `description.ext` → `#include "UI\rtsDialogs.hpp"` + `"UI\options.hpp"` |
| RTS 数据/预编译 | `Init/fn_initRts.sqf`；`Init/fn_initMissionEnv.sqf`（含 `Server/Order/*.sqf` 预编译） |

**配置备忘**：标记色用 A3 内置 `ColorBlue` 等（无 `ColorCyan`）。`tzkMatchStartTime` 须在开战后 ≥0，否则客户端 RTS 脚本会 `waitUntil` 挂住。

---

### 阶段 E-Options 已落地文件

| 用途 | 路径 |
|------|------|
| Options 对话框布局 | `UI/options.hpp`（`idd=9200`；IDC 基数 `IDC_OPTIONS_BASE=10000`；safezone 布局；4 列：侧栏/状态+转账/子菜单按钮+收入/升级） |
| 主控制器（SQF 循环） | `Player/fn_optionsDialog.sqf`（替代 OFP `Options.sqs` SQS 状态机；`TZK_optResult` 字符串派发；0.2s 更新循环） |
| 一次性列表填充 | `Player/fn_optionsInit.sqf`（转账金额/收入比率/报告/指挥官/工人/AI重生/升级） |
| 每帧标签刷新 | `Player/fn_optionsUpdate.sqf`（时间/金钱/分数/城镇/收入/编组列表/升级色彩） |
| 金钱转账 | `Net/fn_giveMoney.sqf`（give/take/给AI/给全部；server remoteExec） |
| 收入比率同步 | `Net/fn_setIncomeRate.sqf`（server publicVariable `incomeRateCo`/`incomeRatePlayer`） |
| 指挥官转移 | `Net/fn_transferCommand.sqf`（server publicVariable `groupCommander`） |
| AI重生目标 | `Net/fn_setRespawnObj.sqf`（server publicVariable `sideRespawnObjects`） |
| 工人行为 | `Net/fn_setWorkerBehaviour.sqf`（server publicVariable `workerBehaviour`） |
| addAction 入口 | `initPlayerLocal.sqf`（上/下车自动附加 Options 动作，镜像 OFP `UpdateOptionsAction.sqs`） |

**新增全局变量**（`fn_initMissionEnv.sqf`）：`incomeRateCo`、`incomeRatePlayer`、`workerBehaviour`、`sideRespawnObjects`、`mhq`、`MCV`、`TZK_reportLevel`、`bNumberedAI`、`bSpySat`、`GroupsNum`、`upgDefs`/`upgMatrix`/`upgSatCam`/`upgSpySat`/`upgUnitCam`。

**桩函数**（待后续子菜单阶段实现）：`TZK_fnc_upgradeStart`、`TZK_fnc_upgradeCancel`、`TZK_fnc_cleanupGround`、`TZK_fnc_calcScore`。子菜单按钮（Buy Units / Vote / Leaderboard / Statistics / AI Group Orders / Custom Soldiers / Unit Cam / Sat Cam / Destruction / CmdRule / Console / Shown Groups / Concurrent Orders）均输出 `systemChat "[X] Not yet migrated"`。

---

### 阶段 E 子菜单待做（OFP 锚点）

Options 主框架**已迁**（见上表）。以下子菜单系统仍需独立文件迁移：

| 子菜单 | OFP 锚点 | 优先级 |
|--------|----------|--------|
| Buy Units | `TzkScripts 257` → `Patch5/UI/BuyUnit.sqs` | 高 |
| Vote | `TzkScripts 240` → `Patch5/UI/Vote.sqs` | 中 |
| Leaderboard | `TzkScripts 268` → `Patch5/UI/Leaderboard.sqs` | 中 |
| AI Group Orders | `TzkScripts 014` | 中 |
| Statistics | `TzkScripts 242` | 低 |
| Custom Soldiers | `TzkScripts 019` | 低 |
| Unit Cam | `TzkScripts 027` | 低 |
| Sat Cam | `TzkScripts 247` | 低 |
| Upgrade 完整实现 | `TzkScripts 177` → `Server/Upgrade/*.sqs` | 中 |
| CmdRule | `RuleCmd/Dialog.sqs` | 低 |
| Console | `TzkScripts 018` | 低 |
| Concurrent Orders | `TzkScripts 266` | 中 |
| Shown Groups | `TzkScripts 023` | 低 |

**语法迁移原则不变**：SQS→SQF；`publicExec`→`remoteExec`；坐标 ATL；`TzkScripts` 索引表勿打乱顺序（详见 `tzk-cti-project-context.md`）。

<!-- AGENT_DIGEST_END -->

---

## 人类可读

阶段 **A–D**（骨架、经济城镇胜利、工厂建造、RTS 地图层与对话框壳）+ **E-Options 主框架**（对话框+转账+收入率+指挥转移+工人行为+AI重生+升级桩）均已在 Malden 通用脚本侧落地。

**下一工作包**：**E 子菜单**，优先 Buy Units 对话框（高优先）→ Vote / Leaderboard / Upgrade 完整实现 / Concurrent Orders（中优先）→ 其余（低优先）。

RTS 已从 OFP 的「Radio/模式切换」等旧方案，改为上表 **纯地图修饰键** 交互；续写计划或 README 时请用该表，避免再写旧快捷键。

更长的 OFP 入口链、`GblScripts` 行号、城镇数据结构等仍只在 **`tzk-cti-project-context.md`**。
