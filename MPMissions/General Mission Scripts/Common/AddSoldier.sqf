// args: [type, pos, dir, si, gi, group, giBuyer]
// return: unit

private [
  "_type", "_pos", "_dir", "_si", "_gi", "_group", "_giBuyer",
  "_err", "_joinNull", "_groupCreate", "_unit", "_indexUnitMatrix", 
  "_desc", "_value", "_init"
];

_type = _this select 0;
_pos = _this select 1;
_dir = _this select 2;
_si = _this select 3;
_gi = _this select 4;
_group = _this select 5;
_giBuyer = _this select 6;

_err = false;
_unit = objNull;

_joinNull = false;
_groupCreate = grpNull;
if ( (_si == si0 || _si == si1) && (_gi in [-1, giTown, giWorker]) && isNull _group ) then { call format["_groupCreate = groupTemp%1", _si]; _joinNull = true };
if ( (_si == si0 || _si == si1) && !(_gi in [-1, giTown, giWorker]) ) then { _groupCreate = (groupMatrix select _si) select _gi };
if ( !(isNull _group )) then { _groupCreate = _group };
if (isNull _groupCreate) then { _err = true; format["ERROR: _groupCreate is NULL in AddSoldier.sqf"] call fDebugLog };

_indexUnitMatrix = _type;
if (_type >= maxUnitTypes) then
{
  _indexUnitMatrix = utCustom select _si;
};

if ( _indexUnitMatrix < 0 || _indexUnitMatrix >= (count unitDefs) ) then { _err = true; format["ERROR: _indexUnitMatrix is out of range in AddSoldier.sqf"] call fDebugLog };

if ( count ((unitDefs select _indexUnitMatrix) select udCrew) > 0 ) then { _err = true; format["ERROR: unit type is not a soldier in AddSoldier.sqf"] call fDebugLog };

if ( (count units _groupCreate) >= 12 ) then { _err = true; format["ERROR: group %1 is full in AddSoldier.sqf", _groupCreate] call fDebugLog };

if (!_err) then
{
  _desc = unitDefs select _indexUnitMatrix;

  if (_gi < 0) then { _gi = 0 };
  if (_giBuyer < 0) then { _giBuyer = 0 };
  _value = _type + TotalUnitTypes*_gi + TotalUnitTypes*GroupsNum*_giBuyer + TotalUnitTypes*GroupsNum*GroupsNum*_si;
  _init = format["newSoldier=this;[%1, this] exec ""Common\MsgUnitBuilt.sqs""", _value];

  (_desc select udModel) createUnit [_pos, _groupCreate, _init, 1, "PRIVATE"];
  newSoldier setDir _dir;
  _unit = newSoldier;
  if (_joinNull) then { [newSoldier] join grpNull };
};

_unit
