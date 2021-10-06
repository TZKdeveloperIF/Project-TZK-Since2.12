// Init the upgTraceSpecialShell upgrade to make it possible to play art module in the beginning.
{
	private [{_si}];
	_si = _x;
	upgMatrix select _si set [upgTraceSpecialShell, 2];
} forEach [si0, si1];

// Init the upgRedTopRange upgrade, recover 4xAA 4000m range as in crcti@res2c3c8.
{
	private [{_si}];
	_si = _x;
	upgMatrix select _si set [upgRedTopRange, 2];
} forEach [si0, si1];