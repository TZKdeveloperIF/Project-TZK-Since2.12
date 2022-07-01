// =================================================TZK_4.0.0 Block=================================================
{
	_si = x;
	if (count (groupMatrix select _si) == count (groupAiMatrix select _si) && bool_TZK_MF_Mode) then {
		{
			upgMatrix select _si set [_x, 2],
			[_si, _x, 2] exec "Server\Info\UpgState.sqs"
		} forEach [upgGunshipRocket, upgLongWeaponRange];
	}
} forEach [si0, si1];
// =================================================TZK_4.0.0 Block=================================================