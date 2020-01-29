// arguments: [object, weapons[], magazines[], bool reset]
// retrun: bool(object in rearmData or not)

private [ "_found", "_i", "_c", "_obj", "_w", "_m", "_breset" ];


_obj = _this select 0;
_w = _this select 1;
_m = _this select 2;
_breset = _this select 3;

if (alive _obj) then
{
	_found = false;
	_i = 0;
	_c = count rearmData;
	while "!_found && _i < _c" do
	{
		if (_obj == ((rearmData select _i) select 0)) then
		{
			_found = true;
		}
		else
		{
			_i = _i + 1;
		};
	};
	[_obj, _w, _m, _breset, _i] exec "Common\EditRearmdata.sqs";
};
_found