// e.g. "RTS order from commander %1: unit %2 %3"
TzkRtsCmdMsg = format [
	{RTS %1 %2 %3 %4: %5 %6, %7}
	, localize {TZK_LANG_ORDER}
	, localize {TZK_LANG_FROM}
	, localize {TZK_LANG_COMMANDER}
	, "%1"
	, localize {TZK_LANG_UNIT}
	, "%2"
	, "%3"
]; 

// get all UIDs (only available to local units without player)
funcGetUids = preprocessFile "Player\SQF\GetAllUids.sqf";

funcGenPplRtsMsg = preprocessFile "Rts\Util\GenOrderToPlayerMsg.sqf";