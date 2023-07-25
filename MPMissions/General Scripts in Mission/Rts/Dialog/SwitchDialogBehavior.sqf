if (2^0 == _btnVal) then {_this exec "Rts\Dialog\RtsMap.sqs"};
if (2^1 == _btnVal) then {_this exec "Rts\Dialog\AreaMap.sqs"};
if (2^2 == _btnVal) then {_this exec localize {TZK_DIALOG_WAYPOINT}};
if (2^3 == _btnVal) then {_this exec localize {TZK_DIALOG_ORDER_PLAYER_AI}};
if (2^4 == _btnVal) then {_this exec "Rts\Dialog\PointMap.sqs"};

closeDialog 0;