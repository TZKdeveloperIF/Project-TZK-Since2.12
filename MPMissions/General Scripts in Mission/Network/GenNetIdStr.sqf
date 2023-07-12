// args: object
// returns: string

// generate available "NetworkID" string
// if server hosts too long the NetworkID will return a too large number
// and auto-convert the number to string will lost info
// format the str manually

// The return value of "NetworkID" is an array while this function returns a string.
// The CONTENT of this string is the desired "NetworkID" return value

private [{_netId}];
_netId = NetworkID _this;
format [{["%1",%2]}, _netId select 0, (_netId select 1) call preprocessFile "Util\Num2Str.sqf"]