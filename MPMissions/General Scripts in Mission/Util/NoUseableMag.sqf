// Script to verify whether vehicle equipping able-to-attack mags.
// TZK introduce some functional magazines and they should be excluded.

private [{_vehicle}];
_vehicle = _this;
/* return */ {!(_x in [
	/* static */ "DeploySwitch_xj400", "SpoofSwitch_xj400", "AfterBurnerSwitch_xj400", "SpoofCount_xj400"
])} count magazines _vehicle == 0