_vehicle = _this select 0;
_name = (if (typeOf _vehicle != "PP87_TZK_xj400") Then {"M"} Else {"P89"}); 

call loadFile (TzkScripts select 320);

Radio002 setTriggerText "Mission Setting"; Radio002 setTriggerStatements ["this", {[] exec (TzkScripts select 025)}, ""];
_name call loadFile (TzkScripts select 322);
Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText " "; Radio009 setTriggerStatements ["this", "", ""];
Radio000 setTriggerText "Reset Vector Up"; Radio000 setTriggerStatements ["this", {[vehicle player] exec (TzkScripts select 202)}, ""];
