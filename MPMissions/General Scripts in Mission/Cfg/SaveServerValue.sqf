// args: [key, value]
// returns: none

// save key-value to config file for player

_cfg = loadConfig "TzkServer.cfg";
_cfg addValue _this;
_cfg saveConfig "TzkServer.cfg";