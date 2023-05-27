/*
#########################################
# Config Mi-8 by DPS, Voyager           #
# http:\\ofp.ussr-online.net\naseorujie #
#########################################
*/
class CfgTextureToMaterial
{
	class OWP_Mi8body
	{
		textures[]=
		{
			"owp_mi8\t\body.pac",
			"owp_mi8\t\bodymod.pac",
			"owp_mi8\t\bodydes.pac",
			"owp_mi8\t\bodywod.pac",
			"owp_mi8\t\bodyciv.pac",
			"owp_mi8\t\bodyun.pac",
			"owp_mi8\t\dop1.pac",
			"owp_mi8\t\dop2.pac",
			"owp_mi8\t\dop3.pac",
			"owp_mi8\t\dop4.pac",
			"owp_mi8\t\dop5.pac",
			"owp_mi8\t\ctrl_l.paa",
			"owp_mi8\t\ctrl_r.paa",
			"owp_mi8\t\ctrl_s.pac",
		};
		material=#OWPMi8body;
	};
	class OWP_Mi8body2
	{
		textures[]=
		{
			"owp_mi8\t\shared.pac",
			"owp_mi8\t\special.pac",
			"owp_mi8\t\specialdes.pac",
			"owp_mi8\t\specialwod.pac",
			"owp_mi8\t\specialciv.pac",
			"owp_mi8\t\decals.paa",
			"owp_mi8\t\decalsdes.paa",
			"owp_mi8\t\decalsmod.paa",
			"owp_mi8\t\decalswod.paa",
			"owp_mi8\t\decalsciv.paa",
		};
		material=#OWPMi8body2;
	};
	class OWP_Mi8Alumin
	{
		textures[]=
		{
			"owp_mi8\weap\ub.pac",
			"owp_mi8\weap\upk.pac",
		};
		material=#OWPMi8Alumin;
	};
	class OWP_Mi8Gunmetal
	{
		textures[]=
		{
			"owp_mi8\weap\pkt.pac",
			"owp_mi8\weap\pkt_abox.pac",
			"owp_mi8\weap\762x53.pac",
			"owp_mi8\weap\fab500.paa",
		};
		material=#OWPMi8gunmetal;
	};
};

class CfgMaterials
{
	class OWPMi8body
	{
		ambient[] = {0.9,0.9,0.9,1};
		diffuse[] = {0.7,0.7,0.7,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.1,0.1,0.2,0};
		specularPower = 80;
		emmisive[] = {0,0,0,0};
	};
	class OWPMi8body2
	{
		ambient[] = {0.9,0.9,0.9,1};
		diffuse[] = {0.7,0.7,0.7,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.2,0.2,0.4,0};
		specularPower = 50;
		emmisive[] = {0,0,0,0};
	};
	class OWPMi8Alumin
	{
		ambient[] = {0.9,0.9,0.9,1};
		diffuse[] = {0.7,0.7,0.7,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.5,0.5,1,0};
		specularPower = 20;
		emmisive[] = {0,0,0,0};
	};
	class OWPMi8gunmetal
	{
		ambient[] = {0.9,0.9,0.9,1};
		diffuse[] = {0.7,0.7,0.7,1};
		forcedDiffuse[] = {0,0,0,0};
		specular[] = {0.35,0.35,0.4,0};
		specularPower = 60;
		emmisive[] = {0,0,0,0};
	};
};
