// args: none
TheWorld = "Undefined"; _world = GetWorld; _found = false;

// The "find" or "in" command is cAsE-SeNsItIvE, thus better use "==" to compare string.;
if (!_found) then {
	_array = ["afganeveron", "asahmi", "noe_desert", "Bahadur", "iraq", 
		"ww4_desertabel", "ww4_desertabel2", "ww4_deserteden", "ww4_deserteden2", "bas_i1"];
	_i = 0; _c = count _array; while {_i < _c && !_found} do {
		if (_world == _array select _i) then {_found = true}; _i = _i + 1;
	};
	if (_found) then {TheWorld = "D"};
};
if (!_found) then {
	_array = ["ebeden_jungle", "seb_iatrang", "bas_i2"];
	_i = 0; _c = count _array; while {_i < _c && !_found} do {
		if (_world == _array select _i) then {_found = true}; _i = _i + 1;
	};
	if (_found) then {TheWorld = "G"};
}
if (!_found) then {
	_array = ["Kolguev2", "USSR2", "USMC_Gaia",  "kodiak_winter", "Noe_winter", "doeeden_snow", "KEGnoecain_snow", 
		"Cain_Winter", "kodiak_winter_tzk"];
	_i = 0; _c = count _array; while {_i < _c && !_found} do {
		if (_world == _array select _i) then {_found = true}; _i = _i + 1;
	};
	if (_found) then {TheWorld = "W"};
};
if (!_found) then {
	// TheWorld here must be "C" now. Some islands here is defined that never allow "G" version.
	// If the island playing isn't included in, it'll have 50% to be "G" version.;
	_array = [];
	_i = 0; _c = count _array; while {_i < _c && !_found} do {
		if (_world == _array select _i) then {_found = true}; _i = _i + 1;
	};
	if (_found) then {TheWorld = "C"};
}

if (bool_TZK_SEMod_Mode) then {
	if ("C" == TheWorld || "Undefined" == TheWorld) then {
		TheWorld = "G";
	};
};

call preprocessFile "impl\init_theworld.sqf";

// Ask server to roll the world
if (isServer && !bool_TZK_199_Mode) then {
	if ("Undefined" == TheWorld) then {
		// delay. Make sure server broadcast string after game has started
		[
			{TheWorld = (if (random 1 < 0.5) then {"G"} else {"C"}); publicVariableString "TheWorld";}, 
			0.1
		] exec "\TZK_Scripts_4_0_5\Common\~@\DelayCode.sqs";
	} else {
		if (TheWorld != "C" && TheWorld != "G") then {
			// [] exec "\TZK_Scripts_4_0_4\Common\Init\Secondary.sqs";
		}
	};
};