Radio001 setTriggerText format ["%1", TzkInGameText select 025 select (if bool_TZK_Rts_Map_Mode then {(10)} else {(9)})];
Radio001 setTriggerStatements ["this", {0 exec (TzkScripts select 201)}, ""];