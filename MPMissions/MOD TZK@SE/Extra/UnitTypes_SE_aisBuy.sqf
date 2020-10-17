unitsBuyAI = [ [], [] ];
_i = 0;

utbNone = _i;
_list = [];
(unitsBuyAI select si0) set [_i, _list];
_list = [];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbSoldier = _i;
_list = [ [_soldierW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbinfMGSnip = _i;
_list = [[_soldierMGW, 1],[_sniperW, 0.5] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierMGE, 1],[_sniperE, 0.5] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbinfRPGLAW = _i;
_list = [[_soldierLAWW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierLAWE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbinfRPGLAW2 = _i;
_list = [[_soldierLAWW2, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierLAWE2, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbinfRPGLAW3 = _i;
_list = [ [_soldierLAWW, 1], [_soldierLAWW2, 0.5] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierLAWE, 1], [_soldierLAWE2, 0.5] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbinfAt = _i;
_list = [[_soldierLAWW, 1], [_soldierATW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierLAWE, 1], [_soldierATE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbJav = _i;
_list = [ [_javW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_javE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbinfAt2 = _i;
_list = [[_soldierLAWW2, 1], [_soldierATW2, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierLAWE2, 1], [_soldierATE2, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbinfAt3 = _i;
_list = [ [_soldierLAWW2, 0.5], [_soldierATW2, 0.5], [_soldierLAWW, 1], [_soldierATW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierLAWE2, 0.5], [_soldierATE2, 0.5], [_soldierLAWE, 1], [_soldierATE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbAA = _i;
_list = [ [_soldierAAW, 0.5] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierAAE, 0.5] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbinfAASnip = _i;
_list = [[_sniperW, 0.5], [_soldierAAW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_sniperE, 0.5], [_soldierAAE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbinfAAATSnip = _i;
_list = [ [_soldierLAWW2, 1], [_soldierATW2, 1], [_soldierAAW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierLAWE2, 1], [_soldierATE2, 1], [_soldierAAE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbInfMixed = _i;
_list = [ [_medicW, 0.1], [_sniperW, 0.5], [_bomberW, 1], [_soldierAAW, 0.5], [_soldierMGW, 1], [_soldierLAWW, 1], [_soldierATW, 1], [_soldierLAWW2, 1], [_soldierATW2, 1], [_javW, 0.5 ] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_medicE, 0.1], [_sniperE, 0.5], [_bomberE, 1], [_soldierAAE, 0.5], [_soldierMGE, 1], [_soldierLAWE, 1], [_soldierATE, 1], [_soldierLAWE2, 1], [_soldierATE2, 1], [_javE, 0.5 ] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbHMMVWMixed = _i;
_list = [ [_hummerWG, 0.3], [_hummerWAT, 0.5], [_hummerWAA, 0.3] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_brdmEG, 0.3], [_brdmEAT, 0.5],[_brdmEAA, 0.3] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbHMMVWAT = _i;
_list = [ [_hummerWAT, 0.7] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_brdmEAT, 0.7] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbTanksMixed = _i;
_list = [ [_m60W, 0.5], [_vulcanW2, 0.5], [_m2a2at, 0.5], [_m2a2aa, 0.5], [_m1a1W, 1], [_tdW, 0.5], [_AMX10W, 0.5] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_t72E, 0.5], [_shilkaE2, 0.5], [_bmp2at, 0.5], [_bmp2aa, 0.5], [_t80E, 1], [_tdE, 0.5], [_bmp3, 0.5] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbTanksL = _i;
_list = [ [_m60W, 0.7] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_t72E, 0.7] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbTanksHeavy = _i;
_list = [ [_m1a1W, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_t80E, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbTanksHeavy2 = _i;
_list = [ [_challengerW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_t90MSE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbTanksD = _i;
_list = [ [_tdW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_tdE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbTanksHeavyD = _i;
_list = [ [_m1a1W, 0.7], [_tdW, 0.3] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_t80E, 0.7], [_tdE, 0.3] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbTanksLD = _i;
_list = [ [_m60W, 0.7], [_tdW, 0.3] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_t72E, 0.7], [_tdE, 0.3] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbTanksAT = _i;
_list = [ [_m2a2at, 0.5] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_bmp2at, 0.5] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbBMP3 = _i;
_list = [ [_warrior80W, 0.5] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_bmp3, 0.5] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbAAHeavy = _i;
_list = [ [_vulcanW2, 0.3] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_tunguskaE, 0.3] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbAAvehicles = _i;
_list = [ [_vulcanW, 0.5], [_m2a2aa, 0.5], [_vulcanTransp, 0.5] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_shilkaE, 0.5], [_bmp2aa, 0.5], [_bmp2Cannon, 0.5] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbBombers = _i;
_list = [ [_bomberW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_bomberE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbminers = _i;
_list = [ [_minerW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_minerE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbtransl = _i;
_list = [ [_m2a2W, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_bmp2E, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbtransa = _i;
_list = [ [_uh60W, 0.5], [_uh60supW, 0.8] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_mi17E, 0.5], [_mi17supE, 0.8] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbSupport = _i;
_list = [ [_supportAPCW, 1], [_supportTruckW, 0.1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_supportAPCE, 1], [_supportTruckE, 0.1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbPlane = _i;
_list = [ [_a10, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_su25, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbGunship1 = _i;
_list = [ [_ah1W2, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_v80E2, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbGunship2 = _i;
_list = [ [_ah64W2, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_mi24E2, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;