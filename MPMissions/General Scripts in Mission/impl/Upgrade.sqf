comment "Init the upgTraceSpecialShell upgrade to make it possible to play art module in the beginning.";
{
	private [{_si}];
	_si = _x;
	upgMatrix select _si set [upgTraceSpecialShell, 2];
} forEach [si0, si1];