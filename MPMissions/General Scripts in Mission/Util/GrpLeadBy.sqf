// args: [si, gi leaded, gi leader]
// return: bool
private [{_si}, {_giSubordinate}, {_giLeader}, {_val}, {_superior}, {_ret}];
_si = _this select 0;
_giSubordinate = _this select 1;
_giLeader = _this select 2;

_val = aiSetting select _si select _giSubordinate select aisSuperior;
_superior = (if (0 == _val) then {"Commander"} else {callsigns select _val - 1});
_ret = _superior == groupNameMatrix select _si select _giLeader;

if (_giLeader == giCO select _si) then {_ret = _ret || _superior == "Commander"};
_ret