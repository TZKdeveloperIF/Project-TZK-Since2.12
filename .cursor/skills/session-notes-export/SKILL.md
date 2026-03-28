---
name: session-notes-export
description: >-
  Writes dual-layer markdown under .cursor/output/ (AGENT_DIGEST + 人类可读).
  Use when saving session findings, exporting discussion conclusions, migration
  or onboarding handoff, repository architecture notes, or "context for the
  next AI" without pasting the full doc into chat. Same format for one-off
  exports and long-lived project context files.
---

# Session notes export (project)

## When to use

- 将会话结论写入 `.cursor/output/`、导出讨论、固化为可查阅笔记、且希望 AI 以后以低成本 reload。
- 迁移笔记、仓库解读、架构摘要、onboarding——**仍用本 skill 同一套结构**（digest + 人类可读），与「会话导出」无区别。

## Output contract

1. **Path**: `.cursor/output/<topic-slug>.md` (create directory if missing).
2. **Do not** paste the full markdown in the chat; **return the path** (and optionally open the file in the editor).
3. **Structure** (top to bottom):
   - Optional **YAML frontmatter** (e.g. `project`, `last_context_update`) if the user also wants machine metadata outside the digest; keep it short.
   - HTML/comment marker explaining that agents should read only the digest first.
   - `<!-- AGENT_DIGEST_START -->` … `<!-- AGENT_DIGEST_END -->`: **dense** bullets, tables of `file` + symbol/line regions, algorithms, implications. No tutorial prose.
   - Clear separator (`---`).
   - `HUMAN_SECTION` / `## 人类可读` (or equivalent): narrative, examples, mod-author advice. Mark explicitly that **agents may skip** until the user needs a human-facing recap.
4. **Accuracy**: Anchor claims to **repo paths and function names** (and line numbers when stable) so re-verification is faster than rediscovering from scratch.

## Long-lived handoff (same skill)

- Prefer **one primary file per domain** under `.cursor/output/` (e.g. `tzk-cti-project-context.md`); avoid many tiny files unless the user asks.
- **Project-TZK-Since2.12** canonical handoff: **`.cursor/output/tzk-cti-project-context.md`** — update digest + 人类可读 when init flow, `GblScripts`/`TzkScripts`, or top-level mission layout changes.

## Style

- Repository-relative paths in backticks; prefer stable facts over volatile version strings (put dates in frontmatter if needed).
- Do not paste huge code blocks into the doc; cite paths and line ranges.

## Optional follow-up

If the user asks whether to固化: recommend **project skill** (this workflow) + optional **narrow Cursor rule** pointing at the saved file when editing specific engine paths — avoid `alwaysApply: true` bloat.

## Git note

If `.cursor/` is gitignored, remind the user that notes are local unless they copy elsewhere or adjust `.gitignore`.
