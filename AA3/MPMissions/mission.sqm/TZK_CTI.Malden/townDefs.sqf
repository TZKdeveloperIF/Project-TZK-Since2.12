// TZK CTI - Malden Town Definitions (map-specific)
// Creates flag objects and registers them into the global towns[] array
// Called from init.sqf after fn_initMissionEnv.sqf
//
// 必须在服务器创建：多人下各客户端各自 createVehicle 会导致不同步或看不到对方世界的旗帜。
if (!isServer) exitWith {};

private ["_flag", "_pos"];

// 9 towns spread across Malden island
// Format: towns pushBack [flagObject, "name", incomeValue, initialSide]
// initialSide = siRes (neutral)

_pos = [7264, 7931, 0];
_flag = "Flag_White_F" createVehicle _pos;
_flag setPosATL _pos;
towns pushBack [_flag, "La Trinite", 500, siRes];

_pos = [6013, 8627, 0];
_flag = "Flag_White_F" createVehicle _pos;
_flag setPosATL _pos;
towns pushBack [_flag, "Larche", 400, siRes];

_pos = [7036, 7108, 0];
_flag = "Flag_White_F" createVehicle _pos;
_flag setPosATL _pos;
towns pushBack [_flag, "Dourdan", 500, siRes];

_pos = [5537, 6983, 0];
_flag = "Flag_White_F" createVehicle _pos;
_flag setPosATL _pos;
towns pushBack [_flag, "Arudy", 400, siRes];

_pos = [7121, 6075, 0];
_flag = "Flag_White_F" createVehicle _pos;
_flag setPosATL _pos;
towns pushBack [_flag, "Houdan", 400, siRes];

_pos = [3731, 3258, 0];
_flag = "Flag_White_F" createVehicle _pos;
_flag setPosATL _pos;
towns pushBack [_flag, "La Riviere", 500, siRes];

_pos = [5836, 3530, 0];
_flag = "Flag_White_F" createVehicle _pos;
_flag setPosATL _pos;
towns pushBack [_flag, "Chapoi", 400, siRes];

_pos = [8193, 3117, 0];
_flag = "Flag_White_F" createVehicle _pos;
_flag setPosATL _pos;
towns pushBack [_flag, "Le Port", 500, siRes];

_pos = [4500, 5500, 0];
_flag = "Flag_White_F" createVehicle _pos;
_flag setPosATL _pos;
towns pushBack [_flag, "Sainte-Marie", 350, siRes];

// Set all flags to neutral texture
{
	(_x select tdFlag) setFlagTexture (flags select siRes);
} forEach towns;

diag_log format ["TZK CTI: %1 Malden towns created (server)", count towns];
