// args: [si, gi, type, setting, send to all]
// should be a sqf file for local synchronization

_this call preprocessFile "Common\Msg\hAiGrpSetting.sqf";
publicExec format [{%1 call preprocessFile "Common\Msg\hAiGrpSetting.sqf"}, _this];