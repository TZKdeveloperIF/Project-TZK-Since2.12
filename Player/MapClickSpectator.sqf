// arguments: [_pos, _units, _alt, _shift]
// returns: true if command processed, false if not

// TODO - remove
// funcMapClickSpectator = preprocessFile "Player\MapClickSpectator.sqf";

private ["_pos", "_units", "_alt", "_shift", "_processed", "_posInfo", "_textPos"];

_pos = _this select 0;
_units = _this select 1;
_alt = _this select 2;
_shift = _this select 3;
_processed = false;

// move cam
if (!_processed && !_alt && !_shift) then
{
  _unit = objNull;
  _dist = 50;

  _res = [si0, _pos] call funcGetClosestUnit;
  if ((_res select 1) < _dist) then
  {
    _unit = _res select 0;
    _dist = _res select 1;
  };

  _res = [si1, _pos] call funcGetClosestUnit;
  if ((_res select 1) < _dist) then
  {
    _unit = _res select 0;
    _dist = _res select 1;
  };

  unitSpec = _unit;
  posSpecFree = _pos;

  _processed = true;
};

// move seagull
if (!_processed && !_alt && !_shift) then
{
  seagullPos = _pos;
  seagullPosSet = true;
  _processed = true;
};

// unit cam
if (!_processed && !_alt && _shift) then
{
  _resSide0 = [si0, _pos] call funcGetClosestUnit;
  _resSide1 = [si1, _pos] call funcGetClosestUnit;
  _unit = objNull;
  if ((_resSide0 select 1) < (_resSide1 select 1)) then
  {
    _unit = _resSide0 select 0;
  }
  else
  {
    _unit = _resSide1 select 0;
  };
  unitSpec = _unit;
  seagullModeExit = true;
  _processed = true;
};

// cleanup
if (!_processed && _alt && !_shift) then
{
  [_pos] exec "Player\CleanupGround.sqs";
};

_processed