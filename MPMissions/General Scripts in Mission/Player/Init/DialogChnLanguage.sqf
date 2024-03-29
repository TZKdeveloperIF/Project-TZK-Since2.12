comment {Initialize variables for those CHN players};

bool_TZK_CHN_inited = true;

aiSetChnDefs = [];
aiSetChnDefs set [aisRallyPoint1, "\TZK_CHN_4_0_6_27\aiSet_rallyPoint1_co.paa"];
aiSetChnDefs set [aisPickupWait1, ""];
aiSetChnDefs set [aisRallyPoint2, ""];
aiSetChnDefs set [aisPickupWait2, ""];
aiSetChnDefs set [aisKeepMin, "\TZK_CHN_4_0_6_27\aiSet_keepMin_co.paa"];
aiSetChnDefs set [aisKeepMax, ""];
aiSetChnDefs set [aisBuy, "\TZK_CHN_4_0_6_27\aiSet_buy_co.paa"];

aiSetChnDefs set [aisWatch, "\TZK_CHN_4_0_6_27\aiSet_watch_co.paa"];
aiSetChnDefs set [aisRespawn, "\TZK_CHN_4_0_6_27\aiSet_respawn_co.paa"];
aiSetChnDefs set [aisCombatMode, "\TZK_CHN_4_0_6_27\aiSet_combatMode_co.paa"];
aiSetChnDefs set [aisBehaviour, "\TZK_CHN_4_0_6_27\aiSet_behavior_co.paa"];
aiSetChnDefs set [aisAutoRepair, "\TZK_CHN_4_0_6_27\aiSet_repair_co.paa"];
aiSetChnDefs set [aisAutoRepairRange, "\TZK_CHN_4_0_6_27\aiSet_repairRange_co.paa"];
aiSetChnDefs set [aisAutoRepairDamage, "\TZK_CHN_4_0_6_27\aiSet_repairDamage_co.paa"];
aiSetChnDefs set [aisAutoRearm, "\TZK_CHN_4_0_6_27\aiSet_rearm_co.paa"];
aiSetChnDefs set [aisAutoRearmRange, "\TZK_CHN_4_0_6_27\aiSet_rearmRange_co.paa"];
aiSetChnDefs set [aisAutoRearmSabot, "\TZK_CHN_4_0_6_27\aiSet_rearmSabot_co.paa"];
aiSetChnDefs set [aisSuperior, "\TZK_CHN_4_0_6_27\aiSet_superior_co.paa"];
aiSetChnDefs set [aisGroupSize, "\TZK_CHN_4_0_6_27\aiSet_groupSize_co.paa"];
aiSetChnDefs set [aisLockOrder, "\TZK_CHN_4_0_6_27\aiSet_lockOrder_co.paa"];
aiSetChnDefs set [aisLockSetting, ""];
aiSetChnDefs set [aisMoveMode, "\TZK_CHN_4_0_6_27\aiSet_moveMode_co.paa"];

orderGrpChnDefs = [];
orderGrpChnDefs set [orderTakeTowns, "\TZK_CHN_4_0_6_27\orderGrp_takeTowns_co.paa"];
orderGrpChnDefs set [orderTakeHoldTowns, "\TZK_CHN_4_0_6_27\orderGrp_takeHoldTowns_co.paa"];
orderGrpChnDefs set [orderHoldTown, "\TZK_CHN_4_0_6_27\orderGrp_HoldTowns_co.paa"];
orderGrpChnDefs set [orderGuardArea, "\TZK_CHN_4_0_6_27\orderGrp_guardArea_co.paa"];
orderGrpChnDefs set [orderGuardLine, "\TZK_CHN_4_0_6_27\orderGrp_guardLine_co.paa"];
orderGrpChnDefs set [orderPatrolArea, "\TZK_CHN_4_0_6_27\orderGrp_patrolArea_co.paa"];
orderGrpChnDefs set [orderPatrolLine, "\TZK_CHN_4_0_6_27\orderGrp_patrolLine_co.paa"];
orderGrpChnDefs set [orderAdvance, "\TZK_CHN_4_0_6_27\orderGrp_advance_co.paa"];
orderGrpChnDefs set [orderTransportDuty, "\TZK_CHN_4_0_6_27\orderGrp_transportDuty_co.paa"];
orderGrpChnDefs set [orderMineLine, "\TZK_CHN_4_0_6_27\orderGrp_mineLine_co.paa"];
orderGrpChnDefs set [orderDisableMines, "\TZK_CHN_4_0_6_27\orderGrp_disableMine_co.paa"];
orderGrpChnDefs set [orderHalt, "\TZK_CHN_4_0_6_27\orderGrp_halt_co.paa"];

