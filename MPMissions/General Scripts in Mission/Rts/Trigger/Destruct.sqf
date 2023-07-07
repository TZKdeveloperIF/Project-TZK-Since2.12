// args: destructure strategy: string
// read other variables external

private [{_comms}, {_engineerVehs}];

_comms = []; {
	if (alive _x) then {_comms set [count _comms, getPos _x]};
} forEach (structMatrix select siPlayer select stComm);

_engineerVehs = []; {
	if (alive _x) then {_engineerVehs set [count _engineerVehs, getPos _x]};
} forEach (unitMatrix select siPlayer select (typesEngineeringVeh select siPlayer));
if (alive (mhq select siPlayer)) then {_engineerVehs set [count _engineerVehs, getPos(mhq select siPlayer)]};

_nearby = { // lanbda. "_this" is object
	private [{_found}, {_cache}]; _found = false; _cache = [_this, objNull];
	private [{_i}, {_c}];
	_i = 0, _c = count _comms; while {_i < _c && not _found} do {
		_cache set [1, _comms select _i];
		if ((_cache call funcDistH) < 200) then {_found = true};
		_i = _i + 1;
	};
	_i = 0, _c = count _engineerVehs; while {_i < _c && not _found} do {
		_cache set [1, _engineerVehs select _i];
		if ((_cache call funcDistH) < 150) then {_found = true};
		_i = _i + 1;
	};
	_found
};

_exec = { // lanbda. "_this" is idx
	private [{_object}, {_value}, {_salvage}];
	_object = _list select _this;
	if (alive _object) then {
		_value = lbValue [_idcList, _this];
		if (_object call _nearby) then {
			_salvage = (if (-1 == _value) then {costWorker} else {structDefs select _value select sdCost});
			[- 0.5 * _salvage] exec "\TZK_Scripts_4_0_4\Player\SendMoneySpent.sqs";
		};
		if (-1 == _value) then {
			deleteVehicle _object;
		} else {
			_object setDamage 1;
			if not (_value in structsShelter) then {[_object, false, true] exec "\TZK_Scripts_4_0_4\Player\SendDestruction.sqs"};
		};
	};
};

private [{_proceeded}]; _proceeded = false;

if (not _proceeded && "Selected" == _this) then {
	_proceeded = true;
	_idx call _exec;
};

if (not _proceeded && "Same Type" == _this) then {
	_proceeded = true;
	private [{_type}, {_i}, {_c}]; 
	_type = lbValue [_idcList, _idx]; _i = 0; _c = count _list;
	while {_i < _c} do {
		if (lbValue [_idcList, _i] == _type) then {_i call _exec};
		_i = _i + 1;
	};
};

if (not _proceeded && "All" == _this) then {
	_proceeded = true;
	private [{_i}, {_c}]; 
	_i = 0; _c = count _list;
	while {_i < _c} do {
		_i call _exec;
		_i = _i + 1;
	};
};