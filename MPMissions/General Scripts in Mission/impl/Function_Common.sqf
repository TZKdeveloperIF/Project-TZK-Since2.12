fAddSoldier = loadFile "Common\SQF\AddSoldier.sqf";

funcWeaponValidMags = loadFile (
	if !bool_TZK_199_Mode then {
		"Common\SQF\WeaponValidMags.sqf"
	} else {
		"\TZK_Scripts_4_0_4\Common\SQF\WeaponValidEquip.sqf"
	}
);
