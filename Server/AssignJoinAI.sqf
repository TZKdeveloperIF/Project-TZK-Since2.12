// args: [ units to join[] ]
// return: none

private [ "_x", "_units", "_vehicle" ];


_units = _this select 0;

_vehicle = objNull;
if (count _units > 0) then
{
	{
		_vehicle = vehicle _x;
		if (_x != _vehicle) then
		{
			if (_x == driver _vehicle) then {_x assignAsDriver _vehicle} else {
				if (_x == gunner _vehicle) then {_x assignAsGunner _vehicle} else {
					if (_x == commander _vehicle) then {_x assignAsCommander _vehicle} else {
						_x assignAsCargo _vehicle
					}
				}
			}
		}
	} forEach _units;
};