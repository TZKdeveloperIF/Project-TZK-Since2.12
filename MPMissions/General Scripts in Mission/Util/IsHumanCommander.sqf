// args: si
// return: bool

if (count (groupMatrix select _this) == 0) then {
	false
} else {
	not ((groupCommander select _this) in (groupAiMatrix select _this))
}