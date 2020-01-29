// args: [pos, height, radius]
// return: count (max 8)

private [ "_pos", "_height", "_radius", "_result", "_poses", "_v", "_object", "_objects", "_i" ];

_pos = [(_this select 0) select 0, (_this select 0) select 1];
_height = _this select 1;
_radius = _this select 2;

_result = 0;
_objects = [];

_i=0;
while "_i < 100 && _result < 4" do
{
  _pos = [_this select 0, 0, _radius] call funcGetRandomPos
  _object = nearestObject [_pos, ""];
  if (!(isNull _object)) then
  {
    // format["Art%1", _i] setMarkerPos getPos _object;
    if (((getPos _object) select 2) > _height) then
    {
      // if (([_pos, _object] call funcCalcDistanceToObject) < _radius && !(_object in _objects)) then
      if (!(_object in _objects)) then
      {
        _objects set [count _objects, _object];
        _result = _result + 1;
      };
    };
  };
  _i=_i+1;
};

_result