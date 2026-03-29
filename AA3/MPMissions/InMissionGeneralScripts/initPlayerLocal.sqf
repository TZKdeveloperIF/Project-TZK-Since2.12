// TZK CTI - Local player initialization
// Runs on each client (including hosted server's player) after init.sqf

if (isNull player) exitWith {};

diag_log "TZK CTI: initPlayerLocal.sqf starting";

// Briefing
call compile preprocessFileLineNumbers "briefing.sqf";

// 玩家出生在己方 MHQ 附近
// mission.sqm 的编辑器位置可能在海上；在 MHQ 就绪前先关伤害 + 黑屏等待
if (hasInterface) then {
	[] spawn {
		waitUntil {!isNull player};

		player allowDamage false;
		titleText ["Deploying to HQ...", "BLACK FADED", 0.5];

		waitUntil {!isNil "TZK_initComplete"};
		waitUntil {!isNil "mhq" && {count mhq > 1}};

		private _si = switch (side player) do {
			case west:  { si0 };
			case east:  { si1 };
			default     { -1 };
		};
		if (_si < 0) exitWith {
			player allowDamage true;
			titleText ["", "BLACK IN", 1];
		};

		waitUntil {!isNull (mhq select _si)};
		private _m = mhq select _si;
		private _dir = getDir _m;
		private _back = 12;
		private _p = (getPosATL _m) vectorAdd [
			-(_back * (sin _dir)),
			-(_back * (cos _dir)),
			0.5
		];
		player setPosATL _p;
		player allowDamage true;
		titleText ["", "BLACK IN", 1.5];
		diag_log format ["TZK CTI: Player deployed near MHQ si=%1 pos=%2", _si, _p];
	};
};

// Phase D: RTS icons (3D + map markers) and map click handler
if (hasInterface) then {
	[] spawn compile preprocessFileLineNumbers "Player\fn_rtsIcons.sqf";
	[] spawn compile preprocessFileLineNumbers "Player\fn_rtsMapClick.sqf";
};

diag_log "TZK CTI: initPlayerLocal.sqf complete";
