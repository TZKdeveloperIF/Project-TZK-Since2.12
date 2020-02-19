Radio001 setTriggerText " "; Radio001 setTriggerStatements ["this", "", ""];

Radio002 setTriggerText "Mission Setting"; Radio002 setTriggerStatements ["this", "[] exec {Player\Dialog TZK_Mission_Setting.sqs}", ""];

Radio003 setTriggerText " "; Radio003 setTriggerStatements ["this", "", ""];
Radio004 setTriggerText " "; Radio004 setTriggerStatements ["this", "", ""];
Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText " "; Radio009 setTriggerStatements ["this", "", ""];
if (siPlayer != siCiv) then {
	Radio000 setTriggerText "Refresh Radio List"; Radio000 setTriggerStatements ["this", "[vehicle player] exec {Player\Radio\Radio_Update_Vehicle.sqs}", ""];
} else {
	Radio000 setTriggerText "Return to Spectator Mode"; Radio000 setTriggerStatements ["this", "[] exec {Player\Dialog Spectator.sqs}", ""];
};