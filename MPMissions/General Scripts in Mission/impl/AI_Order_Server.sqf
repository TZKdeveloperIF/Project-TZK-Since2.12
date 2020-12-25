if bool_TZK_SEMod_Mode Then {
	orderTempDefs select orderTempSwitchMagazine set [2, "Extra\SwitchMag_Server.sqs"];
	orderTempDefs select orderTempSwitchMagazine select 1 set [2, [ "Unit Type", "count ([{SE TD}] + ArtilleryTypeDefs)", "([{SE TD}] + ArtilleryTypeDefs) select _this" ] ];
	ArtilleryMagazineSpeedList set [count ArtilleryMagazineSpeedList, "Recover TD"];
};
