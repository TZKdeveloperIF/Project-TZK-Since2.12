// args: none
// TZK setting dialog is designed in TZK 2 which still works on 1.96. By now 2.01 we can use VBS-like commands 
// to save/load config but not origin OFP saveStatus/loadStatus.
// Old design store index-value messages. New design store key-value info

private [{_val}]; _val = lbCurSel _idcRtsCmd;
// ASSERT(_val == 0 || _val == 1)
if (_val >= 0 && _val != ([0, 1] select bool_TZK_Rts_Cmd_Mode)) then {
	_val = not bool_TZK_Rts_Cmd_Mode;
	bool_TZK_Rts_Cmd_Mode = _val;
	["RtsCmdMode", format ["%1", _val]] call preprocessFile "Cfg\SavePlayerValue.sqf";
};