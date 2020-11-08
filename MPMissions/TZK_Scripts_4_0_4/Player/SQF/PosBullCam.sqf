private ["_Missile", "_Cam", "_zView"];
_Missile = _This select 0;
_Cam = _this select 1;
_zview = _This select 2;


_cam camSetPos [(getpos _missile) select 0, ((getpos _missile) select 1) - 10, ((getpos _missile) select 2) + _zview];
_cam camSetFov 1;
_cam camSetTarget _missile;
_cam camcommit 0;
ctrlSettext [101,format["%1  meters",(_Missile distance player)]] ;
ctrlSettext [102,format["%1 m/s",( (Speed  _missile )* 1000 ) / 3600  ]];
ctrlSettext [103,format["%1", velocity _Missile   ]];