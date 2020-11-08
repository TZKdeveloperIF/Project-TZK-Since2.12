_i = 0; _c = count unitDefs;
while "_i < _c" do
{
	_entry = unitDefs select _i;
	if ((_entry select udFactoryType) % (2^(stHeavy+1)) >= 2^stHeavy) Then {if ((_entry select udCost) > 1800) then {_entry set [udFactoryType, -1]}};
	if ((_entry select udFactoryType) % (2^(stAir+1)) >= 2^stAir) Then {if ((_entry select udCost) > 5000) then {_entry set [udFactoryType, -1]}};
	if ((_entry select udName) == "T80 Res") Then {_entry set [udCost, 800]; _entry set [udModel, "BMPRes"]};
	_i = _i + 1;
};