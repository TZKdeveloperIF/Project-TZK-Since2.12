private ["_magazineIndex", "_difference", "_respawnMagIndex"];
_magazineIndex = _this select 0; _difference = _this select 1;

_respawnMagIndex = RespawnM find _magazineIndex;
if (_respawnMagIndex != -1) then {
	if ((RespawnA select _respawnMagIndex) <= _difference) then {
		_difference = _difference - (RespawnA select _respawnMagIndex);
		RespawnM set [_respawnMagIndex, -1]; RespawnA set [_respawnMagIndex, 0];
	} else {
		RespawnA set [_respawnMagIndex, (RespawnA select _respawnMagIndex) - _difference];
		_difference = 0; 
	};
};
_difference