private ["_type", "_i", "_list", "_j", "_found"];
_type = typeOf _this; 
_i = unitTypeArray find _type;

if (_i != -1) then {
	_list = unitTypeData select _i;
	if (count _list == 1) then {_i = _list select 0} else {
		_j = 0; _found = false;
		while "_j < count _list && !_found" do {
			_i = _list select _j;
			if (_this in (unitMatrix select si0 select _i) || _this in (unitMatrix select si1 select _i) || _this in (unitMatrix select siRes select _i) || _this in (unitMatrix select siCiv select _i)) then {_found = true} else {_j = _j + 1}
		};
		if !_found then {_i = -1}
	}
};
_i