upgChnDefs = [];
upgChnDefs set [upgTL, "\TZK_CHN_4_0_6_27\upgrade_leaderWeapon_co.paa"];
upgChnDefs set [upgTownGroup, "\TZK_CHN_4_0_6_27\upgrade_tg_co.paa"];
upgChnDefs set [upgTownGroupb, "\TZK_CHN_4_0_6_27\upgrade_tga_co.paa"];
upgChnDefs set [upgTownGroupH, "\TZK_CHN_4_0_6_27\upgrade_tgh_co.paa"];
upgChnDefs set [upgRadarArtillery, "\TZK_CHN_4_0_6_27\upgrade_artRadar_co.paa"];
upgChnDefs set [upgLongWeaponRange, "\TZK_CHN_4_0_6_27\upgrade_longRange_co.paa"];
upgChnDefs set [upgCCdistance, "\TZK_CHN_4_0_6_27\upgrade_10000mcc_co.paa"];
upgChnDefs set [upgNumBuildings, "\TZK_CHN_4_0_6_27\upgrade_moreBuilding_co.paa"];
upgChnDefs set [upgSatCam, "\TZK_CHN_4_0_6_27\upgrade_satellite_co.paa"];
upgChnDefs set [upgSatCamZoom, "\TZK_CHN_4_0_6_27\upgrade_satZoom_co.paa"];
upgChnDefs set [upgSpySat, "\TZK_CHN_4_0_6_27\upgrade_spySat_co.paa"];
upgChnDefs set [upgWorkers, "\TZK_CHN_4_0_6_27\upgrade_worker_co.paa"];
upgChnDefs set [upgGunshipRocket, "\TZK_CHN_4_0_6_27\upgrade_heliRocket_co.paa"];
upgChnDefs set [upgPlaneAfterBurner, "\TZK_CHN_4_0_6_27\upgrade_planeAfterBurner_co.paa"];
upgChnDefs set [upgSpoofMissile, "\TZK_CHN_4_0_6_27\upgrade_spoof_co.paa"];
upgChnDefs set [upgAltFlight, "\TZK_CHN_4_0_6_27\upgrade_1500m_co.paa"];
upgChnDefs set [upgVehicleAirRadar, "\TZK_CHN_4_0_6_27\upgrade_airRadar_co.paa"];
upgChnDefs set [upgRedTopRange, "\TZK_CHN_4_0_6_27\upgrade_redtopRange_co.paa"];
upgChnDefs set [upgRedTopMagazines, "\TZK_CHN_4_0_6_27\upgrade_redtopMag_co.paa"];

aiOrdersChn1 = [];
aiOrdersChn1 set [0, "\TZK_CHN_4_0_6_27\aiOrder1_repair_co.paa"];
aiOrdersChn1 set [1, "\TZK_CHN_4_0_6_27\aiOrder1_rearm_co.paa"];
aiOrdersChn1 set [2, "\TZK_CHN_4_0_6_27\aiOrder1_board_co.paa"];
aiOrdersChn1 set [3, "\TZK_CHN_4_0_6_27\aiOrder1_moveClick_co.paa"];
aiOrdersChn1 set [4, "\TZK_CHN_4_0_6_27\aiOrder1_moveWp_co.paa"];
aiOrdersChn1 set [5, "\TZK_CHN_4_0_6_27\aiOrder1_patrolClick_co.paa"];
aiOrdersChn1 set [6, "\TZK_CHN_4_0_6_27\aiOrder1_patrolWp_co.paa"];
aiOrdersChn1 set [7, "\TZK_CHN_4_0_6_27\aiOrder1_patrolWps_co.paa"];
aiOrdersChn1 set [8, "\TZK_CHN_4_0_6_27\aiOrder1_transportDuty_co.paa"];
aiOrdersChn1 set [9, "\TZK_CHN_4_0_6_27\aiOrder1_disableMines_co.paa"];
aiOrdersChn1 set [10, "\TZK_CHN_4_0_6_27\aiOrder1_mineClick_co.paa"];
aiOrdersChn1 set [11, "\TZK_CHN_4_0_6_27\aiOrder1_mineWp_co.paa"];
aiOrdersChn1 set [12, "\TZK_CHN_4_0_6_27\aiOrder1_mineWp2Wp_co.paa"];
aiOrdersChn1 set [13, "\TZK_CHN_4_0_6_27\aiOrder1_c4Click_co.paa"];
aiOrdersChn1 set [14, "\TZK_CHN_4_0_6_27\aiOrder1_c4Wp_co.paa"];
aiOrdersChn1 set [15, "\TZK_CHN_4_0_6_27\aiOrder1_mineTown_co.paa"];
aiOrdersChn1 set [16, "\TZK_CHN_4_0_6_27\aiOrder1_holdTown_co.paa"];
aiOrdersChn1 set [17, "\TZK_CHN_4_0_6_27\aiOrder1_clear_co.paa"];
aiOrdersChn1 set [18, "\TZK_CHN_4_0_6_27\aiOrder1_disband_co.paa"];

aiOrdersChn2 = [];
aiOrdersChn2 set [0, "\TZK_CHN_4_0_6_27\aiOrder2_buyUnit_co.paa"];
aiOrdersChn2 set [1, "\TZK_CHN_4_0_6_27\aiOrder2_buildStruct_co.paa"];
aiOrdersChn2 set [2, "\TZK_CHN_4_0_6_27\aiOrder2_buyWorker_co.paa"];
aiOrdersChn2 set [3, "\TZK_CHN_4_0_6_27\aiOrder2_setTarget_co.paa"];
aiOrdersChn2 set [4, "\TZK_CHN_4_0_6_27\aiOrder2_shootTarget_co.paa"];
aiOrdersChn2 set [5, "\TZK_CHN_4_0_6_27\aiOrder2_switchSeat_co.paa"];
aiOrdersChn2 set [6, "\TZK_CHN_4_0_6_27\aiOrder2_switchMagazine_co.paa"];
aiOrdersChn2 set [7, "\TZK_CHN_4_0_6_27\aiOrder2_adjustVectorUp_co.paa"];
aiOrdersChn2 set [8, "\TZK_CHN_4_0_6_27\aiOrder2_buyEquipment_co.paa"];
aiOrdersChn2 set [9, "\TZK_CHN_4_0_6_27\aiOrder2_join_co.paa"];

call preprocessFile "impl\LangChn.sqf"