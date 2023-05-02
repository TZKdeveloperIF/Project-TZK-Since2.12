// args: none
satcamUnit = _unitTracked;
satcamAlt = _alt;
satcamPos = _posTarget;
closeDialog 0;
deleteVehicle _tracker;
_cam cameraEffect["terminate","back"];
camDestroy _cam;
{deleteVehicle _x} forEach _gapGeneratorBlocks;