This system is adjusted by IF on the beginning of developing TZK. Main problem of old design in crCTI due to "tank" simulation vehicles' abnormal performance on land. Move it onto sea then move back to land will fix it.

##4.0.4.07
+ Add structure attachable.
	+ Use "hasDriver" parameter to judge whether tugged vehicle is structure.
		+ No-driver "tank" simulation vehicle will perform normally as car or ship.
		+ However some times mission maker may assign a vehicle as structure (has driver and 0 fuel capability). This case can't be handled by scripts of current version. And the name and image info are restored in "structDefs" or "unitDefs", they have different structure and will display error if mission maker design such obscure.
	+ Structure won't be put onto sea in the main loop. It's velocity won't be assigned as well (no use for non driver vehicle).
	+ On detaching, structure will be placed on height 0 position immediately.
	+ Structure's velocity must be assign as [0,0,0] on detaching, otherwise bug will occur.