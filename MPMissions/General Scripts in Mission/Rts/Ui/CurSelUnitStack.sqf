// args: none
// return: reference of array about RTS selecting units

if (TzkRtsSelectEnum < 0 || TzkRtsSelectEnum >= count TzkSelUnitsCube) then {
	"Unexpected TzkRtsSelectEnum value!" call fDebugLog;
	[]
} else {
	TzkSelUnitsCube select TzkRtsSelectEnum
}