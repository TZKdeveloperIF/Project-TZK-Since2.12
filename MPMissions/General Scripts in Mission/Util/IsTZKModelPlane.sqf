_isTzkPlane = false;
if (
	"A10_xj400" countType [_this] > 0 || 
	"Su25_xj400" countType [_this] > 0 || 
	"A10_Vanilla_xj405" countType [_this] > 0 || 
	"Su25_Vanilla_xj405" countType [_this] > 0
) then {
	_isTzkPlane = true;
};
_isTzkPlane