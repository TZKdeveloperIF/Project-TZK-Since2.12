Combine this script command with CfgVehicles class member attribute "hiddenSelection[]", one can obtain models with texture-change-able-in-game faces. TZK applied this design to make some models equipping different style textures and make them be initialized when playing on different style islands.

The relative relationship between texture file size (in pixel) and face (of model) scale will affect the resolution ratio of "setObjectTexture" textures. It's necessary to prepare some faces in the very first resolution LOD of the model and texture it with textures whose size is large or some faces it is textured has big scale. These faces' scale shouldn't be too small, and they shouldn't be contained in any selections contained in "hiddenSelection[]". Such faces will help OFP preload those textures, otherwise those textures may appear low-quality.

This command, however, will invalid the attributes "wounds[]" of "man" simulation or "dammageHalf[]" and "dammageFull[]" of "car"/"helicopter" simulation vehicles. Injury and glass broken thus won't appear if the selection of some textures' face is contained in "hiddenSelection[]". Luckily the face "user" attribute of tanks is still valid to "tank" simulation.

# Model bug fixing
It's easy to remain some parts with error selection name or texture path. I record them here to indicate known errors and the version they're fixed.
## TZK_4.0.6
+ M60 tank body.