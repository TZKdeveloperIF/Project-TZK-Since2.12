The MLRS units is introduced in TZK_4.0.0 as vehicles in Artillery Module.


##4.0.5.00
+ MLRS still cause lags when launching rockets. Maybe due to "publicExec" working when shooting. Since MLRS vehicles won't be very much in TZK, it's possible to use a global array to restore vehicles. Another global mutex variable and broadcasting pv-variable is required.
	+ The "fired"-EH is global so we don't need to worry about whether it cause lags if only use it as a switch. However applying "ammo" command on remote vehicle often obtain inaccurate return value. If use a local array to restore vehicles with its ammunition, all clients can count the number of launched rocket using fired-EH easily.
	+ When rearm completed, the pv-variable is applied to broadcast other clients that a vehicle is rearmed. Remote clients received this message will reset the ammunition of the vehicle and set texture to rocket launcher.
	+ General scripts using "~" and "@" is applied successfully in this design.
+ Entrance of Event Handlers of MLRS is placed in misison now. It'll thus be convenient if wish to modify them.
