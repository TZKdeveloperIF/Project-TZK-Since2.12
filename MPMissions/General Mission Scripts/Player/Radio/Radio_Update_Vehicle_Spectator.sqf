Radio001 setTriggerText " "; Radio001 setTriggerStatements ["this", "", ""];

Radio002 setTriggerText "Mission Setting"; Radio002 setTriggerStatements ["this", "[] exec {Player\Dialog TZK_Mission_Setting.sqs}", ""];

Radio003 setTriggerText " "; Radio003 setTriggerStatements ["this", "", ""];
Radio004 setTriggerText "Cam Set Target hhTracker"; Radio004 setTriggerStatements ["this", "camSpec camSetTarget hhTracker", ""];
Radio005 setTriggerText "Cam Set Target Player"; Radio005 setTriggerStatements ["this", "camSpec camSetTarget player", ""];
Radio006 setTriggerText "Cam Set Back"; Radio006 setTriggerStatements ["this", {camSpec cameraEffect["terminate","back"]}, ""];
Radio007 setTriggerText "Player Set Back"; Radio007 setTriggerStatements ["this", {player cameraEffect["terminate","back"]}, ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText " "; Radio009 setTriggerStatements ["this", "", ""];
Radio000 setTriggerText "Return to Spectator Mode"; Radio000 setTriggerStatements ["this", "[] exec {Player\Radio\RadioList_Spectator_Return.sqs}", ""];