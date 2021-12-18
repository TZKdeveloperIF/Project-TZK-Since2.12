_vehicle = _this select 0;
_si = _this select 1;

_sides = [_si];

_missileName = ["Stinger_xj400", "Strela_xj400"] select _si;
_initTime = call format ["%1", _missileName GetAmmoParam "initTime"];
{
	_si = _x;
	{
		_type = _x;
		{
			if (local _x) then {
				[_vehicle, _x, _missileName, _initTime] exec "Common\EH\Fired_AA_CreateMissile.sqs";
			}
		} forEach (unitMatrix select _si select _type);
	} forEach (typesAntiPlane8000 select _si);
} forEach _sides;
