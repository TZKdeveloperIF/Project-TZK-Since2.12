comment {cfg_todo: modify the "Mission Setting"};
Radio001 setTriggerText format ["%1", if bool_TZK_Rts_Map_Mode then {(TzkInGameText select 007)} else {(TzkInGameText select 006)}];
Radio001 setTriggerStatements ["this", {0 exec (TzkScripts select 201)}, ""];