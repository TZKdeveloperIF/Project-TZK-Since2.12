// args: [unit, vehicle, seat: string]
// returns: play move time (0 if embark request is invalid)

// it'll cost some times to play the "embark" move. Logic after that will be executed asynchronously by SQS
// If wish to obtain "embarked" status, caller should delay for a while too
//  Using an array as reference to get status or pass in a callback are alternatives as well

// besides, this script don't fit "reclaim". The existence of delay will make "same group check" hard to design.

private [{_unit}, {_vehicle}, {_seat}, {_valid}, {_delay}];
_unit = _this select 0; _vehicle = _this select 1; _seat = _this select 2;
_valid = false; _delay = 0;
if (alive _unit && alive _vehicle) then {
	// do not process other cases like seat has been occupied, unit has been on other seat, et al
	if ("Cargo" == _seat) then {
		private [{_volume}]; _volume = _vehicle call funcGetTranspVol;
		if (_volume > 0) then {if ((_vehicle call funcGetCargoNum) < _volume) then {
			_valid = true;
		}};
	} else {
		if not (call format [{%1 _vehicle == _unit}, _seat]) then {
			_valid = true;
		};
	};
};
if _valid then {
	_delay = 2.7; // Origin OFP's playing embark move requires about 2.58s
	[_unit, _vehicle, _seat, _delay] exec "Util\Embark.sqs";
};
_delay