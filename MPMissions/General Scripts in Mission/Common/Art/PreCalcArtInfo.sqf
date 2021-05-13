// This script must be applied via preprocessFile command since there're many notes.

// args: [[object(vehicle or unit), weapon, magazine...], target position[], bool infantry, speed, elevation angle, max range]
private ["_vehicle", "_weapon", "_magazine", "_posTarget", "_speed", "_elev", "_biggerAngle"];
private ["_posObject", "_speedMax", "_y0", "_height", "_res", "_rX0", "_rH0", "_distX", "_break"];

_vehicle = _this select 0 select 0;	_weapon = _this select 0 select 1;			_magazine = _this select 0 select 2;
_posTarget = _this select 1; 		_speed = _this select 2;					_elev = _this select 3;				
_biggerAngle = if(count _this > 4) then "_this select 4" else "0";

_posObject = getPosASL _vehicle;
_speedMax = 2000; if ("M252Mortar_TZK_xj400" countType [_vehicle] > 0) then {_speedMax = 202}; if ("m119_xj400" countType [_vehicle] > 0) then {_speedMax = 712}; if ("D30_xj400" countType [_vehicle] > 0) then {_speedMax = 690}; if ("TOS1_TZK_xj400" countType [_vehicle] > 0) then {_speedMax = 500}; 
if(_speed <= 0) then "_speed = 5"; if(_speed > _speedMax) then "_speed = _speedMax";

