// arguments: object
// return: [ [wpn, ...], [mag, ...] ] ([[],[]] if not found)

private [ "_return", "_found", "_i", "_c" ];

_return = [ [], [] ];

_found = false;
_i = 0;
_c = count rearmData;

while "!_found && _i < _c" do
{
  if (_this == ((rearmData select _i) select 0)) then
  {
    _found = true;
    _return set [0, (rearmData select _i) select 1];
    _return set [1, (rearmData select _i) select 2];
  };
  _i = _i + 1;
};
_return
