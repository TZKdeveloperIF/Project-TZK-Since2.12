_vehicle = _this select 0;
_name = (if (typeOf _vehicle != "PP87_TZK_xj400") Then {"M"} Else {"P89"}); 

call loadFile (TzkScripts select 320);

call preprocessFile "Util\radio2.sqf";
_name call loadFile (TzkScripts select 322);
Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText " "; Radio009 setTriggerStatements ["this", "", ""];
call preprocessFile "Util\radio0_vecUp.sqf";
