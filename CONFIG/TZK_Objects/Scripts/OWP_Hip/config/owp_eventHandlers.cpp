/*
#########################################
# Config Mi-8 by DPS, Voyager           #
# http:\\ofp.ussr-online.net\naseorujie #
#########################################
*/
class OWP_EventHandlers
{
	engine="if (_this select 1) then {_this select 0 exec ""\OWP_Mi8\Scripts\owp_onengine.sqs""} else {_this select 0 exec ""\OWP_Mi8\Scripts\owp_onengineoff.sqs""}";
	init = "_this exec ""\OWP_MI8\scripts\owp_initialization.sqs"";_this call localize {fn_reg_chopper}";
	IncomingMissile="_this exec ""\OWP_MI8\scripts\owp_incoming.sqs""";
	fired="_this exec ""\OWP_MI8\scripts\owp_effects.sqs""";
};
