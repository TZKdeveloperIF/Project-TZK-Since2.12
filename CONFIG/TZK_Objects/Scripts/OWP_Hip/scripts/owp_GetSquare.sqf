private ["_pos","_arraylarge","_arraysmall","_i","_result"];
_pos = _this select 0;
_arraylarge=["A","B","C","D","E","F","G","H","I","J"];
_arraysmall=["a","b","c","d","e","f","g","h","i","j"];
if (((_pos select 0) >= 0) and ((_pos select 0) <= 12800) and ((_pos select 1) >= 0) and ((_pos select 1) <= 12800)) then
{
	_i=((_pos select 0)-(_pos select 0) mod 1280)/1280;
	_result=_arraylarge select _i;
	_i=(((_pos select 0)-_i*1280)-((_pos select 0)-_i*1280) mod 128)/128;
	_result=_result+(_arraysmall select _i);
	_i=99-((_pos select 1)-(_pos select 1) mod 128)/128;
	if (_i<10) then {_result=_result+format["0%1",_i]} else {_result=_result+format["%1",_i]};
}
else
{
	_result=format["[%1,%2]",_pos select 0,_pos select 1];
};
_result
