// args: string
// return: none

if (debug) then {
	private[{_text}]; _text = format ["DBG: %1", _this];

	format ["DBG: %1", _this] exec "Log\Debuglog.sqs";
	publicExec format [{"DBG: %1" exec "Log\Debuglog.sqs"}, _this];
};