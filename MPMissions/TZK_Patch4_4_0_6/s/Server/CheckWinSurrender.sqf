comment {args: si};

if isServer then {
	private [{_si}]; _si = _this;
	{
		if (_si == _x) then {
			pvGameOver = 0
				+ 2 * 0
				+ 2 * 4 * (siEnemy select _si)
				+ 2 * 4 * 2 * 2
			;
			PublicVariable {pvGameOver};
		};
	} forEach [si0, si1];
};