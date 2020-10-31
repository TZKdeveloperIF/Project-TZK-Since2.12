Radio001 setTriggerText "Options"; Radio001 setTriggerStatements ["this", {[] exec "\TZK_Scripts_4_0_4\Player\Dialog\Options.sqs"}, ""];
Radio002 setTriggerText "Mission Setting"; Radio002 setTriggerStatements ["this", {[] exec "\TZK_Scripts_4_0_4\Player\Dialog\TZK_Mission_Setting_1.sqs"}, ""];

Radio003 setTriggerText " "; Radio003 setTriggerStatements ["this", "", ""];
Radio004 setTriggerText " "; Radio004 setTriggerStatements ["this", "", ""];
Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText " "; Radio009 setTriggerStatements ["this", "", ""];
Radio000 setTriggerText "Refresh Radio List"; Radio000 setTriggerStatements ["this", {[vehicle player] exec "\TZK_Scripts_4_0_4\Player\Radio\Radio_Update_Vehicle.sqs"}, ""];