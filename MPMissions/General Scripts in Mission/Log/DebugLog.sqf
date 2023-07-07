// args: string
// return: none
// Using 2.01 mission initialization unit "resistance_Center" to save status instead of "LocalServerObject"
// However the result of "saveStatus" is still nonintuitive. Use 2.01 VBS operators to write down info into config.

if (debug) then {
	private[{_text}]; _text = format ["DBG: %1", _this];
	resistance_Center saveStatus _text;
	_text exec "\TZK_Scripts_4_0_4\Common\SendTextMsg.sqs";

	private [{_record}]; _record = isServer;
	if not _record then {
		if (not isNull player) then {if ("IF" == name player) then {
			_record = true;
		}};
	};
	if _record then {
		if (count TzkLog < 512) then {
			TzkLog set [count TzkLog, _text];
		};
	};
};