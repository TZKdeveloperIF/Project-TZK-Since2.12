comment {args: [speed, name]};
format [
	{[(vehicle player), %1, "%2"] exec (TzkScripts select 199)}
	, _this select 0
	, _this select 1
]