// args: [objectStructure, typeStructure, si]
// return: [posUnit, dirUnit]

private [ "_part", "_type", "_structDesc", "_partDesc", "_posPart", "_dirStruct",
          "_posPartRel", "_posStructX", "_posStructY", "_posStruct", "_dist", "_posUnit", "_dirUnit"];

_part = _this select 0;
_type = _this select 1;

_structDesc = structDefs select _type;
_partDesc = (_structDesc select ([sdObjects0, sdObjects1] select ((_this select 2) == si1))) select 0;

_posPart = getPos _part;
_dirStruct = (getDir _part + 360 - (_partDesc select 1)) % 360;

// _posPartRel = _partDesc select 2;
// if (count _posPartRel == 0) then { _posPartRel = [0,0,0] };

// _posPartRelRot = [_posPartRel, _dirStruct] call funcVectorRot;

// _posStructX = (_posPart select 0) - (_posPartRelRot select 0);
// _posStructY = (_posPart select 1) - (_posPartRelRot select 1);
// _posStruct = [ _posStructX, _posStructY ];
_posStruct = _posPart;

_dist = (_structDesc select sdDist)*0.75;

_posUnit = [ (_posStruct select 0) - _dist*(sin _dirStruct), (_posStruct select 1) - _dist*(cos _dirStruct) ];
_dirUnit = (_dirStruct + 270) % 360;

[_posUnit, _dirUnit]