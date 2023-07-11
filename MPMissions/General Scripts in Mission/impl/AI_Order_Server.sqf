comment "Adjust all group order scripts' path.";
_oldPrefix = "\TZK_Scripts_4_0_5\Server\Order\"; _len = sizeofstr _oldPrefix;
{
	_oldPath = _x select 2;
	if (sizeofstr _oldPath >= _len) then {
		if (_oldPrefix == substr [_oldPath, 0, _len]) then {
			_newPath = substr [_oldPath, sizeofstr "\TZK_Scripts_4_0_5\", sizeofstr _oldPath];
			_x set [2, _newPath];
		};
	};
} forEach orderDefs;

orderTempDefs select orderTempRearm set [2, "Server\OrderTemp\Rearm.sqs"];
orderTempDefs select orderTempChangeAmmo set [2, "Server\OrderTemp\ChangeAmmo.sqs"];
orderTempDefs select orderTempDeployVehicle set [2, "Server\OrderTemp\DeployVehicle.sqs"];
comment {
	orderTempDefs select orderTempMoveUnit set [2, "Server\OrderTemp\MoveUnit.sqs"];
};

comment "Disable all west/east AI group engage ability by default. Practice proves this a better choice.";
{
	_si = _x; _gi = 0;
	{
		_params = initStatusMatrix select _si * GroupsNum + _gi select orderTempDisengageType;
		_params set [0, 1];
		_params set [1, _typeDefs1 find "Light Tank"];
		_params set [2, _typeDefs1 find "Heavy Tank"];
		_params set [3, _typeDefs1 find "Artillery"];

		_gi = _gi + 1;
	} foreach (groupMatrix select _x);
} forEach [si0, si1];

comment "Fix error definition in aiSetting";
{
	_list = aiSetting select _x; _list resize (count (groupMatrix select _x));
}
forEach [si0, si1];