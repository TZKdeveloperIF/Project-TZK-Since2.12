// args: [Network IDs[], param: any, script name: string, script folder: string]

private [{_netIds},{_param},{_scriptName}];
_netIds = _this select 0; _param = _this select 1; _scriptName = _this select 2;
// todo: ID, time stamp, and necessary design, for player RTS order

// preprocess
// ASSERT("Order" == (_this select 3));

// if ("hShootArea.sqs" == _scriptName) then {
	// [_param select 2, _param select 4, _param select 5, true] call preprocessFile "Art\PreAnalysesArtArea.sqf";
// };

_scriptPath = format ["%1\%2\%3", "Rts", "Order\Ppl", _scriptName];

{
	private [{_unit},{_uid},{_id}];
	_unit = UnitById _x;
	if (alive _unit) then { // todo: what if we wish to order dead units (like disband)?
		_uid = [_unit, siPlayer, giPlayer] call funcCalcUID;
		if (_uid > 12) then {
			_unit groupChat "Fail to get UID, RTS order not set.";
		} else {
			_id = (playerOrderID select _uid) + 1;
			[_uid, _id] exec "\TZK_Scripts_4_0_4\Player\Order\New.sqs";

			[_unit, _param, [_uid, _id]] exec _scriptPath;
		};
	};
} forEach _netIds;

// postprocess