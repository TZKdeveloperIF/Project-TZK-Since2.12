if (bool_TZK_Vanilla_Mode && !bool_TZK_Yugo_Mode) Then {
	[format [{ structDefs select %1 set [sdObjects1, [["PP87_TZK_xj400", 0, [0,5,0.1]]]  ] }, _mortar1], 1] exec "\TZK_Scripts_4_0_5\Common\~@\DelayCode.sqs"
};

_secs = baseDefs select 0 select 1;
_secs resize 0;
_secs set [count _secs, [_heliH, 0, [50, 20], 90] ];
_secs set [count _secs, [_heliH, 0, [50, -20], 90] ];
_secs set [count _secs, [_heliH, 0, [-50, 20], 270] ];
_secs set [count _secs, [_heliH, 0, [-50, -20], 270] ];
_secs set [count _secs, [_wall, 15, [-15.2, 15], 270] ];
_secs set [count _secs, [_wall, 15, [-15.2, 5], 270] ];
_secs set [count _secs, [_wall, 15, [-15.2, -5], 270] ];
_secs set [count _secs, [_wall, 15, [15.2, 10], 90] ];
_secs set [count _secs, [_wall, 15, [15.2, 0], 90] ];
_secs set [count _secs, [_wall, 15, [15.2, -10], 90] ];
_secs set [count _secs, [_wall, 15, [0, -8.4], 180] ];
_secs set [count _secs, [_wall, 15, [10, -8.4], 180] ];
_secs set [count _secs, [_roof, 15, [0, -3], 180] ];
_secs set [count _secs, [_roof, 15, [0, 7], 180] ];
_secs set [count _secs, [_roof, 15, [10, -3], 180] ];
_secs set [count _secs, [_roof, 15, [10, 7], 180] ];
_secs set [count _secs, [_roof, 15, [-10, -3], 180] ];
_secs set [count _secs, [_roof, 15, [-10, 7], 180] ];