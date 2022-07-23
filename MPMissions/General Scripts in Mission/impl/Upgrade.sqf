comment {Init the upgRedTopRange upgrade, recover 4xAA 4000m range as in crcti@res2c3c8};
{
	private [{_si}];
	_si = _x;
	upgMatrix select _si set [upgRedTopRange, 2];
} forEach [si0, si1];