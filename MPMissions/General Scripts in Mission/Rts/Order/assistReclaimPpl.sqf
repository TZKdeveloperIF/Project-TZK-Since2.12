// args: [vehicle, type, distance][]
// return: vehicle

private [{_unit}, {_vs}, {_seats}, {_group}, {_target}
	, {_onlyDriver}, {_onlyGunner}
	, {_i}, {_c}, {_found}, {_vehicle}, {_gunner}, {_driver}
	, {_hasGunner}, {_hasDriver}, {_legal}
];
// select empty or has same group gunner/driver vehicle

_unit = _this select 0; _vs = _this select 1; _seats = _this select 2;
_group = group _unit; _target = objNull;
_onlyDriver = false; _onlyGunner = false;
if (count _seats == 1) then {
	_onlyDriver = "driver" == _seats select 0;
	_onlyGunner = "gunner" == _seats select 0;
};

_i = 0; _c = count _vs; _found = false;

while {_i < _c && not _found} do {
	_vehicle = _vs select _i select 0;
	_gunner = gunner _vehicle; _hasGunner = not isNull _gunner;
	_driver = driver _vehicle; _hasDriver = not isNull _driver;
	_legal = true;

	if (_hasGunner && _hasDriver) then {_legal = false};
	if (_hasGunner) then {
		if (group _gunner != _group || _onlyGunner) then {_legal = false};
	};
	if (_hasDriver) then {
		if (group _driver != _group || _onlyDriver) then {_legal = false};
	};
	if (_legal) then {
		_found = true;
		_target = _vehicle;
	};

	_i = _i + 1;
};

_target