# Script Command
This is a script command that checks whether a unit is "ready" from his group order.
# Conflict between script command (e.g. doMove or doStop) with player manual command
If player order his AI move somewhere, the script command like doMove or doMove won't work normally. In this case, scripters have to use "unitReady" to check AI unit's status before continuing the script, otherwise the script may work in unexpected way.
## Case
TZK_4.0.6 supports building bridge and uses script command to force AI units across the bridge. However if ordered across bridge when unit is ordered "move somewhere" by player it'll keep trying on moving to that destination. When using setVelocity to give velocity to vehicle it'll change its direction to head on destination and on acrossed the bridge it'll still moving to that destination.