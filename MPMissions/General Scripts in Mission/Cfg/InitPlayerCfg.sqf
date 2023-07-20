// Initialize constants for player
// Values are saved in config file on disk but not memory

// It's not recommended to save constants relate to game design like equipment cost discount since player can easily edit them.

// For server it'll be ok if assume the server hoster is fair
// Or we can define constants in server config only when they're shared among both sides

// private 
_cfg = newConfig;

_cfg addValue ["LastOrder", -1]; 				// Player group order idx cache

_cfg addValue ["LastCustom", -1]; 				// Custom soldier template idx cache
_cfg addValue ["LastEquipTemplate", -1]; 		// Player equipment template idx cache

_cfg saveConfig "TzkPlayer.cfg";