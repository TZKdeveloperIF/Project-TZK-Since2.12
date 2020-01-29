// arguments: array
// array entry : [typeUnit, probability]
// return: type

private ["_type", "_try", "_entry"];

_type = -1;
_try = 0;
while "_type == -1 && _try < 3" do
{
  _entry = _this select ((random (count _this)) - 0.5);

  if ((random 1) < (_entry select 1)) then
  {
    _type = _entry select 0;
  };
  _try = _try + 1;
};
_type