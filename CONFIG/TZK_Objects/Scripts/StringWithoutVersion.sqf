private ["_string", "_size", "_version", "_versionSize"];

_string = _this;
_size = sizeofstr _string; _version = "_xj400"; _versionSize = sizeofstr _version;
if (substr [_string, _size - _versionSize, _size] == _version) then {_string = substr [_string, 0, _size - _versionSize]};
_size = sizeofstr _string; _version = "_Mag"; _versionSize = sizeofstr _version;
if (substr [_string, _size - _versionSize, _size] == _version) then {_string = substr [_string, 0, _size - _versionSize]};

_size = sizeofstr _string; _version = ["_TZK", "_LSR", "_C8X", "_ICP",  "_CoC", "_DKM", "_VME", "_INQ", "_Vit", "_Fix", "_Lim"]; _versionSize = 4;
while "substr [_string, _size - _versionSize, _size] in _version" do {_string = substr [_string, 0, _size - _versionSize]; _size = sizeofstr _string};

_string