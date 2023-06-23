#define SHADOWLVL 0.5

class CfgMaterials {
	// *** DEFAULT DEFINITIONS OVERRIDE ***
	class Water {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {0.13,0.15,0.065,1.0};
		forcedDiffuse[] = {0.0264,0.03,0.013,0};
		specular[] = {0.5,0.5,0.5,0};
		specularPower = 4;
		emmisive[] = {0,0,0,0};
	};
	class Terrain {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.1,0.1,0.1,0};
		specularPower = 3;
		emmisive[] = {0,0,0,0};
	};
	class SpecularGlass {
		ambient[] = {0.9,0.9,0.9,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0.5,0.5,0.5,1};
		specular[] = {1,1,1,1};
		specularPower = 900;
		emmisive[] = {0,0,0,0};
	};
	class Metal {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.3,0.3,0.3,1};
		specularPower = 300;
		emmisive[] = {0,0,0,0};
	};
	class RifleMetal {
		ambient[] = {SHADOWLVL,SHADOWLVL,SHADOWLVL,1};
		diffuse[] = {1,1,1,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.3,0.3,0.3,1};
		specularPower = 900;
		emmisive[] = {0,0,0,0};
	};
	
};