// Obtain max distX using elev = 40°. The physics condition is y >= 0.
if(_posObject select 2 <= 0) then "_posObject set [2, 0.01]";
_y0 = _posObject select 2; _height = _posTarget select 2;
// args: [vx, vy, yStart, yEnd]. yStart is 0.01 at least and yEnd is 0.
_res = [_speed * cos(40), _speed * sin(40), _posObject select 2, 0] call loadFile "Common\Art\RK4_GetXandH.sqf"; _rX0 = _res select 0; _rH0 = _res select 1;
_distX = [_posObject, _posTarget] call funcDistH;
_break = 0;
if(_rX0 < _distX) then "_break = 1";
if (_break == 0) then {
	if(_rH0 < _height) then {
// player globalChat format ["_rH0 < _height. _rH0 is %1.", _rH0];
	// If target too high, increase angle and iterate to find min elevation.
		// try 90° first.
		_res = [_speed * cos(90), _speed * sin(90), _y0] call loadFile "Common\Art\RK4_Upward.sqf"; _rH1 = _res select 1;
		if(_rH1 < _height) then "_break = 2" else {
			_error0 = _height - _rH0; _error1 = _height - _rH1;
			_elev0 = 40; _elev1 = 90;
			// initial the temp value for iteration. Temp value is initialized by init_value_0.
			_rHNew = _height - _error0; _elevNew = _elev0;
			_i = 0; _try = 6;
			while "_i < _try && abs(_height - _rHNew) > 10" do {
				_elev0 = _elev1;	_error0 = _error1;
				_elev1 = _elevNew;	_error1 = _height - _rHNew;
				// elev0 - error0, elev1 - error1. Suppose elevX - 0(no error), solve elevX via linear method.
				_elevNew = _elev0 + (_elev1 - _elev0)/(_error1 - _error0)*(0 - _error0);
				_res = ([_speed * cos(_elevNew), _speed * sin(_elevNew), _y0] call loadFile "Common\Art\RK4_Upward.sqf"); _rHNew = _res select 1;
				_i = _i + 1;
			};
// player globalChat format["Able to reach height. Elev: %1, Height: %2, _rhNew: %3", _elevNew, _height, _rHNew];
			// _elevNew is proper elevation with small error, or tried too many times.
			if(_i == _try) then "_break = 2.1" else {
				// _elevNew is proper angle. How about its range?
				_rXNew = _res select 0;
// player globalChat format["Calculate the range. Dist: %1, _rXNew: %2", _distX, _rXNew];
				if(_rXNew >= _distX) then {
// player globalChat "enter iterating";
				// good _speed and _elev. We need a bigger _elev to make shell hit the target. One MUST GURANTEE NEW ELEV BIGGER to make shell reach destinate height.
					_elev1 = _elevNew; _rX1 = [_speed * cos(_elev1), _speed * sin(_elev1), _y0, _height] call loadFile "Common\Art\RK4_UpandDown.sqf"; _error1 = _distX - _rX1;
					// Make _elevNew = _elev + 30. When _elev close to desired value the step should be small, otherwise as in our case (first trial) the step should be big.
					_elevNew = _elev1 + 30; _rXNew = [_speed * cos(_elevNew), _speed * sin(_elevNew), _y0, _height] call loadFile "Common\Art\RK4_UpandDown.sqf";
					_i = 0; _try = 6;
					while "_i < _try && abs(_distX - _rXNew) > 10" do {
						_elev0 = _elev1;	_error0 = _error1;
						_elev1 = _elevNew;	_error1 = _distX - _rXNew;
						_elevNew = _elev0 + (_elev1 - _elev0)/(_error1 - _error0)*(0 - _error0);
						_rXNew = [_speed * cos(_elevNew), _speed * sin(_elevNew), _y0, _height] call loadFile "Common\Art\RK4_UpandDown.sqf";
						_i = _i + 1;
					};
					// In our algorithm the _elevNew is always proper. No "too many trials" check.
					_elev = _elevNew;
				}
				else "_break = 2.2";
				// Too little _speed. 
			};
		};
	}
	else {
	// 40° trajectory with max range can reach distX and target's height. But not sure both of then can be satisfied.
		_res = [_speed * cos(40), _speed * sin(40), _y0, _distX] call loadFile "Common\Art\RK4_3CaseCheck.sqf"; _vy = _res select 1; _maxH = _res select 0;
		// case0: _maxH < _height && _vy > 0.	target is above the trajectory. Increase elevation we can obtain 2 available value.
		// case1: _maxH > _height.				target is below the trajectory. Both increase or decrease elevation we can obtain 1 available for each direction.
		// case2: _maxH < _height && _vy < 0.	target is above the trajectory. No gurantee if adjust elevation can hit the target. In this case raise speed is better.
		if( (_maxH < _height && _vy > 0) || _maxH > _height ) then {
		// Both case0 and case1. If big angle ON, we raise the elevation to make shell "fall" at target. This is same as "good _speed and _elev" case.
			if(_biggerAngle > 0) then {
				_elevNew = 40; 	
					_elev1 = _elevNew; _rX1 = [_speed * cos(_elev1), _speed * sin(_elev1), _y0, _height] call loadFile "Common\Art\RK4_UpandDown.sqf"; _error1 = _distX - _rX1;
					// Make _elevNew = _elev + 30. When _elev close to desired value the step should be small, otherwise as in our case (first trial) the step should be big.
					_elevNew = _elev1 + 30; _rXNew = [_speed * cos(_elevNew), _speed * sin(_elevNew), _y0, _height] call loadFile "Common\Art\RK4_UpandDown.sqf";
// player globalChat format["_rX1: %1, _rXNew: %2", _rX1, _rXNew];
					_i = 0; _try = 6;
					while "_i < _try && abs(_distX - _rXNew) > 10" do {
						_elev0 = _elev1;	_error0 = _error1;
						_elev1 = _elevNew;	_error1 = _distX - _rXNew;
						_elevNew = _elev0 + (_elev1 - _elev0)/(_error1 - _error0)*(0 - _error0);
						_rXNew = [_speed * cos(_elevNew), _speed * sin(_elevNew), _y0, _height] call loadFile "Common\Art\RK4_UpandDown.sqf";
// player globalChat format["_i: %1, _elevNew: %2, _rXNew: %3, _error: %4, _elev: %5", _i, _elevNew, _rXNew, [_error0, _error1], [_elev0, _elev1]];
						_i = _i + 1;
					};
					// In our algorithm the _elevNew is always proper. No "too many trials" check.
					_elev = _elevNew;
// player globalChat format["case 0 1, big angle, %1", [_rXNew, _distX, _elev]];
			}
			else {
		// Otherwise, we reduce the elevation to make shell "splash" the target.
				_elevNew = 40; 	
					_elev1 = _elevNew; _rY1 = [_speed * cos(_elev1), _speed * sin(_elev1), _y0, _distX] call loadFile "Common\Art\RK4_Up_and_Hit.sqf"; _error1 = _height - _rY1;
					// Make _elevNew = _elev - 15. We wish the shell spash the target but not fall. The negative step is safe since we've checked the _rH0.
					_elevNew = _elev1 - 15; _rYNew = [_speed * cos(_elevNew), _speed * sin(_elevNew), _y0, _distX] call loadFile "Common\Art\RK4_Up_and_Hit.sqf";
// player globalChat format["_rY1: %1, _rYNew: %2", _rY1, _rYNew];
					_i = 0; _try = 6;
					while "_i < _try && abs(_height - _rYNew) > 2" do {
						_elev0 = _elev1;	_error0 = _error1;
						_elev1 = _elevNew;	_error1 = _height - _rYNew;
						_elevNew = _elev0 + (_elev1 - _elev0)/(_error1 - _error0)*(0 - _error0);
						_rYNew = [_speed * cos(_elevNew), _speed * sin(_elevNew), _y0, _distX] call loadFile "Common\Art\RK4_Up_and_Hit.sqf";
// player globalChat format["_i: %1, _elevNew: %2, _rYNew: %3, _error0: %4, _error1: %5", _i, _elevNew, _rYNew, _error0, _error1];
						_i = _i + 1;
					};
					// In our algorithm the _elevNew is always proper. No "too many trials" check.
					_elev = _elevNew;
// player globalChat format["case 0 1, small angle, %1", [abs(_height - _rYNew), _distX, _elev]];
			}
		}
		else {
// player globalChat "case2";
		// case2 here. Since the highest position of trajectory is higher than target and the end of trajectory is farther as well, we allow to increase _speed in this case.
		// details on iterating is similar as cases above. But we'll iterate the _speed.
			_elevNew = _elev; _elev1 = _elev;
			// use input _elev as fixed elevation. 30° for common case and 60° for big angle.
					_sped1 = _speed; _rX1 = [_speed * cos(_elev1), _speed * sin(_elev1), _y0, _height] call loadFile "Common\Art\RK4_UpandDown.sqf"; _error1 = _distX - _rX1;
					_speed = _sped1 + 50;
					_rXNew = [_speed * cos(_elevNew), _speed * sin(_elevNew), _y0, _height] call loadFile "Common\Art\RK4_UpandDown.sqf";
					_i = 0; _try = 6;
					while "_i < _try && abs(_distX - _rXNew) > 10" do {
						_sped0 = _sped1;	_error0 = _error1;
						_sped1 = _speed;	_error1 = _distX - _rXNew;
						_speed = _sped0 + (_sped1 - _sped0)/(_error1 - _error0)*(0 - _error0);
						_rXNew = [_speed * cos(_elevNew), _speed * sin(_elevNew), _y0, _height] call loadFile "Common\Art\RK4_UpandDown.sqf";
						_i = _i + 1;
					};
					// _speed has been computed.
		};
	};
};
[_break, _elev, _speed]