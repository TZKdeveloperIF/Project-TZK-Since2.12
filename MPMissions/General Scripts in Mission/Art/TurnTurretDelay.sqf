// args: [vehicle, target]
// return: delay time (in seconds)

_vec = [getPos (_this select 1), getPos (_this select 0)] call funcVectorSub;
_angle = (_vec select 1) atan2 (_vec select 0);
_diff = (_angle - (90 - getDir (_this select 0)) + 360 * 2) % 360;
_diff = 180 - abs(_diff - 180);

// 90 degree per second
_diff / 90