_si = si0;
infTown set [_si, [ [_medicW, 0.1], [_sniperW, 0.3], [_soldierMGW, 0.5], [_soldierLAWW, 1], [_soldierATW, 1],[_soldierDragon, 0.5], [_soldierAAW, 0.5] ] ];
infTownH set [_si, [ [_soldierAAW1, 1] ] ];
armorTown set [_si, [ [_m1a1W, 1] ,[_Leopard2, 1], [_Chalenger2, 1], [_Merkava4, 0.6]  ] ];

_si = si1;
infTown set [_si, [ [_medicE, 0.1], [_sniperE, 0.3], [_soldierMGE, 0.5], [_soldierLAWE, 1], [_soldierATE, 1],[_soldierRPG29, 0.5], [_soldierAAE, 0.5] ] ];
infTownH set [_si, [ [_soldierAAE1, 1] ] ];
armorTown set [_si, [ [_M84, 0.1], [_M84A4, 0.2], [_t90, 1], [_t80U, 1], [_t72BC, 0.3]  ] ];

_si = siRes;
infTown set [_si, [ [_medicR, 0.1], [_sniperR, 0.3], [_soldierMGR, 0.5], [_soldierLAWR, 1], [_soldierATR, 1], [_soldierAAR, 0.5] ] ];
armorTown set [_si, [ [_bmpR, 0.5], [_t72R, 1], [_t80R, 0.5] ] ];
airTown set [_si, [ [_planeatR, 1] ,[_planeatR2, 1] ] ];

civTown = [_motorC, _motorC, _bikeC];
armorTownH = armorTown; armorTownHIsle = armorTown;
