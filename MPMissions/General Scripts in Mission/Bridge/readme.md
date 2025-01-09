# Introduction
The model of OFP nogova bridge is O\Hous\most_stred30.p3d, and correspond vehicle classes are House57, KEGres_House57 and Bridge.  
In different islands bridges have different peformance but most of them using same model most_stred30. According to observation, the factor influence the bridge is the slope at bridgehead. On gentle slope, vehicles collapse with the bridge while contacting with the land.  
The size of most_stred30 is 50 x 13 x 33.55. The total height of whole model is 40.978, half value is 20.489

# TZK Bridge Design
Bridges as structure on server should be treated specially. On repaired its ASL position and 3d vector direction should be recovered. And on the first time building, it should be alive but not destroyed to skip repair step.