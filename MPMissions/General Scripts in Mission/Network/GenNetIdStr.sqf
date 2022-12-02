// args: object
// returns: string

// generate available "NetworkID" string
// if server hosts too long the NetworkID will return a too large number
// and auto-convert the number to string will lost info
// format the str manually
private [{_netId}, {_num1}, {_num2}];
_netId = NetworkID _this;
_num2 = (_netId select 1) % 100000; _num1 = ((_netId select 1) - _num2) / 100000;
format [{["%1",%2%3]}, _netId select 0, _num1, _num2]