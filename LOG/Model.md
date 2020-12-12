


#Geometry LOD
It seems badly defined geometry lod can easily leads to game/server crash. But how it works and which models are badly defined still remain unknown.
#@TZK_4.0.5
After redefined components of M270, it once causes frequently game crash. Its model is modified later, but the problem isn't located.  
Crash often occur on destroyed M270 when just kill it or delete it. Get close to wreck and make collision can cause crash too.  
+ It seems UV mapping isn't related to this.
+ Maybe multiple-texture is related to this too.
	+ *The Texture script is invalid in "C" style of mission now. All vehicles is textured by its Init-EH.*
+ **Is server crash caused by models' Geometry LOD either? If located the problem it's necessary to redefine some models.**
