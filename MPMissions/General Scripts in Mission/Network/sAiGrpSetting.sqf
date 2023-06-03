// args: [si, gi, type, setting, send to all]
// should be a sqf file for local synchronization

_this exec "Common\Msg\hAiGrpSetting.sqs";
publicExec format [{%1 exec "Common\Msg\hAiGrpSetting.sqs"}, _this];