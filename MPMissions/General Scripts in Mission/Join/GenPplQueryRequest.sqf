// args: none

TitleText [
	TzkInGameText select 012
	, "Plain DOWN", 0.66
];

private [{_group}, {_netIds}, {_str}, {_curUnitStr}, {_curUnitNetId}];
_group = group player; _netIds = []; _str = "";
{
	if (_x != player) then {
		_curUnitNetId = NetworkID _x;
		_curUnitStr = _x call funcGenNetIdStr;
		if (not isNull _x && local _x && (group _x == _group)) then {
			if isServer then {
				_netIds set [count _netIds, _curUnitNetId]
			} else {
				_str = _str + _curUnitStr + ",";
			};
		};
	}
} forEach (units player);

if isServer then {
	[_netIds, siPlayer, giPlayer] call preprocessFile "Join\SvrProcQueryRequest.sqf";
} else {
	if (_str != "") then {
		_str = substr [_str, 0, sizeofstr _str - 1];
	};
	publicExec format [
		{[%1, %2, %3] call preprocessFile "Join\SvrProcQueryRequest.sqf"}
		, format ["[%1]", _str], siPlayer, giPlayer
	];
};