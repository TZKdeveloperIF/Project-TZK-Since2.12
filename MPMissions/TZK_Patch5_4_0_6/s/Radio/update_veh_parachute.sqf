call loadFile (TzkScripts select 320);
call preprocessFile "Util\radio2.sqf";

Radio003 setTriggerText " "; Radio003 setTriggerStatements ["this", "", ""];
Radio004 setTriggerText " "; Radio004 setTriggerStatements ["this", "", ""];
Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText "Options"; Radio009 setTriggerStatements ["this", {0 exec (TzkScripts select 269)}, ""];
Radio000 setTriggerText (TzkInGameText select 025 select 8); Radio000 setTriggerStatements ["this", {[vehicle player] exec (TzkScripts select 195)}, ""];