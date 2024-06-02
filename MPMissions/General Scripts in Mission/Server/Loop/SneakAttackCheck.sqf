// args: si

_playerNames resize 0;
_mhq = mhq select (siEnemy select _this);
_pplGrps = (groupMatrix select _this) - (groupAiMatrix select _this);
{
	if ((leader _x) distance _mhq < 2 * viewDistance) then {
		_playerNames set [count _playerNames, name leader _x];
	};
} forEach _pplGrps;
if (count _playerNames > 0) then {
	[siEnemy select _this, format ["%1 is approaching mhq", _playerNames]] exec "Network\sSideMsg.sqs";
}