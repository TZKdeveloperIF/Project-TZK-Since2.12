stWall = _wall;
stBaseMg = _mg;

structMarker set [stAmmoCrate, "AmmoStructure_Marker_xj400"];
_scripts = structDefs select stAmmoCrate select sdScriptsPlayer;
_scripts set [count _scripts, localize {TZK_MARKER_STRUCT}];

structDefs select _tankt set [sdLimit, 500];