private ["_i"];
_i = 0; while "_i < 30" do {call format ["deleteVehicle trig%1", _i]; _i = _i + 1};
{_x setRadioMsg "NULL"} forEach [1,2,3,4,5,6,7,8,9,10];
{deleteVehicle _x} forEach [WestWins, EastWins, Draw]