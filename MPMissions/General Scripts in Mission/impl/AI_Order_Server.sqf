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

comment "TODO: Remove definition of orderTempDefs.";
{_x select 1 resize 0; _x resize 0} forEach orderTempDefs;
orderTempDefs resize 0; orderTempDefs = nil;

comment "TODO: Remove definition of initStatusMatrix.";
{_x resize 0} forEach initStatusMatrix;
initStatusMatrix resize 0; initStatusMatrix = nil;

comment "Fix error definition in aiSetting";
{
	_list = aiSetting select _x; _list resize (count (groupMatrix select _x));
}
forEach [si0, si1];