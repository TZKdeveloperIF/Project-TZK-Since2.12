// args: none

// Install artillery module

// weapon and ammo
	call preprocessFile "Art\InitEquipments.sqf";

// Enemy structure cache. Client shouldn't obtain enemy structure info too frequently
private [{_initEnemyStructCacheObject}];
_initEnemyStructCacheObject = {
	// args: object
	private [{_object}]; _object = _this;
	// The object contains states, data and methods.
	// 0 - next check time
	_object set [0, -1];
	// 1 - structure data (lazy load)
	_object set [1, []];
};

TzkArtEnemyStructCaches = []; {
	TzkArtEnemyStructCaches set [_x, []];
	(TzkArtEnemyStructCaches select _x) call _initEnemyStructCacheObject;
} forEach [si0, si1];