// args: [Network IDs[], param: any, script name: string, script folder: string]

private [{_netIds},{_param},{_scriptName},
	{_needDispatch}, {_units}, {_unitIdx}, 
	{_msgGot}, {_msgContent}
];
_netIds = _this select 0; _param = _this select 1; _scriptName = _this select 2;
// todo: ID, time stamp, and necessary design, for player RTS order

// preprocess
// ASSERT("Order" == (_this select 3));

// if ("hShootArea.sqs" == _scriptName) then {
	// [_param select 2, _param select 4, _param select 5, true] call preprocessFile "Art\PreAnalysesArtArea.sqf";
// };

_needDispatch = ["hForceMoveLand","hForceMoveShip","hMove","hStop","hLandHeli","hCrossBridge"];
_scriptPath = format ["%1\%2\%3.sqs", "Rts", "Order", 
	if (_scriptName in _needDispatch) then {_scriptName + "Ppl"} else {_scriptName}
];

_needSkipPlayerCrews = _needDispatch;
if (_scriptName in _needSkipPlayerCrews) then {
	_inPplVehicle = { vehicle UnitById _this == vehicle player };
	[_netIds, _inPplVehicle] call preprocessFile "Algo\arrayEraseIf.sqf";
};

_units = [], _units resize (count _netIds), _unitIdx = 0;
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

			_units set [_unitIdx, _unit]; _unitIdx = _unitIdx + 1;
		};
	};
} forEach _netIds;
_units resize _unitIdx;

[_units, _param, _scriptName] exec "Rts\Ui\OnCmdOrderMsg.sqs";

// postprocess