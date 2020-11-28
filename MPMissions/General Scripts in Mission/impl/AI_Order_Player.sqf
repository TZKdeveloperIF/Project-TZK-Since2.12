comment "Adjust path of player orders1/orders2 scripts.";
{_script = _x select 3, _x set [3, "\TZK_Scripts_4_0_4\Player\" + _script] } forEach aiOrders1;

{_script = _x select 3, _x set [3, "\TZK_Scripts_4_0_4\Player\" + _script] } forEach aiOrders2;

_type = 0; _c = count aiOrders2;
while "_type < _c" do { if (aiOrders2 select _type select 0 == "Shoot Target") Then { aiOrders2 select _type set [3, "Player\Order\ShootTarget.sqs"] }; _type = _type + 1 };
