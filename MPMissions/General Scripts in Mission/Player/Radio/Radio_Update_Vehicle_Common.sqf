Radio001 setTriggerText format ["Turn %1 Extra Map Click", if bool_TZK_Ext_Cmd_Mode then {"OFF"} else {"ON"}]; Radio001 setTriggerStatements ["this", {bool_TZK_Ext_Cmd_Mode = not bool_TZK_Ext_Cmd_Mode}, ""];

Radio002 setTriggerText "Mission Setting"; Radio002 setTriggerStatements ["this", {[] exec localize {TZK_DIALOG_TZK_SETTING_1}}, ""];

Radio003 setTriggerText " "; Radio003 setTriggerStatements ["this", "", ""];
Radio004 setTriggerText " "; Radio004 setTriggerStatements ["this", "", ""];
Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText " "; Radio009 setTriggerStatements ["this", "", ""];
Radio000 setTriggerText "Refresh Radio List"; Radio000 setTriggerStatements ["this", {[vehicle player] exec localize {TZK_RADIO_ENTRANCE}}, ""];