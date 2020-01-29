// args: [pos]
// return: true/false

private [ "_i", "_c", "_objects", "_dist", "_dir", "_pos", "_object" ];

_i=0;
_c = 0;
_objects = [];
while "_i < 100 && _c < 4" do
{
  _dist = 30*(_i/100);
  _dir = _i*20;
  _pos = [ _this select 0, [_dist*(sin _dir), _dist*(cos _dir)] ] call funcVectorAdd;
  // "Art0" setMarkerPos _pos;
  _object = nearestObject [_pos, ""];
  // _object = nearestObject [ [_this select 0, 0, 30] call funcGetRandomPos, ""];
  if (!(isNull _object)) then
  {
    if (((getPos _object) select 2) > 5) then
    {
      if (!(_object in _objects)) then
      {
        _objects set [count _objects, _object];
        _c = _c + 1;
      };
    };
  };
  _i=_i+1;
};

_c > 3