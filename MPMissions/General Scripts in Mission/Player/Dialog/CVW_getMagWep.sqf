_var1 = _magInfo select _magInfoIdx select _piName;

if (_var1 == "RedTop") then {
	_redtop = (if (viewDistance > 1300) then {"RedTop_30_xj400"} else {"RedTop_26_xj400"});
	if (upgMatrix select _si select upgRedTopRange == 2) then {_redtop = "RedTop_40_xj400"};
	_mag = _redtop, _wep = _redtop;
};

if (_var1 == "Rocket") then {
	if (_enum == enum_TZK_CustomVehicle_Gunship) then {
		if ("Tiger_RMK30_xj400" countType [_vehicle] > 0) then {
			_mag = "SNEB70Launcher_xj400", _wep = "SNEB70Launcher_xj400";
		};
		if ("Mi24_Base_xj400" countType [_vehicle] > 0) then {
			_mag = "Rocket57x64", _wep = "Rocket57x64";
		};
		if ("Kamov_Base_xj400" countType [_vehicle] > 0) then {
			_mag = "Rocket57x40Kamov_xj400", _wep = "Rocket57x40Kamov_xj400";
		};
	};
	// if (_enum == enum_TZK_CustomVehicle_Helicopter) then {};
};
