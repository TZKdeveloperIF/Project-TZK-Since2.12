/*
#########################################
# Config Mi-8 by DPS, Voyager           #
# http:\\ofp.ussr-online.net\naseorujie #
#########################################
*/
class CfgModels
{
	class Default {};
	class weapon:default{};
        class Vehicle: Default {};
	class Helicopter{};
	class Mi17_bis: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={};
	};
	class Mi8_bis: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={};
	};
	class Mi8T_c: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap};
	};
	class Mi8MT_c: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,deslight};
	};
	class Mi8T_d: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8T_w: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8TV_g: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8TV_d: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8TV_m: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,zasleh2,zasleh3,zasleh4,zasleh5,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8TV_w: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,zasleh2,zasleh3,zasleh4,zasleh5,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8MT_g: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8MT_m: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8MTV_g: Helicopter 
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,zasleh2,zasleh3,zasleh4,zasleh5,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8MTV_d: Helicopter 
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8MTV_m: Helicopter 
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class Mi8MTV_w: Helicopter 
	{
		sectionsInherit="Helicopter";
		sections[]={cdln1,cdrn1,cdln2,cdrn2,zasleh2,zasleh3,zasleh4,zasleh5,ss_cms,ss_engine1,ss_engine2,ss_fuel,ss_gun,ss_transm,ss_weap,num_1,num_2,deslight};
	};
	class OWP_tracer1:weapon{};
	class OWP_tracer2:weapon{};
	class OWP_fab250:weapon{};
	class OWP_fab500:weapon{};
	class OWP_C5:weapon{};
	class 762:weapon{};
	class 23:weapon{};
};
