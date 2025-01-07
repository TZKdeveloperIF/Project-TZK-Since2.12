Radio001 setTriggerText " "; Radio001 setTriggerStatements ["this", "", ""];

Radio002 setTriggerText "Mission Setting"; Radio002 setTriggerStatements ["this", {[] exec (TzkScripts select 025)}, ""];

Radio003 setTriggerText " "; Radio003 setTriggerStatements ["this", "", ""];
Radio004 setTriggerText " "; Radio004 setTriggerStatements ["this", "", ""];
Radio005 setTriggerText " "; Radio005 setTriggerStatements ["this", "", ""];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText "Marker Displaying Switch"; Radio009 setTriggerStatements ["this", {btnMarker = !btnMarker; if !btnMarker then {call loadFile (TzkScripts select 128)} else {[boole_Mark_Player_Name] exec (TzkScripts select 161)}}, ""];
Radio000 setTriggerText "Return to Spectator Mode"; Radio000 setTriggerStatements ["this", {[] exec (TzkScripts select 200)}, ""];