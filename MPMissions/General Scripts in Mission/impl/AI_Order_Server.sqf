comment "Fix error definition in aiSetting";
{
	_list = aiSetting select _x; _list resize (count (groupMatrix select _x));
}
forEach [si0, si1];