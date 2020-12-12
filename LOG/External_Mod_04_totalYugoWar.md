Made after having designed external mod for mfcti.

totalYugoWar mod mission using its own equip, structure and units. The modification is very much. Thus the equipment and structure aren't well designed to "replace" array elements like mfcti or TZK_SE mod but directly call external re-definition script.
+ Structure
	+ "Replace" work for main factories up till to field hospital. After then the arrays are 'resize'-ed, fill with fuelStation/TZK_Mortar and other yugo structures.
		+ Besides, ammo crates and heliH is added in the end.
	+ Functional arrays are redefined later, using yugo structures' local type variables.
	+ Add markers for some yugo defence structures.
+ Units
	+ Apply yugo special designs.
	+ **Add directly redefine unitDefs matrix right after it's definition.**
		+ **Add redefine town units and cycles.**
	+ Adjust aisbuy. **Functional arrays remain unchanged.**
