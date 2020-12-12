This is one of the very first step in making TZK External MOD. TZK mainly works on mission design but applys units of TZK mod as well. In external mods, units relying on TZK mod should be recovered to "vanilla" units of BIS.

##@TZK_4.0.5
+ "Vanilla" units should better inherit from BIS classes and add TZK design but not recover TZK into BIS. Mods modified BIN\CONFIG can make basic units using different models, but explictly define model as BIS attribute will invalid this.
	+ If assign different inherit relationship in external mod, those edited classes seems will apply BIS default attribute even though BIN\CONFIG is mod-modified.

##4.0.4.04
Hide T55/M60-120S in vanilla modes and recover BIS M60/T72 there.