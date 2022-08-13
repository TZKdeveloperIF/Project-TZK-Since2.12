private [
	"_part", "_type", "_structDesc", "_partDesc", "_posPart", "_dirStruct", 
	"_posStruct", "_coef", "_dist", "_posUnit", "_dirUnit"
];

_part = _this select 0;
_type = _this select 1;

_structDesc = structDefs select _type;
_partDesc = (_structDesc select ([sdObjects0, sdObjects1] select ((_this select 2) == si1))) select 0;

_posPart = getPos _part;
_dirStruct = (getDir _part + 360 - (_partDesc select 1)) % 360;

_posStruct = _posPart;

// Sometimes new HF-created vehicles get stuck. Enlarge the dist
_coef = 0.75;
if (_type == stHeavy || _type == stLight) then {_coef = 1.2};
if (_type == stAir) then {_coef = 1.5};
_dist = (_structDesc select sdDist) * _coef;

_posUnit = [ (_posStruct select 0) - _dist*(sin _dirStruct), (_posStruct select 1) - _dist*(cos _dirStruct) ];
_dirUnit = (_dirStruct + 270) % 360;

[_posUnit, _dirUnit]