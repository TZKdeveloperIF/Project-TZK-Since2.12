_vehicle = _this select 0;
_name = (if (typeOf _vehicle != "PP87_TZK_xj400") Then {"M"} Else {"P89"}); 

call preprocessFile "Player\Radio\Channel001_RtsMapMode.sqf";

Radio002 setTriggerText "Mission Setting"; Radio002 setTriggerStatements ["this", {[] exec localize {TZK_DIALOG_TZK_SETTING_1}}, ""];
Radio003 setTriggerText "Switch 080m/s Magazine"; call format [{ Radio003 setTriggerStatements ["this", {[(vehicle player), 080, "%1"] exec localize {TZK_RADIO_FUNC_GRAD}}, ""] }, _name];
Radio004 setTriggerText "Switch 120m/s Magazine"; call format [{ Radio004 setTriggerStatements ["this", {[(vehicle player), 120, "%1"] exec localize {TZK_RADIO_FUNC_GRAD}}, ""] }, _name];
Radio005 setTriggerText "Switch 180m/s Magazine"; call format [{ Radio005 setTriggerStatements ["this", {[(vehicle player), 180, "%1"] exec localize {TZK_RADIO_FUNC_GRAD}}, ""] }, _name];
Radio006 setTriggerText " "; Radio006 setTriggerStatements ["this", "", ""];
Radio007 setTriggerText " "; Radio007 setTriggerStatements ["this", "", ""];
Radio008 setTriggerText " "; Radio008 setTriggerStatements ["this", "", ""];
Radio009 setTriggerText " "; Radio009 setTriggerStatements ["this", "", ""];
Radio000 setTriggerText "Reset Vector Up"; Radio000 setTriggerStatements ["this", {[vehicle player] exec localize {TZK_RADIO_FUNC_VECTORUP}}, ""];
