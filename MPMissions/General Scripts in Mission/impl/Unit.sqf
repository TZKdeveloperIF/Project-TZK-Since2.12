comment "These are valid to all extra mods including SE. If wish to exclude them, use if combine with bool as well.";
_entry = unitDefs select _tunguskaE; _entry select udScripts set [0, "Common\Equip\Tunguska.sqs"];
_entry = unitDefs select _vulcanW2; _entry select udScripts set [0, "Common\Equip\DefAA.sqs"];

if !bool_TZK_SEMod_Mode Then {
comment "Remove no-radar helicopters. They can't be detected by radar and can be applied for player to sneak attack.";
_entry = unitDefs select _irNO_mh6; _entry set [udName, "MH-6"]; _entry set [udModel, "MH6_Bas_xj400"];
_entry = unitDefs select _irNO_mi2; _entry set [udName, "Mi-2"]; _entry set [udModel, "Mi2NOE_xj400"];
_entry = unitDefs select _irNO_uh60; _entry set [udFactoryType, -1];
_entry = unitDefs select _irNO_mi17; _entry set [udFactoryType, -1];
};

if bool_TZK_Vanilla_Mode Then {
comment "Hide some units in vanilla mode like new-added T55.";
	if !bool_TZK_199_Mode Then {
	comment "MFCTI mode use bool of 199 but not MF, so 199 bool is applied here to make sure work for 2.01 version.";
		unitDefs select _t72E set [udFactoryType, -1];
		unitDefs select _t72_AE set [udModel, "T72"];
		unitDefs select _m60A3W set [udFactoryType, -1];
		unitDefs select _m60W set [udModel, "M60"];
	};
};