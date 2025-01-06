call preprocessFile "Player\Radio\Channel001_RtsMapMode.sqf";
Radio002 setTriggerText "Mission Setting"; Radio002 setTriggerStatements ["this", {[] exec (TzkScripts select 025)}, ""];

Radio003 setTriggerText " "; Radio003 setTriggerStatements ["this", "", ""];
Radio004 setTriggerText " "; Radio004 setTriggerStatements ["this", "", ""];
Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText "Options"; Radio009 setTriggerStatements ["this", {0 exec (TzkScripts select 269)}, ""];
Radio000 setTriggerText "Refresh Radio List"; Radio000 setTriggerStatements ["this", {[vehicle player] exec (TzkScripts select 195)}, ""];