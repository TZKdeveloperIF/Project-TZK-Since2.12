// args: [key, value]
// returns: none

// save key-value to config file for player

_cfg = loadConfig "TzkPlayer.cfg";
_cfg addValue _this;
_cfg saveConfig "TzkPlayer.cfg";