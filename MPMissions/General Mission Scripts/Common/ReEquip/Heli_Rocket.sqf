private ["_si", "_types", "_i", "_ci", "_j", "_cj", "_vehicles", "_unit", "_x", "_theWeapon", "_w", "_m", "_k", "_ck", "_mArray"];

_si = _this select 0;
if (_si == si0) then {_types = [typesGunshipOrigin select 0, typesGunshipAT select 0, typesGunshipOrigin select 1, typesGunshipAT select 1, typesGunshipOrigin select 4, typesGunshipAT select 4] + TransportHeliW};
if (_si == si1) then {_types = [typesGunshipOrigin select 2, typesGunshipAT select 2, typesGunshipOrigin select 3, typesGunshipAT select 3] + TransportHeliE};


_i = 0; _ci = count _types;
while "_i < _ci" do {
	_vehicles = (UnitMatrix select _si) select (_types select _i); _j = 0; _cj = count _vehicles;
	
	_theWeapon = ["ZuniLauncher38", "Rocket57x192"] select _si;
	if ((_types select _i) in [typesGunshipOrigin select 4, typesGunshipAT select 4]) then {_theWeapon = "SNEB70Launcher_xj200"};
	if ((_types select _i) in [typesGunshipOrigin select 2, typesGunshipAT select 2]) then {_theWeapon = "Rocket57x40Kamov"};
	if ((_types select _i) in [typesGunshipOrigin select 3, typesGunshipAT select 3]) then {_theWeapon = "Rocket57x64"};
	
	while "_j < _cj" do {
		_unit = _vehicles select _j;
		[_unit, [_theWeapon], [_theWeapon], _types select _i, 2, false] exec "Common\EditEquipRearmData.sqs";
		
		if (local _unit) then {
			_unit addMagazine _theWeapon; _unit addWeapon _theWeapon;
		};
		_j = _j + 1;
	};
	_i = _i + 1;
};