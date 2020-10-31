private ["_vehicle", "_weapon", "_muzzle", "_mode", "_ammo", "_bullet", "_size", "_startPos", "_actualAmmo", "_position", "_direction", "_velocity", "_speed"];

_vehicle = _this select 0;
_weapon = _this select 1;
_muzzle = _this select 2;
_mode = _this select 3;
_ammo = _this select 4;

_bullet = nearestObject [_vehicle, _ammo];
if (local _bullet) then {
	if !(_ammo in ["Ammo_12mm7_xj400"]) then {
		_size = sizeofstr _ammo; _startPos = sizeofstr "Virtual"; _actualAmmo = substr [_ammo, _startPos, _size];
		_actualAmmo = _actualAmmo call funcStringWithoutVersion;
		_position = getPos _bullet; _direction = vectorDir _bullet; _velocity = velocity _bullet;
		deleteVehicle _bullet;
		if (_actualAmmo in ["LAW","RPG"]) then {_speed = 30};
		if (_actualAmmo in ["CarlGustav","AT4", "CarlGustavNoGuide","AT4NoGuide"]) then {_speed = 0};
		if (_actualAmmo in ["Grenade"]) then {_speed = 60};
		if (_actualAmmo in ["MortarShell"]) then {_speed = 200; if (player in _vehicle) then {_speed = 70}};
		_velocity = [_velocity, _speed / (_velocity call funcVectorLength)] call funcVectorScale;
		_bullet = createShell [_actualAmmo, _position, _velocity, _vehicle, objNull];
		_bullet setVectorDirAndUp [_direction, [0,0,1]];
	};
};