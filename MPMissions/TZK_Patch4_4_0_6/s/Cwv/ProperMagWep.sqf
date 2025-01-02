comment {Scripts to select proper weapon/magazine for specific vehicle} ;

comment {args: display magazine name: string, side: number, enum of CWV: number, vehicle: object} ;
comment {outer pre-defined vars: _mag, _wep} ;
private [{_dispMagName}, {_si}, {_enum}, {_vehicle}];
_dispMagName = _this select 0; _si = _this select 1; _enum = _this select 2; _vehicle = _this select 3; _this = 0;

if (_dispMagName == "RedTop") then {
	_redtop = (if (viewDistance > 1300) then {"RedTop_30_xj400"} else {"RedTop_26_xj400"});
	if (upgMatrix select _si select upgRedTopRange == 2) then {_redtop = "RedTop_40_xj400"};
	_mag = _redtop, _wep = _redtop;
};

if (_dispMagName == "Rocket") then {
	if (_enum == enum_TZK_CustomVehicle_Gunship) then {
		if ("Tiger_RMK30_xj400" countType [_vehicle] > 0) then {
			_mag = "SNEB70Launcher_xj400", _wep = "SNEB70Launcher_xj400";
		};
		if ("Mi24_Base_xj400" countType [_vehicle] > 0) then {
			_mag = "Rocket57x64", _wep = "Rocket57x64";
		};
		if ("Kamov_Base_xj400" countType [_vehicle] > 0 || "Ka50_Vanilla_Base_xj400" countType [_vehicle] > 0) then {
			_mag = "Rocket57x40Kamov_xj400", _wep = "Rocket57x40Kamov_xj400";
		};
	};
	comment {if (_enum == enum_TZK_CustomVehicle_Helicopter) then {};} ;
};
