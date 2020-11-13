aiSettingDefs set [aisBuy, ["Buy", ["none", "Mixed", "Infantry Mixed", "Armor Mixed", "Armor Heavy", "Anti-Air", "Saboteurs"], 0] ];

unitsBuyAI = [ [], [] ];
_i = 0;

utbNone = _i;
_list = [];
(unitsBuyAI select si0) set [_i, _list];
_list = [];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbMixed = _i;
_list = [ [_sniperW, 0.5], [_soldierAAW, 0.5], [_soldierMGW, 1], [_soldierLAWW, 1], [_soldierATW, 1], [_soldierDragon, 0.5],[_YPR,0.1],[_m2a2W,0.5],[_vulcanW,0.5],[_m1a1W, 1],[_Chalenger2,1],[_Merkava4,0.2],[_Leopard2,1],[_M113A3,0.1],[_hummerM2W,0.1],[_hummerMK19W,0.1],[_hummerMK19W,0.1],[_hummerTOWW,0.1],[_ADATS,0.1],[_M6,0.1],[_ah1,0.05],[_ah64AT,0.05],[_ah64,0.05],[_OH58AT,0.05],[_OH58,0.05],[_md6g,0.05],[_md6at,0.05],[_A10,0.05],[_F16,0.05] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_sniperE, 0.5], [_soldierAAE, 0.5], [_soldierMGE, 1], [_soldierLAWE, 1], [_soldierATE, 1], [_soldierRPG29, 0.5],[_M84,0.2],[_M84A4,0.5],[_bmp3,0.5],[_shilkaE, 0.5],[_t80UE,1],[_t80U,1],[_t90,1],[_t72BC,0.1],[_uazDshK,0.1],[_brdmPKE,0.1],[_btr80, 0.1],[_Sa13,0.1],[_Sa11,0.1],[_mi24E,0.05],[_Ka50,0.05],[_Ka50B,0.05],[_Ka52,0.05],[_Mi28AT,0.05],[_Mi28GS,0.05],[_Mi17R,0.05],[_Mi2R,0.05],[_Mi2AT,0.05],[_Mi2AAAT,0.05],[_su25,0.05],[_mig29,0.05],[_mig29AT,0.05] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbInfMixed = _i;
_list = [ [_sniperW, 0.3], [_bomberW, 0.1], [_soldierAAW, 0.5], [_soldierMGW, 1], [_soldierLAWW, 0.5], [_soldierATW, 1], [_soldierDragon, 0.5]  ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_sniperE, 0.3], [_bomberE, 0.1], [_soldierAAE, 0.5], [_soldierMGE, 1], [_soldierLAWE, 0.5], [_soldierATE, 1], [_soldierRPG29, 0.5] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbTanksMixed = _i;
_list = [ [_m1a1W, 1] ,[_Leopard2, 1], [_Chalenger2, 1], [_Merkava4 , 0.3],[_vulcanW, 0.5], [_ADATS, 0.2], [_M6, 0.2]  ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_t90, 1], [_T80UE, 1], [_shilkaE, 0.5], [_Sa13, 0.2], [_Sa11, 0.2]  ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbTanksHeavy = _i;
_list = [ [_m1a1W, 1] ,[_Leopard2, 1], [_Chalenger2, 1], [_Merkava4 , 0.3]  ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_t90, 1], [_T80UE, 1]  ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbAA = _i;
_list = [ [_soldierAAW, 0.5], [_vulcanW, 1],[_ADATS, 1],[_M6, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_soldierAAE, 0.5], [_shilkaE, 1],[_Sa13, 1], [_Sa11, 0.5] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbBombers = _i;
_list = [ [_bomberW, 1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_bomberE, 1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;

utbAttackAir = _i;
_list = [ [_ah1,0.1]  ,[_ah64AT,0.1],[_ah64,0.1],[_OH58,0.1], [_OH58AT,0.1],[_OH58,0.1],  [_md6g,0.1],  [_md6at,0.1],[_A10,0.1], [_A10B,0.1], [_F16,0.1],  [_F15C,0.1],  [_F16SEAD,0.1],[_F16CAP,0.1] ];
(unitsBuyAI select si0) set [_i, _list];
_list = [ [_mi24E,0.1],[_mi35,0.1],  [_Ka50,0.1],[_Ka50B,0.1],[_Ka52,0.1],  [_Mi28AT,0.1],[_Mi28GS,0.1],[_Mi17R,0.1],[_Mi2R,0.1],[_Mi2AT,0.1],[_Mi2AAAT,0.1],[_su25,0.1],[_su27,0.1], [_mig29,0.1],[_mig29AT,0.1] ];
(unitsBuyAI select si1) set [_i, _list];
_i = _i + 1;
