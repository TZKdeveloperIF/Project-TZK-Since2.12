Radio001 setTriggerText format ["Turn %1 Rts Map Mode", if bool_TZK_Rts_Map_Mode then {"OFF"} else {"ON"}];
Radio001 setTriggerStatements ["this", {0 exec (TzkScripts select 201)}, ""];