private ["_dist", "_objects", "_object"];
_dist = 100000;
_objects = mhq + ResDestroyStruct;
_object = objNull;
{if (alive _x && _this distance _x < _dist) then {_object = _x; _dist = _this distance _x}} forEach _objects;
_object
