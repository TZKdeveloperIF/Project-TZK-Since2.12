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

<!-- 新会话：只读下方 AGENT_DIGEST 即可接「阶段 E」。OFP 老架构细节见 tzk-cti-project-context.md。 -->

<!-- AGENT_DIGEST_START -->

**阶段**：**A–D 已完成**。**E 待做**：Options 中枢 + 其余子菜单/UI（Options 先于子菜单）。

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
| 任务入口含对话框 | `description.ext` → `#include "UI\rtsDialogs.hpp"` |
| RTS 数据/预编译 | `Init/fn_initRts.sqf`；`Init/fn_initMissionEnv.sqf`（含 `Server/Order/*.sqf` 预编译） |

**配置备忘**：标记色用 A3 内置 `ColorBlue` 等（无 `ColorCyan`）。`tzkMatchStartTime` 须在开战后 ≥0，否则客户端 RTS 脚本会 `waitUntil` 挂住。

---

### 阶段 E 必读（OFP 锚点，未迁）

Options：**TzkScripts 269** 等 — `TZK_Patch5_4_0_6/s/UI/Options.sqs`、`Options_Init.sqf`（244）、`Options_Update.sqf`（270）、`description_10_options.h`；入口 `Player/Action/Options.sqs` 等。  

**语法迁移**：SQS→SQF；`publicExec`→`remoteExec`；坐标 ATL；`TzkScripts` 索引表勿打乱顺序（详见 `tzk-cti-project-context.md`）。

**用户本机 Cursor 计划**：若存在 `tzk_cti_arma3_migration_*.plan.md`，请将上表 **「地图 RTS 快捷键」** 同步进计划文档，以替代旧快捷键描述。

<!-- AGENT_DIGEST_END -->

---

## 人类可读

阶段 **A–D**（骨架、经济城镇胜利、工厂建造、RTS 地图层与对话框壳）已在 Malden 通用脚本侧落地。下一工作包是 **E：Options + 完整 UI 与子菜单**。

RTS 已从 OFP 的「Radio/模式切换」等旧方案，改为上表 **纯地图修饰键** 交互；续写计划或 README 时请用该表，避免再写旧快捷键。

更长的 OFP 入口链、`GblScripts` 行号、城镇数据结构等仍只在 **`tzk-cti-project-context.md`**，阶段 E 做 Options 时再按需打开即可。
