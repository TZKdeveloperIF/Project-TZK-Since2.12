Radio001 setTriggerText " "; Radio001 setTriggerStatements ["this", "", ""];

Radio002 setTriggerText "Mission Setting"; Radio002 setTriggerStatements ["this", {[] exec localize {TZK_DIALOG_TZK_SETTING_1}}, ""];

Radio003 setTriggerText " "; Radio003 setTriggerStatements ["this", "", ""];
Radio004 setTriggerText " "; Radio004 setTriggerStatements ["this", "", ""];
Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText "Marker Displaying Switch"; Radio009 setTriggerStatements ["this", {btnMarker = !btnMarker; if !btnMarker then {call preprocessFile localize {TZK_FUNC_MARKER_HIDE_SPEC}} else {[boole_Mark_Player_Name] exec "\TZK_Scripts_4_0_4\Player\Marker\SpectatorMarker.sqs"}}, ""];
Radio000 setTriggerText "Return to Spectator Mode"; Radio000 setTriggerStatements ["this", {[] exec localize {TZK_RADIO_FUNC_SPEC_RET}}, ""];