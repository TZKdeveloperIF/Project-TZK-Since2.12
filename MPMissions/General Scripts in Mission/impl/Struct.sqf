_i = 0; _c = count structDefs; while {_i < _c} do {
	_scripts = structDefs select _i select sdScriptsServer;
	_idx = _scripts find "\TZK_Scripts_4_0_4\Server\InitUnitFactory.sqs";
	if (-1 != _idx) then {
		_scripts set [_idx, "Server\BuyUnit\Factory.sqs"];
	};
	_i = _i + 1;
};

_scripts = structDefs select stLight select sdScriptsPlayer;
_scripts set [0, "Player\Init\LightVehicleFactory.sqs"];
_scripts = structDefs select stBarracks select sdScriptsPlayer;
_scripts set [0, "Player\Init\Barracks.sqs"];
_scripts = structDefs select stHeavy select sdScriptsPlayer;
_scripts set [0, "Player\Init\HeavyVehicleFactory.sqs"];
_scripts = structDefs select stAir select sdScriptsPlayer;
_scripts set [0, "Player\Init\AircraftFactory.sqs"];
_scripts = structDefs select stShip select sdScriptsPlayer;
_scripts set [0, "Player\Init\ShipyardFactory.sqs"];

comment "Recover light factory build distance.";
structDefs select stLight set [sdDist, 20];

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